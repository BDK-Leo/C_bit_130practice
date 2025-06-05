#define _CRT_SECURE_NO_WARNINGS 1
//bit C语言刷题第七讲

//题1：翻转直角三角形图案
//输入描述：多组输入，一个整数(2~20)，表示翻转直角三角形直角边的长度，即"*"的数量，也表示输出行数
//输出描述：输出对应三角形
//#include<stdio.h>
//int main()
//{
//	int n,i,j;
//	while (~scanf("%d",&n))
//	{
//		while (n)
//		{
//			for (i = 0;i < n;i++)
//			{
//				for (j = 0;j < n;j++)
//				{
//					printf("* ");
//				}
//				n--;
//				printf("\n");
//			}
//		}
//	}
//	return 0;
//}
 
 

//题2：带空格的直角三角形
//输入描述：多组输入(2~20)
//输出描述：输出对应三角形
//方法一：
//#include<stdio.h>
//int main()
//{
//	int n, i, j;
//	while(~scanf("%d",&n))
//	{
//		for (i = 0;i < n;i++)
//		{
//			for (j = 0;j < n - 1 - i;j++)
//			{
//				printf("  ");
//			}
//			for (j = 0;j <= i;j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}

//方法二：
//#include<stdio.h>
//int main()
//{
//	int n, i, j;
//	while (~scanf("%d",&n))
//	{
//		for (i = 0;i < n;i++)
//		{
//			for (j = 0;j < n;j++)
//			{
//				if (i+j<n-1)
//				{
//					printf("  ");
//				}
//				else
//				{
//					printf("* ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}


//
 
 
 
//闪电
//#include<stdio.h>
//int main()
//{
//	int n,i,j,m;
//	while (~scanf("%d",&n))
//	{
//		while (n)
//		{
//			for (i = 0;i < n;i++)
//			{
//				for (j = n - i;j > 0;j--)
//				{
//					printf(" ");
//				}
//				for (m = 1; m <= n; m++)
//				{
//					printf("*");
//				}
//				printf("\n");
//			}
//			n--;
//		}
//	}
//	return 0;
//}
