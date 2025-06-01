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
//		float BMI = weight / ((high / 100.0) * (high / 100.0));
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