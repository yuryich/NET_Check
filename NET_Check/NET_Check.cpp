#include <iostream>
#include <string>
using namespace std;

struct Check
{
	int number_check;
	string name;
	double balance;
};

void new_balance(Check &acount, int new_balanc) {
	acount.balance = new_balanc;
}


int main()
{
	Check acount;
	int n;
	setlocale(LC_ALL, "Rus");
	cout << "Введите номер счёта: ";
	cin >> acount.number_check;
	cout << "Введите имя владельца: ";
	cin >> acount.name;
	cout << "Введите баланс: ";
	cin >> acount.balance;
	cout << "Введите новый баланс: ";
	cin >> n;
	new_balance(acount, n);
	cout << "Ваш счёт: " << acount.name << ", " << acount.number_check << ", " << acount.balance;
}
    