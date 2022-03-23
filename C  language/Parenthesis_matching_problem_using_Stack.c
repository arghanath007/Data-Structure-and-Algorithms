// PARENTHESIS MATCHING PROBLEM USING STACK(APPLICATION OF STACK)
#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int total_size;
    int top;
    char *arr;
};

int isFull(struct stack *ptr1)
{
    if (ptr1->top == ptr1->total_size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isEmpty(struct stack *ptr2)
{
    if (ptr2->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr3, char ch)
{
    if (isFull(ptr3))
    {
        printf("Can not be pushed as Stack is Overflow\n");
    }
    else
    {
        ptr3->top++;
        ptr3->arr[ptr3->top] = ch;
    }
}

void pop(struct stack *ptr4)
{
    char temp = ptr4->arr[ptr4->top];
    ptr4->top--;
    printf("The popped element is:%c\n", temp);
}

int ParenthesisMatching(char *exp)
{
    // Making the Stack dynamically
    struct stack *d;
    d->total_size = 50;
    d->top = -1;
    d->arr = (char *)malloc(d->total_size * (sizeof(char)));

    int i;
    for (i = 0; i != '\0'; i++)
    {
        if (exp[i] == '(')
        {
            push(d, '(');
        }
        else if (exp[i] == ')')
        {
            if (isEmpty(d))
            {
                return 0;
                break;
            }
            else
            {
                pop(d);
            }
        }
        else
        {
            continue;
        }
    }

    if (exp[i] == '\0')
    {
        if (isEmpty(d))
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

int main()
{

    char *exp = "7-(8(3*9)+11+12))-8)";
    if (ParenthesisMatching(exp))
    {
        printf("The parenthesis is matching\n");
    }
    else
    {
        printf("The parenthesis is not matching\n");
    }

    return 0;
}
