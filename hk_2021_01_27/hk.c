//实现一个对整形数组的冒泡排序(十个数）
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void bubble_sort(int arr[])
{
	int i = 0;
	for (i = 0; i < 9; i++)//进行九次循环，比出十个数
	{
		int j = 0;
	    int ischange = 0;
		for (j = 0; j < 9 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];//将大的那个往后传
				arr[j + 1] = temp;
				ischange = 1;
			}
		}
		if (!ischange)//如果前一个已经小于后一个，则不用进行后续比较(用于取消不需要的for循环）
				return;
	}
}
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	bubble_sort(arr);
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}


//创建一个整形数组，完成对数组的操作
void init(int arr[], int sz)//实现函数init() 初始化数组为全0
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}
void print(int arr[], int sz)//实现printf()打印数组的每个元素
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}
void reverse(int arr[], int sz)//实现reverse()  函数完成数组元素的逆置。
{
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		int temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
		left++;
		right--;
	}
}
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	reverse(arr, sz);
	print(arr, sz);
	init(arr, sz);
	print(arr, sz);
	return 0;
}


//将数组A中的内容和数组B中的内容进行交换。（数组一样大)
#include<stdio.h>
int main()
{
	int arr1[10] = { 0 };
	int arr2[10] = { 0 };
	int i = 0;

	printf("请输入五个数字：>");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr1[i]);
	}
	printf("请输入五个数字：>");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr2[i]);
	}

	for (i = 0; i < 5; i++)
	{
		int tmp = arr1[i];
		arr1[i] = arr2[i];
		arr2 [i]= tmp;
	}
	printf("交换后的arr1为：");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	printf("交换后的arr2为：");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}




