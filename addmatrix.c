// Addition of  matrix.
#include<stdio.h>
int main()
{
	int n,i,j;
	printf("enter the value of n:");
	scanf("%d",&n);
	
		int arr1[n][n],arr2[n][n],res[n][n];
	printf("enter the element of array1: ");

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("enter the element of array2: ");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			res[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
	printf("%d",res[i][j]);
}
printf("\n");
}
	return 0;
}
	
																																																																					                                                                                                                                                                                                                                                                                          
