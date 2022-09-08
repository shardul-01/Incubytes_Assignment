#include "calc.h"
#include<sstream>
bool is_there_another_number(std::string &str,int &number){
	std::string::size_type pos = str.find_first_of("\n",0);
	if(pos == std::string::pos){
		return false;
	}
	++pos;
	str = str.substr(pos,str.size()-pos);
	std::stringstream ss(str);
	ss>>number;
	str = str.substr(ss.tellg(),str.size()-ss.tellg());
	return true;
}
int add(srd::string numbers){
	if(numbers.empty()){
		return 0;
	}
	int result;
	std::stringstream ss(numbers);
	ss>>result;
	numbers = numbers.substr(ss.tellg(),numbers.size()-tellg());
	int next;
	while(is_there_another_number(numbers,next)){
		result+=next;
	}
	
	
	return result;
}

