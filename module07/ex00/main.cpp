#include "whatever.hpp"

int main()
{

	{
		std::cout << "\n ____Recommended test sequence :____ \n";

		int a = 2;
		int b = 3;

		::swap( a, b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

		std::string c = "chaine1";
		std::string d = "chaine2";

		::swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	{
		std::cout << "\n ____Extra test sequence:____ \n"; 
		int a = 12;
		int b = 42;
		std::cout << a << " " << b << std::endl;
		swap(a, b);
		std::cout << a << " " << b << std::endl;
		std::cout << "MIN: " << min(a, b) << std::endl;
		std::cout << "MAX: " << max(a, b) << std::endl;

		std::string s1 = "Abigal is angry";
		std::string s2 = "Ziva is cross";
		std::cout << s1 << std::endl << s2 << std::endl;
		swap(s1, s2);
		std::cout << "__after swap__ \n";
		std::cout << s1 << std::endl << s2 << std::endl;
		std::cout << "MIN: " << min(s1, s2) << std::endl;
		std::cout << "MAX: " << max(s1, s2) << std::endl;
	}
	{
		std::cout << "\n ____Extra test sequence floats:____ \n"; 
		float a = 12.123f;
		float b = 12.133f;
		std::cout << a << " " << b << std::endl;
		swap(a, b);
		std::cout << "\n __after swap__ \n";
		std::cout << a << " " << b << std::endl;
		std::cout << "MIN: " << min(a, b) << std::endl;
		std::cout << "MAX: " << max(a, b) << std::endl;
	}
	{
		std::cout << "\n ____Extra test sequence char:____ \n"; 
		char a = 'x';
		char b = 'z';
		std::cout << a << " " << b << std::endl;
		swap(a, b);
		std::cout << "\n __after swap__ \n";
		std::cout << a << " " << b << std::endl;
		std::cout << "MIN: " << min(a, b) << std::endl;
		std::cout << "MAX: " << max(a, b) << std::endl;
	}
}