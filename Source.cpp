// Lab_03_3.cpp
// < ������ ����� >
// ����������� ������ � 3.3
// ������������, ������ �������� �������.
// ������ 17
#include <iostream>

using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double R;

	cout << "R= ";  cin >> R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	// ������������ � ����� ����
	if(( (pow(x+R,2)+pow(y,2)<=pow(R,2)) && x >= -R && x<=0 && y>=0)  ||
		( pow(x-R,2)+pow(y,2)<=pow(R,2)) && x<=R && x>=0 && y<=0)
			cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}