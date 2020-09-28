# include <iostream>
using namespace std;
#define Day 7 //宏常量
int main()
{	
	int a = 10;
	cout << "hello world  \n";
	cout << "a= " << a << endl;
	cout << "一周一共有：" << Day << "天" << endl;
	const int month = 12;
	cout << "一年共有：" << month << "月" << endl;
	short num1 = 10; //短整形（-32768~32767）
	int num2 = 10; //整形 （2^31）
	long num3 = 10;
	long long num4 = 10; //（2^63）
	float f1 = 3.14f;// 此处f是必须标识符，用于区分double
	double f2 = 3.14159;
	float f3 = 3e4;//科学计数法
	char ch = 'b';
	cout << "num1 ="  << num1 << " \t 占用内存空间为  " << sizeof(num1) << endl; 
	cout << "num2 = " << num2 <<  endl;
	cout << "num3 = " << num3 <<  endl;
	cout << "num4 = " << num4 <<  endl;
	cout << "f1 ="    << f1   << "    \\ 数据内存占用为   " << sizeof(f1) << endl;
	cout << "f2 = "   << f2   << "   数据内存占用为   " << sizeof(f2) << endl;
	cout << "f3 = "   << f3   <<  endl;
	cout << (int)ch   << "  变量占字节 ：" << sizeof(ch) << endl;
	system("pause"); 
	return 0;
	//建议 给变量起名的时候最好能见名知意 
	// ASCII码对应值必记  A—65  a-97
}