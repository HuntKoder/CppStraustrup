/*
	*�������� ���������, ����������� ������� ����� ��� ������ �� ������ ����-		*
	*��� ����������. ��� ������ �������� ��������� �� ������� 3.1, ��������� ����-  *
	*�������� ������ ���� ��� � ������������ ����� ������ �Hello, first_name�, ���  *
	*first_name � ��� ���, ��������� �������������. ����� ������������� ���-		*
	*������ ��������� �������: �������� ����������� �� ������ �������� ��� ����-	*
	*����� � �������� ����� �� ������ �Dear first_name,�. �� �������� � �������.	*

	��������� 6 ������� ������� � ����� 116 ���
*/

#include <iostream>
#include <string>

int main()
{
	setlocale(LC_ALL, "rus");

	std::cout << "������� ������� �����! " << std::endl;
	std::cout << "������� ��� ��������: "; // Enter the name of the addressee: ������� ��� ��������
	std::string Dear = " ";
	std::cin >> Dear;
	std::cout << "Hello, " << Dear << '\n';

	std::cout << "��� ����� ������ �����?\n";
	std::string name_friend;
	std::cin >> name_friend;
	std::cout << "�� ����� " << name_friend << std::endl;

	std::cout << "������� m - ���� ���� �������, � f - ���� ������� " << std::endl;
	char friend_sex = 0;
	std::cin >> friend_sex;

	if (friend_sex == 'm') std::cout << "���� �� ������� " << name_friend << " ����������, ������� ��� ��������� ���" << std::endl;
	if (friend_sex == 'f') std::cout << "���� �� ������� " << name_friend << " ����������, ������� � ��������� ���" << std::endl;

	int age = 0;
	std::cin >> age;
	std::cout << "� ������, �� ������ ��� ������� ���� �������� � ���� ����������� " << age << " ���" << std::endl;
	if (age <= 0 || age >= 110)
		std::cout << "simple_error('�� ������')" << std::endl;
	if (age == 12)
		std::cout << name_friend << " �� ��������� ��� ���� ���������� " << age + 1 << " ���" << std::endl;
	if (age == 18)
		std::cout << name_friend << " �� ��������� ��� �� ������� ����������" << std::endl;
	if (age == 60)
		std::cout << name_friend << " �������, ��� �� �� �������� ��������" << std::endl;

	std::cout << "�������� ����			" << Dear << std::endl;

	system("pause");
	return 0;
}