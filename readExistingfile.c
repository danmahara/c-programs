#include<stdio.h>
#include<conio.h>
int main(){
char c;
FILE* fptr;

fptr=fopen("data1.txt","r");

while (1)
{
if(fptr==NULL){ 
    printf("File is Opened:\n");
    return -1;
}
else {
    c=getc(fptr);
    if(c==EOF) {
        break;
    }
    printf("%s",c);
}

}




    return 0;
}