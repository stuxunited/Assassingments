#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
int partition(int *a,int start,int end)
{
	int pivot=a[end],pindex=start,i;
	for(i=start;i<end;i++)
	{
		if(a[i]<=pivot)
		{
			swap(&a[i],&a[pindex]);
			++pindex;
		}
	}
	swap(&a[pindex],&a[end]);
	return pindex;

}
void quick(int *a,int start,int end)
{
	int pivot;
	if(start<end)
	{
		pivot=partition(a,start,end);
		quick(a,start,pivot-1);
		quick(a,pivot+1,end);
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
	quick(a,0,n-1);
	for(i=0;i<n;i++)
		printf("%d ",*(a+i));
	return 0;
}
