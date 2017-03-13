#include <stdio.h>

int main()
{
   
   int i,j,k,l,n;
   scanf("%d",&n);
   for(i=n;i>=1;i--)
   {
       for(j=1;j<=i;j++)
       {
           printf("*");
       }
       printf(" ");
       for(j=1;j<=i;j++)
       {
           printf("*");
       }
       printf("\n");
   }
}
