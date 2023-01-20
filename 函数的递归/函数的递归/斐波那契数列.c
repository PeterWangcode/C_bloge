//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//
///*求第n个斐波那契数。（不考虑溢出）*/
///*斐波那契数列：1 1 2 3 5 8 13 21 34 55 (第三项为前两项之和)*/
//
////// 此问题递归可以求解，但是效率太低， 有大量的重复计算
////int Fib(int n)
////{
////	if (n <= 2)
////		return 1;  // 斐波那契数列的前两个数是1
////	else
////		return Fib(n - 1) + Fib(n - 2);
////}
//
//int Fib(int n)
//{
//	/*利用循环实现*/
//	int a = 1;  // 第一个斐波那契额数
//	int b = 1;  // 第二个斐波那契额数
//	int c = 1;  // 第三个斐波那契额数
//
//	while (n > 2)  // 只有第三个数才可以这样算
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}
//
//int main()
//{
//	int n = 0;
//
//	printf("n:"); scanf("%d", &n);
//
//	printf("%d", Fib(n));
//
//	return 0;
//}