#define _CRT_SECURE_NO_WARNINGS 1
//第三讲

//题1：计算体重指数
//输入描述：一行，两个整数，分别表示体重（公斤），身高（厘米），中间用一个空格分隔
//输出描述：一行，BMI指数（保留两位）（体重公斤/身高米的平方）= BMI
//#include<stdio.h>
//int main()
//{
//	int weight = 0;
//	int high = 0;
//	double BMI = 0.0;
//	scanf("%d %d",&weight,&high);
//	BMI = weight / ((high / 100.0) * (high / 100.0));
//	printf("%.2lf\n",BMI);
//	return 0;
//}


//题2：计算三角形的周长和面积
//根据给出的三角形三条边a,b,c,计算三角形周长和面积
//输入描述：一行，三角形三条边，中间一个空格隔开
//输出描述：一行，三角形周长和面积（保留两位小数），中间空格
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	double a = 0.0;
//	double b = 0.0;
//	double c = 0.0;
//
//	double circumference = 0.0;
//	double area = 0.0;
//	scanf("%lf %lf %lf", &a, &b, &c);
//	circumference = a + b + c;
//	double p = (circumference) / 2;
//	area = sqrt(p * (p - a) * (p - b) * (p - c));//海伦公式
//	printf("circumference=%.2lf area=%.2lf", circumference, area);
//	return 0;
//}


//题3：计算球体的体积
//给定一个球体的体积，计算其体积。其中球体体积公式为V=4/3Πr³，其中Π=3.1415926
//输入描述：一行，用浮点数表示球体的半径
//输出描述：一行，球体的体积，小数点后保留三位
//#include<stdio.h>
//int main()
//{
//	double Π = 3.1415926;
//	double r = 0.0;
//	scanf("%lf",&r);
//	double V = 4 / 3.0 * Π * r * r * r;
//	printf("%.3lf\n",V);
//	return 0;
//}


//题4：输入三科成绩，然后依次输出，成绩为整数形式
//输入描述：一行，3科成绩，空格分隔，范围（1~100）
//输出描述：一行，输出3科成绩
//#include<stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d",&a,&b,&c);
//	printf("score1=%d,score2=%d,score3=%d\n", a, b, c);
//	return 0;
//}


//题5：求出5位数中所有的Lily Number
//把任意的数字，从中间拆分成两个数字，比如1461可以拆分为（1和461），（14和61），（146和1）
//如果所有拆分后的乘积之和等于自身，则是一个Lily Number.
//例如：655=6*55+65*5   1461=1*461+14*61+146*1
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	for (i = 10000;i <= 99999;i++)
//	{
//		int j = 0;
//		int sum = 0;
//		for (j = 10;j <= 10000;j*=10)
//		{
//			sum += (i/j) * (i%j);
//		}
//		if (sum == i)
//		{
//			printf("%d ",i);
//		}
//	}
//	return 0;
//}



