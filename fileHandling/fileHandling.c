#include<stdio.h>


int main(){

FILE *file_pointer;

file_pointer=fopen("text.txt","r");

if(file_pointer==NULL){
    printf("Files is not Opened:\n");
    return -1;
}
 
 printf("File is Opened Successfully:\n");
 if(file_pointer!=NULL){
    fclose(file_pointer);
 }

    return 0;
}