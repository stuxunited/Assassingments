//Given a String, Write function that print its permutations in which characters are replaced with digits as shown below:
//If Input String is 'HAT'
//Output should be :
//HAT  1AT  H1T  HA1  11T  1A1  H11 111
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{	int i,j,k,z,y,x=0;
	char string[10];
	int map[10];
	printf("Enter String\n");
	gets(string);
	printf("\n");
	z=strlen(string);
	y=pow(2,z);
	for(i=0;i<y;i++)
	{	x=i;
		for(j=z-1;j>=0;j--)
		{
			map[j]=x&1;
			x=x>>1;
		}
		for(k=0;k<z;k++)
		{
			if(map[k]==0)
			printf("%c",string[k]);
			else
			printf("1");
		}
		printf("\n");
	}	
	return 0;
}
