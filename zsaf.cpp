#include <iostream>
using namespace std;
int main()
{
    int  point,homework,exam,all;
	cout << "Score point : ";
	cin >> point;
	cout << "Score homework : ";
	cin >> homework;
	cout << "Score exam : ";
	cin >> exam;
	all = point+homework+exam;
	cout << "Score total : " << all << endl;
if      (all > 100)
	cout << "Error " << endl;
else if (all >= 95)
	cout << "A+" << endl;
else if (all >= 90)
	cout << "A" << endl;
else if (all >= 85)
	cout << "B+" << endl;
else if (all >= 80)
	cout << "B" << endl;
else if (all >= 75)
	cout << "C+" << endl;
else if (all >= 70)
	cout << "C" << endl;
else if (all >= 65)
	cout << "D+" << endl;
else if (all >= 60)
	cout << "D" << endl;
else if (all <= 0)
	cout << "F" << endl;
else if (all < 0)
	cout << "Error" << endl;
}