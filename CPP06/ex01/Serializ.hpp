#ifndef SERIALIZ_HPP
#define SERIALIZ_HPP

#include <string>
#include <iostream>

typedef struct Data
{
	std::string s1;
	int n;
	std::string s2;
}				Data;

int randomNum(void);
std::string randomStr(void);

void * serialize(void);
Data * deserialize(void *raw);

#endif //SERIALIZ_HPP
