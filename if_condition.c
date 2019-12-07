#include<stdio.h>
void main()
{
 int a, b, c;
    printf("Enter 1st Number: ");
    scanf("%d", &a);
    printf("Enter 2nd Number: ");
    scanf("%d", &b);
    if (a > b){
        printf("A is greater.\n");
    }
    else if(b > a){
	 printf("B is greater. \n");
    }
    else{
        printf("ERROR: Unable to compare.\n");
    }
}
