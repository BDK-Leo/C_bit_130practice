#define _CRT_SECURE_NO_WARNINGS 1
//bit C����ˢ���ʮ����


//��Ŀһ��С���ֲ�������
// ����n��������һ������x��С�������n���������ж�x���ּ���
//���������������У���һ��һ��������ʾn(1<=n<=100)
//�ڶ��У�������n�������������У�����һ����������ʾҪ���ҵ�����x
//���������һ�У���ʾ����x���ֵĴ���
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int arr[100] = {0};
//	int i = 0;
//	for (i = 0;i <n;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	int x = 0;
//	scanf("%d", &x);
//	int num = 0;
//	for (i = 0;i < n;i++)
//	{
//		if (arr[i] == x)
//		{
//			num++;
//		}
//	}
//	printf("%d\n",num);
//	return 0;
//}



//��Ŀ����KiKiѧ������ƻ���
//������������
//���������printf("Hello world!\n");
//        count << "Hello world!" << endl;
//#include<stdio.h>
//int main()
//{
//	printf("printf(\"Hello world!\\n\");\n");
//	printf("count << \"Hello world!\" << endl;\n");
//	return 0;
//}



//��Ŀ����KiKi�������ĸ���
//������������
//���������һ�У�һ����������ʾ������λ�������ж�������
//����һ��
//#include<stdio.h>
//int Prime(int i)
//{
//	int j = 0;
//	for (j = 2;j <= i - 1;j++)
//	{
//		if (i%j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100;i < 1000;i++)
//	{
//		if (Prime(i) == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n",count);
//	return 0;
//}

//��������(���Ž�)
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 999; i+=2) 
//	{
//		int flag = 1; 
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)  
//		{
//			count++;
//		}
//	}
//	printf("%d\n",count);
//	return 0;
//}

