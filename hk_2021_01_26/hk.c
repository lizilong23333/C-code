//�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
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
    printf("����������:");
    scanf("%d", &n);
    fun(n);
    return 0;
}


//�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳ˣ���������������⣩

//�ݹ�
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
//�ǵݹ�
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


//�ݹ�ͷǵݹ�ֱ�ʵ��strlen
#include<stdio.h>
#include<stdlib.h>

int Strlen1(char* str)//�ݹ�
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



int Strlen2(char* str)//�ǵݹ�
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
    printf("������һ���ַ�\n");
    scanf("%s", &str);
    printf("�ݹ��ж��ַ���������:%d\n", Strlen1(str));
    printf("�ǵݹ��ж��ַ���������:%d\n", Strlen2(str));
}



#include<stdio.h>
int my_strlen(char* str)
{
	if (*str == '\0')    //��������ַ�����û���ַ�
		return 0;		
	else
		return 1 + my_strlen(str + 1);	//ÿ�ݹ�һ�γ��ȼ�1��ֱ����������'\0'ʱ�����ݹ�
}

void reverse_string(char* string)
{
	int len = my_strlen(string);//����������ַ������Ⱥ���;
	if (len <= 1)	//���ַ�������С�ڵ���1ʱ����ִ�У�
		return;
	else
	{
		char temp = string[0];	 //����һ���ַ���ֵ������temp��;
		string[0] = string[len - 1];//�����һ���ַ�������һ���ַ�;
		string[len - 1] = '\0';	//�����һ���ַ������ݸ�Ϊ'\0';
		reverse_string(string + 1);//�ݹ������һ�η�ת��
		string[len - 1] = temp;	//��temp������ǰ�����һ���ַ���
	}
}

int main()
{
	char ch[] = "abcdef";
	reverse_string(ch);
	printf("%s ", ch);
	printf("\n");
	getchar();	//���壻
	return 0;
}



int print(unsigned int n)  
{
    if (n < 10)     // ���n<10   ��˼��n�Ǹ�λ�����������κμ��㣬�Ǿ�ֱ�ӷ���
        return n;
    else
        return (n % 10) + print(n / 10);    // ���n��λ�����ڵ�����λ���������Ǿ���%10ȡ�����һλ��Ȼ���ڵݹ飬������ /10 ���ó��������١�%10�����ظ��˶���
}
int main()
{
    int n = 0;
    int ret = 0;
    printf("������һ�����֣�");
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
int Fibo(int n)//�ݹ�
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
    printf("��%d��쳲�������Ϊ:%d\n", n, Fibo(n));
    system("pause");
    return 0;
}

int main()
{
    int a = 1;
    int b = 1;
    int c = 1;
    int n;
    printf("������һ����: ");
    scanf("%d", &n);
    for (; n > 2; n--)
    {
        c = a + b;
        b = a;
        a = c;
    }
    printf("����쳲�������Ϊ:%d", c);
    system("pause");
    return 0;
}