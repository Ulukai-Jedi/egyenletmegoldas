#include <iostream>
//Hat�rozzuk meg az egy�tthat�ival megadott, ax + b = 0 form�tum� els�fok� egyenlet megold�s�t!

int main() {
	double a = 0.0;
	double b = 0.0;
	double x = 0.0;

	std::cout << "Hatarozzuk meg az egyutthatoival megadott ax + b = 0 formatumu elsofoku egyenlet megoldasat: " << std::endl;

	std::cin >> a;
	std::cin >> b;

	x = - ( b / a );

	std::cout << "Az egyenlet megoldasa: " << x << std::endl;
}