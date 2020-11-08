#include<iostream>

#include<ctime>
using namespace std;
void my_array(int A[], int& n)
{
	int a, b;
	cout << "Введите диапазон чисел [A; B]" << endl;
	cout << " a <= b;" << endl;
	cout << "a = ";
	cin >> a;
	cout << "b = ";
	cin >> b;
	cout << "Массив A:" << endl;
	cout << "Ввведите размер массива с которым будете работать" << endl;
	cin >> n;


	for (int i = 0; i < n; i++)
	{
		A[i] = a + rand() % (b - a + 1);
	}
}


void my_vivod(int A[], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << A[i] << " ";
	}
	cout << endl;
}
void my_sum(int A[], int n)
{
	if (!(n > 0 && n <= 100))
	{
		cout << "Ошибка.Недопустимый массив.Для выхода в главное меню нажмите Enter" << endl;
	}
	int min = 0, sum = 0, count = 0;
	for (int i = 0; i < n; i++)
	{
		

		min = A[0];
		for (int index = 1; index < n; index++)
		{
			if (A[index] < min)
			{
				min = A[index];
				count = index;
			}
		}
	}
		for (int index = 0; index < count; index++)
		{
		   if ((index +1)% 2 == 0)
	      {
			sum += A[index];
		  }
		}
		cout << " sum = " << sum << endl;
	
}
void my_sum_0(int A[],int n)
{
		int K = 0;
		int a,b,kount;
		for (int i = 0; i < n; ++i)
	    if (A[i] % 2 == 0)
		K++;
	    cout << K << endl;
		if ((n + K) > 100) cout << "Не входит в ОДЗ" << endl;
		else
		{
			int j = n + K ;
			for (int i = n - 1; i > 0; i--)
		    {

				if (A[i] % 2 == 0)
				{
					for (kount = j - 1; kount > j; kount--) A[kount] = A[kount - 1];
					A[kount + 1] = 0;
				}
				
			}
	    }
 }


int main()
{
	setlocale(LC_ALL, "Russian");
	int k, n;
	int A[100];


	cout << "1.Заповнити масив \n" << endl;
	cout << "2.Вивести масив на екран \n" << endl;
	cout << "3.Завдання 1 \n" << endl;
	cout << "4.Завдання 2 \n" << endl;
	cout << "5.Виход\n" << endl;
	cin >> k;


	while (k != 5)
	{
		switch (k)
		{
		case 1:
			my_array(A, n);

			break;
		case 2:
			my_vivod(A, n);
			break;
		case 3:
			my_sum(A, n);
			break;
		case 4:
			my_sum_0(A, n);
			break;

		default:

			break;

			/*case 4:
						my_sum_0(A, n);
						break;*/
		}
		cout << "1.Заповнити масив \n" << endl;
		cout << "2.Вивести масив на екран \n" << endl;
		cout << "3.Завдання 1 \n" << endl;
		cout << "4.Завдання 2 \n" << endl;
		cout << "5.Виход\n" << endl;
		cin >> k;

	}

}