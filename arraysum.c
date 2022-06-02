#include<stdio.h>
void main()
{
    int a[4];
    int sum=0;
    for (int i = 0; i <4; i++)
    {
        printf("enter the number at position of %d\n ",i);
        scanf("%d",&a[i]);
        sum=sum+a[i];
        
    }
   // for (  int i= 0; i <4; i++)
    
    
    printf("the sum of whole arrray is %d",sum);
    
}