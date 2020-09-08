//#include <iostream>
//#include <ctime>
//
//#define N 100
//using namespace std;
//
//int func(int* a, int* b, int an, int bn)
//{
//	if (an == 0)
//	{
//		cout << "Массив пуст." << endl;
//		return bn;
//	}
//	else
//	{
//		int max_id = 0;
//		int maxa = a[0];
//		for (int i = 0; i < an; i++)
//		{
//			if (maxa <= a[i]) {
//				maxa = a[i];
//				max_id = i;
//			}
//		}
//		for (int i = max_id; i < an; i++)
//		{
//			if (i % 2 == 0 && i != 0)
//			{
//				b[bn] = a[i];
//				bn++;
//			}
//		}
//		return bn;
//	}
//}
//
//int out(int* a, int* b, int an, int bn)
//{
//	cout << an << endl;
//	cout << bn << endl;
//	if (an != 0)
//	{
//		cout << "1 массив" << endl;
//		for (int i = 0; i < an; i++)
//			cout << a[i] << " ";
//	}
//	if (bn != 0)
//	{
//		cout << "\n2 массив" << endl;
//		for (int i = 0; i < bn; i++)
//			cout << b[i] << " ";
//	}
//	return 0;
//}
//
//int getHoarBorder(int b[], int sm, int em)
//{
//	int i = sm - 1, j = em + 1;
//	int brd = b[sm];
//	int buf;
//	while (i < j)
//	{
//		while (b[--j] > brd);
//		while (b[++i] < brd);
//		if (i < j)
//		{
//			buf = b[j];
//			b[j] = b[i];
//			b[i] = buf;
//		};
//	}
//	return j;
//}
//int* sortHoar(int b[], int sm, int em)
//{
//	if (sm < em)
//	{
//		int hb = getHoarBorder(b, sm, em);
//		sortHoar(b, sm, hb);
//		sortHoar(b, hb + 1, em);
//	}
//	return b;
//};
//
//
//int sort2(int b[], int bn)
//{
//	cout << bn << endl;
//	if (bn == 0)
//		cout << "3 массив пуст" << endl;
//	else
//	{
//		int temp;
//		for (int i = 0; i < bn; i++)
//		{
//			for (int t = 0; t < bn - 1; t++)
//			{
//				if (b[t] < b[t + 1]) {
//					temp = b[t];
//					b[t] = b[t + 1];
//					b[t + 1] = temp;
//				}
//			}
//		}
//		for (int i = 0; i < bn; i++)
//			cout << b[i] << " ";
//	}
//	return 0;
//}
//
//
//int main()
//{
//	setlocale(LC_CTYPE, "rus");
//	int a[N] = { 0 }, b[N] = { 0 }, c[N] = { 0 };
//	int an = 0, bn = 0, cn = 0, choise, k;
//	for (;;)
//	{
//		cout << "\n1 - добавить числа в 1 массив." << endl;
//		cout << "2 - составить 2 массив." << endl;
//		cout << "3 - вывод массивов." << endl;
//		cout << "4 - сортировка Хоара" << endl;
//		cout << "5 - сортировка пузырьком." << endl;
//		cout << "6 - обнуление массивов." << endl;
//		cout << "0 - выход" << endl;
//		cout << "Выбор: ";
//		cin >> choise;
//		switch (choise)
//		{
//		case 0:exit(0);
//		case 1: {
//			cout << "Количество элементов: ";
//			cin >> k;
//			k += an;
//			srand(time(NULL));
//			for (int i = an; i < k; i++)
//				a[i] = rand() % +100;
//			an = k;
//		}break;
//		case 2: bn = func(a, b, an, bn);
//			break;
//		case 3: out(a, b, an, bn);
//			break;
//		case 4:sortHoar(b, 0, bn - 1);
//		case 5: sort2(b, bn);
//			break;
//		case 6:
//			for (int i = 0; i < an; i++)
//				a[i] = 0;
//			for (int i = 0; i < bn; i++)
//				b[i] = 0;
//			an = 0;
//			bn = 0;
//			break;
//		default:break;
//		}
//	}
//}




