#include <stdio.h>
int sum(int a, int b);
int sub(int a, int b);
int divi(int a, int b);
int multi(int a, int b);
int main(){
    int num1, num2;
    char ch;
    printf("\nEnter the 1 number:");
    scanf("%d", &num1);
    printf("\nEnter the 2 number:");
    scanf("%d", &num2);
    printf("\nSelect the math operation you want (+, -, *, /)\n");
    fflush(stdin);
    scanf("%c", &ch);
    int result1=sum(num1, num2);
    int result2=sub(num1, num2);
    int result4=multi(num1, num2);
    int result3=divi(num1, num2);
    switch (ch){
        case '+':
        printf("Sum is %d\n", result1);
        break;
        case'-':
        printf("Sub is %d\n", result2);
        break;
        case'*':
        printf("Multi is %d\n", result4);
        break;
        case'/':
        printf("Divi is %d\n", result3);
        default:
        printf("Pls try again");
    }
    return 0;
}
int sum(int a, int b){
    int c;
    c=a+b;
    return c;
}
int sub(int a, int b){
    int c;
    c=a-b;
    return c;
}
int divi(int a, int b){
    int c;
    c=a/b;
    return c;
}
int multi(int a, int b){
    int c;
    c=a*b;
    return c;
}
