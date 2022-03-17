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

