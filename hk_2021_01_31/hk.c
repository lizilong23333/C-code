#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS
写一个函数打印arr数组的内容，不使用数组下标，使用指针。arr是一个整形一维数组。
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