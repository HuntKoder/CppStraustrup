#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");

	cout << "����������, ������� ���� ��� � ������� (����� ������� 'enter'):\n";

	string first_name = "???";
	int age = (-1);
	cin >> first_name >> age;

	cout << "Hello, " << first_name << " - age( " << age << " )" << endl;


	system("pause");
	return(0);
}