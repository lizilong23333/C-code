//ʵ��һ�������������ð������(ʮ������
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void bubble_sort(int arr[])
{
	int i = 0;
	for (i = 0; i < 9; i++)//���оŴ�ѭ�����ȳ�ʮ����
	{
		int j = 0;
	    int ischange = 0;
		for (j = 0; j < 9 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];//������Ǹ�����
				arr[j + 1] = temp;
				ischange = 1;
			}
		}
		if (!ischange)//���ǰһ���Ѿ�С�ں�һ�������ý��к����Ƚ�(����ȡ������Ҫ��forѭ����
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


//����һ���������飬��ɶ�����Ĳ���
void init(int arr[], int sz)//ʵ�ֺ���init() ��ʼ������Ϊȫ0
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}
void print(int arr[], int sz)//ʵ��printf()��ӡ�����ÿ��Ԫ��
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}
void reverse(int arr[], int sz)//ʵ��reverse()  �����������Ԫ�ص����á�
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


//������A�е����ݺ�����B�е����ݽ��н�����������һ����)
#include<stdio.h>
int main()
{
	int arr1[10] = { 0 };
	int arr2[10] = { 0 };
	int i = 0;

	printf("������������֣�>");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &arr1[i]);
	}
	printf("������������֣�>");
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
	printf("�������arr1Ϊ��");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");
	printf("�������arr2Ϊ��");
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}




