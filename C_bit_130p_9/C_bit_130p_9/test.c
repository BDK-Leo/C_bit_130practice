#define _CRT_SECURE_NO_WARNINGS 1
//bit C语言刷题第九讲


//题1：成绩统计
// 输入n科成绩(浮点数表示)，统计其中的最高分，最低分及平均分
//输入描述：两行，第一行，正整数n(1<=n<=100);第二行，n科成绩(0.0~100.0)，空格分隔
//输出描述：一行三个浮点数，最高，最低，平均(小数点后保留两位)，空格分隔
//方法一：
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

//方法二：
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
