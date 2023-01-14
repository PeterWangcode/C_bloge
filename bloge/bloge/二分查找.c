#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
# include <string.h>

int two_search(int arr[], int n, int s)
{
	/*��Ԫ��Ϊs��������arr�в���n*/
	int left = 0;  // ���±�
	int right = s - 1;  // ���±�
	

	while (left <= right)
	{
		int mid = (left + right) / 2;  // �м��±�
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
	int key = 1;  // Ҫ���ҵ�ֵ
	int sz = sizeof(arr) / sizeof(arr[0]);  // Ԫ�ظ���

	int value = two_search(arr, key, sz);
	if (value != -1)
		printf("�ҵ��ˣ��±��ǣ�%d", value);
	else
		printf("�Ҳ�����");

	return 0;
}