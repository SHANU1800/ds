#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int size;
    int top;
    char *arr;
} stack;



int isFull(stack *s) {
    return s->top == s->size - 1;
}

void push(stack *s, char x)
{
    if (isFull(s)) {
        printf("Stack overflow\n");
    }
    else
    {
        s->top++;
        s->arr[s->top] = x;
    }
}

void create(stack *s) {
    printf("Enter size: ");
    scanf("%d", &s->size);
    s->top = -1;
    s->arr = (char *)malloc(s->size * sizeof(char));

    printf("Enter %d characters:\n", s->size);
    for (int i = 0; i < s->size; i++) {
        char x;
        scanf(" %c", &x);
        push(s, x);
    }
}

void display(stack *s)
{
    printf("Stack items:\n");
    for (int i = s->top; i >= 0; i--)
        printf("%c\t", s->arr[i]);
    printf("\n");
}


int isEmpty(stack *s) {
    return s->top == -1;
}

char pop(stack *s) {
    char x ='0';
    if (isEmpty(s))
         {
           printf("Stack underflow\n");
         }
    else {
            x = s->arr[s->top--];
    
    }
    return x;
}





int main() {

  char value;
    stack *s;
    s = (stack*)malloc(sizeof(stack));
    create(s);
      printf("Enter command:\n 1.POP\n 2.PUSH\n 3.DISPLAY\n4.EXIT\n");
 while(1)
    {
              int z;
              scanf("%d",&z);
              switch(z)
              {
              case 1:
                printf("POPPED VALUE IS:%c\n",pop(s));
                break;
              case 2:
                printf("Enter character to push\n");
                scanf(" %c",&value);
                push(s,value);
                break;
              case 3:
                display(s);
                break;
                case 4:
                exit(0);
              }


    }
return 0;
  
}
