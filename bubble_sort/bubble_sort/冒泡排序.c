#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
# include <string.h>

///*ð������*/
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	// ȷ���ܵ�������ΪԪ�ظ�����һ��
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		// һ��ð������Ĺ���
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			// �ȽϽ�������
//			if (arr[j] > arr[j + 1])
//			{
//				int temp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);  // ����Ԫ�ظ���
//
//	bubble_sort(arr, sz);
//
//	return 0;
//}


// ��������ʲô��
// ����������Ԫ�ص�ַ����������������
// 1. sizeof(������) - ��������ʾ�������� - ������������Ĵ�С����λ���ֽڣ�
// 2. &������ - ��������ʾ�������� - ȡ��������������ĵ�ַ

int main()
{
	int arr[10] = { 0 };

	printf("%p\n", &arr);  // 1 - ȡ����������ĵ�ַ

	printf("%p\n", arr);
	printf("%p\n", &arr[0]);

	//printf("%d\n", sizeof(arr));  // ��������ʾ��������

	//printf("%p\n", &arr[0]);
	//printf("%p\n", arr[0]);  // ����������Ԫ�صĵ�ַ

	return 0;
}