#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
#if 0



	//Операции над числами
	cout << "Пожалуйста, введите значение с плавающей точкой: ";
	int n;
	cin >> n;
	cout << "\nn == " << n
		<< "\nn +1 == " << n + 1
		<< "\nтери раза по n == " << 3 * n
		<< "\nдва раза по n == " << n + n
		<< "\nn в квадрате == " << n * n
		<< "\nполовина n == " << n / 2
		<< "\nкорень квадратный из n == " << sqrt(n)
		<< endl;
#endif // 0

#if 0
	//Конкатынация строк
	cout << "\nПожалуйста, введите имя и фамилию: ";
	string first;
	string second;

	cin >> first >> second;

	string name = first + ' ' + second;

	cout << "Hello, " << name << endl;
#endif // 0

#if 0
	//Ввод и сравнение имён
	cout << "Пожалуйста, введите два имени\n";
	string f1;
	string f2;
	cin >> f1 >> f2;	//Считываем 2 строки
	if (f1 == f2) cout << "имена совпадают\n";
	if (f1 < f2)
		cout << f1 << " по алфавиту предшевствует " << f2 << '\n';
	if (f1 > f2)
		cout << f1 << " по алфавиту следует за " << f2 << '\n';
#endif // 0

#if 0
	string a = "alpha";
	a = "beta";
	string b = a;
	b = a + "gamma";
	a = a + "delta";
#endif

#if 0
	//выявление повторяющихся слов
	string previous = " ";

	string current;
	while (cin >> current)
	{
		if (previous == current)
			cout << "Повторяющееся слово: " << current << '\n';
		previous = current;
	}
#endif

	system("pause");
	return (0);
}