#include <stdio.h>

int arr[15];
int top=0;

void push(int data){
    if (top < 15){
        arr[top] = data;
        top++;
        printf("%d pushed in stack\n",data);
        }
    else
        printf("Stack Overflow\n");
}

void pop(){

    if (top >=0 ){
        printf("array %d \n",arr[top]);
        top--;
    }
    else
        printf("Stack Underflow\n");

}

int main(){
    for (int i=0;i<20;i++)
        push(i);
    for(int i=0;i<20;i++){
        pop();
    }


    return 0;
}
