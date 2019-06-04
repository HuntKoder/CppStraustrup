/*
	*Напишите программу, формирующую простую форму для письма на основе вход-		*
	*ной информации. Для начала наберите программу из раздела 3.1, предложив поль-  *
	*зователю ввести свое имя и предусмотрев вывод строки “Hello, first_name”, где  *
	*first_name — это имя, введенное пользователем. Затем модифицируйте про-		*
	*грамму следующим образом: измените приглашение на строку “Введите имя адре-	*
	*сата” и измените вывод на строку “Dear first_name,”. Не забудьте о запятой.	*

	Остальные 6 пунктов задания в книге 116 стр
*/

#include <iostream>
#include <string>

int main()
{
	setlocale(LC_ALL, "rus");

	std::cout << "Доброго времени суток! " << std::endl;
	std::cout << "Введите имя адресата: "; // Enter the name of the addressee: Введите имя адресата
	std::string Dear = " ";
	std::cin >> Dear;
	std::cout << "Hello, " << Dear << '\n';

	std::cout << "Как зовут вашего друга?\n";
	std::string name_friend;
	std::cin >> name_friend;
	std::cout << "Ты видел " << name_friend << std::endl;

	std::cout << "Введите m - если друг мужчина, и f - если женщина " << std::endl;
	char friend_sex = 0;
	std::cin >> friend_sex;

	if (friend_sex == 'm') std::cout << "Если ты увидишь " << name_friend << " пожалуйста, попроси его позвонить мне" << std::endl;
	if (friend_sex == 'f') std::cout << "Если ты увидишь " << name_friend << " пожалуйста, попроси её позвонить мне" << std::endl;

	int age = 0;
	std::cin >> age;
	std::cout << "Я слышал, ты только что отметил день рождения и тебе исполнилось " << age << " лет" << std::endl;
	if (age <= 0 || age >= 110)
		std::cout << "simple_error('ты шутишь')" << std::endl;
	if (age == 12)
		std::cout << name_friend << " на следующий год тебе исполнится " << age + 1 << " лет" << std::endl;
	if (age == 18)
		std::cout << name_friend << " на следующий год ты сможешь голосовать" << std::endl;
	if (age == 60)
		std::cout << name_friend << " надеюсь, что ты не скучаешь напенсии" << std::endl;

	std::cout << "Искренне твой			" << Dear << std::endl;

	system("pause");
	return 0;
}