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