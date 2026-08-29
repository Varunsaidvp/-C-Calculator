#include <stdio.h>
#include <math.h>
int main(){
    char operations;
    float n1,n2;
    printf("Enter A Operation to Calculate +,-,/,*,^,for squre root use s :");
    scanf("%c",&operations);
    if (operations == 's') {
        printf("Enter a number: ");
        scanf("%f", &n1);
        printf("sqrt(%.2f) = %.2f\n", n1, sqrt(n1));
    } else {
        printf("Enter two numbers n1 and n2: ");
        scanf("%f %f", &n1, &n2);
    }
    switch(operations){
        case'+':
        printf("%.2f+%.2f=%.2f",n1,n2,n1+n2);
        break;
        case'-':
        printf("%.2f-%.2f=%.2f",n1,n2,n1-n2);
        break;
        case'*':
        printf("%.2f*%.2f=%.2f",n1,n2,n1*n2);
        break;
        case'/':
        printf("%.2f/%.2f=%.2f",n1,n2,n1/n2);
        break;
        case'^':
        printf("%.2f^%.2f=%.2f",n1,n2,pow(n1,n2));
        break;
        default:
        printf("Error!");
    }
    return 0;
}