#include<stdio.h>
#include<conio.h>
int main()
{
	 int t,n;
	 
	 scanf("%d",&t);
	 while(t--)
	 {
			scanf("%d",&n);
			long int p[n],q[n],d[n],i;
			double sum,l,x,y;;
			for(i=0;i<n;i++)
			{
			scanf("%ld%ld%ld",&p[i],&q[i],&d[i]);
			
				x=(p[i]*(1+(d[i]/(100))));
				printf("%d \n",x);
				y=x*(1-(d[i]/(100)));
				printf("%d \n",y);
				l=(p[i]-x)*q[i];
				printf("%d",l);
				
			sum=sum+l;
				
			}
		printf("%.9f\n",sum);
		
	}
	getch();   
	return 0;
}
