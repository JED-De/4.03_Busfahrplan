#include <iostream>
using namespace std;

int main()
{
	int starth, startm, tackt;
	do
	{
		cout << "Bitte geben Sie die Stunden der Startuhrzeit ein: ";
		cin >> starth;
	} while (starth < 0 || starth >= 24);

	do {
		cout << "Bitte geben Sie die Minuten der Startuhrzeit ein: ";
		cin >> startm;
	} while (startm < 0 || startm >= 60);

	cout << "Der erste Bus faehrt also um " << starth << ":" << startm << " Uhr." << endl;

	do
	{
		cout << "Bitte geben Sie die Taktzeit in Minuten ein: ";
		cin >> tackt;
	} while (tackt < 0 || tackt > 180);

	do
	{
		cout << starth << ":" << startm << " ";
		startm = startm + tackt;
		if (startm >= 60)
		{
			cout << endl;
			do
			{
				startm -= 60;
				starth++;
			} while (startm >= 60);
		}
	} while (starth < 24);

	system("PAUSE");
	return 0;
}