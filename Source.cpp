#include <iostream>

using namespace std;

int main() {
	/*Boolean16◦
. Дано целое положительное число. Проверить истинность высказывания: «Данное число является четным двузначным».
*/
	/*
	int a;
	bool d;
	cout << "vvedite chislo";
	cin >> a;
	d = a > 9 && a < 100 && a % 2 == 0;
	cout << boolalpha << d << endl;*/

	/*Boolean17◦
. Дано целое положительное число. Проверить истинность высказывания: «Данное число является нечетным трехзначным».
*/
	/*
	int a;
	bool d;
	cout << "vvedite chislo";
	cin >> a;
	d = a > 99 && a < 1000 && a % 2 != 0;
	cout << boolalpha << d << endl;
	*/

	/*Boolean21◦
. Дано трехзначное число. Проверить истинность высказывания:
«Цифры данного числа образуют возрастающую последовательность».
*/
	/*
	int a;
	bool d;
	cout << "vvedite chislo";
	cin >> a;
	d = a == 123 || a == 234 || a == 345 || a == 456 || a == 567 || a == 678 || a == 789;
	cout << boolalpha << d << endl;*/

	/*Boolean25◦
. Даны числа x, y. Проверить истинность высказывания: «Точка с
координатами (x, y) лежит во второй координатной четверти».*/
	/*
	int x,y;
	bool d;
	cout << "vvedite x";
	cin >> x;
	cout << "vvedite y";
	cin >> y;
	d = x<=0 && y >=0;
	cout << boolalpha << d << endl;*/

	int x, y, x1, x2, y1, y2,x3,x4,y3,y4;
	bool d;
	cout << "vvedite x - ";
	cin >> x;
	cout << "vvedite x1 - ";
	cin >> x1;
	cout << "vvedite x2 - ";
	cin >> x2;
	cout << "vvedite y - ";
	cin >> y;
	cout << "vvedite y1 - ";
	cin >> y1;
	cout << "vvedite y2 - ";
	cin >> y2;
	x3 = -x1;
	x4 = -x2;
	y3 = -y1;
	y4 = -y2;
	d = (x <= x1&& x >= x2 && y <=y1&& y>=y2) || (x >= x1 && x <= x2&& y>=y1 && y <= y2);
	cout << boolalpha << d << endl;
return 0;
}