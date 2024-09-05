#include <stdio.h>
#include <stdlib.h>

void fcfs(int n, int *request, int head) {
    int seek_time = abs(head - request[0]);
    for (int i = 0; i < n - 1; i++) {
        int diff = abs(request[i + 1] - request[i]);
        seek_time += diff;
    }
    printf("FCFS Total seek time: %d\n", seek_time);
}

void scan(int n, int *request, int head) {
    int seek_time = 0;
    int max = request[n - 1];
    int min = request[0];

    for (int i = 0; i < n; i++) {
        if (request[i] > head) {
            max = request[i];
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        if (request[i] < head) {
            min = request[i];
            break;
        }
    }

    seek_time = abs(head - min) + abs(max - min);

    for (int i = 0; i < n - 1; i++) {
        int diff = abs(request[i + 1] - request[i]);
        seek_time += diff;
    }

    printf("SCAN Total seek time: %d\n", seek_time);
}

void cscan(int n, int *request, int head) {
    int seek_time = 0;
    int max = request[n - 1];
    int min = request[0];

    for (int i = 0; i < n; i++) {
        if (request[i] > head) {
            max = request[i];
            break;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        if (request[i] < head) {
            min = request[i];
            break;
        }
    }

    seek_time = abs(head - min) + abs(max - min) + abs(max - request[0]) + abs(request[n - 1] - request[0]);

    for (int i = 0; i < n - 1; i++) {
        int diff = abs(request[i + 1] - request[i]);
        seek_time += diff;
    }

    printf("C-SCAN Total seek time: %d\n", seek_time);
}

int main() {
    int i, n, head;

    printf("Enter the number of disk requests: ");
    scanf("%d", &n);

    int request[n];
    
    printf("Enter the requests: ");
    for (i = 0; i < n; i++)
        scanf("%d", &request[i]);

    printf("Enter the initial head position: ");
    scanf("%d", &head);

    fcfs(n, request, head);
    scan(n, request, head);
    cscan(n, request, head);

    return 0;
}