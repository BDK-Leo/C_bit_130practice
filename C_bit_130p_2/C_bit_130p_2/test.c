#define _CRT_SECURE_NO_WARNINGS 1

//��1����*���һ��С�ɻ�
//#include<stdio.h>
//int main()
//{
//	printf("     **\n");
//	printf("     **\n");
//	printf("************\n");
//	printf("************\n");
//	printf("     **\n");
//	printf("    *  *\n");
//	return 0;
//}


//��2��ʮ����������ABCDEF��Ӧ��ʮ������������ռ���Ϊ15
//#include<stdio.h>
//int main()
//{
//	printf("%15d\n",0XABCDEF);
//	return 0;
//}


//��3��
//��һ�����"Hello world!"
//�ڶ������printf("Hello world!")���ú�ķ���ֵ
//#include<stdio.h>
//int main()
//{
//	printf("\n%d\n", printf("Hello world!"));
//	return 0;
//}


//��4��
//���룺ѧ���Լ����Ƴɼ�
//�����The each subject score of No.10086 is 80.85,90.55,100.00.
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	float lang = 0.0;
//	float math = 0.0;
//	float engl = 0.0;
//	scanf("%d;%f,%f,%f",&n,&lang,&math,&engl);
//	printf("The each subject score of  No. %d is %0.2f, %0.2f, %0.2f.",n,lang,math,engl);
//	return 0;
//}


//��5���Ӽ�����������һ���ַ�������ж��Ƿ�����ĸ��������Сд��
//�����������������룬ÿ���������һ���ַ�
//������������ÿ�����룬������ַ�����ĸ��YES�����ǣ�NO��
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//		{
//			printf("YES\n");
//		}
//		
//		else
//		{
//			printf("NO\n");
//		}
//		getchar();
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<ctype.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (isalpha(ch))//����ĸ���ط�0��ֵ��������ĸ����0
//		{
//			printf("YES\n");
//		}
//		
//		else
//		{
//			printf("NO\n");
//		}
//		getchar();
//	}
//	return 0;
//}


//��6������һ���ַ�����������һ�������ν�����
//��������������ֻ��һ�У�һ���ַ�
//������������ַ����ɵ������ν�����
//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	ch = getchar();
//	int i = 0;
//	for (i = 0;i < 5;i++)//��
//	{
//		int j = 0;
//		for (j = 0;j < 4-i;j++)//ÿ�пո�
//		{
//			printf(" ");
//		}
//		for (j = 0;j <= i ;j++)//��ÿ���ַ�
//		{
//			printf("%c ",ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//��7��ת������ASCII���Ӧ�ַ������
//73, 32, 99 ,97, 110, 32, 100, 111,32,105, 116, 33
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 73, 32, 99 ,97, 110, 32, 100, 111,32,105, 116, 33 };
//	size_t sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%c",arr[i]);
//	}
//	return 0;
//}


//��8������һ���˵ĳ������ڣ����������գ������������е��ꡢ�¡��շֱ����
//��������������ֻ��һ�У��������ڣ��������м������û�зָ���
//������������У���һ��Ϊ�꣬�ڶ���Ϊ�£�������Ϊ�ա�����ʱ����·ݻ�����Ϊ1λ������Ҫ��1λ��ǰ�油0
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%4d%2d%2d",&year,&month,&day);
//	printf("year=%d\n",year);
//	printf("month=%02d\n",month);
//	printf("day=%02d\n",day);
//	return 0;
//}


//��9����ʹ���ۼƳ˷��Ļ����ϣ�ͨ����λ���㣨<<��ʵ��2��n�η��ļ���
//�����������������룬ÿһ����������n(0 <= n < 31)
//������������ÿ�����������Ӧ��2��n�η��Ľ��
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//
//	while(scanf("%d", &n) != EOF)
//	{
//		printf("%d\n", 1 << n);
//	}
//	return 0;
//}


//��10�������������������������������
//��������������ֻ��һ�У����ո�ʽ���������������м���","�ָ�
//�����������������������ʽ������м���","�ָ�
//#include<stdio.h>
//int main()
//{
//	int n, m;
//	scanf("a=%d,b=%d",&n,&m);
//	int tmp = m;
//	m = n;
//	n = tmp;
//	printf("a=%d,b=%d",n,m);
//	return 0;
//}


//��11��
//����������һ�У�һ���ַ�
//���������һ�У���������ַ���Ӧ��ASCII��
//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	ch = getchar();
//	printf("%d\n",ch);
//	return 0;
//}


//��12��������ʽ"(-8+22)*a-10+c/2",a = 40,c = 212
//#include<stdio.h>
//int main()
//{
//	int a = 40;
//	int c = 212;
//	printf("%d\n", (-8 + 22) * a - 10 + c / 2);
//	return 0;
//}


//��13��������������a��b������a/b�������̺�����
//����������һ�У�������������a��b������Ϊ�������ͳ������м��ÿո����
//���������һ�У�������������������Ϊ�����̺��������м��ÿո����
#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d %d",&a,&b);
	printf("%d %d\n", a / b, a % b);
	return 0;
}
