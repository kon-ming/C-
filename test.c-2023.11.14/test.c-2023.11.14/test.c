
#include<stdio.h>
//typedef unsigned int uint;
//int main()
//{
//	//typedef(����������)
//	unsigned int num = 0;
//	return 0;
//}

//static
//1.���ξֲ�����
//2.����ȫ�ֱ���
//3,���κ���

//void test()
//{
//	static int a = 1;//static���ξֲ�����ʱ���ֲ���������������,�����١������ϣ�static���ξֲ�������ʱ�򣬸ı��˱����Ĵ洢λ�á�
//	a++;
//	printf("%d", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//
//extern int g_val;//�����ⲿ����
//int main()
//{
//	printf("%d\n",g_val);//static����ȫ�ֱ�����ʱ�����ȫ�ֱ������ⲿ�������Ծͱ�����ڲ����ӣ�����Դ�ļ�.c�Ͳ�����ʹ�����ȫ�ֱ�����
//	return 0;
//}
//extern int Add(int x, int y);
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int z = Add(a, b);//static���ε�ʱ���ⲿ�������Ծͱ���ڲ��������ԣ�����Դ�ļ�.c�޷�ʹ��
//	printf("%d\n", z);
//	return 0;
//}
//register����ѽ�ֵ����Ĵ���
//#define����ĳ����ͺ�
//���в���
//#define ADD(x,y) ((x)+(y))//ADDΪ���� x yΪ���� ���������Ǻ���
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = ADD(a, b);
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	//printf("%p\n", &a);
//	int* p = &a;//pΪָ�����  *˵��p��ָ����� int˵��pָ��Ķ�����int����
//	*p = 20;//��˼��ͨ��p��ŵĵ�ַ���ҵ�P��ָ����*p����pָ�Ķ���
//	//ָ���Сȡ����һ����ַ��ŵ�ʱ����Ҫ���ռ� 32λ������СΪ4byte 64Ϊ8byte
//	printf("%zd\n", sizeof(int*));
//	return 0;
//}