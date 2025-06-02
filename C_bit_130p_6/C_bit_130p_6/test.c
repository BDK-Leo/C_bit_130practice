#define _CRT_SECURE_NO_WARNINGS 1
//bit C语言刷题第六讲

//题1：计算单位阶跃函数
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


//题2：判断是否为三角形，接着判断三角形类型（等边，等腰或普通）
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	while (~scanf("%d %d %d",&a,&b,&c))//EOF是-1,取反为0为假
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


//题3：衡量人体胖瘦程度
//BMI<18.5(偏瘦) >=18.5&&<=23.9(正常) >23.9&&<=27.9(过重) >27.9(肥胖)
//输入描述：多组输入，每一行包括两个整数，分别为体重公斤和身高厘米
//输出描述：输出人体胖瘦程度
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
//			printf("偏瘦\n");
//		}
//		else if (BMI >= 18.5 && BMI <= 23.9)
//		{
//			printf("正常\n");
//		}
//		else if (BMI > 23.9 && BMI <= 27.9)
//		{
//			printf("过重\n");
//		}
//		else if (BMI > 27.9)
//		{
//			printf("肥胖\n");
//		}
//	}
//	return 0;
//}


//题4：计算一元二次方程
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
//			printf("不是一元二次方程\n");
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


//题5：获取月份天数
//输入描述：多组输入，两个整数，表示年和月
//输出描述：一个整数，表示具体天数
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


//题6：简单计算器
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


//题7：线段图案
//输入描述：多组输入，一个整数，表示线段长度
//输出描述：输出用"*"组成的对应长度的线段
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


//题8：正方形图案
//输入描述：多组输入，一个整数，表示正方形的长度和输出行数
//输出描述：输出用"*"组成的对应边长的正方形，间隔空格
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


//题9：直角三角形图案
//输入描述：多组输入，一个整数（2~20），表示边的长度，即"*"的数量，也表示输出行数
//输出描述：输出用“*”组成的对应长度的直角三角形
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