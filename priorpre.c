#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int n;
    printf("Enter Number of Processes: ");
    scanf("%d", &n);

    int burst[n], priority[n], index[n];
    for (int i = 0; i < n; i++) {
        printf("Enter Burst Time and Priority Value for Process %d: ", i + 1);
        scanf("%d %d", &burst[i], &priority[i]);
        index[i] = i + 1;
    }

    for (int i = 0; i < n; i++) {
        int temp = priority[i], m = i;

        for (int j = i; j < n; j++) {
            if (priority[j] > temp) {
                temp = priority[j];
                m = j;
            }
        }

        swap(&priority[i], &priority[m]);
        swap(&burst[i], &burst[m]);
        swap(&index[i], &index[m]);
    }

    int t = 0;

    printf("Order of process Execution is\n");
    for (int i = 0; i < n; i++) {
        printf("P%d is executed from %d to %d\n", index[i], t, t + burst[i]);
        t += burst[i];
    }

    printf("\n");
    printf("Process Id\tBurst Time\tWait Time\n");
    int wait_time[n];
    wait_time[0] = 0;
    
    for (int i = 1; i < n; i++) {
        wait_time[i] = burst[i - 1] + wait_time[i - 1];
    }

    float avg_wait_time = 0;
    for (int i = 0; i < n; i++) {
        printf("P%d\t\t%d\t\t%d\n", index[i], burst[i], wait_time[i]);
        avg_wait_time += wait_time[i];
    }
    
    avg_wait_time /= n;
    
    printf("Average waiting time is %f\n", avg_wait_time);
    
    int total_turn_around = 0;
    
    for (int i = 0; i < n; i++) {
        total_turn_around += burst[i];
    }
    
    float avg_turn_around = (float) total_turn_around / n;
    
    printf("Average TurnAround Time is %f", avg_turn_around);

    return 0;
}

