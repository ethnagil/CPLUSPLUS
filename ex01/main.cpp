
#include "phony.h"

using namespace std;

int main () 
{
	Entry* rows[8];
	string cmd;
	int i;
	int j;
	string k;

	cmd = "START";
	i = 0;
	while (cmd != "E")
	{
  		cout << "Enter your command: (A)DD, (S)EARCH, or (E)XIT : ";
  		getline(cin, cmd);
  		string action1 = "A";
		string action2 = "S";
		if(cmd == action1)
		{
			if (i == 8)
			{ 
				cout << "Your directory is full, start a new directory and loose existing entries y/n ? ";
  				getline(cin, k);
				if (k == "y")
					i = 0;
			}
			if (i < 8)
			{
				rows[i] = new Entry(i + 1);
				i++;
			}
		}
		while (cmd == action2)
		{
			printf("%-10.10s", "Index");
			printf("|%-10.10s", "First Name");
			printf("|%-10.10s", "Last Name");
			printf("|%-10.10s", "Nickname");
			printf("\n");
			for (j = 0; j < i; j++) { 
				rows[j]->Entry::ft_list_entry();
			}
			cout << "Enter the index for the required entry : ";
			cin >> j;
			if ((j >= 1) && (j <= i))
			{
				rows[j - 1]->Entry::ft_show_entry();				
				cmd = "R";
			}
			else
			{
			  	printf("\nInvalid Entry. Please enter an index from the list.\n");
			}
			cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
	}
  return 0;
}