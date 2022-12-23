#include<stdio.h>
#include<conio.h>
int main(){

char name[100];
char address[50];
int id;

int  salary;

FILE* fptr;

fptr = fopen("storingData.txt","w");
if(fptr==NULL){
printf("File is Opened\n");
return -1;
}

printf("Enter your name:\n");
gets(name);
fprintf(fptr,"Name = %s\n",name);

printf("Enter your id:\n");
scanf("%d",&id);
fprintf(fptr,"Your id =%d \n",id);

printf("Enter your address:\n");
scanf("%s",&address);
fprintf(fptr,"Your address is =%s\n",address);

printf("Enter your salary:\n");
scanf("%d",&salary);
fprintf(fptr,"Your salary is =%d\n",salary);



fclose(fptr);



    return 0;
}