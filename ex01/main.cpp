
#include "phony.h"

using namespace std;

int main () 
{
	Entry rows[8];
	string cmd;
	int i;
	int j;
	string k;

	cmd = "START";
	i = 0;
	while (cmd != "EXIT")
	{
  		cout << "Enter your command: ADD, SEARCH, or EXIT : ";
  		getline(cin, cmd);
  		string action1 = "ADD";
		string action2 = "SEARCH";
		if(cmd == action1)
		{
			if (i == 8)
			{ 
				cout << "Your directory is full, replace existing entries y/n ?";
  				getline(cin, k);
				if (k == "y")
					i = 0;
			}
			if (i < 8)
			{
				Entry::ft_add_entry(rows[i], i);
				i++;
			}
		}
		while (cmd == action2)
		{
			Entry::ft_list_entries();
			cout << "Enter the index for the required entry :";
			cin >> j;
			if ((j >= 1) && (j <= 8))
			{
				Entry::ft_show_entry(j-1);				
				cmd = "RESTART";
			}
			else
			  	printf("\nInvalid Entry. Please enter an index from the list.\n");
		}
	}
  return 0;
}