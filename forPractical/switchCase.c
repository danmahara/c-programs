#include <stdio.h>

int main(){
    char operation;
    double n1, n2;
printf("\n\nPrograms of Switch Case Statement in C Language\n");
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c",&operation);
    printf("Enter two operands: \n");
    scanf("%lf %lf",&n1, &n2);

    switch(operation)
    {
        case '+':
            printf("%.1lf + %.1lf = %.1lf\n\n",n1, n2, n1+n2);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf\n\n",n1, n2, n1-n2);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf\n\n",n1, n2, n1*n2);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf\n\n",n1, n2, n1/n2);
            break;
        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! operator is not correct\n");
    }

    return 0;
}
