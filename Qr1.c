//WAP to print odd numbers from 1 to N using a while loop.
#include<stdio.h>
#include<conio.h>

main()
{
	int n;
	printf("enter the value n:");
	scanf("%d",&n);
	
	int i=1;
	while (i<=n)
		{
            if (i%2!=0) 
		    {  
                printf("%d",i);
            }
            i++;  
        }

}