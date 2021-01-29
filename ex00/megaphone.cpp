#include <iostream>

using namespace std;

int main(int c, char **s)
{
	int i;

	i = 1;
	while (i < c)
	{
		cout << s[i];
		i++;	
	}
	if (c == 1)
		cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	cout << "\n";
	return (0);
}