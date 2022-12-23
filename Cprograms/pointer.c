#include<stdio.h>


int main(){

FILE *file_pointer;

file_pointer=fopen("hello.txt","r");
if(file_pointer==NULL){
    printf("File is not Opened!");
  
 return 0;

}
printf("File is Opened: \n");
if(file_pointer!=NULL){
    fclose(file_pointer);
}


    return 0;
}