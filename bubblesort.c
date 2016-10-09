#include<stdio.h>
#include<stdlib.h>
void sort(int *a,int n)
{
	int i,j,flag,t;
	for(i=0;i<n;i++)
	{
		flag=0;
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
				flag=1;
			}
		}
		if(flag==0)
			break;
	}
	
}
int main()
{
	int n,i;
	printf("Enter Size\n");
	scanf("%d",&n);
	int *a=(int*)malloc(sizeof(int)*n);
	printf("Enter Elements\n");
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	sort(a,n);
	for(i=0;i<n;i++)
		printf("%d ",*(a+i));
	return 0;
}
