#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//计算1/1-1/2+1/3-1/4+1/5.....+ 1/99 - 1/100的值，打印出结果

// 一
//int main()
//{
//	int i = 0;
//	double sum = 0.0; // 相除会产生小数
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//			sum -= 1.0 / 2;  // i为偶数的时候是+
//		else
//			sum += 1.0 / i;  // i为奇数的时候是-
//	}
//	printf("%0.3lf", sum);
//
//	return 0;
//}

int main()
{
	int i = 0;
	double sum = 0.0; // 相除会产生小数
	int flage = 1;  // 控制加减的符号，乘1原来的数不变，乘负1符号取反

	for (i = 1; i <= 100; i++)
	{
		sum += flage * 1.0 / i;
		flage = -flage;
	}
	printf("%0.3lf", sum);

	return 0;
}