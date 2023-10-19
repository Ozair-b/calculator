#include <stdio.h>
#include <math.h>


#ifndef M_PI
#define M_PI (3.14159265358979323846)
#endif


int main() {
    float a, b;
    int c; 
    printf("  -----WELCOME TO CALCULATOR-----\n");
    printf(" \t  ----CHOOSE OPERATOR----\n");
    printf("Arithmetic Operators\t\tTrignometric Operator\n");

    printf("1) FOR ADDITION\t\t\t7) FOR Sin \n2) FOR SUBTRACTION\t\t8) FOR Cos\n3) FOR MULTIPLICATION\t\t9) FOR Tan\n4) FOR DIVISION\t\t\t10)For Cot\n5) FOR REMAINDER\t\t11)For Sec\n6) FOR POWER RAISED TO\t\t12)FOR Cosec\n");
    
    scanf("%d", &c);
    if(c<=6){
    
    printf("ENTER NUMBERS\n");
    fflush(stdin);
    scanf("%f\n%f", &a, &b);
    
    float p;
    
    if (c == 1) {
        p = a + b;
    } else if (c == 2) {
        p = a - b;
    } else if (c == 3) {
        p = a * b;
    } else if (c == 4) {
        if (b != 0) { // Check for division by zero
            p = (a / b);
        } else {
            printf("Division by zero is not allowed\n");
            return 1; // Return an error code
        }
    } else if (c == 5) {
        if (b != 0) { // Check for remainder by zero
            p = (int)a % (int)b;
        } else {
            printf("Division by zero is not allowed\n");
            return 1; // Return an error code
        }
    } else if (c == 6) {
        p = pow(a, b);
    } 
    printf("Result: %.2f\n", p);
    }else if(c>6&&c<=12){
        double r,u;
        double l;
        printf("Enter angel(in degrees):");
        scanf("%lf",&r);
        u=(r*M_PI)/180;
        if(c==7){
         l=sin(u);
         printf("sin(%.1lf)=",r);
        }else if(c==8){
            l=cos(u);
            printf("cos(%.1lf)=",r);
        }else if(c==9){
            l=tan(u);
         printf("tan(%.1lf)=",r);
        }else if(c==10){
            l=1/tan(u);
            printf("cot(%.1lf)=",r);
        }else if(c==11){
            l=1/cos(u);
            printf("sec(%.1lf)=",r);
        }else{
            l=1/sin(u);
            printf("cosec(%.1lf)=",r);
        }
         printf("%.3lf",l);
    } else {
        printf("Invalid operator\n");
        return 1; // Return an error code
    }
    return 0;
}
