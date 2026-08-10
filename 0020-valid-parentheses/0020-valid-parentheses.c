#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    char* array;
    int top;
};

void push(struct Stack* s, char v)
{
    s->top++;
    s->array[s->top] = v;
}

void pop(struct Stack* s)
{
    s->array[s->top] = 0;
    s->top--;
}

bool isValid(char* s)
{
    struct Stack stack;
    int len = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        len++;
    }
    
    stack.array = (char*)calloc(len, sizeof(char));
    stack.top = -1;

    for (int i = 0; s[i]; i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            push(&stack,s[i]);
        }
        else if (
                stack.top > -1 &&
                (s[i] == ')' && stack.array[stack.top] == '(' || 
                s[i] == ']' && stack.array[stack.top] == '[' ||
                s[i] == '}' && stack.array[stack.top] == '{'))
        {
            pop(&stack);
        }
        else
        {
            return false;
        }
    }

    if (stack.top > -1)
    {
        return false;
    }

    return true;
}