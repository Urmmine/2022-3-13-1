#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

////д���������������ֵ
////������������ȫ��д
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

////С�ɻ�
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


//�ж�һ�������Ƿ��ܱ�5����

int main()
{
	//����
	int m = 0;
	scanf("%d", &m);

	//�жϲ����
	if (m % 5 == 0)
		printf("YES\n");
	else
		printf("NO\n");

	return 0;
}