#include<stdio.h>
#define capacity 3
int stack[capacity];
int top =-1;

//push implementation:
void push(int x)
{
    if(top<capacity){
        top+=1;
        stack[top]=x;
printf("successfully added %d\n",x);
    }
    else{
        printf("No space");
    }
}

//pop implementation:

int pop(){
if(top>=0){
   int value=stack[top];
    top-=1;
    return value;
}
printf("Empty Stack");
return -1;
}

//peek implementation:
int peek(){
if(top>=0){
    return stack[top];
}
printf("empty stack");
return -1;
}


int main()
{
  push(10);
push(23);
printf("%d\n",pop());
printf("%d\n",peek());
}


