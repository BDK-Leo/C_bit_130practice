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
//#include<stdio.h>
//
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
