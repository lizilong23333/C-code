//����������ʱ������������������������
#include<stdio.h>
int main()
{
	int a = 1;
	int b = 2;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d b=%d", a, b);


/*����������
* 1 ^ 1 = 0
* 0 ^ 0 = 0
* 1 ^ 0 = 1
* A ^ 0 = A
*/