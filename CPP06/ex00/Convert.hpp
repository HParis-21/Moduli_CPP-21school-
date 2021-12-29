#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <string>
#include <iostream>
#include <cmath>
#include <climits>

class Convert {
private:
	std::string value;
	Convert();

public:
	~Convert();
	Convert(std::string value);
	Convert(const Convert& copy);
	Convert& operator=(const Convert& obj);

	std::string getValue() const;
	int			toInt();
	char		toChar();
	float		toFloat();
	double		toDouble();
	void		convert();
};

#endif //CONVERT_HPP
