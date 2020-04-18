#include <iostream>
#include <Windows.h>
using namespace std;

void JuniorTask(void)
{
//2.Введите массив символов из 11 элементов. Переведите все строчные буквы-символы в верхний регистр.  
	cout << "Base level problem: \n";
	int count = 11;
	cout << "Enter count symbols ]$~ ";
	char* string = new char[count];
	
		/*if (strlen(string) > count || cin.fail())
		{
			cout << "Count of characters greater than 11!!!\nRepeat Entry$";
			cin.clear();
			cin.ignore(32222, '\n');
		}*/
		cin.getline(string, count);
		//cin.ignore(cin.rdbuf()->in_avail());
	cout << string<<endl;
	for (size_t i = 0; i < strlen(string); i++)
	{
		if ( (string[i] >= 97 && string[i] <= 122) || (string[i] >= 'а'  && string[i] <= 'я') )//97-122 224-255
		{
			cout << (string[i] = static_cast<char>(static_cast<int>(string[i]) - 32));
		}
		
		else
			cout << string[i];	
	}

}
void MediumTask(void)
{
	
	/*В заданном массиве символов слова зашифрованы — каждое из них записано наоборот. Расшифровать сообщение .*/
		cout << "Medium level task: \n";

	int m;
	char str[256];
	cout << "String:\n";
	cin.getline(str, 256);
	char* mas;
	
		for (m = 0; str[m] != '\0'; m++);
		cout << Revers(str, m) << endl;
	
	system("pause");
	return ;
	
	
}
void SeniorTasks(void)
{
	/*Введите массив символов из 7 элементов.Определите, является ли он симметричным(Симметричным считается массив,
	который одинаково читается слева направо и справа налево).*/
	cout << "High level: \n";
	int len = 7;
	char* str = new char[len];
	cin.getline(str, len);
	bool isPalindrom = true;
	for (size_t i = 0; i < strlen(str); i++)
	{
		if (str[i] != str[strlen(str) - 1 - i])
			isPalindrom = false;
	}
	isPalindrom ? cout << "Is palindrom." : cout << "Is not palindrom.";
}
int main(int argc,char** argv)
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	setlocale(0, "");
	
	JuniorTask();
	MediumTask();
	SeniorTasks();
	exit(777);
	char S[255] = { 'H','E','L','L','O','\0' };
	int length = strlen(S);
	int size = sizeof(S);
	cin.getline(S, 255);
	fprintf(stdout,"%s",S );
	fscanf(stdin, "%s", S);
	fprintf(stdout, "%s", S);

//cout <<length<<endl<<size<<endl<< S << '\n';
	cin.get();
	
	
}
