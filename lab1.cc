#include <iostream>
#include <iomanip>
#include <string>

using namespace std;
string error = "Please enter valid values";

// Ульяна начало:

// Год - високосный?
int leap_year(int year) {
	int feb_days;
	if ((((year % 4) == 0) && (year % 100 != 0)) || (year % 400 == 0)) {
		feb_days = 29;
	}
	else {
		feb_days = 28;
	}
	return feb_days;
};


// с какого дня недели начинаем
int weekday(int year, int month) {
	if (month <= 2) {
		month += 12;
		year--;
	}
	int century = year / 100;
	year = year % 100;
	int day = (year + year / 4 + century / 4 - 2 * century + 26 * (month + 1) / 10 - 1) % 7;
	while (day < 0) {
		day = day + 7;
	}
	return day;
};

// Ульяна конец.

// Лиза начало: 
/*
int work_hours(int hours, int num_weekdays) {
	int num_work_h = num_weekdays * hours / 5;
	return num_work_h;
}
*/

// Лиза конец.

// Лиза начало:

string input_year(int year) {
	string message;
	if (year < 1919 || year > 2029)
		message = error;
	else message = "";
	return message;
}

string input_month(int month) {
	string message;
	if (month < 1 || month > 12)
		message = error;
	else message = "";
	return message;
}

string input_hours(int hours) {
	string message;
	if (hours < 1 || hours > 168)
		message = error;
	else message = "";
	return message;
}

// Лиза конец.

int main() {
	// Шушана
	
	int year, month, hours;
	
	year = 1919;
	bool test1 = leap_year(year) == 28;
	year = 2000;
	bool test2 = leap_year(year) == 29;

	year = 1950; month = 1;
	bool test3 = weekday(year, month) == 6;
	year = 2000; month = 5;
	bool test4 = weekday(year, month) == 0;

	bool right = (test1 && test2 && test3 && test4);
	if (right == 0) {
		cout << "Tests failed!" << endl;
		return 1;
	} 
	cout << "Year:" << endl;
	cin >> year;

	// Шушана конец.

	// Лиза начало:
	while (input_year(year) == error) {
		cout << input_year(year) << endl;
		cin >> year;
	};

	cout << "Month:" << endl;
	cin >> month;

	while (input_month(month) == error) {
		cout << input_month(month) << endl;
		cin >> month;
	};

	cout << "Working hours:" << endl;
	cin >> hours;
	while (input_hours(hours) == error) {
		cout << input_hours(hours) << endl;
		cin >> hours;
	};

	// Лиза конец.

    // Ульяна начало:

	int month_days[12] = { 31, leap_year(year), 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	cout << "Calender:" << endl;
	cout << "  Mon  Tue   Wed  Thu  Fri  Sat Sun" << endl;
	// i - день недели от 0 до 6; j - дни в месяце (от 1 до общего в месяце)
	
	int i; int num_weeks = 0; 

	for (i = 0; i < weekday(year, month); i++)
		cout << "     ";

	for (int j = 1; j <= month_days[month - 1]; j++) {
		i++;
		cout << setw(5) << j;

		if (i > 6)
			{
				i = 0;
				cout << endl;
				num_weeks++;
			}
		}

	if (i)
	cout << endl;
	
	// Ульяна конец.

	// Лиза начало:
	/*
	int current_day = i;
	int feb_end;
	if (leap_year(year) == 29)
		feb_end = 0;
	else 
		feb_end = 6;

	int array[12] = { 1, feb_end, 2, 1, 2, 1, 2, 2, 1, 2, 1, 2 };
	int end_month = (weekday(year, month) + array[month]) % 7;

	int num_weekdays = (5 - weekday(year, month)) + (num_weeks - 1) * 5 + end_month + 1;
	cout << work_hours(hours, num_weekdays);
	*/

	// Лиза конец.

	return 0;
};
