#include<stdio.h>
int main(){
    
// int a=8,b=6,c=9;
int a;

printf("Enter value for A:\n");
scanf("%d",&a);

if(a%2==0){
    printf("Given is Even:");
}
else {
    printf("Given numver is Odd:");
}

    return 0;
}