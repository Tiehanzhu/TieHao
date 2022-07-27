#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


//void Jiao_Huan(int* A[],int* B[],int c)
//{
//	int i = 0;
//	for (i = 0; i < c; i++)
//	{
//		int tmp = *(A+i);
//		*(A+i) = *(B+i);
//		*(B+i) = tmp;
//	}
//}
//
//int main()
//{
//	int A[] = { 1, 2, 3, 4, 5 };
//	int B[] = { 6, 7, 8, 9, 10 };
//	int c = sizeof(A) / sizeof(A[0]);
//	printf("交换前 \n");
//	int i = 0;
//	for (i = 0; i < c; i++)
//	{
//		printf("A[%d] = %d   B[%d] = %d\n", i + 1, A[i], i + 1, B[i]);
//	}
//	Jiao_Huan(A, B, c);
//	printf("\n交换后\n");
//	for (i = 0; i < c; i++)
//	{
//		printf("A[%d] = %d   B[%d] = %d\n", i + 1, A[i], i + 1, B[i]);
//	}
//	return 0;
////}
//创建一个整形数组，完成对数组的操作
//
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。

//void init(int* a[],int Ge_Shu)
//{
//	int i = 0;
//	for (i = 0; i < Ge_Shu; i++)
//	{
//		a[i] = 0;
//	}
//}
//void print(int* a[],int Ge_Shu)
//{
//	int i = 0;
//	for (i = 0; i < Ge_Shu; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//}
//void reverse(int* a[], int Ge_Shu)
//{
//	if (Ge_Shu >= 2)
//	{
//		int tmp = *a;
//		*a = *(a + Ge_Shu - 1);
//		*(a + Ge_Shu - 1) = tmp;
//		reverse(a + 1, Ge_Shu - 2);
//	}
//
//}
//int main()
//{
//	int a[10] = { 0 };
//	init(a, 10);
//	print(a,10);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		a[i] = i+1;
//	}
//	print(a, 10);
//	reverse(a, 10);
//	print(a, 10);
//	return 0;
//}

//冒泡排序
//void Mao_Pao(int* a, int b)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < b; i++)
//	{
//		for (j = 0; j < b - i - 1; j++)
//		{
//			if (a[j] > a[j+1])
//			{
//				int tmp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	int a[] = { 1,3,10,5,7,9,8,6,4,2 };
//	int b = sizeof(a) / sizeof(a[0]);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	printf("\n\n");
//	Mao_Pao(a,b);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", a[i]);
//	}
//	return 0;
//}

#include <stdio.h>
//int Shu_Ru(int a[10][10], int n, int m)
//{
//    int i = 0;
//    int j = 0;
//    int Zong_Shu = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &a[i][j]);
//            if (a[i][j] > 0)
//            {
//                Zong_Shu += a[i][j];
//            }
//        }
//    }
//    return Zong_Shu;
//}
//
//int main()
//{
//    int a[10][10] = { 0 };
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    printf("%d", Shu_Ru(a, n, m));
//    return 0;
//}

int main()
{
    printf("%d %d\n", sizeof(char),sizeof(int));
    return 0;
}
























