#include<stdio.h>
#include<conio.h>
int main(){
	
	int a,b,c;
	printf("ENter any number for a ,b and c: \n");
	scanf("%d%d%d",&a,&b,&c);
	
	if(a>b && a>c){
		printf("Greater is %d",a);
	}
	else if(b>a && b>c){
		printf("Greater is %d",b);
	}
	else
	printf("Greater is %d",c);
	

	
	return 0;
}
