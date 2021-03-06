#include "pch.h"
#include <iostream>
#include <string>
#include "Car.h"

using namespace std;

// 类内定义和内联函数
// 定义类是将成员函数的函数体写在类的内部，即类内定义
// 类内定义***************
// class Stufent
// {
// public:
// 	void setAge(int _age) { age = _age; };
// 	int getAge() { return age; };
//
// 	void study()
// 	{
// 		//TODO
// 	}
//
// private:
// 	string name;
// 	int age;
// };

// 类内定义的成员函数编译器会优先编译为内联函数，但是不会把inline写出来，会以inline的方式优先编译，对于复杂的成员函数无法编译成内联函数的，才会编译成普通函数

// END***************


// 类外定义
// 定义类是将成员函数的函数体写在类的外部，即类外定义
// 形式：（1）同文件类外定义（游击队），（2）分文件类外定义（正规军）
// 同文件列外定义：成员函数写在类的外边，但是与类的定义在同一文件下；
// 同文件例子：
// class Car
// {
// public:
// 	void run();
//
// 	void stop();
//
// 	void changeSpeed();
// };
//
// void Car::run()
// {
// };
//
// void Car::stop()
// {
// };
//
// void Car::changeSpeed()
// {
// };
// END***************

// 分文件列外定义：成员函数写在类的外边，但是与类的定义在同一文件下；
// 建议常用
// 同文件例子：
// 参考Car.h与Car.cpp


// 作业
/*定义一个Teacher类，要求分别采用同文件类外定义和分文件类外定义
 * 要求如下：
 * 数据成员：
 *	名字
 *	年龄
 *	性别
 * 成员函数：
 *	数据成员的封装函数
 *	授课Teach
 */

class Teacher
{
public:
	void setName(string _name);
	string getName();

	void setSex(string _sex);
	string getSex();

	void setAge(int _age);
	int getAge();

	void teach();
private:
	string m_strName;
	string m_strSex;
	int m_iAge;
};

void Teacher::setName(string _name)
{
	m_strName = _name;
}

string Teacher::getName()
{
	return m_strName;
}

void Teacher::setSex(string _sex)
{
	m_strSex = _sex;
}

string Teacher::getSex()
{
	return m_strSex;
}

void Teacher::setAge(int _age)
{
	m_iAge = _age;
}

int Teacher::getAge()
{
	return m_iAge;
}

void Teacher::teach()
{
	cout << "上课" << endl;
}


int main()
{
	Teacher1 t;
	t.setName("张三");
	t.setSex("男");
	t.setAge(11);

	cout << t.getName() << "," << t.getSex() << "," << t.getAge() << endl;
	t.teach();
	return 0;
}
