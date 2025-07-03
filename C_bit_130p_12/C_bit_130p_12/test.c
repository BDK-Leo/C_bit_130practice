#define _CRT_SECURE_NO_WARNINGS 1
//bit C语言刷题第十二讲


//题目一：小乐乐查找数字
// 给定n个整数和一个整数x，小乐乐想从n个整数中判断x出现几次
//输入描述：共三行，第一行一个整数表示n(1<=n<=100)
//第二行，共输入n个整数，第三行，输入一个整数，表示要查找的整数x
//输出描述：一行，表示整数x出现的次数
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int arr[100] = {0};
//	int i = 0;
//	for (i = 0;i <n;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	int x = 0;
//	scanf("%d", &x);
//	int num = 0;
//	for (i = 0;i < n;i++)
//	{
//		if (arr[i] == x)
//		{
//			num++;
//		}
//	}
//	printf("%d\n",num);
//	return 0;
//}



//题目二：KiKi学程序设计基础
//输入描述：无
//输出描述：printf("Hello world!\n");
//        count << "Hello world!" << endl;
//#include<stdio.h>
//int main()
//{
//	printf("printf(\"Hello world!\\n\");\n");
//	printf("count << \"Hello world!\" << endl;\n");
//	return 0;
//}



//题目三：KiKi求质数的个数
//输入描述：无
//输出描述：一行，一个整数，表示所有三位整数中有多少质数
//方法一：
//#include<stdio.h>
//int Prime(int i)
//{
//	int j = 0;
//	for (j = 2;j <= i - 1;j++)
//	{
//		if (i%j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100;i < 1000;i++)
//	{
//		if (Prime(i) == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n",count);
//	return 0;
//}

//方法二：(最优解)
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 999; i+=2) 
//	{
//		int flag = 1; 
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)  
//		{
//			count++;
//		}
//	}
//	printf("%d\n",count);
//	return 0;
//}



//题目四：KiKi去重整数并排列
// 给定一个整数序列，把其中的重复的整数去掉并从小到大排序
//输入描述：第一行输入一个整数n,表示有n个整数,第二行输入n个整数(大于等于1，小于等于1000)
//输出描述：去重并从小到大排序输出
//方法一：暴力求解
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int arr[1000] = {0};
//	int i = 0;
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	for (i = 0;i < n - 1;i++)
//	{
//		int j = 0;
//		for (j = 0;j < n - 1 - i;j++)
//		{
//			if (arr[j] > arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0;i < n - 1;i++)
//	{
//		if (arr[i] == arr[i+1])
//		{
//			int k = 0;
//			for (k = i;k < n - 1;k++)
//			{
//				arr[k] = arr[k + 1];
//			}
//			n--;
//			i--;
//		}
//	}
//	for (i = 0;i < n;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//方法二：
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int arr[1001] = {0};
//	int i = 0;
//	int m = 0;
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d",&m);
//		arr[m] = m;
//	}
//	for (i = 0;i <= 1000;i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d ",arr[i]);
//		}
//	}
//	return 0;
//}