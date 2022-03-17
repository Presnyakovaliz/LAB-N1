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
