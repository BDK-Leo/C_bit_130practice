#define _CRT_SECURE_NO_WARNINGS 1
//bit C����ˢ����彲


//��1�����辺ѡA��B��ÿ��ֻ��ͶһƱ��Ʊ����Ļ�ʤ
//����������һ�У��ַ����У�����A��B���������ַ�0����
//���������һ�У�һ���ַ���A��B��E,���A��ʾA��Ʊ�࣬���B��ʾB��Ʊ��,���E��ʾƱ�����
//�汾һ��
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

//�汾����
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

//�汾����
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


