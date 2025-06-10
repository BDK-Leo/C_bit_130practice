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



//题3：数字三角形
//输入描述：多组输入，一个整数(3~20)，表示三角形边的长度，也表示行数
//输出描述：针对每行输入，输出数字三角形
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



//题4：公务员面试
// 打七个分数，去掉最低最高分然后平均
//输入描述：一行，输入7个整数(0~100)
//输出描述：一行，输出去掉最低最高分后的平均成绩，小数点后保留两位
//方法一：
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

//方法二：
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



//题5：有序序列插入一个数
//一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中后，序列仍是升序
//输入描述：第一行输入一个整数(0<=N<=50)，第二行输入N个升序排列的整数，第三行输入插入的一个整数
//输出描述：输出N+1个有序排列的整数
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



//题6：筛选法求素数
//将2~n之间的正整数放在数组内存储，将数组中2之后的所有能被2整除的数清0，再将数组中3之后的所有能被2整除的数清0
//以此类推，直到n为止。数组中不为0的数即为素数
//输入描述：多组输入，每行输入一个正整数(不大于100)
//输出描述：针对每行输入的整数n，输出两行，第一行输出n之内(包括n)的素数
//第二行，输出数组中2之后0的个数，每行输出后换行
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

