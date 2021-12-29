#ifndef PHONEBOOCK_CLASS_HPP
#define PHONEBOOCK_CLASS_HPP

#include "Contact_class.hpp"
#define	BOOK_SIZE	8

class PhoneBook
{
	private:
		Contact	contacts[BOOK_SIZE];
	public:
		PhoneBook( void );
		~PhoneBook( void );
		int	add_contact( int ind );
		int	search_contact( void );
		int print_contact( int id );
};

#endif //PHONEBOOCK_CLASS_HPP
