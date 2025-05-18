#define _CRT_SECURE_NO_WARNINGS 1

//题1：
//输入描述：无
//输出描述：Practice makes perfect!
//#include<stdio.h>
//int main()
//{
//	printf("Practice makes perfect!\n");
//	return 0;
//}

//题2：
//输出由小写字母v组成的大V
//#include<stdio.h>
//int main()
//{
//	printf("V   V\n V V\n  V\n");
//	//printf("V   V\n");
//	//printf(" V V\n");
//	//printf("  V\n");
//	return 0;
//}

//题3：
//确定不同整型数据类型在内存中占多大（字节），输出不同整型数据类型在内存中占多大字节
//#include<stdio.h>
//int main()
//{
//	printf("The size of short is %zu bytes.\n",sizeof(short));
//	printf("The size of int is %zu bytes.\n",sizeof(int));
//	printf("The size of long is %zu bytes.\n",sizeof(long));
//	printf("The size of long long is %zu bytes.\n",sizeof(long long));
//	return 0;
//}

//题4：
//输出十进制整数1234对应的八进制和十六进制
//#include<stdio.h>
//int main()
//{
//	//printf("0%o 0X%x\n",1234,1234);//注意x大小写
//	printf("%#o %#X\n",1234,1234);
//	return 0;
//}

//题5：
//将一个四位数反向输出
//输入描述：一行，输入一个整数n(1000 <= n <= 9999)
//输出描述：针对每组输入，反向输出对应四位数
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		printf("%d", n % 10);
//		n /= 10;
//	}
//	return 0;
//}

//题6：
//实现字母的大小写转换，多组输入输出
//输入描述：多组输入，每一行输入大写字母
//输出描述：输出对应的小写字母
//#include<stdio.h>
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar()) != EOF)//CTRL+z结束
//	{
//		//putchar(ch + 32);
//		//printf("\n");
//		printf("%c\n",ch+32);
//		getchar();//读取\n
//	}
//	return 0;
//}

