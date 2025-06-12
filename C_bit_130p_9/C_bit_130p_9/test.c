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



//题2：密码验证
// 一致输出"same",不一致输出"different"
//输入描述：空格分隔开的字符串，依次为密码和重复密码
//输出描述：输出same或different
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



//题3：矩阵计算
// 输入N * M的矩阵，矩阵元素均为整数，计算其中大于0的元素之和
//输入描述：N:行数 M:列数，且N,M<=10
//输出描述：一行，大于0的元素之和
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



//题4：逆序输出
// 输入10个数，逆序打印出来
//输入描述：一行，输入10个整数，空格分隔
//输出描述：一行，逆序打印10个整数，空格分隔
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



//题5：统计数据正负个数
// 输入10个整数，分别统计正数负数的个数
//输入描述：输入10个整数，空格分隔
//输出描述：两行，第一行正数个数，第二行负数个数
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



//题6：最高分和最低分之差
// 输入n个成绩，换行输出n个成绩中最高分数和最低分数的差
//输入描述：两行，第一行表示n个成绩，第二行为具体成绩(整数，0~100)
//输出描述：一行，输出差
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