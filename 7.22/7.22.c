#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//
//}
//int main()
//{
//	int a[3];
//	int i = 0;
//	int j = 0;
//	scanf("%d%d%d", &a[0], &a[1], &a[2]);
//	for (i = 0; i < 2; i++)
//	{
//		for (j = 0; j < 2; j++)
//		{
//			if (a[j] < a[j + 1])
//			{
//				int temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//	for (i = 0; i < 3; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//				break;
//			else if (j == i - 1)
//				printf("%d ", i);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1000; i < 2000; i+=4)
//	{
//		if (i % 4 == 0 && i % 100 != 0)
//			printf("%d  ", i);
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int i = 0;
//	scanf("%d %d", &a, &b);
//	if (b > a)
//	{
//		int temp = a;
//		a = b;
//		b = temp;
//	}
//	for (i = 1; i < a ; i++)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			c = i;
//		}
//	}
//	printf("%d", c);
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = i; j <= 9; j++)
//		{
//			printf("%d x %d = %d\t", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//

//int main()
//{
//	int a[10];
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = 0; i < 9; i++)
//	{
//		if (a[i] > a[i + 1])
//			a[i + 1] = a[i];
//	}
//	printf("%d", a[9]);
//}
//
//int main()
//{
//	float a = 0;
//	int i = 0;
//	for (i = 1; i < 100; i++)
//	{
//		if (i % 2 == 1)
//			a += 1.0 / i;
//		else if (i % 2 == 0)
//			a -= 1.0 / i;
//	}
//	printf("%f", a);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int zongshu = 0;
//	for (i = 0; i < 100; i++)
//	{
//		if (i / 10 == 9)
//		{
//			zongshu++;
//			continue;
//		}
//		else if (i % 10 == 9)
//			zongshu++;
//	}
//	printf("%d", zongshu);
//	return 0;
//}

//int main()
//{
//	srand((unsigned)time(NULL));
//	int a = rand()%100 + 1;
//	int b;
//	while (1)
//	{
//		printf("请输入xx\n");
//		scanf("%d", &b);
//		if (b > a)
//			printf("大了\n");
//		else if (b < a)
//			printf("小了\n");
//		else
//		{
//			printf("对了\n");
//			break;
//		}
//	}
//	return 0;
//}
//

//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(a) / sizeof(a[0]);
//	float right = sz-1;
//	float left = 0;
//	int zhao = 0;
//	int i = 0;
//	int j = 0;
//	scanf("%d", &zhao);
//	while (1)
//	{
//		if (left <= right)
//		{
//			j = (left + right) / 2;
//			if (zhao > a[j])
//				left = j + 1;
//			else if (zhao < a[j])
//				right = j - 1;
//			else if (zhao == a[j])
//			{
//				printf("%d", j);
//				break;
//			}
//		}
//		else
//		{
//			printf("没找到\n");
//			break;
//		}
//		
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int hl = 0;
//	scanf("%d", &hl);
//	for (i = 1; i <= hl; i++)
//	{
//		for (j = i; j <= hl; j++)
//		{
//			printf("%d x %d = %d\t", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//void huhuan(int* a, int* b)
//{
//	int p = *a;
//	*a = *b;
//	*b = p;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	huhuan(&a, &b);
//	printf("a=%d b=%d", a, b);
//	return 0;
//}

//void Run(int a)
//{
//	if (a % 4 == 0 && a % 100 != 0)
//		printf("yes");
//	else
//		printf("no");
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	Run(year);
//	return 0;
//}

int Pd(int i)
{
	int j = 0;
	for (j = 2; j < i; j++)
	{
		if (i % j == 0)
			return 0;
	}
		return 1;
}
int main()
{
	int i = 0;
	int j = 0;
	for (i = 100; i <= 200; i++)
	{
		j = Pd(i);
		if (j == 1)
			printf("%d\n", i);
	}
	return 0;
}