//14
//#include <iostream>
//#include <ctime>
//
//#define N 100
//using namespace std;
//
//int func(int* a, int* b, int* c, int an, int bn, int cn)
//{
//	if (an == 0 && bn == 0)
//		cout << "Один из массивов пустой." << endl;
//	else
//	{
//
//		for (int i = 0; i < an; i++)
//		{
//			if (a[i] % 2 != 0)
//			{
//				c[cn] = a[i];
//				cn++;
//			}
//		}
//		for (int i = 0; i < bn; i++)
//		{
//			if (b[i] % 2 == 0)
//			{
//				c[cn] = b[i];
//				cn++;
//			}
//		}
//	}
//	return cn;
//}
//
//int out(int* a, int* b, int* c, int an, int bn, int cn)
//{
//	cout << an << endl;
//	cout << bn << endl;
//	cout << cn << endl;
//	if (an != 0)
//	{
//		cout << "1 массив" << endl;
//		for (int i = 0; i < an; i++)
//			cout << a[i] << " ";
//	}
//	if (bn != 0)
//	{
//		cout << "\n2 массив" << endl;
//		for (int i = 0; i < bn; i++)
//			cout << b[i] << " ";
//	}
//	if (cn != 0)
//	{
//		cout << "\n3 массив" << endl;
//		for (int i = 0; i < cn; i++)
//			cout << c[i] << " ";
//	}
//	return 0;
//}
//
//int sort1(int c[], int cn)
//{
//	cout << cn << endl;
//	if (cn == 0)
//		cout << "3 массив пуст" << endl;
//	else
//	{
//		int temp;
//		for (int i = 0; i < cn; i++)
//		{
//			for (int t = 0; t < cn - 1; t++)
//			{
//				if (c[t] < c[t + 1]) {
//					temp = c[t];
//					c[t] = c[t + 1];
//					c[t + 1] = temp;
//				}
//			}
//		}
//		for (int i = 0; i < cn; i++)
//			cout << c[i] << " ";
//	}
//	return 0;
//}
//
//int sort2(int* c, int cn)
//{
//	if (cn == 0)
//	{
//		cout << "3 массив пуст" << endl;
//		return 0;
//	}
//	else
//	{
//		int buf, size = cn;
//		bool sort;
//		for (int g = size / 2; g > 0; g /= 2)
//			do
//			{
//				sort = false;
//				for (int i = 0, j = g; j < size; i++, j++)
//					if (c[i] < c[j])
//					{
//						sort = true;
//						buf = c[i];
//						c[i] = c[j];
//						c[j] = buf;
//					}
//			} while (sort);
//			for (int i = 0; i < cn; i++)
//				cout << c[i] << " ";
//			return 0;
//	}
//}
//
//int main()
//{
//	setlocale(LC_CTYPE, "rus");
//	int a[N] = { 0 }, b[N] = { 0 }, c[N] = { 0 };
//	int an = 0, bn = 0, cn = 0, choise, k;
//	for (;;)
//	{
//		cout << "\n1 - добавить числа в 1 массив." << endl;
//		cout << "2 - добавить числа во 2 массив." << endl;
//		cout << "3 - составить 3 массив." << endl;
//		cout << "4 - вывод массивов." << endl;
//		cout << "5 - сортировка пузырьком." << endl;
//		cout << "6 - сортировка Шелла." << endl;
//		cout << "7 - обнуление массивов." << endl;
//		cout << "0 - выход" << endl;
//		cout << "Выбор: ";
//		cin >> choise;
//		switch (choise)
//		{
//		case 0:exit(0);
//		case 1: {
//			cout << "Количество элементов: ";
//			cin >> k;
//			k += an;
//			srand(time(NULL));
//			for (int i = an; i < k; i++)
//				a[i] = rand() % +100;
//			an = k;
//		}break;
//		case 2: {
//			cout << "Количество элементов: ";
//			cout << "Количество элементов: ";
//			cin >> k;
//			k += bn;
//			srand(time(NULL));
//			for (int i = bn; i < k; i++)
//				b[i] = rand() % +100;
//			bn = k;
//		}break;
//		case 3: cn = func(a, b, c, an, bn, cn);
//			break;
//		case 4: out(a, b, c, an, bn, cn);
//			break;
//		case 5: sort1(c, cn);
//			break;
//		case 6: sort2(c, cn);
//			break;
//		case 7:
//			for (int i = 0; i < an; i++)
//				a[i] = 0;
//			for (int i = 0; i < bn; i++)
//				b[i] = 0;
//			for (int i = 0; i < cn; i++)
//				c[i] = 0;
//			an = 0;
//			bn = 0;
//			cn = 0;
//			break;
//		default:break;
//		}
//	}
//}



