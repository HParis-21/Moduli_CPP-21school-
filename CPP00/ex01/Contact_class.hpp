#ifndef CONTACT_CLASS_HPP
#define CONTACT_CLASS_HPP

#include <iostream>
#include <string>
#include <iomanip>

#define WIDTH	10

class Contact
{
	private:
		std::string		f_name;
		std::string		l_name;
		std::string		nickname;
		std::string 	phone;
		std::string		secret;

	public:
		Contact(void);
		~Contact(void);
		void	create_contact(void);
		bool	check_null(void);
		void	print_table(int id);
		void	print_all_contact( void );

};

#endif //CONTACT_CLASS_HPP
