#define _CRT_SECURE_NO_WARNINGS 1
//bit C语言刷题第五讲


//题1：假设竞选A，B，每人只能投一票，票数多的获胜
//输入描述：一行，字符序列，包含A或B，输入以字符0结束
//输出描述：一行，一个字符，A或B或E,输出A表示A得票多，输出B表示B得票多,输出E表示票数相等
//版本一：
//#include<stdio.h>
//int main()
//{
//	char buf[100] = {0};
//	gets(buf);
//	int count_a = 0;
//	int count_b = 0;
//	int i = 0;
//	while (buf[i] != '0')
//	{
//		if (buf[i] == 'A')
//			count_a++;
//		if (buf[i] == 'B')
//			count_b++;
//		i++;
//	}
//	if (count_a > count_b)
//	{
//		printf("A");
//	}
//	else if (count_a < count_b)
//	{
//		printf("B");
//	}
//	else
//		printf("E");
//	return 0;
//}

//版本二：
//#include<stdio.h>
//int main()
//{
//	char buf[100] = { 0 };
//	gets(buf);
//	int flag = 0;
//	int i = 0;
//	while (buf[i] != '0')
//	{
//		if (buf[i] == 'A')
//			flag++;
//		if (buf[i] == 'B')
//			flag--;
//		i++;
//	}
//	if (flag > 0)
//	{
//		printf("A");
//	}
//	else if (flag < 0)
//	{
//		printf("B");
//	}
//	else
//		printf("E");
//	return 0;
//}

//版本三：
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	int flag = 0;
//	while (((ch = getchar()) != '0') && ch != EOF)
//	{
//		if (ch == 'A')
//			flag++;
//		if (ch == 'B')
//			flag--;
//	}
//	if (flag > 0)
//    {
//	    printf("A");
//    }
//    else if (flag < 0)
//    {
//	    printf("B");
//    }
//    else
//	    printf("E");
//    return 0;
//}


//题2：大于等于140输出Genius
//#include<stdio.h>
//int main()
//{
//	int IQ;
//	while (~scanf("%d",&IQ))
//	{
//		if (IQ >= 140)
//			printf("Genius");
//	}
//	return 0;
//}


//题3：判断成绩是否在90~100之间，是则输出"Perfect"
//#include<stdio.h>
//int main()
//{
//	int score;
//	while (scanf("%d",&score) != EOF)
//	{
//		if (score>=90 && score<=100)
//		{
//			printf("Perfect\n");
//		}
//		else
//			printf("None\n");
//	}
//	return 0;
//}

//题4：