//3
//#include <iostream>
//#include <ctime>
//
//#define N 100
//using namespace std;
//
//int func(int* a, int* b, int an, int bn)
//{
//	if (an == 0)
//	{
//		cout << "Массив пуст." << endl;
//		return bn;
//	}
//	else
//	{
//		int max_id = 0;
//		int maxa = a[0];
//		for (int i = 0; i < an; i++)
//		{
//			if (maxa <= a[i]) {
//				maxa = a[i];
//				max_id = i;
//			}
//		}
//		for (int i = max_id; i < an; i++)
//		{
//			if (i % 2 != 0 && i != 0)
//			{
//				b[bn] = a[i];
//				bn++;
//			}
//		}
//		return bn;
//	}
//}
//
//int out(int* a, int* b, int an, int bn)
//{
//	cout << an << endl;
//	cout << bn << endl;
//	if (an != 0)
//	{
//		cout << "1 массив" << endl;
//		for (int i = 0; i < an; i++)
//			cout << a[i] << " ";
//	}
//	if (bn != 0)
//	{
//		cout << "\n2 массив" << endl;
//		for (int i = 0; i < bn; i++)
//			cout << b[i] << " ";
//	}
//	return 0;
//}
//
//int getHoarBorder(int b[], int sm, int em)
//{
//	int i = sm - 1, j = em + 1;
//	int brd = b[sm];
//	int buf;
//	while (i < j)
//	{
//		while (b[--j] > brd);
//		while (b[++i] < brd);
//		if (i < j)
//		{
//			buf = b[j];
//			b[j] = b[i];
//			b[i] = buf;
//		};
//	}
//	return j;
//}
//int* sortHoar(int b[], int sm, int em)
//{
//	if (sm < em)
//	{
//		int hb = getHoarBorder(b, sm, em);
//		sortHoar(b, sm, hb);
//		sortHoar(b, hb + 1, em);
//	}
//	return b;
//};
//
//
//int sort2(int b[], int bn)
//{
//	cout << bn << endl;
//	if (bn == 0)
//		cout << "3 массив пуст" << endl;
//	else
//	{
//		int temp;
//		for (int i = 0; i < bn; i++)
//		{
//			for (int t = 0; t < bn - 1; t++)
//			{
//				if (b[t] < b[t + 1]) {
//					temp = b[t];
//					b[t] = b[t + 1];
//					b[t + 1] = temp;
//				}
//			}
//		}
//		for (int i = 0; i < bn; i++)
//			cout << b[i] << " ";
//	}
//	return 0;
//}
//
//
//int main()
//{
//	setlocale(LC_CTYPE, "rus");
//	int a[N] = { 0 }, b[N] = { 0 }, c[N] = { 0 };
//	int an = 0, bn = 0, cn = 0, choise, k;
//	for (;;)
//	{
//		cout << "\n1 - добавить числа в 1 массив." << endl;
//		cout << "2 - составить 2 массив." << endl;
//		cout << "3 - вывод массивов." << endl;
//		cout << "4 - сортировка Хоара" << endl;
//		cout << "5 - сортировка пузырьком." << endl;
//		cout << "6 - обнуление массивов." << endl;
//		cout << "0 - выход" << endl;
//		cout << "Выбор: ";
//		cin >> choise;
//		switch (choise)
//		{
//		case 0:exit(0);
//		case 1: {
//			cout << "Количество элементов: ";
//			cin >> k;
//			k += an;
//			srand(time(NULL));
//			for (int i = an; i < k; i++)
//				a[i] = rand() % +100;
//			an = k;
//		}break;
//		case 2: bn = func(a, b, an, bn);
//			break;
//		case 3: out(a, b, an, bn);
//			break;
//		case 4:sortHoar(b, 0, bn - 1);
//		case 5: sort2(b, bn);
//			break;
//		case 6:
//			for (int i = 0; i < an; i++)
//				a[i] = 0;
//			for (int i = 0; i < bn; i++)
//				b[i] = 0;
//			an = 0;
//			bn = 0;
//			break;
//		default:break;
//		}
//	}
//}



//4
#include <iostream>
#include <ctime>

#define N 100
using namespace std;

