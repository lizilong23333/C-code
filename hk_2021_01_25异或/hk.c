//不允许创建临时变量，交换两个整数的内容
#include<stdio.h>
int main()
{
	int a = 1;
	int b = 2;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d b=%d", a, b);


/*异或运算规则：
* 1 ^ 1 = 0
* 0 ^ 0 = 0
* 1 ^ 0 = 1
* A ^ 0 = A
*/