#define _CRT_SECURE_NO_WARNINGS 1

//题1：用*输出一架小飞机
//#include<stdio.h>
//int main()
//{
//	printf("     **\n");
//	printf("     **\n");
//	printf("************\n");
//	printf("************\n");
//	printf("     **\n");
//	printf("    *  *\n");
//	return 0;
//}


//题2：十六进制整数ABCDEF对应的十进制整数，所占域宽为15
//#include<stdio.h>
//int main()
//{
//	printf("%15d\n",0XABCDEF);
//	return 0;
//}


//题3：
//第一行输出"Hello world!"
//第二行输出printf("Hello world!")调用后的返回值
//#include<stdio.h>
//int main()
//{
//	printf("\n%d\n", printf("Hello world!"));
//	return 0;
//}


//题4：
//输入：学号以及三科成绩
//输出：The each subject score of No.10086 is 80.85,90.55,100.00.
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	float lang = 0.0;
//	float math = 0.0;
//	float engl = 0.0;
//	scanf("%d;%f,%f,%f",&n,&lang,&math,&engl);
//	printf("The each subject score of  No. %d is %0.2f, %0.2f, %0.2f.",n,lang,math,engl);
//	return 0;
//}


//题5：从键盘任意输入一个字符，编程判断是否是字母（包括大小写）
//输入描述：多组输入，每行输入包括一个字符
//输出描述：针对每行输入，输出该字符是字母（YES）或不是（NO）
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//		{
//			printf("YES\n");
//		}
//		
//		else
//		{
//			printf("NO\n");
//		}
//		getchar();
//	}
//	return 0;
//}

//#include<stdio.h>
//#include<ctype.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (isalpha(ch))//是字母返回非0的值，不是字母返回0
//		{
//			printf("YES\n");
//		}
//		
//		else
//		{
//			printf("NO\n");
//		}
//		getchar();
//	}
//	return 0;
//}


//题6：输入一个字符，用它构造一个三角形金字塔
//输入描述：输入只有一行，一个字符
//输出描述：该字符构成的三角形金字塔
//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	ch = getchar();
//	int i = 0;
//	for (i = 0;i < 5;i++)//行
//	{
//		int j = 0;
//		for (j = 0;j < 4-i;j++)//每行空格
//		{
//			printf(" ");
//		}
//		for (j = 0;j <= i ;j++)//，每行字符
//		{
//			printf("%c ",ch);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//题7：转换以下ASCII码对应字符并输出
//73, 32, 99 ,97, 110, 32, 100, 111,32,105, 116, 33
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 73, 32, 99 ,97, 110, 32, 100, 111,32,105, 116, 33 };
//	size_t sz = sizeof(arr) / sizeof(arr[0]);
//	for (int i = 0;i < sz;i++)
//	{
//		printf("%c",arr[i]);
//	}
//	return 0;
//}


//题8：输入一个人的出生日期（包括年月日），将该生日中的年、月、日分别输出
//输入描述：输入只有一行，出生日期，年月日中间的数字没有分隔符
//输出描述：三行，第一行为年，第二行为月，第三行为日。输入时如果月份或天数为1位数，需要在1位数前面补0
//#include<stdio.h>
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%4d%2d%2d",&year,&month,&day);
//	printf("year=%d\n",year);
//	printf("month=%02d\n",month);
//	printf("day=%02d\n",day);
//	return 0;
//}


//题9：不使用累计乘法的基础上，通过移位运算（<<）实现2的n次方的计算
//输入描述：多组输入，每一行输入整数n(0 <= n < 31)
//输出描述：针对每组输入输出对应的2的n次方的结果
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//
//	while(scanf("%d", &n) != EOF)
//	{
//		printf("%d\n", 1 << n);
//	}
//	return 0;
//}


//题10：输入两个整数，交换两个数并输出
//输入描述：输入只有一行，按照格式输入两个整数，中间用","分隔
//输出描述：把两个整数按格式输出，中间用","分隔
//#include<stdio.h>
//int main()
//{
//	int n, m;
//	scanf("a=%d,b=%d",&n,&m);
//	int tmp = m;
//	m = n;
//	n = tmp;
//	printf("a=%d,b=%d",n,m);
//	return 0;
//}


//题11：
//输入描述：一行，一个字符
//输出描述：一行，输出输入字符对应的ASCII码
//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	ch = getchar();
//	printf("%d\n",ch);
//	return 0;
//}


//题12：计算表达式"(-8+22)*a-10+c/2",a = 40,c = 212
//#include<stdio.h>
//int main()
//{
//	int a = 40;
//	int c = 212;
//	printf("%d\n", (-8 + 22) * a - 10 + c / 2);
//	return 0;
//}


//题13：给定两个整数a和b，计算a/b的整数商和余数
//输入描述：一行，包括两个整数a和b，依次为被除数和除数，中间用空格隔开
//输出描述：一行，包含两个整数，依次为整数商和余数，中间用空格隔开
#include<stdio.h>
int main()
{
	int a, b;
	scanf("%d %d",&a,&b);
	printf("%d %d\n", a / b, a % b);
	return 0;
}
