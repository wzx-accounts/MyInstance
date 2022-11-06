#include <iostream>
#include "instance.h"

int main(void){
	std::cout << Instance01::GetInstance()->GetName() << std::endl;
	std::cout << Instance02::GetInstance()->GetName() << std::endl;
	return 0;
}