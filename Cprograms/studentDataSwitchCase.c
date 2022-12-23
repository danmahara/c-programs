 #include<stdio.h>
 int main(){

float math,english,social,science,physics;
// cfa,digital_logic,account,economic,chemistry;
float sum_of_total_marks;
float percentage;
// int choice;

printf("Enter the marks of all subjects :\n");
printf("Math, English, Social, Science, Physics :\n");
// Cfa, digital_logic, Account, Economic, Chemistry
scanf("%f%f%f%f%f",&math,&english,&social,&science,&physics);

if(math<=40||english<=40||social<=40||science<=40||physics<=40){
    printf("Fail!\n");
}

sum_of_total_marks=math+english+social+science+physics;
percentage=(sum_of_total_marks/500)*100;



printf("Your total is = %f \n",sum_of_total_marks);
printf("Your percentage is =%f \n",percentage);
if(percentage<=40){
    printf("Failed!\n");
}
else if(percentage<=60){
    printf("Second division!\n");
}
else if(percentage<=80){
    printf("First division!\n");
}
else if(percentage<=100){
    printf("Distinction!");
}

    return 0;
 }