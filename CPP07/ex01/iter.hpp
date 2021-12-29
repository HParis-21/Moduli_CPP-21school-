#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

 template<typename T>
  void	iter(T *arr, int length, void(*f)(T &one)) {
	int i = 0;
	while (i < length)
		f(arr[i++]);
}

// class Awesome
//{
//public:
//	Awesome( void ) : _n( 42 ) { return; }
//	int get( void ) const { return this->_n; }
//private:
//	int _n;
//};
//std::ostream & operator<<( std::ostream & o, Awesome const & rhs ) { o << rhs.get(); return o; }
//
//template< typename T >
//void print( T & x ) { std::cout << x << std::endl; return; }

#endif //ITER_HPP
