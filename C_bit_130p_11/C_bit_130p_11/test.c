#define _CRT_SECURE_NO_WARNINGS 1
//bit C语言刷题第十一讲


//题目一：小乐乐与进制转换
// 一个数转换为六进制
//输入描述：输入一个正整数n(1<=n<=10^9)
//输出描述：输出一行，为正整数n表示为六进制的结果
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	int arr[30] = {0};
//	scanf("%d",&n);
//	int i = 0;
//	while (n)
//	{
//		arr[i] = n % 6;
//		i++;
//		n /= 6;
//	}
//	for (i--;i>=0;i--)
//	{
//		printf("%d",arr[i]);
//	}
//	return 0;
//}



//题目二：小乐乐求和(求和符号)
//输入描述：输入一个正整数n(1<=n<=10^9)
//输出描述：输出一个值为求和结果
// 方法一：
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int i = 0;
//	long long sum = 0;
//	for (i = 0;i < n;i++)
//	{
//		sum += i + 1;
//	}
//	printf("%lld",sum);
//	return 0;
//}

//方法二：
//#include<stdio.h>
//int main()
//{
//	long long n = 0;
//	scanf("%lld",&n);
//	long long sum = 0;
//	sum = (1 + n) * n / 2;
//	printf("%lld",sum);
//	return 0;
//}



//题目三：小乐乐定闹钟(只考虑时和分)
//输入描述：输入现在的时刻以及要睡的时长K(单位：minute)
// 输入格式：hour:minute K(0<=hour<=23,0<=minute<=59,1<=K<=10^9)
//输出描述：输出闹钟应该设定的时刻，输出格式为标准时刻表示法
//#include<stdio.h>
//int main()
//{
//	int h = 0;
//	int m = 0;
//	int k = 0;
//	scanf("%d:%d %d",&h,&m,&k);
//	h = ((m + k) / 60 + h) % 24;
//	m = (m + k) % 60;
//	printf("%02d:%02d\n",h,m);
//	return 0;
//}



//题目四：小乐乐排电梯
// 前面有n人在排，电梯每次12人，每次上2分钟，下2分钟，计算还需多少分钟可以乘电梯到楼上(假设最初电梯在1层)
//输入描述：输入一个整数n(0<=n<=10^9)
//输出描述：输出一个整数，即到达楼上需要的时间
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	printf("%d", (n / 12) * 4 + 2);
//	return 0;
//}



//题目五：小乐乐与欧几里得
// 求两个整数的最大公约数和最小公倍数之和
//输入描述：n,m(1<=n<=109,1<=m<=109)
//输出描述：输出一个正整数，为n和m的最大公约数和最小公倍数之和
//方法一：暴力求解
//#include<stdio.h>
//int main()
//{
//	long long n = 0;
//	long long m = 0;
//	scanf("%lld %lld",&n,&m);
//	long long max = n > m ? m : n;//最大公约数
//	while (1)
//	{
//		if (n % max == 0 && m % max == 0)
//		{
//			break;
//		}
//		max--;
//	}
//	long long min = n > m ? n : m;//最小公倍数
//	while (1)
//	{
//		if (min%n==0 && min%m==0)
//		{
//			break;
//		}
//		min++;
//	}
//	printf("%lld\n",max+min);
//	return 0;
//}

//方法二：辗转相除法
//#include<stdio.h>
//int main()
//{
//	long long n = 0;
//	long long m = 0;
//	scanf("%lld %lld",&n,&m);
//	long long n1 = n;
//	long long m1 = m;
//	long long max = 0;
//	long long min = 0;
//	long long tmp = 0;
//	while (tmp=n%m)
//	{
//		n = m;
//		m = tmp;
//	}
//	max = m;
//	min = n1 * m1 / max;
//	printf("%lld\n",max+min);
//	return 0;
//}



//题目六：
//
//
