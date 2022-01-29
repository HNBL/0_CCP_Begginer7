/*Напишите,программу с функцией,которая для своего целочисленного аргумента возвращает 
* резульататом сумму делителей
* (сумму чисел, на которое число аргумент делиться без остатка)


*/

#include <iostream>
using namespace std;


void summ_del(int &a)
{

	for (int c = 1; c <= a; c++)
	{
		
		if (a % c == 0)
		{
					
			
		}
		

	}

	return 0; 
}



int main()
{
	system("chcp 1251>nul");


	int n ;
	cout << "Введите любое целое число ";
	cin >> n;

	cout << summ_del(n) << endl;




	system("pause>nul");
	return 0;

}




/*
Решение не найдено, попробуй вернуться к этой задаче
*/