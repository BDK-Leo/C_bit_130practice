#define _CRT_SECURE_NO_WARNINGS 1
//bit C����ˢ��ھŽ�


//��1���ɼ�ͳ��
// ����n�Ƴɼ�(��������ʾ)��ͳ�����е���߷֣���ͷּ�ƽ����
//�������������У���һ�У�������n(1<=n<=100);�ڶ��У�n�Ƴɼ�(0.0~100.0)���ո�ָ�
//���������һ����������������ߣ���ͣ�ƽ��(С���������λ)���ո�ָ�
//����һ��
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	double sum = 0.0;
//	double arr[100] = {0};
//	scanf("%d",&n);
//	for (int i = 0;i < n;i++)
//	{
//		scanf("%lf",&arr[i]);
//		sum += arr[i];
//	}
//	for (int i = 0;i < n - 1;i++)
//	{
//		for (int j = 0;j < n - 1 - i;j++)
//		{
//			if (arr[j] > arr[j+1])
//			{
//				double tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//	printf("%.2lf %.2lf %.2lf",arr[n - 1],arr[0],sum/n);
//	return 0;
//}

//��������
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	double sum = 0.0;
//	double score = 0.0;
//	double max = 0.0;
//	double min = 100.0;
//	scanf("%d", &n);
//	for (int i = 0; i < n; i++)
//	{
//		scanf("%lf", &score);
//		sum += score;
//		if (score > max)
//		{
//			max = score;
//		}
//		if (score < min)
//		{
//			min = score;
//		}
//	}
//	printf("%.2lf %.2lf %.2lf", max, min, sum / n);
//	return 0;
//}



//��2��������֤
// һ�����"same",��һ�����"different"
//�����������ո�ָ������ַ���������Ϊ������ظ�����
//������������same��different
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[100] = {0};
//	char arr2[100] = {0};
//	scanf("%s %s",arr1,arr2);
//	int r = strcmp(arr1,arr2);
//	if (r == 0)
//	{
//		printf("same\n");
//	}
//	else
//	{
//		printf("different\n");
//	}
//	return 0;
//}



//��3���������
// ����N * M�ľ��󣬾���Ԫ�ؾ�Ϊ�������������д���0��Ԫ��֮��
//����������N:���� M:��������N,M<=10
//���������һ�У�����0��Ԫ��֮��
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int num = 0;
//	int sum = 0;
//	scanf("%d %d",&n,&m);
//	for (int i = 0;i < n;i++)
//	{
//		for (int j = 0;j < m;j++)
//		{
//			scanf("%d",&num);
//			if (num>0)
//			{
//				sum += num;
//			}
//		}
//	}
//	printf("%d\n",sum);
//	return 0;
//}



//��4���������
// ����10�����������ӡ����
//����������һ�У�����10���������ո�ָ�
//���������һ�У������ӡ10���������ո�ָ�
//#include<stdio.h>
//int main()
//{
//	int arr[10] = {0};
//	for (int i = 0;i < 10;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	for (int i = 9;i >= 0;i--)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}



//��5��ͳ��������������
// ����10���������ֱ�ͳ�����������ĸ���
//��������������10���������ո�ָ�
//������������У���һ�������������ڶ��и�������
//#include<stdio.h>
//int main()
//{
//	int arr[10] = {0};
//	int positive = 0;
//	int negative = 0;
//	for (int i = 0;i < 10;i++)
//	{
//		scanf("%d",&arr[i]);
//		if (arr[i] > 0)
//		{
//			positive++;
//		}
//		else if (arr[i] < 0)
//		{
//			negative++;
//		}
//	}
//	printf("positive:%d\nnegative:%d", positive, negative);
//	return 0;
//}



//��6����߷ֺ���ͷ�֮��
// ����n���ɼ����������n���ɼ�����߷�������ͷ����Ĳ�
//�������������У���һ�б�ʾn���ɼ����ڶ���Ϊ����ɼ�(������0~100)
//���������һ�У������
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int score = 0;
//	int max = 0;
//	int min = 100;
//	scanf("%d",&n);
//	for (int i = 0;i < n;i++)
//	{
//		scanf("%d",&score);
//		if (score > max)
//		{
//			max = score;
//		}
//		if (score < min)
//		{
//			min = score;
//		}
//	}
//	printf("%d\n",max-min);
//	return 0;
//}