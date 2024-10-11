#include <stdio.h>
#include <string.h>

#define MAX_TASKS 100
#define TASK_LENGTH 256

// Function prototypes
void addTask(char tasks[][TASK_LENGTH], int *taskCount);
void displayTasks(char tasks[][TASK_LENGTH], int taskCount);

int main() {
    char tasks[MAX_TASKS][TASK_LENGTH];
    int taskCount = 0;
    int choice;

    do {
        printf("\nTo-Do List Menu:\n");
        printf("1. Add Task\n");
        printf("2. Display Tasks\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume the newline character

        switch (choice) {
            case 1:
                addTask(tasks, &taskCount);
                break;
            case 2:
                displayTasks(tasks, taskCount);
                break;
            case 3:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 3);

    return 0;
}

void addTask(char tasks[][TASK_LENGTH], int *taskCount) {
    if (*taskCount < MAX_TASKS) {
        printf("Enter the task: ");
        fgets(tasks[*taskCount], TASK_LENGTH, stdin);
        // Remove the newline character from the task
        tasks[*taskCount][strcspn(tasks[*taskCount], "\n")] = 0;
        (*taskCount)++;
    } else {
        printf("Task list is full. Cannot add more tasks.\n");
    }
}

void displayTasks(char tasks[][TASK_LENGTH], int taskCount) {
    if (taskCount == 0) {
        printf("No tasks in the list.\n");
    } else {
        printf("\nTo-Do List:\n");
        for (int i = 0; i < taskCount; i++) {
            printf("%d. %s\n", i + 1, tasks[i]);
        }
    }
}
