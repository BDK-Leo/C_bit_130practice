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
//		float BMI = weight / ((high / 100.0) * (high / 100.0));
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