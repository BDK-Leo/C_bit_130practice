#define _CRT_SECURE_NO_WARNINGS 1
//bit C语言刷题第四讲

//题1：时间转换
//给定秒数，把秒转化成小时、分钟和秒
//输入描述：一行，包括一个整数，即给定的秒数
//输出描述：一行，包含三个整数，依次为输入整数对应的小时数，分钟数和秒数（可能为0），中间空格隔开
//#include<stdio.h>
//int main()
//{
//	int seconds, h, m, s;
//	scanf("%d",&seconds);
//	h = seconds / 60 / 60;
//	m = seconds / 60 % 60;
//	s = seconds % 60;
//	printf("%d %d %d\n",h,m,s);
//	return 0;
//}


//题2：依次输入一个学生的3科成绩，在屏幕上输出该学生的总成绩以及平均成绩
//输入描述：一行，3科成绩，成绩之间用一个空格隔开
//输出描述：一行，总成绩和平均成绩（小数点后保留两位），用一个空格隔开
//#include<stdio.h>
//int main()
//{
//	double a, b, c;
//	scanf("%lf %lf %lf",&a,&b,&c);
//	double n = a + b + c;
//	double m = n / 3.0;
//	printf("%.2lf %.2lf\n",n,m);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	double score = 0.0;
//	double sum = 0.0;
//	for (int i = 0;i < 3;i++)
//	{
//		scanf("%lf",&score);
//		sum += score;
//	}
//	printf("%.2lf %.2lf\n",sum,sum/3);
//	return 0;
//}


//题3：有n盒酸奶，每h分钟喝光一盒，过m分钟后还有多少盒没打开的酸奶
//输入描述:多组输入，每组输入仅一行，包括n,h,m(均为整数)，输入数据保证m<= n*h
//输出描述:针对每组输入，输出仅一行
//#include<stdio.h>
//int main()
//{
//	int n, h, m;
//	while (scanf("%d %d %d",&n,&h,&m) != EOF)
//	{
//		if (m%h)
//		{ 
//          printf("%d\n", n - m / h - 1);
//		}
//		else
//		{
//			printf("%d\n",n-m/h);
//		}
//	}
//	return 0;
//}


//题4：输入5个整数，求平均数（保留一位小数）
//输入描述：一行，连续输入5个整数，空格分隔
//输出描述：一行，平均数（保留一位小数）
//#include<stdio.h>
//int main()
//{
//	int num[5] = {0};
//	double sum = 0.0;
//	for (int i = 0;i < 5;i++)
//	{
//		scanf("%d",&num[i]);
//		sum += num[i];
//	}
//	printf("%.1lf\n",sum/5);
//	return 0;
//}


//题5：输入一个十六进制数a,和一个八进制数b，输出a+b的十进制结果
//输入描述：一行，一个十六进制数a，和一个八进制数b，中间间隔一个空格
//输出描述：一行，a+b的十进制结果
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int m = 0;
//	scanf("%x %o",&n,&m);
//	printf("%d\n",n+m);
//	return 0;
//}


//题6：双11打7折，双12打8折，有优惠券额外减50（只能双11和双12用），最终花多少元子
//输入描述：一行，四个数字，第一个数表示看中的价格，第二第三表示月日，第四表示是否有优惠券（1有0无）
//输出描述：一行，实际花钱数（保留两位小数）
//#include<stdio.h>
//int main()
//{
//	double price = 0.0;
//	int m, d;
//	int flag = 0;
//	double cut = 0.0;
//	double last = 0.0;
//	scanf("%lf %d %d %d",&price,&m,&d,&flag);
//	if (m == 11 && d == 11)
//	{
//		cut = 0.7;
//	}
//	else if (m == 12 && d == 12)
//	{
//		cut = 0.8;
//	}
//	last = price * cut - flag * 50;
//
//	if (last < 0.0)
//	{
//		printf("%.2lf\n", 0.0);
//	}
//	else
//		printf("%.2lf\n",last);
//	return 0;
//}


//题7：输入n个成绩，输出每组前五的成绩
//输入描述：两行，第一行输入一个整数，表示n个学生（>=5）,第二行输入n个学生成绩，空格分隔
//输出描述：一行，输出成绩最高的前五个，空格分隔
//#include<stdio.h>
//
//void input(int* arr,int n)
//{
//	for (int i = 0;i < n;i++)
//	{
//		scanf("%d",arr+i);
//	}
//}
//
//void bubble_arr(int* arr,int n)
//{
//	for (int i = 0;i < n - 1;i++)
//	{
//		int flag = 1;
//		for (int j = 0;j < n - 1 - i;j++)
//		{
//			if (arr[j] < arr[j+1])
//			{
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//				flag = 0;
//			}
//		}
//		if (flag == 1)
//		{
//			break;
//		}
//	}
//}
//
//void print_arr(int* arr)
//{
//	for (int i = 0;i < 5;i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//}
//
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int arr[n];
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	input(arr,n);
//	bubble_arr(arr,n);//冒泡
//	print_arr(arr);
//	return 0;
//}

//#include<stdio.h>
//#include<stdlib.h>
//
//int cmp_int(const void* e1,const void* e2)
//{
//
//	return *(int*)e2 - *(int*)e1;
//}
//
//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int arr[n];
//	for (int i = 0;i < n;i++)
//	{
//		scanf("%d",arr+i);
//	}
//	qsort(arr, n, 4, cmp_int);//qsort
//	for (int i = 0;i < 5;i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	return 0;
//}
//
//