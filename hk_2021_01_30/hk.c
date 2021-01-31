#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int i = 0;
	int count = 0;
	scanf("%d%d", &a, &b);
	c = a ^ b;
	for (i = 0; i < 32; i++)
	{
		if (((c >> i) & 1) == 1)
		{
			count++;
		}
	}
	printf("%d\n", count);
	return 0;
}


//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void Printbit(int num)
{
	for (int i = 31; i >= 1; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
	for (int i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
}
int main()
{
	int num = 0;
	printf("请输入一个数： ");
	scanf("%d", &num);
	Printbit(num);
	return 0;
}