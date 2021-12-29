#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>

class Karen
{
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	void (Karen::*arv[4])(void); // указатель на метод

public:
	Karen();
	~Karen();

	void complain(std::string level);
};

#endif //KAREN_HPP
