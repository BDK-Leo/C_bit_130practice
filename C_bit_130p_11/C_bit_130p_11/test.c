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



//��Ŀ����
//
//
