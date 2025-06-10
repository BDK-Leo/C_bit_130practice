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
//}

//素数试除法
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	while (~scanf("%d",&n))
//	{
//		int i = 0;
//		int count = 0;
//		for (i = 2;i <= n;i++)
//		{
//			int j = 0;
//			for (j = 2;j < i;j++)
//			{
//				if (i%j == 0)
//				{
//					count++;
//					break;
//				}
//			}
//			if (j == i)
//			{
//				printf("%d ",j);
//			}
//		}
//		printf("\n%d\n",count);
//	}
//	return 0;
//}



//题7：图像相似度
//输入描述：给出两幅相同大小的黑白图像(用0-1矩阵)表示，求它们的相似度
//1<=m<=100,1<=n<=100,之后m行，每行n个整数0或1，表示第一幅图像上各像素点的颜色
//相邻两个数用单个空格隔开，之后m行，每行n个整数0或1，表示第二幅图像上各像素点的颜色
//输出描述：一个实数，表示相似度(百分比的形式给出)，精确到小数点后两位
//#include<stdio.h>
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d %d",&m,&n);
//	int arr1[100][100] = {0};
//	int arr2[100][100] = {0};
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 0;i < m;i++)
//	{
//		for (j = 0;j < n;j++)
//		{
//			scanf("%d", &arr1[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (arr1[i][j] == arr2[i][j])
//			{
//				count++;
//			}
//		}
//	}
//	printf("%.2f\n", 100.0*count/(m*n));
//	return 0;
//}



//题8：验证登录(用户名：admin，密码：admin)
//输入描述：多组输入，第一个为用户名，第二个为密码
//输出描述：判断后输出"Login Success!"或"Login Fail!"
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char arr1[100] = {0};
//	char arr2[100] = {0};
//	while (~scanf("%s %s",&arr1,&arr2))
//	{
//		if ((strcmp(arr1, "admin") == 0) && (strcmp(arr2, "admin") == 0))
//		{
//			printf("Login Success!\n");
//		}
//		else
//		{
//			printf("Login Fail!\n");
//		}
//	}
//	return 0;
//}



//题9：包含数字9的数，1~2019中有多少个包含数字9的数
//输出描述：一行，一个整数
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1;i <= 2019;i++)
//	{
//		int m = i;
//		while (m)
//		{
//			if (m % 10 == 9)
//			{
//				count++;
//				break;
//			}
//				m /= 10;
//		}
//	}
//	printf("%d\n",count);
//	return 0;
//}



//题10：奇偶统计
// 任意输入一个正整数N,统计1~N之间奇数的个数和偶数的个数
//输入描述：一行，一个正整数N(1<=N<=100000)
//输出描述：一行，1~N之间奇数的个数和偶数的个数
//方法一：
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int count_1 = 0;
//	int count_2 = 0;
//	scanf("%d",&n);
//	for (i = 1;i <= n;i++)
//	{
//		if (i%2 == 1)
//		{
//			count_1++;
//		}
//		else if (i%2 == 0)
//		{
//			count_2++;
//		}
//	}
//	printf("%d %d",count_1,count_2);
//	return 0;
//}

//方法二：
#include<stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	if (n % 2 == 1)
	{
		printf("%d %d",n/2+1,n/2);
	}
	else
	{
		printf("%d %d",n/2,n/2);
	}
	return 0;
}