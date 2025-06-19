#define _CRT_SECURE_NO_WARNINGS 1
//bit C语言刷题第十讲

//题目一：班级成绩输入输出
// 输入一个班级5个学生各5科成绩，输出5个学生各5科成绩及总分
//输入描述：五行，每行输入一个学生各5科成绩(浮点数，0.0~100.0)，空格分隔
//输出描述：五行，按顺序输出一个学生各5科成绩及总分(小数点保留一位)
//#include<stdio.h>
//int main()
//{
//	double score[5] = {0};
//	int i = 0;
//	for (i = 0;i < 5;i++)
//	{
//		int j = 0;
//		double sum = 0;
//		for (j = 0;j < 5;j++)
//		{
//			scanf("%lf", &score[j]);
//			sum += score[j];
//		}
//		for (j = 0;j < 5;j++)
//		{
//			printf("%.1lf ",score[j]);
//		}
//		printf("%.1lf\n",sum);
//	}
//	return 0;
//}



//题目二：矩阵元素的定位
// 一个n行m列的矩阵，现在想知道第x行第y列的值是多少
//输入描述：第一行包含两个数n和m，表示这个矩阵包含n行m列。从2到n + 1行，
//每行输入m个整数（范围 - 231~231 - 1），用空格分隔，
//共输入n * m个数，表示矩阵中的元素。
//接下来一行输入x和y，用空格分隔，
//表示KiKi想得到的元素的位置。(1≤x≤n≤10，1≤y≤m≤10)
//输出描述：一行，输出一个整数值，为KiKi想知道的值。
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d",&n,&m);
//	int arr[10][10] = {0};
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < n;i++)
//	{
//		for (j = 0;j < m;j++)
//		{
//			scanf("%d",&arr[i][j]);
//		}
//	}
//	int x = 0;
//	int y = 0;
//	scanf("%d %d",&x,&y);
//	printf("%d\n",arr[x-1][y-1]);
//	return 0;
//}



//题目三：序列重组矩阵
//一个包含n*m个数的整数序列，把这n*m个数按顺序规划成一个n行m列的矩阵并输出
//输入描述：一行，输入两个整数n和m，用空格分隔，第二行包含n*m个整数（范围-231~231-1）(1≤n≤10, 1≤m≤10)
//输出描述：输出规划后n行m列的矩阵，每个数的后面有一个空格
// 方法一：
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d",&n,&m);
//	int i = 0;
//	int j = 0;
//	int arr[10][10] = { 0 };
//	for (i = 0;i < n;i++)
//	{
//		for (j = 0;j < m;j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//方法二：
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int j = 0;
//	int arr[10][10] = { 0 };
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//方法三：
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d",&n,&m);
//	int i = 0;
//	int tmp = 0;
//	for (i = 1;i <=n*m;i++)
//	{
//		scanf("%d",&tmp);
//		printf("%d ",tmp);
//		if (i%m == 0)
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//}



//题目四：最高身高
// 从n行m列的方阵队列中找到身高最高的人的位置
//输入描述：第一行包含两个整数n和m，表示这个方阵包含n行m列；
//从2到n+1行，每行输入m个整数,空格分隔，共输入n*m个数，表示方阵中的所有人的身高(输入身高各不相同)
//(1<=x<=n<=10,1<=y<=m<=10)
//输出描述：一行，输出两个整数，空格分隔，表示位置的行号和列号
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d",&n,&m);
//	int high[10][10] = {0};
//	int i = 0;
//	int j = 0;
//	int max = 0;
//	for (i = 0;i < n;i++)
//	{
//		for (j = 0;j < m;j++)
//		{
//			scanf("%d",&high[i][j]);
//			if (high[i][j] > max)
//			{
//				max = high[i][j];
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			if (high[i][j] == max)
//			{
//				printf("%d %d", i + 1, j + 1);
//			}
//		}
//	}
//	return 0;
//}



//题目五：矩阵相等判断
// 判断两个n行m列的矩阵是否相等
//输入描述：第一行包含两个整数n和m，表示两个矩阵包含n行m列。从2到n+1行，每行输入m个整数
//共输入n*m个数，表示第一个矩阵中的元素。从n+2行到2n+1，每行输入m个整数,共输入n*m个数，表示第二个矩阵中的元素。
//1<n,m<10.
//输出描述：一行，如果相等输出"Yes\n",否则输出"No\n"
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%d %d",&n,&m);
//	int i = 0;
//	int j = 0;
//	int arr1[10][10] = {0};
//	int arr2[10][10] = {0};
//	for (i = 0;i < n;i++)
//	{
//		for (j = 0;j < m;j++)
//		{
//			scanf("%d",&arr1[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr2[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			if (arr1[i][j] != arr2[i][j])
//			{
//				printf("No\n");
//				return 0;
//			}
//		}
//	}
//	printf("Yes\n");
//	return 0;
//}



//题目六：上三角矩阵判断
// 判断一个n阶方矩是否为上三角矩阵。上三角矩阵即主对角线以下的元素都为0的矩阵，
// 主对角线为从矩阵的左上角至右下角的连线。
//输入描述：第一行包含一个整数n，表示一个方阵包含n行n列。(1<=n<=10)从2到n+1行，每行输入n个整数，共输入n*n个数
//输出描述：一行，如果输入方阵是上三角矩阵输出"YES\n",否则"NO\n"
//#include<stdio.h>
//int main() 
//{
//	int n = 0;
//	scanf("%d",&n);
//	int arr[10][10] = {0};
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < n;i++)
//	{
//		for (j = 0;j < n;j++)
//		{
//			scanf("%d",&arr[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (i > j)
//			{
//				if (arr[i][j] != 0)
//				{
//					printf("NO\n");
//					return 0;
//				}
//			}
//		}
//	}
//	printf("YES\n");
//	return 0;
//}