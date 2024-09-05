#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

typedef struct {
    int top;
    char arr[MAX];
} Stack;

void create(Stack *s) {
    s->top = -1;
}

int isEmpty(Stack *s) {
    return s->top == -1;
}

int isFull(Stack *s) {
    return s->top == MAX - 1;
}

void push(Stack *s, char c) {
    if (isFull(s)) 
        printf("Stack overflow\n");
    else 
        s->arr[++s->top] = c;
}

char pop(Stack *s) {
    if (isEmpty(s)) {
        printf("Stack underflow\n");
        return '\0'; 
    }
    return s->arr[s->top--];
}

int isPalindrome(char *str) {
    Stack s;
    create(&s);

    char cleaned_str[MAX];
    int j = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalnum(str[i])) {
            cleaned_str[j++] = str[i]; 
        }
    }
    cleaned_str[j] = '\0'; 

    for (int i = 0; cleaned_str[i] != '\0'; i++) {
        push(&s, cleaned_str[i]);
    }

    for (int i = 0; cleaned_str[i] != '\0'; i++) {
        if (cleaned_str[i] != pop(&s)) {
            return 0; 
        }
    }

    return 1; 
}

int main() {
    char str[MAX];

    printf("Enter a string: ");
    fgets(str, MAX, stdin);

    str[strcspn(str, "\n")] = '\0';

    if (isPalindrome(str)) {
        printf("Palindrome.\n");
    } else {
        printf("Not a palindrome.\n");
    }

    return 0;
}
