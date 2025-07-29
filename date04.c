#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

// Structure to represent a stack
typedef struct {
    int items[MAX_SIZE];
    int top;
} Stack;

// Function to create an empty stack
Stack* createStack() {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->top = -1;
    return stack;
}

// Function to check if the stack is empty
int isEmpty(Stack* stack) {
    return (stack->top == -1);
}

// Function to check if the stack is full
int isFull(Stack* stack) {
    return (stack->top == MAX_SIZE - 1);
}

// Function to push an element onto the stack
void push(Stack* stack, int value) {
    if (isFull(stack)) {
        printf("Error: Stack is full. Cannot push.\n");
    } else {
        stack->items[++stack->top] = value;
        printf("Pushed %d onto the stack.\n", value);
    }
}

// Function to pop an element from the stack
int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Error: Stack is empty. Cannot pop.\n");
        return -1; // Return a sentinel value indicating error
    } else {
        int poppedValue = stack->items[stack->top--];
        printf("Popped %d from the stack.\n", poppedValue);
        return poppedValue;
    }
}

int main() {
    Stack* stack = createStack();

    push(stack, 6);
    push(stack, 5);
    push(stack, 4);
     push(stack, 3);
    push(stack, 2);
    pop(stack);
    pop(stack);
    pop(stack);
    pop(stack);
    pop(stack);     // Attempting to pop from an empty stack

    free(stack); // Free the memory allocated for the stack
    return 0;
}
