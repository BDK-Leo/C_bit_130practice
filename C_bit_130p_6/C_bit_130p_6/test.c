#define _CRT_SECURE_NO_WARNINGS 1
//bit C����ˢ�������

//��1�����㵥λ��Ծ����
//#include<stdio.h>
//int main()
//{
//	int t;
//	while (~scanf("%d",&t))
//	{
//		if (t > 0)
//		{
//			printf("%d\n",1);
//		}
//		else if (t == 0)
//		{
//			printf("%.1f\n",0.5);
//		}
//		else
//		{
//			printf("%d\n",0);
//		}
//	}
//	return 0;
//}


//��2���ж��Ƿ�Ϊ�����Σ������ж����������ͣ��ȱߣ���������ͨ��
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	while (~scanf("%d %d %d",&a,&b,&c))//EOF��-1,ȡ��Ϊ0Ϊ��
//	{
//		if ((a + b > c) && (a + c > b) && (b + c > a))
//		{
//			if ((a == b) && (b == c))
//			{
//				printf("Equilateral triangle!\n");
//			}
//			else if ((a == b && a!=c) || (a == c && a!=b) || (b == c && b!=a))
//			{
//				printf("Isosceles triangle!\n");
//			}
//			else
//			{
//				printf("Ordinary triangle!\n");
//			}
//		}
//		else
//			printf("Not a triangle!\n");
//	}
//	return 0;
//}


//��3�������������ݳ̶�
//BMI<18.5(ƫ��) >=18.5&&<=23.9(����) >23.9&&<=27.9(����) >27.9(����)
//�����������������룬ÿһ�а��������������ֱ�Ϊ���ع�����������
//�������������������ݳ̶�
//#include<stdio.h>
//int main()
//{
//	float weight = 0.0;
//	float high = 0.0;
//	while (~scanf("%f %f",&weight,&high))
//	{
//		float BMI = weight / ((high / 100) * (high / 100));
//		if (BMI < 18.5)
//		{
//			printf("ƫ��\n");
//		}
//		else if (BMI >= 18.5 && BMI <= 23.9)
//		{
//			printf("����\n");
//		}
//		else if (BMI > 23.9 && BMI <= 27.9)
//		{
//			printf("����\n");
//		}
//		else if (BMI > 27.9)
//		{
//			printf("����\n");
//		}
//	}
//	return 0;
//}


//��4������һԪ���η���
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double a = 0.0;
//	double b = 0.0;
//	double c = 0.0;
//	while (~scanf("%lf %lf %lf",&a,&b,&c))
//	{
//		if (a == 0)
//		{
//			printf("����һԪ���η���\n");
//		}
//		else
//		{
//			double disc = b * b - 4 * a * c;
//			if (disc == 0.0)
//			{
//				printf("x1=x2=%.2lf\n", (-b) / (2 * a));
//			}
//			else if (disc > 0.0)
//			{
//
//				printf("x1=%.2lf;x2=%.2lf\n", (-b - sqrt(disc))/(2*a), (-b + sqrt(disc)) / (2 * a));
//			}
//			else
//			{
//				double real = (-b) / (2*a);
//				double image = (sqrt(-disc)) / (2*a);
//				printf("x1=%.2lf-%.2lfi;x2=%.2lf+%.2lfi\n", real, image, real, image);
//			}
//		}
//	}
//	return 0;
//}


//��5����ȡ�·�����
//�����������������룬������������ʾ�����
//���������һ����������ʾ��������
//#include<stdio.h>
//int main()
//{
//	int year, month;
//	while (~scanf("%d %d",&year,&month))
//	{
//		int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
//		int day = days[month - 1];
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			if (month == 2)
//			{
//				day += 1;
//			}
//		}
//		printf("%d\n", day);
//	}
//	return 0;
//}


//��6���򵥼�����
//#include<stdio.h>
//int main()
//{
//	double n1 = 0.0;
//	double n2 = 0.0;
//	char op = 0;
//	while (~scanf("%lf%c%lf",&n1,&op,&n2))
//	{
//		switch (op)
//		{
//		case '+':
//			printf("%.4lf+%.4lf=%.4lf\n", n1, n2, n1 + n2);
//			break;
//		case '-':
//			printf("%.4lf-%.4lf=%.4lf\n", n1, n2, n1 - n2);
//			break;
//		case '*':
//			printf("%.4lf*%.4lf=%.4lf\n", n1, n2, n1 * n2);
//			break;
//		case '/':
//			if (n2 == 0.0)
//			{
//				printf("Wrong!\n");
//			}
//			else
//			{
//				printf("%.4lf/%.4lf=%.4lf", n1, n2, n1 / n2);
//			}
//			break;
//		default:
//			printf("None!\n");
//			break;
//		}
//	}
//	return 0;
//}


//��7���߶�ͼ��
//�����������������룬һ����������ʾ�߶γ���
//��������������"*"��ɵĶ�Ӧ���ȵ��߶�
//#include<stdio.h>
//int main()
//{
//	int num;
//	while (~scanf("%d",&num))
//	{
//		for (int i = 0;i < num;i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//��8��������ͼ��
//�����������������룬һ����������ʾ�����εĳ��Ⱥ��������
//��������������"*"��ɵĶ�Ӧ�߳��������Σ�����ո�
//#include<stdio.h>
//int main()
//{
//	int num;
//	while (~scanf("%d",&num))
//	{
//		int num2 = num;
//		while (num)
//		{
//			for (int i = 0;i < num2;i++)
//			{
//				printf("* ");
//			}
//			printf("\n");
//			num--;
//		}
//	}
//	return 0;
//}


//��9��ֱ��������ͼ��
//�����������������룬һ��������2~20������ʾ�ߵĳ��ȣ���"*"��������Ҳ��ʾ�������
//�������������á�*����ɵĶ�Ӧ���ȵ�ֱ��������
#include<stdio.h>
int main()
{
	int num;
	while (~scanf("%d",&num))
	{
		for (int i = 0;i < num;i++)
		{
			for (int j = 0;j <= i;j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}
	return 0;
}