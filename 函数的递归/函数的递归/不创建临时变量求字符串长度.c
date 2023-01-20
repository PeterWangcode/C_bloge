//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>

///*编写函数,不创建临时变量,求字符串的长度。*/
//
////int my_strlen(char* str)  // 创建临时变量的做法
////{
////	int count = 0;
////	while (*str != '\0')
////	{
////		count++;
////		str++;
////	}
////	return count;
////}
//
//int my_strlen(char* str)
//{
//	/*如果不是'\0'，那么就1 + my_strlen, 直到长度结束*/
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else  // 若是‘0’，那么字符串长度为0
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bit";
//
//	printf("%d", my_strlen(arr));
//
//	return 0;
//}