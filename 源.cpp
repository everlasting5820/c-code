# include <iostream>
using namespace std;
#define Day 7 //�곣��
int main()
{	
	int a = 10;
	cout << "hello world  \n";
	cout << "a= " << a << endl;
	cout << "һ��һ���У�" << Day << "��" << endl;
	const int month = 12;
	cout << "һ�깲�У�" << month << "��" << endl;
	short num1 = 10; //�����Σ�-32768~32767��
	int num2 = 10; //���� ��2^31��
	long num3 = 10;
	long long num4 = 10; //��2^63��
	float f1 = 3.14f;// �˴�f�Ǳ����ʶ������������double
	double f2 = 3.14159;
	float f3 = 3e4;//��ѧ������
	char ch = 'b';
	cout << "num1 ="  << num1 << " \t ռ���ڴ�ռ�Ϊ  " << sizeof(num1) << endl; 
	cout << "num2 = " << num2 <<  endl;
	cout << "num3 = " << num3 <<  endl;
	cout << "num4 = " << num4 <<  endl;
	cout << "f1 ="    << f1   << "    \\ �����ڴ�ռ��Ϊ   " << sizeof(f1) << endl;
	cout << "f2 = "   << f2   << "   �����ڴ�ռ��Ϊ   " << sizeof(f2) << endl;
	cout << "f3 = "   << f3   <<  endl;
	cout << (int)ch   << "  ����ռ�ֽ� ��" << sizeof(ch) << endl;
	system("pause"); 
	return 0;
	//���� ������������ʱ������ܼ���֪�� 
	// ASCII���Ӧֵ�ؼ�  A��65  a-97
}