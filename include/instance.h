#ifndef INSTANCE_H
#define INSTANCE_H
#include <string>
#include <iostream>


/*********************************** 第一种饿汉式单例实现 ************************************/
class Instance01{
private:
	class Garbo{
	public:
		~Garbo();
	};

private:
	Instance01(){std::cout << "Instance01 的构造函数" << std::endl;}
	~Instance01(){std::cout << "Instance01 的析构函数" << std::endl;}

	Instance01(const Instance01& instance) = delete;
	Instance01& operator=(const Instance01& Instance) = delete;

public:
	static Instance01* GetInstance();

	/*
		其他成员函数
	*/
	std::string GetName(); 

private:
	static Instance01* instancePtr;
	static Garbo garbo;

	/*
		其他成员变量
	*/
	std::string name = "I am Instance01"; 
};


/*********************************** 第二种饿汉式单例实现 ************************************/
class Instance02{
private:
	Instance02(){std::cout << "Instance02 的构造函数" << std::endl;}
	~Instance02(){std::cout << "Instance02 的析构函数" << std::endl;}

	Instance02(const Instance02& instance) = delete;
	Instance02& operator=(const Instance02& Instance) = delete;

public:
	static Instance02* GetInstance();

	/*
		其他成员函数
	*/
	std::string GetName(); 

private:
	// 静态成员，程序结束自动释放内存
	static Instance02 instance;

	/*
		其他成员变量
	*/
	std::string name = "I am Instance02"; 
};


#endif