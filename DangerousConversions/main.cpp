//������� ��������������
#include <iostream>
#include <string>

int main()
{
	setlocale(LC_ALL, "ru");

	//������ �����
	double enter = (0);
	while (std::cin >> enter)
	{
		int integer = enter;	//��������� ����� �� �����
		char c = integer;
		int integer2 = c;

		std::cout << " enter    == " << enter
				  << " integer  == " << integer
				  << " integer2 == " << integer2
				  << " char("  << c << ")\n";
	}



	system("pause");
	return (0);
}