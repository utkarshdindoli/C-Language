#include<stdio.h>
#include<conio.h>
void main()
{
    int a=10,b=20,c;
    clrscr();
    printf("before swapping");
    printf("%d",a);
    printf("%d",b);
    printf("\nafter swapping value is");
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d",a);
    printf("%d",b);
    getch();
}