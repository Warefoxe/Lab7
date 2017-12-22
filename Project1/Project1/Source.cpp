#include<iostream>
#include<string>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");


	/*int a;
	cout << "Введiть число " << endl;
	cin >> a;


	if (a % 11 != 0)
	{
	cout << "Число не дiлиться на 11 " << endl;
	}
	else
	{
	cout << "Число дiлиться на 11" << endl;
	}*/


	/*int a;
	cout << "Введiть число " << endl;
	cin >> a;

	if ((a % 5 == 0) && (a % 3))
	{
	cout << "Число дiлиться на 5, але не дiлиться на 3 " << endl;
	}

	else
	{
	cout << "Невiрне число " << endl;
	}*/


	/*int a, b, sum;
	cout << "Введiть два числа " << endl;
	cin >> a >> b;

	sum = a + b;

	if (sum == 0)
	{
	cout << "Сума дорiвнює 0 " << endl;
	}

	else
	{
	cout << "Сума не дорiвнює 0 " << endl;
	}*/

	/*int a, b;

	cout << "Введiть два числа " << endl;
	cin >> a >> b;

	if ((a == 0) || (b == 0))
	{
	cout << "Cеред цих чисел є 0 " << endl;
	}
	else
	{
	cout << "Cеред цих чисел немає 0 " << endl;
	}*/




	//int a, b, c;
	//cout << "Введiть три числа " << endl;
	//cin >> a >> b >> c;

	//if ((a != 0) && (b != 0) && (c != 0))
	//{
	//	cout << "Всi числа не нулi " << endl;
	//}

	//else
	//{
	//	cout << "Не всi числа не нулi " << endl;
	//}


	/*int year;
	cout << "Введiть рiк " << endl;
	cin >> year;

	if ((year % 4 == 0 && year % 100 != 0) || (year % 100 == 0 && year % 400 == 0))
	{
	cout << "Рiк високосний " << endl;
	}

	else
	{
	cout << "Рiк не високосний " << endl;
	}*/



	// Інтернет провайдер
	/*Інтернет - провайдер має три різні підписні пакети для своїх клієнтів :
	Пакет A : За $ 9, 95 на місяць надається 10 годин доступу.Додаткові години
	коштують $ 2.00 на годину.
	Пакет B : За 14, 95 доларів США на місяць надається 20 годин доступу.Додатково
	години - 1, 00 доларів за годину.
	Пакет C : За 19, 95 доларів США на місяць надається необмежений доступ.
	Напишіть програму, яка обчислює щомісячний рахунок клієнта.Треба запитати, який пакет
	клієнт купив і скільки годин було використано.Потім він повинен відображатися
	загальна сума, що підлягає сплаті*/

	//string package;
	//float time;
	//float price;
	//cout << "Виберiть пакет A,B,C : ";
	//cin >> package;
	//if ((package == "A") || (package == "B") || (package == "C")) {
	//	cout << "Кiлькiсть годин: ";
	//	cin >> time;
	//	if (time <= 744) {
	//		// Пакет A
	//		if (package == "A") {
	//			if (time > 10) {
	//				price = 9.95 + (time - 10) * 2;
	//			}
	//			else {
	//				price = 9.95;
	//			}
	//			// Пакет B
	//		}
	//		else if (package == "B") {
	//			if (time > 20) {
	//				price = 14.95 + (time - 20) * 1;
	//			}
	//			else {
	//				price = 14.95;
	//			}
	//			// Пакет C
	//		}
	//		else {
	//			price = 19.95;
	//		}
	//	}
	//	else {
	//		cout << "Недiйсна кiлькiсть годин!";
	//	}
	//}
	//else {
	//	cout << "Невiрний пакет!";
	//}
	//cout << "Цiна: $" << price << endl;




	/*string Run1;
	string Run2;
	string Run3;

	double RunTime1, RunTime2, RunTime3;

	cout << "Яке iм'я першого учасника? ";
	cin >> Run1;
	cout << "За скiльки часу перший учасник завершив(-ла) гонку ";
	cin >> RunTime1;
	cout << "Яке iм'я другого учасника? ";
	cin >> Run2;
	cout << "За скiльки часу другий учасник завершив(-ла) гонку ";
	cin >> RunTime2;
	cout << "Яке iм'я третього учасника? ";
	cin >> Run3;
	cout << "За скiльки часу третій учасник завершив(-ла) гонку ";
	cin >> RunTime3;


	if (RunTime1 > 0 && RunTime2 > 0 && RunTime3 > 0)
	if (RunTime1 < RunTime2 && RunTime1 < RunTime3)
	if (RunTime2 < RunTime3)
	{
	cout << "Перше мiсце : " << Run1 << endl;
	cout << "Друге мiсце : " << Run2 << endl;
	cout << "Третє мiсце : " << Run3 << endl;
	}
	else
	{
	cout << "Перше мiсце : " << Run1 << endl;
	cout << "Друге мiсце : " << Run3 << endl;
	cout << "Третє мiсце : " << Run2 << endl;
	}
	else if (RunTime2 < RunTime1 && RunTime2 < RunTime3)
	if (RunTime1 < RunTime3)
	{
	cout << "Перше мiсце : " << Run2 << endl;
	cout << "Друге мiсце : " << Run1 << endl;
	cout << "Третє мiсце : " << Run3 << endl;
	}
	else
	{
	cout << "Перше мiсце : " << Run2 << endl;
	cout << "Друге мiсце : " << Run3 << endl;
	cout << "Третє мiсце : " << Run1 << endl;
	}
	else
	if (RunTime1 < RunTime2)
	{
	cout << "Перше мiсце : " << Run3 << endl;
	cout << "Друге мiсце : " << Run1 << endl;
	cout << "Третє мiсце : " << Run2 << endl;
	}
	else
	{
	cout << "Перше мiсце : " << Run3 << endl;
	cout << "Друге мiсце : " << Run2 << endl;
	cout << "Третє мiсце : " << Run1 << endl;
	}
	else
	cout << "Неправильно введенний час! Час не може бути менше нуля.\n";*/




	/*int a, b, c, tmp;
	cout << "Введiть три числа " << endl;
	cin >> a >> b >> c;

	if (a > b)
	{
	tmp = a;
	a = b;
	b = tmp;
	}
	if (b > c)
	{
	tmp = b;
	b = c;
	c = tmp;
	}
	if (a > b)
	{
	tmp = a;
	a = b;
	b = tmp;
	}

	cout << a << " " << b << " " << c << endl;*/



	int password = 123;
	int i = 0;
	int a = 0;

	cout << "Введiть пароль для входу " << endl;
	cin >> a;
	if (a != password)
	{
		cout << "Пароль не вiрний" << endl;
	}
	else
	{
		cout << "Пароль вiрний. З спроби 1" << endl;
		system("pause");
		return 0;
	}
	cout << "Введiть пароль для входу " << endl;
	cin >> a;
	if (a != password)
	{
		cout << "Пароль не вiрний" << endl;
	}

	else
	{
		cout << "Пароль вiрний. З спроби 2" << endl;
		system("pause");
		return 0;

	}

	cout << "Введiть пароль для входу " << endl;
	cin >> a;
	if (a != password)
	{
		cout << "Пароль не вiрний. Ви використали всi спроби " << endl;
	}

	else
	{
		cout << "Пароль вiрний. З спроби 3" << endl;
		system("pause");
		return 0;
	}


	system("pause");
	return 0;

}