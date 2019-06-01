#include<iostream>

using namespace std;

inline void keep_window_open()
{
	char ch;
	cin >> ch;
}


int main(	)
{
	cout << "Hello World!"		  << endl;
	cout << "Hello, programming!" << endl;
	cout << "Here we go!"		  << endl;

	keep_window_open();

	system("pause");
	return(0);
}