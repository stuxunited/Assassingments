#include<stdio.h>
#include<stdlib.h>
void sort(int *a,int n)
{
	int i,j,hole,value;
	for(i=1;i<n;i++)
	{
		hole=i;
		value=a[i];
		while(hole>0&&a[hole-1]>value)
		{
			a[hole]=a[hole-1];
			hole--;
		}
		a[hole]=value;
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
