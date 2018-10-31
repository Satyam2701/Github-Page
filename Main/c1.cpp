#include<stdio.h>
#include<conio.h>
int main()
{
	 int t;
	 
	 scanf("%d",&t);
	 while(t--)
	 {
			long int n,r=0,h=0;
			scanf("%ld",&n);
			 long long int a[n],b[n],i;
			for(i=0;i<n;i++)
			{
				scanf("%lld",&a[i]);	
			}
				for(i=0;i<n;i++)
			{
				scanf("%lld",&b[i]);	
			}
			for(i=0;i<n;i++)
			{
				if(a[i]<=b[i])
				{
				}
				else if (a[i]>b[i])
				{
				     r=1;	
				}
				if(a[i]<=b[n-i-1])
				{
				}
				else if (a[i]>b[n-i-1])
				{
				     h=1;	
				}
			}
			if(r==1 && h==1 )
			 {
					printf("none\n");
			}
			else if(r==0 && h==0)
			{
				printf("both\n");
				}
			else if(r==0&&h==1)
			{
				printf("front\n");
				}
			else 
			{
				printf("back\n");
				}
			}		

   getch();
   return 0;
}
