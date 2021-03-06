Write a program in C to rotate an array by N positions.
#include <stdio.h>
void shiftPos(int *a1, int aSize) 
{
    int i, temp;
      temp = a1[0];
    for(i = 0; i < aSize-1; i++) 
	{
        a1[i] = a1[i+1];
    }
    a1[i] = temp;
}
void aRotate(int *a1, int aSize, int rotFrom)
{
    int i;
    for(i = 0; i < rotFrom; i++)
	{
        shiftPos(a1, aSize);
    }
    return;
}
int main()
{
    int a1[] = {0,3,6,9,12,14,18,20,22,25,27}; 
	int ctr = sizeof(a1)/sizeof(a1[0]);
    int i;

	printf("The given array is :  ");
	for(i = 0; i < ctr; i++)
	{
	printf("%d  ", a1[i]);
    } 
    printf("\n");
		
	printf("From 4th position the values of the array are :  ");
	for(i = 4; i < ctr; i++)
	{
	printf("%d  ", a1[i]);
    } 
    printf("\n"); 
	    
	printf("Before 4th position the values of the array are :  ");
	for(i = 0; i < 4; i++)
	{
	printf("%d  ", a1[i]);
    } 
    printf("\n");     
 
    aRotate(a1, ctr, 4);
     printf("\nAfter rotating from 4th position the array is: \n");
    for(i = 0; i<ctr; i++)
	{
        printf("%d ", a1[i]);
    }
    return 0;
}
