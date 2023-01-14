#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
# include <string.h>

int two_search(int arr[], int n, int s)
{
	/*在元素为s个的数组arr中查找n*/
	int left = 0;  // 左下标
	int right = s - 1;  // 右下标
	

	while (left <= right)
	{
		int mid = (left + right) / 2;  // 中间下标
		if (arr[mid] > n)
			right = mid - 1;
		else if (arr[mid] < n)
			left = mid + 1;
		else if (arr[mid] == n)
			return mid;
	}
	return -1;
}

int main()
{
	int arr[] = {1, 2, 3, 2, 3, 4, 7};
	int key = 1;  // 要查找的值
	int sz = sizeof(arr) / sizeof(arr[0]);  // 元素个数

	int value = two_search(arr, key, sz);
	if (value != -1)
		printf("找到了，下标是：%d", value);
	else
		printf("找不到！");

	return 0;
}