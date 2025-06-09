#define _CRT_SECURE_NO_WARNINGS 1
//bit C语言刷题第八讲


//题1：平均身高
//输入描述：一行，连续输入5个身高(0.00~2.00)，空格分隔
//输出描述：一行，输出平均身高，保留两位小数
// 方法一：
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

//方法二：
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



//题2：HTTP状态码
//输入描述：多组输入，一个整数(100~600)，表示HTTP状态码
//输出描述：针对每组状态输出对应含义
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
