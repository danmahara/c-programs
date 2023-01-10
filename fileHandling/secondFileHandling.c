#include<stdio.h>
int main(){

FILE *file_pointer;

file_pointer=fopen("dan.txt","r");          //dan.txt is a txt file 
if(file_pointer==NULL){
    printf("Files is not Open!\n");
    return 0;
}
printf("File is Opened successfully!:)\n");
if(file_pointer!=NULL){
    fclose(file_pointer);
}
    return 0;
}