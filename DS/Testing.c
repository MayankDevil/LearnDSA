#include <stdio.h>
#include <stdlib.h>

 

 char *stack;
 int top;
int stackTop(){
    return stack[top];
}
 
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
 

 
void push(char val){
    
    
        top++;
        stack[top] = val;
    
}
 
char pop(){
    if(isEmpty()){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        char val = stack[top];
        top--;
        return val;
    }
}
int precedence(char ch){
    if(ch == '*' || ch=='/')
        return 3;
    else if(ch == '+' || ch=='-')
        return 2; 
    else
        return 0;
}
 
int isOperator(char ch){
    if(ch=='+' || ch=='-' ||ch=='*' || ch=='/') 
        return 1;
    else
        return 0;
}
int strlen(char *arr){
    int i;
    for(i=0; arr[i]!='\0'; i++);
    return i;
}
char *infixToPostfix(char *infix){

    char * postfix;
    int i=0; // Track infix traversal
    int j = 0; // Track postfix addition 
    while (infix[i]!='\0')
    {
        if(!isOperator(infix[i])){
            postfix[j] = infix[i];
            j++;
            i++;
        }
        else{
            if(precedence(infix[i])> precedence(stack[top])){
                push(infix[i]);
                i++;
            }
            else{
                postfix[j] = pop();
                j++;
            }
        }
    }
    while (!isEmpty())    
    {
        postfix[j] = pop();
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}
int main()
{
    char *ainfix = "x-y/z-k*d";
    printf("postfix is %s\n", infixToPostfix(infix));
    char * postfix=infixToPostfix(infix);
    int size=strlen(postfix)-1;
    printf("prefix is ");
    while (size!=-1)
    {
        printf("%c",postfix[size]);
        size--;
    }
    
    return 0;
}