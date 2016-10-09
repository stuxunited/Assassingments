#include<stdio.h>
#include<stdlib.h>
void sort(int *a,int n)
{
	int i,j,min,t;
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[min]>a[j])
				min=j;
		}
		t=a[i];
		a[i]=a[min];
		a[min]=t;
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
