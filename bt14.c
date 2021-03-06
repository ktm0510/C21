#include <stdio.h>
int top = -1;
int IsFull (int capacity)
{
    if (top >= capacity - 1)
        return 0;
    else return 1;
}
int IsEmpty ()
{
    if (top == -1)
        return 0;
    else return 1;
}
void Push (int stack[], int value, int capacity)
{
    if (IsFull(capacity) == 0)
        printf("\nStack is full. Overflow condition!");
    else
    {
        ++ top;
        stack[top] = value;
    }
}
void Pop ()
{
    if (IsEmpty == 0)
        printf("\nStack is empty. Underflow condition!");
    else
        -- top;
}
int Top (int stack[])
{
    return stack[top];
}
int Size ()
{
    return top + 1;
}
int main ()
{
    int capacity, top = -1, *stack;
    printf("Nhap capacity: \n");
    scanf("%d", &capacity);
    stack = (int *)malloc (capacity * sizeof (int));
        Push(stack, 5, capacity);

    printf("\nCurrent size of stack is %d", Size());

    Push(stack, 10, capacity);
    Push(stack, 24, capacity);

    printf("\nCurrent size of stack is %d", Size());

    // As the stack is full, further pushing will show an overflow condition.
    Push(stack, 12, capacity);

    //Accessing the top element
    printf("\nThe current top element in stack is %d", Top(stack));

    //Removing all the elements from the stack
    for(int i = 0 ; i < 3;i++)
        Pop();
    printf("\nCurrent size of stack is %d", Size());

    //As the stack is empty , further popping will show an underflow condition.
    Pop();

}

