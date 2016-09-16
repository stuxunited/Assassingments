#include<stdio.h>
int  trailingZeorsInFact(int n)
{
	int zero=0,i;
	if(n<0)
	printf("No Trailing Zero for -ve no\n");
	for(i=5;n/5>=1;i=5)
			{
				zero+=n/i;
				n=n/i;
			}
			
	return zero;
}
int main()
{
	int n;
	setbuf(stdout,NULL);
	printf("Enter the number");
	scanf("%d",&n);
	int z=trailingZeorsInFact(n);
	printf("Trailing Zero = %d ",z);
	return 0;
}