int func(int* a, int* b, int* c, int an, int bn, int cn)
{
	if (an == 0 && bn == 0)
	{
		cout << "Один из массивов пустой." << endl;
		return cn;
	}
	else
	{
		int minb = b[0];
		for (int i = 0; i < bn; i++)
		{
			if (minb > b[i])
				minb = b[i];
		}
		for (int i = 0; i < an; i++)
		{
			if (a[i] > minb)
			{
				c[cn] = a[i];
				cn++;
			}
		}
		return cn;
	}
}

int out(int* a, int* b, int* c, int an, int bn, int cn)
{
	cout << an << endl;
	cout << bn << endl;
	cout << cn << endl;
	if (an != 0)
	{
		cout << "1 массив" << endl;
		for (int i = 0; i < an; i++)
			cout << a[i] << " ";
	}
	if (bn != 0)
	{
		cout << "\n2 массив" << endl;
		for (int i = 0; i < bn; i++)
			cout << b[i] << " ";
	}
	if (cn != 0)
	{
		cout << "\n3 массив" << endl;
		for (int i = 0; i < cn; i++)
			cout << c[i] << " ";
	}
	return 0;
}

int sort1(int c[], int cn) //Шейкерная
{
	cout << cn << endl;
	if (cn == 0)
	{
		cout << "3 массив пуст" << endl;
		return 0;
	}
	else
	{
		int l, r, i, temp;
		l = 0;
		r = cn;
		while (l <= r)
		{
			for (int i = l; i < r; i++)
			{
				if (c[i] < c[i + 1]) {
					temp = c[i];
					c[i] = c[i + 1];
					c[i + 1] = temp;
				}
			}
			r--;
			for (int i = r; i > l; i--)
			{
				if (c[i] > c[i - 1]) {
					temp = c[i];
					c[i] = c[i - 1];
					c[i - 1] = temp;
				}
			}
			l++;
		}
	}
}

int sort2(int* c, int cn) //Шелла
{
	if (cn == 0)
	{
		cout << "3 массив пуст" << endl;
		return 0;
	}
	else
	{
		int buf, size = cn;
		bool sort;
		for (int g = size / 2; g > 0; g /= 2)
			do
			{
				sort = false;
				for (int i = 0, j = g; j < size; i++, j++)
					if (c[i] < c[j])
					{
						sort = true;
						buf = c[i];
						c[i] = c[j];
						c[j] = buf;
					}
			} while (sort);
			for (int i = 0; i < cn; i++)
				cout << c[i] << " ";
			return 0;
	}
}

int main()
{
	setlocale(LC_CTYPE, "rus");
	int a[N] = { 0 }, b[N] = { 0 }, c[N] = { 0 };
	int an = 0, bn = 0, cn = 0, choise, k;
	for (;;)
	{
		cout << "\n1 - добавить числа в 1 массив  aaaaaaa маывоатоывтоыватлдывтлдывлдт." << endl;
		cout << "2 - добавить числа во 2 массивsss." << endl;
		cout << "3 - составить 3 массив." << endl;
		cout << "4 - вывод массивов." << endl;
		cout << "5 - шейкерная сортировка." << endl;
		cout << "6 - сортировка Шелла." << endl;
		cout << "7 - обнуление массивов." << endl;
		cout << "0 - выход" << endl;
		cout << "Выбор: ";
		cin >> choise;
		switch (choise)
		{
		case 0:exit(0);
		case 1: {
			cout << "Количество элементов: ";
			cin >> k;
			k += an;
			srand(time(NULL));
			for (int i = an; i < k; i++)
				a[i] = rand() % +100;
			an = k;
		}break;
		case 2: {
			cout << "Количество элементов: ";
			cout << "Количество элементов: ";
			cin >> k;
			k += bn;
			srand(time(NULL));
			for (int i = bn; i < k; i++)
				b[i] = rand() % +100;
			bn = k;
		}break;
		case 3: cn = func(a, b, c, an, bn, cn);
			break;
		case 4: out(a, b, c, an, bn, cn);
			break;
		case 5: sort1(c, cn);
			break;
		case 6: sort2(c, cn);
			break;
		case 7:
			for (int i = 0; i < an; i++)
				a[i] = 0;
			for (int i = 0; i < bn; i++)
				b[i] = 0;
			for (int i = 0; i < cn; i++)
				c[i] = 0;
			an = 0;
			bn = 0;
			cn = 0;
			break;
		default:break;
		}
	}
}