//递归方式实现打印一个整数的每一位
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void fun(int n)
{
    if (n > 9)
    {
        fun(n / 10);
    }
    printf("%d ", n % 10);
}
int main()
{
    int n;
    printf("请输入数字:");
    scanf("%d", &n);
    fun(n);
    return 0;
}


//递归和非递归分别实现求n的阶乘（不考虑溢出的问题）

//递归
#include<stdio.h>
int Fac(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * Fac(n - 1);
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fac(n);
	printf("%d\n", ret);
	return 0;
}
//非递归
int Fac(int n)
{
	int result = 1;
	while (n > 1)
	{
		result *= n;
		n -= 1;
	}
	return result;
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Fac(n);
	printf("%d\n", ret);
	return 0;
}


//递归和非递归分别实现strlen
#include<stdio.h>
#include<stdlib.h>

int Strlen1(char* str)//递归
 {
    if (*str == '\0')
    {
        return 0;
    }
    else
    {
        return Strlen1(str + 1) + 1;
    }
}



int Strlen2(char* str)//非递归
{
    int n = 0;
    while (*str != '\0')
    {
        ++str;
        ++n;
    }
    return n;
}

void main()
{
    char str[30] = { 0 };
    printf("请输入一串字符\n");
    scanf("%s", &str);
    printf("递归判断字符串长度是:%d\n", Strlen1(str));
    printf("非递归判断字符串长度是:%d\n", Strlen2(str));
}



#include<stdio.h>
int my_strlen(char* str)
{
	if (*str == '\0')    //当传入的字符串中没有字符
		return 0;		
	else
		return 1 + my_strlen(str + 1);	//每递归一次长度加1，直到遍历到的'\0'时结束递归
}

void reverse_string(char* string)
{
	int len = my_strlen(string);//调用上面的字符串长度函数;
	if (len <= 1)	//当字符串长度小于等于1时，不执行；
		return;
	else
	{
		char temp = string[0];	 //将第一个字符的值保存在temp中;
		string[0] = string[len - 1];//将最后一个字符赋给第一个字符;
		string[len - 1] = '\0';	//将最后一个字符的内容赋为'\0';
		reverse_string(string + 1);//递归调用下一次反转；
		string[len - 1] = temp;	//将temp赋给当前的最后一个字符；
	}
}

int main()
{
	char ch[] = "abcdef";
	reverse_string(ch);
	printf("%s ", ch);
	printf("\n");
	getchar();	//缓冲；
	return 0;
}



int print(unsigned int n)  
{
    if (n < 10)     // 如果n<10   意思是n是个位数，不进行任何计算，那就直接返回
        return n;
    else
        return (n % 10) + print(n / 10);    // 如果n是位数大于等于两位数的数，那就先%10取出最后一位，然后在递归，把它“ /10 ”拿出的数字再“%10”，重复此动作
}
int main()
{
    int n = 0;
    int ret = 0;
    printf("请输入一个数字：");
    scanf_s("%d", &n);
    ret = print(n);
    printf("%d\n", ret);
    return 0;
}



#include<stdio.h>
#include<windows.h> 

int power(int n, int k)
{
	if (k <= 0)
		return 1;
	else
		return n * power(n, k - 1);
}
int main()
{
	int n = 3;
	int k = 2;
	scanf("%d %d", &n, &k);
	int ret = power(n, k);
	printf("%d\n", ret);
	return 0;
}



#include <stdio.h>
#include <stdlib.h>
int Fibo(int n)//递归
{
    if (n <= 2)
    {
        return 1;
    }
    else
    {
        return(Fibo(n - 2) + Fibo(n - 1));
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    printf("第%d个斐波那契数为:%d\n", n, Fibo(n));
    system("pause");
    return 0;
}

int main()
{
    int a = 1;
    int b = 1;
    int c = 1;
    int n;
    printf("请输入一个数: ");
    scanf("%d", &n);
    for (; n > 2; n--)
    {
        c = a + b;
        b = a;
        a = c;
    }
    printf("它的斐波那契数为:%d", c);
    system("pause");
    return 0;
}