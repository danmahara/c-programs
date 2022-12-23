#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
     

int a,b;
printf("Enter any two integer number:\n");
scanf("%d%d",&a,&b);

if(a>b){
    printf("%d is greater",a);

}
else if(b>a){
    printf("%d is greater",b);
}
else {
    printf("Equal");
}
return 0;
}