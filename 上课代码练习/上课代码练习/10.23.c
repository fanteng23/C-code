#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//int i = 0, sum = 0;
//for (i = 1; i <= 100; i = i + 1)
//	sum = sum + 1;
//printf("1+2+3+...+100=%d\n", sum);
//return 0;












#include<stdio.h>
#include<windows.h>
int main()
{
	int a = 0, b = 0;
		printf("�����뵹��ʱʱ��,��λΪ��\n");
		scanf("%d", &a);
		for (b = a; b >= 0; b = b - 1)
		{printf("%d\n", b);Sleep(1000);}
return 0;

}