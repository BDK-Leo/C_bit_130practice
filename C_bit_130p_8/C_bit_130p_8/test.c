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



//��5���������в���һ����
//һ�������������У���С�������򣬽�һ��������������뵽�����к�������������
//������������һ������һ������(0<=N<=50)���ڶ�������N���������е���������������������һ������
//������������N+1���������е�����
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[n+1];
//	int m = 0;
//	int i = 0;
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	scanf("%d",&m);
//	for (i = n - 1;i >= 0;i--)
//	{
//		if (arr[i] > m)
//		{
//			arr[i + 1] = arr[i];
//		}
//		else
//		{
//			arr[i + 1] = m;
//			break;
//		}
//	}
//	if (i < 0)
//	{
//		arr[0] = m;
//	}
//	for (i = 0;i <= n;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}



//��6��ɸѡ��������
//��2~n֮������������������ڴ洢����������2֮��������ܱ�2����������0���ٽ�������3֮��������ܱ�2����������0
//�Դ����ƣ�ֱ��nΪֹ�������в�Ϊ0������Ϊ����
//�����������������룬ÿ������һ��������(������100)
//������������ÿ�����������n��������У���һ�����n֮��(����n)������
//�ڶ��У����������2֮��0�ĸ�����ÿ���������
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	while (~scanf("%d",&n))
//	{
//		int arr[n+1];
//		for (i = 2;i <= n;i++)
//		{
//			arr[i] = i;
//		}
//		int j = 0;
//		for (j = 2;j <= n;j++)
//		{
//			int k = 0;
//			for (k = j+1;k <= n;k++)
//			{
//				if (arr[k]%j == 0)
//				{
//					arr[k] = 0;
//				}
//			}
//		}
//		int count = 0;
//		for (i = 2;i <= n;i++)
//		{
//			if (arr[i])
//			{
//				printf("%d ",arr[i]);
//			}
//			else
//			{
//				count++;
//			}
//		}
//		printf("\n%d\n", count);
//	}
//	return 0;
}

