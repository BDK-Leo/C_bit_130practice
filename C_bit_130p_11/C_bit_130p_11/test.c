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

//方法三：更相减损术1
//#include<stdio.h>
//long long gcd(long long a,long long b)
//{
//	if (a == b)
//	{
//		return a;
//	}
//	else if (a < b)
//	{
//		return gcd(b - a,a);
//	}
//	else
//	{
//		return gcd(a - b,b);
//	}
//}
//
//int main()
//{
//	long long n = 0;
//	long long m = 0;
//	scanf("%lld %lld",&n,&m);
//	long long max = 0;
//	long long min = 0;
//	max = gcd(n,m);
//	min = n * m / max;
//	printf("%lld\n",max+min);
//	return 0;
//}

//方法三：更相减损术2
//#include<stdio.h>
//int main()
//{
//	long long n = 0;
//	long long m = 0;
//	scanf("%lld %lld",&n,&m);
//	long long a = n;
//	long long b = m;
//	while (a != b)
//	{
//		if (a > b)
//		{
//			a -= b;
//		}
//		else
//		{
//			b -= a;
//		}
//	}
//	printf("%lld",a+n*m/a);
//	return 0;
//}

//方法四：更相减损术和移位结合
//#include<stdio.h>
//long long gcd(long long a, long long b) 
//{
//    if (a < b) 
//    {
//        a = a ^ b;
//        b = a ^ b;
//        a = a ^ b;
//    }
//    if (a == b) 
//    {
//        return a;
//    }
//    if (!(a & 1) && !(b & 1)) 
//    {
//        return gcd(a >> 1, b >> 1) << 1;
//    }
//    else if (!(a & 1) && (b & 1)) 
//    {
//        return gcd(a >> 1, b);
//    }
//    if ((a & 1) && !(b & 1)) 
//    {
//        return gcd(a, b >> 1);
//    }
//    else 
//    {
//        return  gcd(a - b, b);
//    }
//}
//
//int main()
//{
//    long long n, m;
//    scanf("%lld %lld", &n, &m);
//    printf("%lld\n",n * m / gcd(n, m)+ gcd(n, m));
//    return 0;
//}

//方法四：更相减损术和移位结合2
//#include <stdio.h>
//// 使用更相减损术和移位结合计算最大公约数
//long long gcd(long long a, long long b)
//{
//    if (a == 0)
//        return b;
//    if (b == 0)
//        return a;
//
//    // 找到 a 和 b 的共同因子 2 的次数
//    int shift = 0;
//    while (((a | b) & 1) == 0)
//    { // 同时为偶数
//        a >>= 1;
//        b >>= 1;
//        shift++;
//    }
//
//    while ((a & 1) == 0)
//    { // a 为偶数
//        a >>= 1;
//    }
//
//    // 使用更相减损术
//    while (b != 0)
//    {
//        while ((b & 1) == 0)
//        { // b 为偶数
//            b >>= 1;
//        }
//        if (a > b)
//        {
//            long long temp = a;
//            a = b;
//            b = temp;
//        }
//        b = b - a; // 相减
//    }
//
//    // 恢复共同因子 2 的次数
//    return a << shift;
//}
//
//int main() {
//    long long num1, num2;
//    scanf("%lld %lld", &num1, &num2);
//    long long result = gcd(num1, num2);
//    printf("%lld\n", result + num1 * num2 / result);
//
//    return 0;
//}


//题目六：
//
//
