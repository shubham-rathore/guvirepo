#include <stdio.h>
#include <string.h>
int main(void) {
	// your code goes here
	char arr[100],brr[100];
	int i=0,j=0,count1=0,count2=0,flag;
	
	printf("stritng 1:");
	gets(arr);
	printf("string 2:");
	gets(brr);
	
while (arr[count1] != '\0')
        count1++;
    while (brr[count2] != '\0')
        count2++;
    for (i = 0; i <= count1 - count2; i++)
    {
        for (j = i; j < i + count2; j++)
        {
            flag = 1;
            if (arr[j] != brr[j - i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 1)
        printf("%d",i);
    else
        printf("-1");

	
	
	
	return 0;
}

