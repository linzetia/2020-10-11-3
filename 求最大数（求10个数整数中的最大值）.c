
//求最大数（求10个数整数中的最大值）（用冒泡法）
#include<stdio.h>
int main()
{
	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
	int Max = arr1[1];//如果用 Max = 0会出现问题,那么我们可以用自己数组中的数
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		if (arr1[i] > Max)
		{
			Max = arr1[i];
		}
	}
	printf("Max=%d\n",Max);
	return 0;
}