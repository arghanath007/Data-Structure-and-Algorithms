#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack
{
    int total_size;
    int top;
    char *arr;
};
// For checking a Stack full or not
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
// For checking a Stack empty or not
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
// For pushing elements to the Stack
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
// For popping elements from the Stack
char pop(struct stack *ptr4)
{
    if (isEmpty(ptr4))
    {
        printf("Stack Underflow and can not pop value from the Stack\n");
        return -1;
    }
    else
    {
        char temp = ptr4->arr[ptr4->top];
        ptr4->top--;
        return temp;
    }
}
// For checking the top-most element of the Stack
char stackTop(struct stack *ptr5)
{
    return ptr5->arr[ptr5->top];
}
//Making a function precedence for getting the precedence of any operator
int precedence(char dip)
{
    if (dip == '/' || dip == '*')
    {
        return 4;
    }
    else if (dip == '+' || dip == '-')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}
// Function for checking a character is an operator or not
int isOperator(char pol)
{
    if (pol == '/' || pol == '*' || pol == '+' || pol == '-')
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
// Making a function for converting an infix expression to a postfix expression
char *infixtopostfix(char *infix)
{
    // Making the Stack dynamically in the heap memory
    struct stack *d = (struct stack *)malloc(sizeof(struct stack));
    d->total_size = 50;
    d->top = -1;
    d->arr = (char *)malloc(d->total_size * sizeof(char)); 

    // Making an empty string to store the postfix expression
    char *postfix = (char *)malloc((strlen(infix) + 1) * sizeof(char));

    int j = 0;
    for (int i = 0; infix[i] != '\0'; i++)
    {
        if (!isOperator(infix[i]))
        {
            postfix[j] = infix[i];
            j++;
        }
        else
        {
            if (isEmpty(d))
            {
                push(d, infix[i]);
            }
            else
            {
                if (precedence(infix[i]) > precedence(stackTop(d)))
                {
                    push(d, infix[i]);
                }
                else
                {

                    while (precedence(infix[i]) <= precedence(stackTop(d)))
                    {
                        postfix[j] = pop(d);
                        j++;

                        if (isEmpty(d))
                        {
                            push(d, infix[i]);
                            break;
                        }
                        else
                        {
                            if (precedence(infix[i]) <= precedence(stackTop(d)))
                            {
                                continue;
                            }
                            else
                            {
                                push(d, infix[i]);
                                break;
                            }
                        }
                    }
                }
            }
        }
    }
    while (!isEmpty(d))
    {
        postfix[j] = pop(d);
        j++;
    }
    postfix[j] == '\0';
    return postfix;
}

int main()
{
    char *infix = "x-y*z";
    printf("The postfix expression is:%s\n", infixtopostfix(infix));

    return 0;
}