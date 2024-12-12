//WAP to Find Min numbers from 4 numbers.
#include<stdio.h>
#include<conio.h>

main()
{
	int a,b,c,d;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	printf("enter c:");
	scanf("%d",&c);
	printf("enter d:");
	scanf("%d",&d);
	//a<c
	if(a<c)
	{
		//a<b
		if(a<b)
		{
			//b<c
		    if(b<c)
	     	{
	     		
	            printf("b is minimum ! ");
	    	}
		    else
		    {
			    printf("c is minimum !");
	    	}
	        printf("a is minimum !");	
	    }
	    else
	    {
	    	printf("b is minimum !");
		}
	}
	else
	{
	//c<d
	 if(c<d)
	{
	    printf("c is minimum !");
	}
	else 
	{
        printf("d is minimum !");
	}
	}
		
		        
	
	
}