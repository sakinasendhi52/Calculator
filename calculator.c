//Q1. CALCULATOR
/* Develop a menu-driven program to implement arithmetic operations such as + , - , * , / , and % using UDF, Switch case, and Looping.
 Make sure that the program is endless until a certain letter is pressed.*/

#include<stdio.h>

//User defined functions
//addition function
void add(int a,int b){
    printf("\nADDITION\n");
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    printf("\nAddition of %d and %d is %d.\n\n",a,b,a+b);
}

//subtraction function
void subtract(int a,int b){
    printf("\nSUBTRACTION\n");
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    printf("\nSubtraction of %d and %d is %d.\n\n",a,b,a-b);
}

//multiplication function
void multiply(int a,int b){
    printf("\nMULTIPLICATION\n");
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    printf("\nMultiplication of %d and %d is %d.\n\n",a,b,a*b);
}

//division function
void divide(int a,int b){
    printf("\nDIVISION\n");
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    printf("\nDivision of %d and %d is %d.\n\n",a,b,a/b);
}

//modulus function
void modulus(int a,int b){
    printf("\nMODULUS\n");
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    printf("\nModulus of %d and %d is %d.\n\n",a,b,a%b);
}

//main function
int main(){
    int n,a,b;

    printf("CALCULATOR\n\n");
    //loop will iterate until we press 0 for exit
    do{
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");
        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for the exit\n\n");

        printf("Enter your choice : ");
        scanf("%d",&n);

        //switch case to match the choice
        switch(n){
            case 1:
            add(a,b);
            break;
            
            case 2:
            subtract(a,b);
            break;

            case 3:
            multiply(a,b);
            break;

            case 4:
            divide(a,b);
            break;

            case 5:
            modulus(a,b);
            break;

            case 0:
            break;

            default:
            printf("\nEnter a valid choice!\n\n");
            break;
        }
    }
    while(n!=0);

    return 0;
}