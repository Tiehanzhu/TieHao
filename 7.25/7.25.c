#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int CiF(int n, int k)
//{
//	if (k != 1)
//		return n * CiF(n, k - 1);
//	else if (k == 1)
//		return n;
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	printf("%d", CiF(n, k));
//	return 0;
//}

//дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��

//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19

//���룺1729�������19

//int DigitSum(n)
//{
//	if (n > 10)
//		return n % 10 + DigitSum(n / 10);
//	else
//		return n;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d",DigitSum(n));
//	return 0;
//}

//int my_strlen(char* string)//�ݹ�
//{
//	if (*string != '\0')
//	{
//		return 1 + my_strlen(string + 1);
//	}
//	else
//		return 0;
//}
//int my_strlen(char* string)//�ǵݹ�
//{
//	int num = 0;
//	while (*string)
//	{
//		num++;
//		string++;
//	}
//	return num;
//}
//
//
//int main()
//{
//	char arr[] = "abcde";
//	printf("%d",my_strlen(arr));
//	return 0;
//}

//int my_strlen(char* string)
//{
//	if (*string != '\0')
//	{
//		return 1 + my_strlen(string + 1);
//	}
//	else
//		return 0;
//}
//void reverse_string(char* string)
//{
//	int Cd = my_strlen(string);
//	if (Cd >= 2)
//	{
//		int a = string[0];
//		string[0] = string[Cd - 1];
//		string[Cd - 1] = '\0';
//		reverse_string(string + 1);
//		string[Cd - 1] = a;
//	}
//}
//int main()
//{
//	char arr[] = "abcde";
//	reverse_string(arr);
//	printf("%s", arr);
//	return 0;
//}


//int QiuHe(int a)
//{
//    if (a - 1)
//    {
//        return a + QiuHe(a - 1);
//    }
//    else
//        return 1;
//}
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    printf("%d", QiuHe(a));
//    return 0;
//}

//#include <stdio.h>    
//
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    int zongshu = 0;
//    int i = 0;
//    for (i = 1; i <= a; i++)
//    {
//        zongshu += i;
//    }
//    printf("%d", zongshu);
//    return 0;
//}

//int main()
//{
//    int arr[50] = { 0 };
//    int a = 0;
//    scanf("%d", &a);
//    int i = 0;
//    int zongshu = 0;
//    for (i = 0; i < a; i++)
//    {
//        scanf("%d", &arr[i]);
//        zongshu += arr[i];
//    }
//    printf("%d", zongshu);
//    return 0;
//}

//int Fb(int a)//�ݹ�
//{
//	if (a > 2)
//	{
//		return Fb(a - 1) + Fb(a - 2);
//	}
//	else
//		return 1;
//}
//int Fb(int a)//�ǵݹ�
//{
//	if (a < 3)
//	{
//		return 1;
//	}
//	else
//	{
//		int i = 0;
//		int b = 1;
//		int c = 1;
//		int d = 1;
//		for (i = 1; i <= a; i++)
//		{
//			if (i % 3 == 1)
//				d = b + c;
//			else if (i % 3 == 2)
//				b = c + d;
//			else if (i % 3 == 0)
//				c = b + d;
//		}
//		if (a % 3 == 0)
//			return d;
//		else if (a % 3 == 1)
//			return b;
//		else if (a % 3 == 2)
//			return c;
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	printf("%d", Fb(a));
//	return 0;
//}

















