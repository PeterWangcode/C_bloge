#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
# include <string.h>

//ǰ�� ++ �� ++ ����ʹ��
//���� ++ ��ʹ�ã��� ++

//int main()
//{
//	int i = 0, a = 0, b = 2, c = 3, d = 4;
//	i = a++ && ++b && d++;  // �����õ��˶�·��ֵ �� �߼�������ʱ��ֻҪ��һ��������Ϊ�٣���û�б�Ҫ��������
//	//i = a++||++b||d++;
//	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);  // 1�� 2�� 3�� 4
//	return 0;
//}

int main()
{
	int i = 0, a = 1, b = 2, c = 3, d = 4;
	i = a++ && ++b && d++;  // �����õ��˶�·��ֵ �� �߼�������ʱ��ֻҪ��һ��Ϊ�棬����ľͲ���������
	//i = a++||++b||d++;
	printf("a = %d\n b = %d\n c = %d\nd = %d\n", a, b, c, d);  // 2�� 3�� 3�� 4
	return 0;
}
