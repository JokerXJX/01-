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
//	cout << "一周有" << Day << "天" << endl;
//
//	int month = 12;
//
//	system("pause");
//	return 0;
//}

//int main()
//{
//	cout << "int类型所占内存空间为:" << sizeof(int) << endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	bool flag = true;//ture为真
//	cout << flag << endl;
//	flag = false;
//	cout << flag << endl;//假
//	cout << "bool类型所占内存空间为:" << sizeof(bool) << endl;
//	system("pause");
//	return 0;
//}

//数据输入cin>>变量
//int main()
//{
//	int a = 0;
//	cout << "请给a赋值:" << endl;
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
//	//if语句
//	//1.输入
//	int score = 0;
//	cout << "请输入分数：" << endl;
//	cin >> score;
//	//2.打印分数
//	cout << "分数为：" << score << endl;
//	//3.判断
//	if (score >= 600)
//		cout << "恭喜你考上一本" << endl;
//	else
//		cout << "未考上一本" << endl;
//	system("pause");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int temp = 0;
//	//输入体重
//	cout << "请输入a体重" << endl;
//	cin >> a;
//	cout << "请输入b体重" << endl;
//	cin >> b;
//	cout << "请输入c体重" << endl;
//	cin >> c;
//	cout << "a为" << a << endl;
//	cout << "b为" << b << endl;
//	cout << "c为" << c << endl;
//	//判断最重
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
//	//在屏幕中打印十个数字
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

//#include<ctime>//time系统头文件
////猜数字
//int main()
//{
//	//添加随机数种子 利用系统时间生成随机数
//	srand((unsigned int)time(NULL));
//	//1.生成随机数
//	int num = rand() % 100 + 1;//rand()%100  0-99的随机数
//	//cout << num << endl;
//	//2.猜测
//	int val = 0;//玩家输入
//	while (1)
//	{
//		cin >> val;
//		//3.判断(猜对退出游戏，猜错提示大小进入循环)
//		if (val > num)
//		{
//			cout << "猜大了" << endl;
//		}
//		else if (val < num)
//		{
//			cout << "猜小了" << endl;
//		}
//		else
//		{
//			cout << "猜对了" << endl;
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
//			cout << "敲桌子" << endl;
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
//	//外层一次，内层一周
//	for (int i = 0; i < 10; i++)
//	{
//		for (int j = 0; j < 10; j++)
//		{
//			cout << "* ";
//		}
//		cout << endl;//换行
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