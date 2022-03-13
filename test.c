#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

////写出两个整数的最大值
////函数名不建议全大写
//int Max(int x,int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int m = Max(a,b);
//	printf("%d\n", m);
//	return 0;
//}

////小飞机
//int main()
//{
//	printf("     **\n");
//	printf("     **\n");
//	printf("************\n");
//	printf("************\n");
//	printf("    *  *\n");
//	printf("    *  *\n");
//	return 0;
//}


//判断一个整数是否能被5整除

int main()
{
	//输入
	int m = 0;
	scanf("%d", &m);

	//判断并输出
	if (m % 5 == 0)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}