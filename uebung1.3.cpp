#include <iostream>
#include <string>

int main() {

	using namespace std;

	cout << "Die verschiedenen Datentypen koennen auch verschiedene Werte ausgeben. \n";
	cout << "Es gibt die Datentypen float, double, byte, char, short, int und long \n";
	cout << "Bitte gebe die Datentypen von links nach rechts ein, um zu erfahren welche Werte diese haben \n";
	cout << "Viel Spass! :) \n";
	cout << "********** \n";

	string stringfloat;
	string stringdouble;
	string stringbyte;
	string stringchar;
	string stringshort;
	string stringint;
	string stringlong;
	string stringEND;

	if (cin >> stringfloat) cout << "Der Wertebereich von float ist von 1.175494e-38 bis 3.402823e+38 bei einer Speicherrate von 4 bytes. \n";
	if (cin >> stringdouble) cout << "Der Wertebereich von double ist von -1.7*10308 bis +1.7*10308 bei einer Speicherrate von 8 bytes. \n";
	if (cin >> stringbyte) cout << "Der Wertebereich von byte ist von -128 bis +127 bei einer Speicherrate von einem byte. \n";
	if (cin >> stringchar) cout << "Der Wertebereich von char ist von 0 bis +65535 bei einer Speicherrate von 2 byte. \n";
	if (cin >> stringshort) cout << "Der Wertebereich von short ist von -32768 bis +32767 bei einer Speicherrate von 2 byte. \n";
	if (cin >> stringint) cout << "Der Wertebereich von int ist von -2147483648 bis +2147483647 bei einer Speicherrate von 4 byte. \n";
	if (cin >> stringlong) cout << "Der Wertebereich von long ist von -263 bis 263-1 bei einer Speicherrate von 8 byte. \n";
	if (cin >> stringEND) cout << "Danke fuers Interesse. Die Werte wurden von http://www.scalingbits.com/book/export/html/46 uebernommen. \n";
	if (cin >> stringEND) return 0;


}