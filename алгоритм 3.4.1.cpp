#include<cmath>
#include <iostream>

using namespace std;

int main()
{
	double x;// вхідний аргумент
	double y;// вхідний параметр
	double R1;//радіус більшого кола
	double R2;//радіус меншого кола
	const float Pi = 3.1415;
	cout << " x = ";cin >> x;
	cout << " y = ";cin >> y;
	cout << " R1 = ";cin >> R1;
	cout << " R2 = ";cin >> R2;
	// розгалуження в повній формі
	if ((y > 0 && y <= Pi * pow(R2, 2) && y <= x) ||
		(y < 0 && y <= Pi * pow(R1, 2) && y >= Pi * pow(R2, 2) && y >= -x))
		cout << "Yes" << endl;
	else
		cout <<"No" << endl;

	cin.get();
	return 0;
}