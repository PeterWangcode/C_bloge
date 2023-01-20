#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
# include <string.h>

///*冒泡排序*/
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	// 确定总的趟数（为元素个数减一）
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		// 一趟冒泡排序的过程
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			// 比较交换环节
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
//	int sz = sizeof(arr) / sizeof(arr[0]);  // 计算元素个数
//
//	bubble_sort(arr, sz);
//
//	return 0;
//}


// 数组名是什么？
// 数组名是首元素地址，但是有两个例外
// 1. sizeof(数组名) - 数组名表示整个数组 - 计算整个数组的大小（单位：字节）
// 2. &数组名 - 数组名表示整个数组 - 取出的是整个数组的地址

int main()
{
	int arr[10] = { 0 };

	printf("%p\n", &arr);  // 1 - 取出的是数组的地址

	printf("%p\n", arr);
	printf("%p\n", &arr[0]);

	//printf("%d\n", sizeof(arr));  // 数组名表示整个数组

	//printf("%p\n", &arr[0]);
	//printf("%p\n", arr[0]);  // 数组名是首元素的地址

	return 0;
}