#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c, t;
	printf("��������������\n");
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
		if (i % 3 == 0)//����3������Ϊ0ʱ���
			printf("%d ", i);//��%d���һ���ո�ʹ��������м��
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
		if (i % 4 == 0 && i % 100 != 0)//�ܱ�4���������ܱ�100������������
			printf("%d ", i);
		else if (i % 400 == 0)//�ܱ�400������Ҳ������
			printf("%d ", i);
	}
	return 0;

}


дһ�����룺��ӡ100~200֮�������
#include<stdio.h>
int main()
{
	int i, j;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)break;//���������������ѭ��
		}
		if (j == i)//˵������1����ֻ�б���������
		{
			printf("%d ", i);
		}
	}
	return 0;
}


��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
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



����1 / 1 - 1 / 2 + 1 / 3 - 1 / 4 + 1 / 5 ���� + 1 / 99 - 1 / 100 ��ֵ����ӡ�����
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


��10 �����������ֵ
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



����Ļ������ų˾ŵĳ˷��ھ���
#include<stdio.h>
int main()
{
	int i, j;
	for (i = 1; i <= 9; i++)//  i��������
	{
		for (j = 1; j <= i; j++)//  j��������������j<=i���Ƶ�i�е��������С�ڵ���i
		{
			printf("%d*%d=%2d ", j, i, j * i);
			if (i == j)//  �ж����е�����
				printf("\n");
		}
	}
	return 0;
}



//��д������һ���������������в��Ҿ����ĳ������Ҫ���ҵ��˾ʹ�ӡ�������ڵ��±꣬�Ҳ�����������Ҳ�����
#include<stdio.h>
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//����һ��������������
	int key = 0;//����Ҫ���ҵ���
	scanf("%d", &key);
	int left = 0;//�������±�
	int right = sizeof(arr) / sizeof(arr[0]) - 1;//�������±�
	while (left <= right)//������ʱ������ѭ��
	{
		int mid = (left + right) / 2;//����м������±�
		if (arr[mid] < key)//key>arr[mid],˵��key���м����ұ�
		{
			left = mid + 1;
		}
		else if (arr[mid] > key)//�������෴
		{
			right = mid - 1;
		}
		else
		{
			printf("�ҵ��ˣ��±��ǣ�%d", mid);//�ҵ��Ļ�,��ӡ���±�
			break;
		}
	}
	if (left > right)//

	{
		printf("�Ҳ���");
	}
	return 0;
}
