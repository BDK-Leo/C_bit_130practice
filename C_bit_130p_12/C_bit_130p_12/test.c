#define _CRT_SECURE_NO_WARNINGS 1
//bit C����ˢ���ʮ����


//��Ŀһ��С���ֲ�������
// ����n��������һ������x��С�������n���������ж�x���ּ���
//���������������У���һ��һ��������ʾn(1<=n<=100)
//�ڶ��У�������n�������������У�����һ����������ʾҪ���ҵ�����x
//���������һ�У���ʾ����x���ֵĴ���
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int arr[100] = {0};
//	int i = 0;
//	for (i = 0;i <n;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	int x = 0;
//	scanf("%d", &x);
//	int num = 0;
//	for (i = 0;i < n;i++)
//	{
//		if (arr[i] == x)
//		{
//			num++;
//		}
//	}
//	printf("%d\n",num);
//	return 0;
//}



//��Ŀ����KiKiѧ������ƻ���
//������������
//���������printf("Hello world!\n");
//        count << "Hello world!" << endl;
//#include<stdio.h>
//int main()
//{
//	printf("printf(\"Hello world!\\n\");\n");
//	printf("count << \"Hello world!\" << endl;\n");
//	return 0;
//}



//��Ŀ����KiKi�������ĸ���
//������������
//���������һ�У�һ����������ʾ������λ�������ж�������
//����һ��
//#include<stdio.h>
//int Prime(int i)
//{
//	int j = 0;
//	for (j = 2;j <= i - 1;j++)
//	{
//		if (i%j == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100;i < 1000;i++)
//	{
//		if (Prime(i) == 1)
//		{
//			count++;
//		}
//	}
//	printf("%d\n",count);
//	return 0;
//}

//��������(���Ž�)
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 101; i <= 999; i+=2) 
//	{
//		int flag = 1; 
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (flag == 1)  
//		{
//			count++;
//		}
//	}
//	printf("%d\n",count);
//	return 0;
//}



//��Ŀ�ģ�KiKiȥ������������
// ����һ���������У������е��ظ�������ȥ������С��������
//������������һ������һ������n,��ʾ��n������,�ڶ�������n������(���ڵ���1��С�ڵ���1000)
//���������ȥ�ز���С�����������
//����һ���������
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int arr[1000] = {0};
//	int i = 0;
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d",&arr[i]);
//	}
//	for (i = 0;i < n - 1;i++)
//	{
//		int j = 0;
//		for (j = 0;j < n - 1 - i;j++)
//		{
//			if (arr[j] > arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0;i < n - 1;i++)
//	{
//		if (arr[i] == arr[i+1])
//		{
//			int k = 0;
//			for (k = i;k < n - 1;k++)
//			{
//				arr[k] = arr[k + 1];
//			}
//			n--;
//			i--;
//		}
//	}
//	for (i = 0;i < n;i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//��������
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d",&n);
//	int arr[1001] = {0};
//	int i = 0;
//	int m = 0;
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d",&m);
//		arr[m] = m;
//	}
//	for (i = 0;i <= 1000;i++)
//	{
//		if (arr[i] != 0)
//		{
//			printf("%d ",arr[i]);
//		}
//	}
//	return 0;
//}



//��Ŀ�壺KiKiѧ�ṹ���ָ��
//������������һ���������ݸ���n(3<=n<=100),�ڶ�����������n������,������������ɾ������m
//�����������һ��������ɾ����ĵ������ȣ��ڶ�������������ɾ����ĵ���������
//#include<stdio.h>
//#include<stdlib.h>
////����ڵ�Ķ���
//struct Node
//{
//	int data;//������
//	struct Node* next;//ָ����
//};
//
//int main()
//{
//	struct Node* list = NULL;//ָ�������ָ��
//	struct Node* tail = NULL;//ָ������β��Ԫ�ص�ָ��
//	int n = 0;
//	scanf("%d",&n);
//	int i = 0;
//	int m = 0;
//	int d = 0;
//	for (i = 0;i < n;i++)
//	{
//		//����n�����ֲ�β�嵽������
//		scanf("%d",&m);
//		struct Node* pn = (struct Node*)malloc(sizeof(struct Node));
//		pn->data = m;
//		pn->next = NULL;
//		//�����һ��Ԫ��
//		if (list == NULL)
//		{
//			list = pn;
//			tail = pn;
//		}
//		else
//		{
//			tail->next = pn;
//			tail = pn;
//		}
//	}
//	//����Ҫɾ����Ԫ��
//	scanf("%d",&d);
//	//ɾ��������ָ����Ԫ��
//	struct Node* cur = list;
//	struct Node* prev = NULL;
//	while (cur)
//	{
//		if (cur->data == d)
//		{
//			//ɾ��������ǵ�һ���ڵ�
//			struct Node* pd = cur;
//			if (cur == list)
//			{
//				list = list->next;
//				cur = list;
//			}
//			//ɾ���Ĳ��ǵ�һ���ڵ�
//			else
//			{
//				prev->next = cur->next;
//				cur = prev->next;
//			}
//			free(pd);
//			n--;
//		}
//		else
//		{
//			prev = cur;
//			cur = cur->next;
//		}
//	}
//	printf("%d\n",n);
//	cur = list;
//	while (cur)
//	{
//		printf("%d ",cur->data);
//		cur = cur->next;
//	}
//	//�ͷ�
//	cur = list;
//	struct Node* del = NULL;
//	while (cur)
//	{
//		del = cur;
//		cur = cur->next;
//		free(del);
//	}
//	list = NULL;
//	return 0;
//}



//��Ŀ����KiKi�������������
//����������һ�У������������ֱ��ʾ�ꡢ�¡���
//���������һ�У���"��/��/��"��ʽ�������
//C++
//#include<iostream>
//using namespace std;
//
//class TDate
//{
//private:
//	int Year;
//	int Month;
//	int Day;
//public:
//	TDate(int y=0,int m=0,int d=0)
//	{
//		Year = y;
//		Month = m;
//		Day = d;
//	}
//	void print()
//	{
//		count << Day << '/' << Month << '/' << Year << endl;
//	}
//};
//int main()
//{
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	cin >> year >> month >> day;
//	TDate d(year,month,day);
//	d.print();
//	return 0;
//}