#include <stdio.h>
int arr[5];
int top = -1;
int size = 5;

int isEmpty()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull()
{
    if (top + 1 >= size)
        return 1;
    else
        return 0;
}

void push(int data)
{
    if (!isFull())
    {
        top++;
        arr[top] = data;
        printf("Element %d has pushed.\n", data);
    }
    else
    {
        printf("Stack Overflow!!\n");
    }
}

void pop()
{
    if (isEmpty())
    {
        printf("Stack Underflow!!\n");
    }
    else
    {
        printf("Element %d has popped.\n", arr[top]);
        arr[top] = 0;
        top--;
    }
}

void showStack()
{
    int i;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int returnPeek()
{
    return arr[top];
}

int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    push(60);
    showStack();
    // printf("%d", returnPeek());
    pop();
    pop();
    pop();
    pop();
    pop();
    pop();
    showStack();
    return 0;
}
