#include <iostream>
using namespace std;

int main (int ac, char **c)
{
	int i = 0;
	char n;
	cout << "\"" << endl;

	if (ac == 1)
	cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
	if (ac == 2)
	cout << "shhhhh... I think the students are asleep..." << endl;
	if (ac == 4)
	// cout << "Damnit" "/"\" ! "\"\" ""Sorry students, I thought this thing was off."" << endl; 

//  ./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
// DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.

	printf("21\n");
	if (ac == 4 || c[4][i])
	{
		n = toupper(c[4][i]);
	cout << "20\n";
		cout << n << endl;
		return 0;
	}
	//toupper to be make upper words by one character
	// cout << c << endl;
	return 0;
}