#include <iostream>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
#if 0



	//�������� ��� �������
	cout << "����������, ������� �������� � ��������� ������: ";
	int n;
	cin >> n;
	cout << "\nn == " << n
		<< "\nn +1 == " << n + 1
		<< "\n���� ���� �� n == " << 3 * n
		<< "\n��� ���� �� n == " << n + n
		<< "\nn � �������� == " << n * n
		<< "\n�������� n == " << n / 2
		<< "\n������ ���������� �� n == " << sqrt(n)
		<< endl;
#endif // 0

#if 0
	//������������ �����
	cout << "\n����������, ������� ��� � �������: ";
	string first;
	string second;

	cin >> first >> second;

	string name = first + ' ' + second;

	cout << "Hello, " << name << endl;
#endif // 0

#if 0
	//���� � ��������� ���
	cout << "����������, ������� ��� �����\n";
	string f1;
	string f2;
	cin >> f1 >> f2;	//��������� 2 ������
	if (f1 == f2) cout << "����� ���������\n";
	if (f1 < f2)
		cout << f1 << " �� �������� ������������� " << f2 << '\n';
	if (f1 > f2)
		cout << f1 << " �� �������� ������� �� " << f2 << '\n';
#endif // 0

#if 0
	string a = "alpha";
	a = "beta";
	string b = a;
	b = a + "gamma";
	a = a + "delta";
#endif

#if 0
	//��������� ������������� ����
	string previous = " ";

	string current;
	while (cin >> current)
	{
		if (previous == current)
			cout << "������������� �����: " << current << '\n';
		previous = current;
	}
#endif

	system("pause");
	return (0);
}