#define _CRT_SECURE_NO_WARNINGS 1
//bit C����ˢ���ʮһ��


//��Ŀһ��С���������ת��
// һ����ת��Ϊ������
//��������������һ��������n(1<=n<=10^9)
//������������һ�У�Ϊ������n��ʾΪ�����ƵĽ��
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



//��Ŀ����С�������(��ͷ���)
//��������������һ��������n(1<=n<=10^9)
//������������һ��ֵΪ��ͽ��
// ����һ��
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

//��������
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



//��Ŀ����С���ֶ�����(ֻ����ʱ�ͷ�)
//�����������������ڵ�ʱ���Լ�Ҫ˯��ʱ��K(��λ��minute)
// �����ʽ��hour:minute K(0<=hour<=23,0<=minute<=59,1<=K<=10^9)
//����������������Ӧ���趨��ʱ�̣������ʽΪ��׼ʱ�̱�ʾ��
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



//��Ŀ�ģ�С�����ŵ���
// ǰ����n�����ţ�����ÿ��12�ˣ�ÿ����2���ӣ���2���ӣ����㻹����ٷ��ӿ��Գ˵��ݵ�¥��(�������������1��)
//��������������һ������n(0<=n<=10^9)
//������������һ��������������¥����Ҫ��ʱ��
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	printf("%d", (n / 12) * 4 + 2);
//	return 0;
//}



//��Ŀ�壺С������ŷ�����
// ���������������Լ������С������֮��
//����������n,m(1<=n<=109,1<=m<=109)
//������������һ����������Ϊn��m�����Լ������С������֮��
//����һ���������
//#include<stdio.h>
//int main()
//{
//	long long n = 0;
//	long long m = 0;
//	scanf("%lld %lld",&n,&m);
//	long long max = n > m ? m : n;//���Լ��
//	while (1)
//	{
//		if (n % max == 0 && m % max == 0)
//		{
//			break;
//		}
//		max--;
//	}
//	long long min = n > m ? n : m;//��С������
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

//��������շת�����
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

//�����������������1
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

//�����������������2
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

//�����ģ��������������λ���
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

//�����ģ��������������λ���2
//#include <stdio.h>
//// ʹ�ø������������λ��ϼ������Լ��
//long long gcd(long long a, long long b)
//{
//    if (a == 0)
//        return b;
//    if (b == 0)
//        return a;
//
//    // �ҵ� a �� b �Ĺ�ͬ���� 2 �Ĵ���
//    int shift = 0;
//    while (((a | b) & 1) == 0)
//    { // ͬʱΪż��
//        a >>= 1;
//        b >>= 1;
//        shift++;
//    }
//
//    while ((a & 1) == 0)
//    { // a Ϊż��
//        a >>= 1;
//    }
//
//    // ʹ�ø��������
//    while (b != 0)
//    {
//        while ((b & 1) == 0)
//        { // b Ϊż��
//            b >>= 1;
//        }
//        if (a > b)
//        {
//            long long temp = a;
//            a = b;
//            b = temp;
//        }
//        b = b - a; // ���
//    }
//
//    // �ָ���ͬ���� 2 �Ĵ���
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


//��Ŀ����
//
//
