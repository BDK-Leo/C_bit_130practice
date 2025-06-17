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