#include<stdio.h>
#define MAX 10

int s[MAX];
int top = -1;
int push(int item);
int pop();
void display();

int main(){
    
    int i = 1, choice, item;

    while(i==1){

        printf("\n 1. Push \n 2. Pop \n 3. Display \n 4. Exit");
        printf("\n Enter your choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\n Enter item to push: ");
            scanf("%d", &item);
            push(item);
            break;

        case 2: 
            pop(item);
            break;

        case 3: 
            display();
            break;
        
        default:
            printf("\n Wrong Choice");
        }

        printf("\n continue press 1 for Yes:");
        scanf("%d", &i);
    }

    return 0;

}

int push(int item){
    if(top == MAX-1){
        printf("\n Stack is full");
    }else{
        top++;
        s[top] = item;
    }
    return item;
}

int pop(){
    int item;
    if(top == -1)
        printf("\n Stack is empty");
    else{
        item = s[top];
        top--;
        printf("\n Deleted Elemen is %d ", item);
    }
    return 0;
}

void display(){
    int i;
    printf("\n");
    for(i = 0; i<= top; i++){
        printf("%d\t",s[i]);
    }
}
