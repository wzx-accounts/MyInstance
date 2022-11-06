#include <string>
#include "instance.h"


/*********************************** 第一种饿汉式单例实现 ************************************/
// 类的静态成员变量声明
Instance01* Instance01::instancePtr = new Instance01();
Instance01::Garbo Instance01::garbo;

// 内存回收
Instance01::Garbo::~Garbo(){
	if(instancePtr != nullptr){
		delete instancePtr;
		instancePtr = nullptr;
	}
}

// 获取实例地址
Instance01* Instance01::GetInstance(){
	return instancePtr;
}

// 其他业务逻辑
std::string Instance01::GetName(){
	return name;
}


/*********************************** 第二种饿汉式单例实现 ************************************/
// 类的静态成员变量声明
Instance02 Instance02::instance;

// 获取实例地址
Instance02* Instance02::GetInstance(){
	return &instance;
}

// 其他业务逻辑
std::string Instance02::GetName(){
	return name;
}



