#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a = 0;
	int sum = 0;
	int tmp = 0;
	printf("����һ������");
	scanf("%d", &a);
	for (int i = 0; i < 5; i++)
	{
		tmp = tmp * 10 + a;
		sum += tmp;
	}
	printf("%d", sum);
	return 0;
}



#include <stdio.h>
#include<math.h>
int main()
{
	int i = 0;
	for (i = 1; i <= 99999; i++)
	{
		int tmp = i;//��λ��
		int count = 0;//n
		int sum = 0;
		while (tmp)
		{
			tmp /= 10;//��λ��
			count++;
		}
		tmp = i;
		while (tmp)
		{
			sum += pow((tmp % 10), count);
			tmp /= 10;
		}
		if (sum == i)
		{
			printf("%d��ˮ�ɻ���\n", i);
		}
	}
	return 0;
}

#include<stdio.h>
int main()
{
	int line = 0;
	int i = 0;
	scanf("%d", &line);
	for (i = 0; i < line; i++)
	{
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//��ӡ*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//��ӡ�°벿��
	for (i = 0; i < line - 1; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}



#include <stdio.h>
int main()
{
    int money = 20;
    int count = 20;
    while (1)
    {
        if (money % 2 != 0)
        {
            count = count + money - 1;
            break;
        }
        else
        {
            money = money / 2;
            count += money;
        }
    }
    printf("%d\n", count);
    return 0;
}
