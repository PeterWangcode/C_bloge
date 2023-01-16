//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>

///*数一下1~100的整数中有多少个9*/
//// 9  19  29  39  49  59  69  79  89  99  // 个位是9
//// 91  92  93  94  95  96  97  98  99  //  十位是9
//
//int main()
//{
//	int i = 1;
//	int count = 0;  // 统计9出现的次数
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)  // 个位为9的情况
//			count++;
//		if (i / 10 == 9)  // 十位为9的情况
//			count++;
//	}
//	printf("%d", count);
//
//	return 0;
//}