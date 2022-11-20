#include <iostream> 
#include <iomanip> 
#include <math.h>

using namespace std;

int main()
{
	float y, Z, Dob;
	cout << "Enter a = ";
	cin >> y;
	Dob = 1;
	for (int i = 1; i < 11; i++)
	{
		Dob *= log(i * y);
	}
	Z = cos(Dob) / y + 2;
	cout << "Z=" << Z << endl;
}