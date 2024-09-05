#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <semaphore.h>

#define BUFFER_SIZE 10

int buffer[BUFFER_SIZE];
int in = 0, out = 0;

sem_t mutex, empty, full;

// Introduce a global variable to control the number of iterations
int numIterations = 10;  // Set your desired number of iterations

void *producer(void *arg) {
    int item;
    for (int i = 0; i < numIterations; i++) {
        item = rand() % 100; // Generate a random item
        sem_wait(&empty);    // Wait for an empty slot in the buffer
        sem_wait(&mutex);    // Acquire the mutex lock
        buffer[in] = item;    // Insert the item into the buffer
        in = (in + 1) % BUFFER_SIZE; // Increment the in pointer
        printf("Producer produced item %d\n", item);
        sem_post(&mutex);    // Release the mutex lock
        sem_post(&full);     // Signal that the buffer is no longer empty
    }
    pthread_exit(NULL);
}

void *consumer(void *arg) {
    int item;
    for (int i = 0; i < numIterations; i++) {
        sem_wait(&full);     // Wait for a full slot in the buffer
        sem_wait(&mutex);    // Acquire the mutex lock
        item = buffer[out];  // Remove an item from the buffer
        out = (out + 1) % BUFFER_SIZE; // Increment the out pointer
        printf("Consumer consumed item %d\n", item);
        sem_post(&mutex);    // Release the mutex lock
        sem_post(&empty);    // Signal that the buffer is no longer full
    }
    pthread_exit(NULL);
}

int main() {
    pthread_t prod, cons;

    // Initialize the semaphores
    sem_init(&mutex, 0, 1);
    sem_init(&empty, 0, BUFFER_SIZE);
    sem_init(&full, 0, 0);

    // Create the producer and consumer threads
    pthread_create(&prod, NULL, producer, NULL);
    pthread_create(&cons, NULL, consumer, NULL);

    // Wait for the threads to finish
    pthread_join(prod, NULL);
    pthread_join(cons, NULL);

    // Destroy the semaphores
    sem_destroy(&mutex);
    sem_destroy(&empty);
    sem_destroy(&full);

    return 0;
}
