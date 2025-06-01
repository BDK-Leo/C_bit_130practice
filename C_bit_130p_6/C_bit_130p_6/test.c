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

