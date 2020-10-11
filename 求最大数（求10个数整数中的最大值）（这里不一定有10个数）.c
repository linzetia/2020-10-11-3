//求最大数（求10个数整数中的最大值）（这里不一定有10个数）
#include<stdio.h>
int main()
{
	int arr1[]= { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr1) / sizeof(arr1[0]);//计算数组元素个数
	int Max = arr1[0];
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		if (arr1[i] > Max)
		{
			Max = arr1[i];
		}
	}
	printf("Max=%d\n",Max);
	return 0;
}
