
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
//最后一个字母的长度
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

//字符串相加
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

//c语言中的strxxx 是系列库函数
//cpp中的string 是管理字符数组的类，增删查改+算法
//int main()
//{
//	string s1;
//	std::string s2;
//
//	std::string name("张山");
//	name = "绽放";
//}
//int main()
//{
	//构造函数
	//string s1;
	//cout << s1 << endl;
	//空
	/*string s2("小陶");

	string s4(s2);
	cout << s4 << endl;
	string s5(s3);
	cout << s5 << endl;*/
	//string s4(10, '*');
	////用10个'*'来构造对象s4
	//cout << s4 << endl;

	//string s5(10, 'x');
	////用10个'x'来构造对象s4
	//cout << s5 << endl;
	//string s5(s2);
	////拷贝构造函数

	//string s6(s3, 6, 5);
	////拷贝的字符 ，位置 长度
	////比较大小--运算符重载
	//cout << (s1 == s2) << endl;
	//cout << (s1 > s2) << endl;

	//string s7(s3, 6);
	////要拷贝的字符串，位置，nps缺省参数无穷大

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
//	//增
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
//	cout <<"大小:"<< s1.size() << endl;
//
//	cout <<"起始容量："<< s1.capacity() << endl;
//
//	size_t old = s1.capacity();
//	for (size_t i = 0; i < 100; i++)
//	{
//		s1 += 'x';
//		if (old != s1.capacity())
//		{
//			cout << "扩容" << s1.capacity() << endl;
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
//     //清理数据，但内存空间还在
//     /*cout << s1.size() << endl;
//     cout << s1.capacity() << endl;*/
//	 cout << s1.empty() << endl;
//}
//int main()
//{
//	string s3("hello world");//字符串
//	
//    string s6(s3, 6, 5);///从某个字符串某个位置拷贝n各字符
//	//从字符串s3第六个位置往后拷贝五个字符
//	cout << s6 << endl;
//
//	//当给定长度为5时，就截取5个字符，当不给定长度时，从pos位置一直往后截取
//	//因为缺省参数是一个很大的数值。
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
//	//如何遍历string对象呢？
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
//	//迭代器--->指针
//	string::iterator it = s1.begin();
//	while (it != s1.end())
//	{
//		//写
//		(*it)--;
//		++it;
//	}
//	while (it != s1.end())
//	{
//		//读
//		cout << *it << " ";
//		++it;
//	}
//}
int main()
{
	string s1("hello world");
	string::reverse_iterator rit = s1.rbegin();//反向迭代器
	while (rit != s1.rend())
	{

		cout << (*rit) << endl;//反向遍历
		++rit;
	}

}