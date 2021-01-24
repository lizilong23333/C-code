#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
int main()
{
    int year = 0;
    int month = 0;
    int normal[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };//����ͨ�·�������ӽ�ȥ
    int gap[] = { 31,29,31,30,31,30,31,31,30,31,30,31 };//�������·�������ӽ�ȥ
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



//ʵ��һ���������ж�һ�����ǲ�����������������ʵ�ֵĺ�����ӡ100��200֮�������



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
	//���1~100֮�����е�����
	for (i = 100; i < 200; i++)
		if (prime_number(i))
		{
			printf("%d ", i);
		}
		return 0;
}


//ʵ�ֺ����ж�year�ǲ������ꡣ
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
		printf("������\n");
	}
	else
	{
		printf("��������\n");
	}
	return 0;
}



//ʵ��һ�������������������������ݡ�
void Swap(int* pa, int* pb)//�β�
{
	int tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}
int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	Swap(&a, &b);//ʵ��
	printf("a=%d b=%d\n", a, b);
	return 0;
}



//ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ��
//�磺����9�����9 * 9�ھ������12�����12 * 12�ĳ˷��ھ���
#include<stdio.h>

void mul(int n)
{
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d=%-2d  ", i, j, i * j);//����%2d�е�2��ʾ�������������룬���Ҷ��룻%-2d�����ʾ�������
		}
		printf("\n");
	}
}

int main()
{
	int n = 0;
	printf("������˷��ھ�����У�");
	scanf("%d", &n);
	mul(n);
	return 0;
}