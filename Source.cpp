// Lab_03_3.cpp
// < Перхун Ірини >
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 17
#include <iostream>

using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R;

	cout << "R= ";  cin >> R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	// розгалуження в повній формі
	if(( (pow(x+R,2)+pow(y,2)<=pow(R,2)) && x >= -R && x<=0 && y>=0)  ||
		( pow(x-R,2)+pow(y,2)<=pow(R,2)) && x<=R && x>=0 && y<=0)
			cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}