#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣arr��һ������һά���顣
#include <stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int* p = arr;
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	return 0;
}


void Reverse(char* str)
{
    char* left = str;
    char* right = str + strlen(str) - 1;
    while (left < right)
    {
        char temp = *left;
        *left = *right;
        *right = temp;
        left++,right--;
    }
}
int main()
{
    char str[] ="I am a student";
    Reverse(str);
    printf("%s\n", str);
    return 0;
}