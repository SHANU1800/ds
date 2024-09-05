#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int *arr;      // Array to store stack elements
    int top1;      // Top index for stack 1
    int top2;      // Top index for stack 2
    int size;  // Total size of the stack
} Stack;

int isOverflow(Stack *s) {
    return s->top2 == s->top1 + 1;
}

void push1(Stack *s, int value) {
    if (isOverflow(s)) {
        printf("Stack Overflow\n");
        return;
    }
    s->arr[++(s->top1)] = value;
}

int pop1(Stack *s) {
    if (s->top1 == -1) {
        printf("Stack Underflow\n");
        return -1;
    }
    return s->arr[(s->top1)--];
}

void push2(Stack *s, int value) {
    if (isOverflow(s)) {
        printf("Stack Overflow\n");
        return;
    }
    s->arr[--(s->top2)] = value;
}

int pop2(Stack *s) {
    if (s->top2 == s->size) {
        printf("Error: Stack Underflow\n");
        return -1;
    }
    return s->arr[(s->top2)++];
}

void initializeStack(Stack *s, int size) {
    s->arr = (int *)malloc(size * sizeof(int));
    if (!s->arr) {
        printf("Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    s->top1 = -1;
    s->top2 = size;
    s->size = size;
}

void freeStack(Stack *s) {
    free(s->arr);
}

int main() {
    Stack s;
    int size, choice, value;

    printf("Enter stack size: ");
    scanf("%d", &size);
    initializeStack(&s, size);

    do {
        printf("\n1. Push1 2. Push2 3. Pop1 4. Pop2 0. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push onto Stack 1: ");
                scanf("%d", &value);
                push1(&s, value);
                break;
            case 2:
                printf("Enter value to push onto Stack 2: ");
                scanf("%d", &value);
                push2(&s, value);
                break;
            case 3:
                value = pop1(&s);
                if (value != -1) printf("Popped value from Stack 1: %d\n", value);
                break;
            case 4:
                value = pop2(&s);
                if (value != -1) printf("Popped value from Stack 2: %d\n", value);
                break;
            case 0:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice\n");
                break;
        }
    } while (choice != 0);

    freeStack(&s);
    return 0;
}
