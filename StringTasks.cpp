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

