#include<stdio.h>
void main()
{
 int a, b, c;
    printf("Enter 1st and 2nd Number: ");
    scanf("%d"%d, &a,&b);
    
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
