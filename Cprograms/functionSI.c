#include<stdio.h>
#include<conio.h>
float simpleInterest(float principle, float time, float rate){
float si=(principle*time*rate)/100;
return si;
}

int main(){
float p=1000;
float t=5;
float r=3;

float si = simpleInterest(p,t,r);
printf("%f",si);

}