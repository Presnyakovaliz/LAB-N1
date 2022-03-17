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
