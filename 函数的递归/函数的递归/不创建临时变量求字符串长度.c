//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>

///*��д����,��������ʱ����,���ַ����ĳ��ȡ�*/
//
////int my_strlen(char* str)  // ������ʱ����������
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
//	/*�������'\0'����ô��1 + my_strlen, ֱ�����Ƚ���*/
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else  // ���ǡ�0������ô�ַ�������Ϊ0
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