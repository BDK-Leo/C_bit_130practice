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



//题三：翻转金字塔
//输入描述：多组输入(2~20)
//输出描述：输出对应金字塔
//#include<stdio.h>
//int main()
//{
//	int n,i,j;
//	while (~scanf("%d",&n))
//	{
//		for (i = 0;i < n;i++)
//		{
//			for (j = 0;j < i;j++)
//			{
//				printf(" ");
//			}
//			for (j = 0;j < n - i;j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}



//题4：菱形图案
//输入描述：多组输入，一个整数（2~20）
//输出描述：输出用"*"组成的菱形
//#include<stdio.h>
//int main()
//{
//	int n,i,j;
//	while (~scanf("%d",&n))
//	{
//		for (i = 0;i < n;i++)
//		{
//			for (j = 0;j < n - i;j++)
//			{
//				printf(" ");
//			}
//			for (j = 0;j <= i;j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//		for (i = 0; i < n+1; i++)
//		{
//			for (j = 0;j < i;j++)
//			{
//				printf(" ");
//			}
//			for (j = 0;j <= n - i;j++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}



//题5：K形图案
//输入描述：多组输入，一个整数（2~20）
//输出描述：输出用"*"组成的K形
// 注意：每一行后面有对应的空格，将空格转换成可见符号可知
//#include<stdio.h>
//int main()
//{
//	int n, i, j;
//	while (~scanf("%d",&n))
//	{
//		for (i = 0;i < n;i++)
//		{
//			for (j = 0;j <= n-i;j++)
//			{
//				printf("* ");
//			}
//			for (j = 0;j < i;j++)
//			{
//				printf(" ");
//			}
//			printf("\n");
//		}
//		for (i = 0;i < n+1;i++)
//		{
//			for (j = 0; j <= i; j++)
//			{
//				printf("* ");
//			}
//			for (j = 0; j < n - i; j++)
//			{
//				printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}



//题6：箭形图案
//输入描述：多组输入，一个整数（2~20）
//输出描述：输出用"*"组成的箭形
//#include<stdio.h>
//int main()
//{
//	int n, i, j;
//	while (~scanf("%d",&n))
//	{
//		for (i = 0;i < n;i++)
//		{
//			for (j = 0;j < 2*(n-i);j++)
//			{
//				printf(" ");
//			}
//			for (j = 0;j <= i;j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//		for (i = 0; i <= n; i++)
//		{
//			for (j = 0; j < 2 * i; j++)
//			{
//				printf(" ");
//			}
//			for (j = 0; j <= n - i; j++)
//			{
//				printf("*");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}



//题7：反斜线形图案
//输入描述：多组输入，一个整数（2~20）
//输出描述：输出用"*"组成的反斜线
//注意：每行后有对应的空格
//方法一：
//#include<stdio.h>
//int main()
//{
//	int n, i, j;
//	while (~scanf("%d",&n))
//	{
//		for (i = 0;i < n;i++)
//		{
//			for (j = 0;j < i;j++)
//			{
//				printf(" ");
//			}
//			printf("*");
//			for (j = 0;j < n - i - 1;j++)
//			{
//				printf(" ");
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
//	while (~scanf("%d", &n))
//	{
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0;j < n;j++)
//			{
//				if (i == j)
//				{
//					printf("*");
//				}
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}



//题8：正斜线形图案
//输入描述：多组输入，一个整数（2~20）
//输出描述：输出用"*"组成的正斜线
//#include<stdio.h>
//int main()
//{
//	int n, i, j;
//	while (~scanf("%d", &n))
//	{
//		for (i = 0; i < n; i++)
//		{
//			for (j = 0;j < n;j++)
//			{
//				if (i+j == n - 1)
//				{
//					printf("*");
//				}
//				else
//					printf(" ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}



//题9：X形图案
//输入描述：多组输入，一个整数（2~20）
//输出描述：输出用"*"组成的X
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
//				if (i == j)
//				{
//					printf("*");
//				}
//				else if (i+j == n - 1)
//				{
//					printf("*");
//				}
//				else
//				{
//					printf(" ");
//				}
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}



//题10：空心正方形图案
//输入描述：多组输入，一个整数（2~20）
//输出描述：输出用"*"组成的空心正方形
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
//				if ((i == 0) || (i == n - 1))
//				{
//					printf("* ");
//				}
//				else if ((j == 0) || (j == n - 1))
//				{
//					printf("* ");
//				}
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}



//题11：空心三角形
//输入描述：多组输入，一个整数（3~20）
//输出描述：输出用"*"组成的空心三角形
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
//				if ((j == 0) || (i == n - 1) || (i == j))
//				{
//					printf("* ");
//				}
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}



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
