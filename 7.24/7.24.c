#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//void huhuan(int* a,int* b)
//{
//	int temp = 0;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	huhuan(&a, &b);
//	printf("a=%d,b=%d", a, b);
//	return 0;
//}

//int Pd(a)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(a); i++)
//	{
//		if (a % i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (Pd(i) == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
//int Pd(a)
//{
//	if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	if (Pd(a) == 1)
//		printf("yes");
//	else
//		printf("no");
//	return 0;
//}

//int erF(int arr[], int sz,int zhao)
//{
//	int left = 0;
//	int right = sz - 1;
//	int i = 0;
//	while(right >= left)
//	{
//		int mid = (left + right) / 2;
//			if (zhao < arr[mid])
//				right = mid - 1;
//			else if (zhao > arr[mid])
//				left = mid + 1;
//			else
//			{
//				return mid;
//			}
//	}
//	return 1;
//}
//
//int main()
//{
//	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int zhao = 0;
//	scanf("%d", &zhao);
//	int ret = erF(a, 10, zhao);
//	if (ret == 1)
//		printf("nope");
//	else
//		printf("%d", ret);
//	return 0;
//}

//int main()//·ÇµÝ¹é
//{
//	int a = 0;
//	scanf("%d", &a);
//	int n = a;
//	while (a-1)
//	{
//		n = n * (a - 1);
//		a--;
//	}
//	printf("%d", n);
//	return 0;
//}

//int Jie_Cheng(n)
//{
//	if (n != 1)
//		return n * Jie_Cheng(n - 1);
//	else
//		return 1;
//}
//
//int main()//µÝ¹é
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d",Jie_Cheng(a));
//	return 0;
//}

void Da_Yin(int a)
{
	if (a >= 10)
	{
		Da_Yin(a / 10);
		printf("%d ", a % 10);
	}
	else
		printf("%d ", a);
}

int main()
{
	int a = 0;
	scanf("%d", &a);
	Da_Yin(a);
	return 0;
}

























