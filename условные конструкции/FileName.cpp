#include <iostream>
#include <windows.h>
#define runo return 0;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	int point{};
	std::cout << "Введите шестизначное число: ";
	std::cin >> point;
	if (point < 100000 || point > 999999){
		std::cout << "!ERRORR!-введите число корректно.";
	}
	int sum = (point / 100000) % 10 + (point / 10000) % 10 + (point / 1000) % 10;
	int sum1 = (point / 100) % 10 + (point / 10) % 10 + point % 10;
	if (sum == sum1) {
		std::cout << "HAPPY NUMBER!!";
	}
	else if (sum > sum1 || sum < sum1) {
		std::cout << " no happy nubmer :(";
	}
	
	
	int point;
	std::cout << "Введите четырех значное число: ";
	std::cin >> point;

	if (point < 1000 || point > 9999) {
		std::cout << "!ERRORR!-введите число корректно.";
	}
	int point1 = point / 1000;
	int point2 = (point % 1000) / 100;
	int point3 = (point % 100) / 10;
	int point4 = point % 10;
	int result = point2 * 1000 + point1 * 100 + point4 * 10 + point3;
	std::cout << "Получившиеся число: " << result;
	
	int num1;
	int num2;
	int num3;
	int num4;
	int num5;
	int num6;
	int num7;
	int maxi;
	std::cout << "Введите 7 чисел:\n";
	std::cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6 >> num7;
	maxi = num1;
	if (num2 > maxi)
	{
		maxi = num2;
	}
	if (num3 > maxi)
	{
		maxi = num3;
	}
	if (num4 > maxi)
	{
		maxi = num4;
	}
	if (num5 > maxi)
	{
		maxi = num5;
	}
	if (num6 > maxi)
	{
		maxi = num6;
	}
	if (num7 > maxi)
	{
		maxi = num7;
	}
	std::cout << "Большее из чисел введёных вами является: " << maxi;

		runo
}