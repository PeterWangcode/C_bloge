#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
# include <string.h>

//前置 ++ 先 ++ ，再使用
//后置 ++ 先使用，再 ++

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;  // 这里用到了短路求值 ， 逻辑与运算时，只要有一个操作数为假，就没有必要再算后面的
//	//i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);  // 1， 2， 3， 4
//	return 0;
//}

int main()
{
	int i = 0, a = 1, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;  // 这里用到了短路求值 ， 逻辑或运算时，只要有一个为真，后面的就不会再运算
	//i = a++||++b||d++;
	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);  // 2， 3， 3， 4
	return 0;
}
