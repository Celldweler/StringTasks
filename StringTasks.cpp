// StringTasks.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <string>
#include <cstdarg>
#include <Windows.h>


using namespace std;

void main(int argc,char* argv[])
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	const char* mas[] =
	{"kek","2ch","anon","sup","lurkmor","dark souls","4chan","Rumstain","2ch","2ch","system of a down"};
	char key_word[255];
	 cout << "]$~";
	cin >> key_word;
	//cout << "[$~";
	//cout << key_word;
	int count = 0;
	int g = 0;
	bool flag = false;
	for (size_t i = 0; i < 11; i++)
	{
		g = 0; 
		while (mas[i][g] != '\0')
		{
			if (mas[i][g] != key_word[g])
			{
				flag = false;
				break;
			}
			
			g++;
		}
		(flag) ? count++ : flag = true;
		//cout << mas[i] << " ";
	}
	!count?(cout<<"Введенное вами слово не встречалось в масиве не разу!") :(cout << "]$~Count -> " << count);
	/*
	for (size_t i = 0; i < 8; i++)
	{
		g = 0;
		while ((char)mas[g] != '\0')
		{
			cout << mas[g]; g++;
		}
		//cout << " ";


	}
	*/
	//char symbol[255];
	//char mas_digit[11];
	//int count = 48;
	//for (int i = 48,q = 0; i <= 57; i++)
	//{
	//	cout<< (mas_digit[q] = i) ;
	//}

	//gets(symbol);

	//int i=0;
	//for (; i < 255; i++)
	//{
	//	cout<< i <<"\t"<<char(i)<<endl;
	//}
	//
	////48 ..57
 //  while(symbol[i]!='\0')
	//{
	//   cout<<symbol[i];i++;
	//}
	
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
