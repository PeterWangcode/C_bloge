#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//����1/1-1/2+1/3-1/4+1/5.....+ 1/99 - 1/100��ֵ����ӡ�����

// һ
//int main()
//{
//	int i = 0;
//	double sum = 0.0; // ��������С��
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 0)
//			sum -= 1.0 / 2;  // iΪż����ʱ����+
//		else
//			sum += 1.0 / i;  // iΪ������ʱ����-
//	}
//	printf("%0.3lf", sum);
//
//	return 0;
//}

int main()
{
	int i = 0;
	double sum = 0.0; // ��������С��
	int flage = 1;  // ���ƼӼ��ķ��ţ���1ԭ���������䣬�˸�1����ȡ��

	for (i = 1; i <= 100; i++)
	{
		sum += flage * 1.0 / i;
		flage = -flage;
	}
	printf("%0.3lf", sum);

	return 0;
}