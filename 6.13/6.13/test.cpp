
#include <iostream>
using namespace std;

int main()
{
	string s1("hello xiaotao");
	for (auto ch : s1)
	{
		cout << ch << endl;
	}
}#include <iostream>

using namespace std;
#include <string>
//���һ����ĸ�ĳ���
//int main()
//{
//	string str;
//
//	while (getline(cin, str))
//	{
//		size_t pos = str.rfind(' ');
//		cout << str.size() - (pos + 1) << endl;
//	}
//	return 0;
//}

//�ַ������
//class Solution
//{
//public:
//	string Addstring(string num1, string num2)
//	{
//		int end1 = num1.size() - 1;
//		int end2 = num2.size() - 1;
//		int ret = 0, carry = 0;
//		string str;
//		while (end1 >= 0 || end2 >= 0)
//		{
//			int val1 = end1 >= 0 ? num1[end1] - '0' : 0;
//			int val2 = end2 >= 0 ? num2[end2] - '0' : 0;
//			ret = val1 + val2 + carry;
//			carry = ret / 10;
//			str += ret % 10 + '0';
//			end1--;
//			end2--;
//		}
//		reverse(str.begin(), str.end());
//	}
//
//};
//string Addstring(string num1, string num2)
//{
//	int end1 = num1.size() - 1;
//	int end2 = num2.size() - 1;
//	int ret = 0, carry = 0;
//	string str;
//	while (end1 >= 0 || end2 >= 0)
//	{
//		int val1 = end1 >= 0 ? num1[end1] - '0' : 0;
//		int val2 = end2 >= 0 ? num2[end2] - '0' : 0;
//		ret = val1 + val2 + carry;
//		carry = ret / 10;
//		str += ret % 10 + '0';
//		end1--;
//		end2--;
//	}
//	if (carry == 1)
//	{
//		str += '1';
//	}
//	reverse(str.begin(), str.end());
//	return str;
//}
//int main()
//{
//	string str1 = "9";
//	string str2 = "1";
//	cout << Addstring(str1, str2)<<endl;
//}

//c�����е�strxxx ��ϵ�п⺯��
//cpp�е�string �ǹ����ַ�������࣬��ɾ���+�㷨
//int main()
//{
//	string s1;
//	std::string s2;
//
//	std::string name("��ɽ");
//	name = "����";
//}
//int main()
//{
	//���캯��
	//string s1;
	//cout << s1 << endl;
	//��
	/*string s2("С��");

	string s4(s2);
	cout << s4 << endl;
	string s5(s3);
	cout << s5 << endl;*/
	//string s4(10, '*');
	////��10��'*'���������s4
	//cout << s4 << endl;

	//string s5(10, 'x');
	////��10��'x'���������s4
	//cout << s5 << endl;
	//string s5(s2);
	////�������캯��

	//string s6(s3, 6, 5);
	////�������ַ� ��λ�� ����
	////�Ƚϴ�С--���������
	//cout << (s1 == s2) << endl;
	//cout << (s1 > s2) << endl;

	//string s7(s3, 6);
	////Ҫ�������ַ�����λ�ã�npsȱʡ���������

	//string s8(s3, 6, 100);
//}
//class string
//{
//	operator+=(char ch)
//		operator+=(const char* str)
//
//};

//int main()
//{
//	//��
//	string s1("hello");
//
//}

//int main()
//{
//	string s3("hello world");
//	cout << s3.size() << endl;
//

//int main()
//{
//	string s1("hello xiaotao");
//	cout << s1.size() << endl;
//	cout << s1.capacity() << endl;
//
//	string s2;
//	cout << s2.size() << endl;
//	cout << s2.capacity() << endl;
//
//}
//int main()
//{
//	string s1;
//	cout <<"��С:"<< s1.size() << endl;
//
//	cout <<"��ʼ������"<< s1.capacity() << endl;
//
//	size_t old = s1.capacity();
//	for (size_t i = 0; i < 100; i++)
//	{
//		s1 += 'x';
//		if (old != s1.capacity())
//		{
//			cout << "����" << s1.capacity() << endl;
//			old = s1.capacity();
//		}
//	}
//}
//int main()
//{
//	string s1("hello xiaotao");
//  /*  cout << s1.size() << endl;
//    cout << s1.capacity() << endl;*/
//	cout << s1.empty() << endl;
//     s1.clear();
//     //�������ݣ����ڴ�ռ仹��
//     /*cout << s1.size() << endl;
//     cout << s1.capacity() << endl;*/
//	 cout << s1.empty() << endl;
//}
//int main()
//{
//	string s3("hello world");//�ַ���
//	
//    string s6(s3, 6, 5);///��ĳ���ַ���ĳ��λ�ÿ���n���ַ�
//	//���ַ���s3������λ�����󿽱�����ַ�
//	cout << s6 << endl;
//
//	//����������Ϊ5ʱ���ͽ�ȡ5���ַ���������������ʱ����posλ��һֱ�����ȡ
//	//��Ϊȱʡ������һ���ܴ����ֵ��
//	
//	string s7(s3, 6);
//	cout << s6 << endl;
//	//
//}
//int main()
//{
//	string s1("hello world");
//	s1.resize(20);
//	cout << s1 << endl;
//
//	string s2("hello world");
//	s2.resize(20,'x');
//	cout << s2 << endl;
//}
//int main()
//{
//	string s1("hello world");
//	//��α���string�����أ�
//	
//	for (int i = 0; i < 20; i++)
//	{
//		s1[i]++;
//	}
//	
//}
//int main()
//{
//	string s1("hello xiaotao");
//	//������--->ָ��
//	string::iterator it = s1.begin();
//	while (it != s1.end())
//	{
//		//д
//		(*it)--;
//		++it;
//	}
//	while (it != s1.end())
//	{
//		//��
//		cout << *it << " ";
//		++it;
//	}
//}
int main()
{
	string s1("hello world");
	string::reverse_iterator rit = s1.rbegin();//���������
	while (rit != s1.rend())
	{

		cout << (*rit) << endl;//�������
		++rit;
	}

}