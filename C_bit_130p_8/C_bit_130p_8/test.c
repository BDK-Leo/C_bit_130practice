#define _CRT_SECURE_NO_WARNINGS 1
//bit C����ˢ��ڰ˽�


//��1��ƽ�����
//����������һ�У���������5�����(0.00~2.00)���ո�ָ�
//���������һ�У����ƽ����ߣ�������λС��
// ����һ��
//#include<stdio.h>
//int main()
//{
//	double high = 0.0;
//	int i = 0;
//	double sum = 0.0;
//	for (i = 0;i < 5;i++)
//	{
//		scanf("%lf",&high);
//		sum += high;
//	}
//	printf("%.2lf",sum/5.0);
//	return 0;
//}

//��������
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	double arr[5] = { 0 };
//	double sum = 0.0;
//	for (i = 0;i < 5;i++)
//	{
//		scanf("%lf",&arr[i]);
//	}
//	for (i = 0; i < 5; i++)
//	{
//		sum += arr[i];
//	}
//	printf("%.2lf", sum / 5.0);
//	return 0;
//}



//��2��HTTP״̬��
//�����������������룬һ������(100~600)����ʾHTTP״̬��
//������������ÿ��״̬�����Ӧ����
//200 - OK
//202 - Accepted
//400 - Bad Request
//403 - Forbidden
//404 - Not Found
//500 - Internal Server Error
//502 - Bad Gateway
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (~scanf("%d",&n))
//	{
//		switch (n)
//		{
//		case 200:
//			printf("OK\n");
//			break;
//		case 202:
//			printf("Accepted\n");
//			break;
//		case 400:
//			printf("Bad Request\n");
//			break;
//		case 403:
//			printf("Forbidden\n");
//			break;
//		case 404:
//			printf("Not Found\n");
//			break;
//		case 500:
//			printf("Internal Server Error\n");
//			break;
//		case 502:
//			printf("Bad Gateway\n");
//			break;
//		}
//	}
//	return 0;
//}



//��3������������
//�����������������룬һ������(3~20)����ʾ�����αߵĳ��ȣ�Ҳ��ʾ����
//������������ÿ�����룬�������������
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (~scanf("%d",&n))
//	{
//		for (int i = 1;i <= n;i++)
//		{
//			for (int j = 1;j <= i;j++)
//			{
//				printf("%d ",j);
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}



//��4������Ա����
// ���߸�������ȥ�������߷�Ȼ��ƽ��
//����������һ�У�����7������(0~100)
//���������һ�У����ȥ�������߷ֺ��ƽ���ɼ���С���������λ
//����һ��
//#include<stdio.h>
//int main()
//{
//	int i, j = 0;
//	double sum = 0.0;
//	int arr[7] = {0};
//	for (i = 0;i < 7;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	for (i = 0;i < 7 - 1;i++)
//	{
//		for (j = 0;j < 7 - 1 - i;j++)
//		{
//			if (arr[j] > arr[j+1])
//			{
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//	for (i = 0;i < 7;i++)
//	{
//		if (i == 0 || i == 6)
//		{
//			arr[i] = 0;
//		}
//		else
//		{
//			sum += arr[i];
//		}
//	}
//	printf("%.2lf",sum/5);
//	return 0;
//}

//��������
//#include<stdio.h>
//int main()
//{
//	int score = 0;
//	int i = 0;
//	int sum = 0;
//	int max = 0;
//	int min = 100;
//	for (i = 0;i < 7;i++)
//	{
//		scanf("%d",&score);
//		sum += score;
//		if (score>max)
//		{
//			max = score;
//		}
//		if (score<min)
//		{
//			min = score;
//		}
//	}
//	printf("%.2lf",(sum-max-min)/5.0);
//	return 0;
//}
