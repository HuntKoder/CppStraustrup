//Поиск повторяющихся слов
#include <iostream>
#include <string>

int main()
{
	setlocale(LC_ALL, "ru");	//функция перевода языка

	int number_of_words = (0);	//колличество слов
	std::string previous = " ";	//предыдущий
	std::string current = " ";	//текущий

	while (std::cin >> current)
	{
		++number_of_words;
		if (previous == current)
			std::cout << "number of words: " << number_of_words
			<< " repeted: " << current << '\n';
		previous = current;
	}



	system("pause");	//пауза
	return (0);			//корректное завершение функции
}