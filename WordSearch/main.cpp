//����� ������������� ����
#include <iostream>
#include <string>

int main()
{
	setlocale(LC_ALL, "ru");	//������� �������� �����

	int number_of_words = (0);	//����������� ����
	std::string previous = " ";	//����������
	std::string current = " ";	//�������

	while (std::cin >> current)
	{
		++number_of_words;
		if (previous == current)
			std::cout << "number of words: " << number_of_words
			<< " repeted: " << current << '\n';
		previous = current;
	}



	system("pause");	//�����
	return (0);			//���������� ���������� �������
}