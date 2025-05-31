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


//题4：分数大于60，输出"Pass",否则输出"Fail"
//#include<stdio.h>
//int main()
//{
//	int score;
//	while (~scanf("%d",&score))
//	{
//		if (score >= 60)
//		{
//			printf("Pass\n");
//		}
//		else
//			printf("Fail\n");
//	}
//	return 0;
//}


//题5：判断奇偶性
//输入描述：多组输入，整数
//输出描述：输出奇数还是偶数（Odd oar Even）
//#include<stdio.h>
//int main()
//{
//	int num;
//	while (~scanf("%d",&num))
//	{
//		if (num % 2 == 0)
//		{
//			printf("Even\n");
//		}
//		else
//			printf("Odd\n");
//	}
//	return 0;
//}


//题6：输入三个整数判断最高值
//方法一：
//#include<stdio.h>
//int main()
//{
//	int score[3] = {0};
//	while (~scanf("%d %d %d",&score[0], &score[1], &score[2]))
//	{
//		for (int i = 0;i < 2;i++)
//		{
//			for (int j = 0;j < 2 - i;j++)
//			{
//				if (score[j] < score[j+1])
//				{
//					int tmp = score[j + 1];
//					score[j + 1] = score[j];
//					score[j] = tmp;
//				}
//			}
//		}
//		printf("%d\n",score[0]);
//	}
//	return 0;
//}

//方法二：
//#include<stdio.h>
//int main()
//{
//	int a, b, c;
//	while (~scanf("%d %d %d",&a,&b,&c))
//	{
//		int Max = a > b ? a : b;
//		Max = Max > c ? Max : c;
//		printf("%d\n",Max);
//	}
//	return 0;
//}


//题7：A,E,I,O,U为元音（包括大小写），其他字母为辅音
//输入描述：多组输入，输入一个字母
//输出描述：若输入为元音，则输出"Vowel",否则输出"Consonant"
//方法一：
//#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	char word[] = "AaEeIiOoUu";
//	while ((ch = getchar()) != EOF)
//	{
//		int i = 0;
//		for (i = 0;i < 10;i++)
//		{
//			if (ch == word[i])
//			{
//				printf("Vowel\n");
//				break;
//			}
//		}
//		if (i == 10)
//		{
//			printf("Consonant\n");
//		}
//		getchar();
//	}
//	return 0;
//}

//方法二： char* strchr(const char* string,int c);
// strchr是用来判断ch是否在字符串Vowel出现，出现则返回在Vowel字符串中的地址，没出现则返回NULL
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int ch = 0;
//	char word[] = "AaEeIiOoUu";
//	while ((ch = getchar()) != EOF)
//	{
//		if (strchr(word, ch))
//		{
//			printf("Vowel\n");
//		}
//		else
//			printf("Consonant\n");
//		getchar();
//	}
//	return 0;
//}

//方法三：
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char ch = 0;
//	char word[] = "AaEeIiOoUu";
//	while (scanf(" %c",&ch) != EOF)
//	{
//		if (strchr(word, ch))
//		{
//			printf("Vowel\n");
//		}
//		else
//			printf("Consonant\n");
//	}
//	return 0;
//}


//题8：判断是否为字母
//方法一： 
//#include<stdio.h>
//int main()
//{
//	char ch;
//	while (scanf(" %c",&ch) != EOF)
//	{
//		if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
//		{
//			printf("%c is an alphabet.\n",ch);
//		}
//		else
//			printf("%c is not an alphabet.\n",ch);
//	}
//	return 0;
//}

//方法二：
//#include<stdio.h>
//#include<ctype.h>
//int main()
//{
//	char ch;
//	while (scanf(" %c",&ch) != EOF)
//	{
//		if (isalpha(ch))
//		{
//			printf("%c is an alphabet.\n",ch);
//		}
//		else
//			printf("%c is not an alphabet.\n",ch);
//	}
//	return 0;
//}


//题9：字母大小写转换
//方法一：
//#include<stdio.h>
//int main()
//{
//	char ch;
//	while ((scanf(" %c",&ch)) != EOF)
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			printf("%c\n", ch - 32);
//		}
//		else if (ch >= 'A' && ch <= 'Z')
//		{
//			printf("%c\n", ch + 32);
//		}
//	}
//	return 0;
//}

//方法二：
//isupper 判断字母是否为大写
//islower 判断字母是否为小写
#include<stdio.h>
#include<ctype.h>
int main()
{
	char ch;
	while (~scanf(" %c",&ch))
	{
		if (isupper(ch))
		{
			printf("%c\n", tolower(ch));//转小写
		}
		else if (islower(ch))
		{
			printf("%c\n", toupper(ch));//转大写
		}
	}
	return 0;
}