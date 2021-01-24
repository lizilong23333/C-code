#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
    int year = 0;
    int month = 0;
    int normal[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };//将普通月份天数添加进去
    int gap[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };//将闰年月份天数添加进去
    while (scanf("%d %d",&year,&month)!=EOF)
    {
        if (year % 4 == 0 || (year % 4 == 0 && year % 100 != 0))
        {
            printf("%d\n", gap[month - 1]);
        }
        else
        {
            printf("%d\n", normal[month - 1]);
        }
    }
    return 0;
}



//实现一个函数，判断一个数是不是素数。利用上面实现的函数打印100到200之间的素数



#include<stdio.h>
#include<math.h>
int prime_number(int num)
{
	int i, k;
	if (num >= 2)
	{
		k = sqrt(num);
		for (i = 2; i <= k; i++)
		{
			if (num % i == 0)
				break;
		}
		if (i >= k + 1)
			return 1;
		else
			return 0;
	}
	else
		return 0;
}
int main()
{
	int i;
	//输出1~100之间所有的素数
	for (i = 100; i < 200; i++)
		if (prime_number(i))
		{
			printf("%d ", i);
		}
		return 0;
}


//实现函数判断year是不是润年。
int leap_year(int year)
{
	if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0))
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int year = 0;
	scanf("%d", &year);
	if (leap_year(year))
	{
		printf("是闰年\n");
	}
	else
	{
		printf("不是闰年\n");
	}
	return 0;
}



//实现一个函数来交换两个整数的内容。
void Swap(int* pa, int* pb)//形参
{
	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	Swap(&a, &b);//实参
	printf("a=%d b=%d\n", a, b);
	return 0;
}



//实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。
#include<stdio.h>

void mul(int n)
{
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d  ", i, j, i * j);//其中%2d中的2表示输出两格，数向后靠齐，即右对齐；%-2d，则表示数左对齐
		}
		printf("\n");
	}
}

int main()
{
	int n = 0;
	printf("请输入乘法口诀表的行：");
	scanf("%d", &n);
	mul(n);
	return 0;
}