#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

//int main()
//{
//	cout << "hello world" << endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	cout << "a=" << a << endl;
//	system("pause");
//	return 0;
//}


//#define Day 7
//int main()
//{
//	cout << "һ����" << Day << "��" << endl;
//
//	int month = 12;
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	cout << "int������ռ�ڴ�ռ�Ϊ:" << sizeof(int) << endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	bool flag = true;//tureΪ��
//	cout << flag << endl;
//	flag = false;
//	cout << flag << endl;//��
//	cout << "bool������ռ�ڴ�ռ�Ϊ:" << sizeof(bool) << endl;
//	system("pause");
//	return 0;
//}

//��������cin>>����
//int main()
//{
//	int a = 0;
//	cout << "���a��ֵ:" << endl;
//	cin >> a;
//	cout << a << endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int b = 20;
//	cout << (a == b) << endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//if���
//	//1.����
//	int score = 0;
//	cout << "�����������" << endl;
//	cin >> score;
//	//2.��ӡ����
//	cout << "����Ϊ��" << score << endl;
//	//3.�ж�
//	if (score >= 600)
//		cout << "��ϲ�㿼��һ��" << endl;
//	else
//		cout << "δ����һ��" << endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int temp = 0;
//	//��������
//	cout << "������a����" << endl;
//	cin >> a;
//	cout << "������b����" << endl;
//	cin >> b;
//	cout << "������c����" << endl;
//	cin >> c;
//	cout << "aΪ" << a << endl;
//	cout << "bΪ" << b << endl;
//	cout << "cΪ" << c << endl;
//	//�ж�����
//	if (a > b)
//	{
//		temp = a;
//		a = b; 
//		b = temp;
//	}
//	if (a > c)
//	{
//		temp = a;
//		a = c;
//		c = temp;
//	}
//	if (b > c)
//	{
//		temp = b;
//		b = c;
//		c = temp;
//	}
//	cout << a << b << c << endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//����Ļ�д�ӡʮ������
//	//while
//	int n = 0;
//	while (n < 10)
//	{
//		cout << n << endl;
//		n++;
//	}
//	system("pause");
//	return 0;
//}

//#include<ctime>//timeϵͳͷ�ļ�
////������
//int main()
//{
//	//������������ ����ϵͳʱ�����������
//	srand((unsigned int)time(NULL));
//	//1.���������
//	int num = rand() % 100 + 1;//rand()%100  0-99�������
//	//cout << num << endl;
//	//2.�²�
//	int val = 0;//�������
//	while (1)
//	{
//		cin >> val;
//		//3.�ж�(�¶��˳���Ϸ���´���ʾ��С����ѭ��)
//		if (val > num)
//		{
//			cout << "�´���" << endl;
//		}
//		else if (val < num)
//		{
//			cout << "��С��" << endl;
//		}
//		else
//		{
//			cout << "�¶���" << endl;
//			break;
//		}
//	}
//	system("pause");
//	return 0;
//}


//int main()
//{
//	int num = 100;
//	do
//	{
//		int a = 0;//g
//		int b = 0;//s
//		int c = 0;//b
//		a = num % 10;
//		b = num / 10 % 10;
//		c = num / 100;
//		if (a * a * a + b * b * b + c * c * c == num)
//		{
//			cout << num << endl;
//		}
//		num++;
//	} while (num < 1000);
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if (i%7==0||i%10==7||i/10==7)
//		{
//			cout << "������" << endl;
//		}
//		else
//		{
//			cout << i << endl;
//		}
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	//���һ�Σ��ڲ�һ��
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			cout << "* ";
//		}
//		cout << endl;//����
//	}
//	system("pause");
//	return 0;
//}

//int main()
//{
//	for (int i = 1; i < 10; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			cout << i << " * " << j << " = " << i * j<< " ";
//		}
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}

int main()
{

	system("pause");
	return 0;
}