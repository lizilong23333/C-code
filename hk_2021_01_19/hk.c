#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c, t;
	printf("请输入三个数：\n");
	scanf("%d %d %d", &a, &b, &c);

	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}
	if (a < c)
	{
		t = a;
		a = c;
		c = t;
	}
	if (b < c)
	{
		t = b;
		b = c;
		c = t;
	}
	printf("%d %d %d\n", a, b, c);
	return 0;
}



int main()
{
	int i = 1;
	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)//除以3当余数为0时输出
			printf("%d ", i);//在%d后加一个空格使输出的数有间隔
	}
	return 0;
}



int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int  c = 0;
	while (c = a % b)
	{
		a = b;
		b = c;
	}
	printf("%d\n", b);

	return 0;
}


#include<stdio.h>
int main()
{
	int i = 0;
	for (i = 1000; i <= 2000; i++)
	{
		if (i % 4 == 0 && i % 100 != 0)//能被4整除但不能被100整除的是闰年
			printf("%d ", i);
		else if (i % 400 == 0)//能被400整除的也是闰年
			printf("%d ", i);
	}
	return 0;

}


写一个代码：打印100~200之间的素数
#include<stdio.h>
int main()
{
	int i, j;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)break;//如果整除了则跳出循环
		}
		if (j == i)//说明除了1以外只有本身是因数
		{
			printf("%d ", i);
		}
	}
	return 0;
}


编写程序数一下 1到 100 的所有整数中出现多少个数字9
#include<stdio.h>
int main()
{
	int i = 0;
	int count = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)//9,19,29,,,,,,,99
			count++;
		if (i / 10 == 9)
			count++;
	}
	printf("%d\n", count);
	return 0;
}



计算1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 …… + 1 / 99 - 1 / 100 的值，打印出结果
#include<stdio.h>
int main()
{
	int i = 0;
	double sum = 0;
	int flag = 1;
	for (i = 1; i <= 100; i++)
	{
		sum += flag * (1.0 / i);
		flag = -flag;
	}
	printf("%lf\n", sum);
	return 0;
}


求10 个整数中最大值
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	int max = arr[0];
	for (i = 1; i < 10; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);

	return 0;
}



在屏幕上输出九乘九的乘法口诀表
#include<stdio.h>
int main()
{
	int i, j;
	for (i = 1; i <= 9; i++)//  i控制行数
	{
		for (j = 1; j <= i; j++)//  j控制列数，条件j<=i控制第i行的输出列数小于等于i
		{
			printf("%d*%d=%2d ", j, i, j * i);
			if (i == j)//  判定换行的条件
				printf("\n");
		}
	}
	return 0;
}



//编写代码在一个整形有序数组中查找具体的某个数。要求：找到了就打印数字所在的下标，找不到则输出：找不到。
#include<stdio.h>
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//定义一个整形有序数组
	int key = 0;//我们要查找的数
	scanf("%d", &key);
	int left = 0;//数组做下标
	int right = sizeof(arr) / sizeof(arr[0]) - 1;//数组右下标
	while (left <= right)//当满足时，进入循环
	{
		int mid = (left + right) / 2;//求出中间数的下标
		if (arr[mid] < key)//key>arr[mid],说明key在中间数右边
		{
			left = mid + 1;
		}
		else if (arr[mid] > key)//与上面相反
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是：%d", mid);//找到的话,打印出下标
			break;
		}
	}
	if (left > right)//

	{
		printf("找不到");
	}
	return 0;
}
