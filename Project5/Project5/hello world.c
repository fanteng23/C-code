#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;

	printf("输入两个数字，输出相加\n");
	scanf("%d%d",&a,&b);
	c=a+b;
		printf("%d", c);
	return 0;
}