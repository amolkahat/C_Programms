#include<stdio.h>
void main()
{
 int a, b, c;
    printf("Enter 1st Number\n");
    scanf("%d",&a);
    printf("Enter 2nd Number\n");
    scanf("%d"&b);
    if (a > b){
        printf("A is greater");
    }
    else if(b > a){
        {printf(" B is grater");
        }
    else{
        printf("ERROR: Unable to compare.\n");
    }
}
