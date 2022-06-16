/* Program to check if given birth date is valid. */
#include <stdio.h>
#include <time.h>

// Check if is leap year
char isLeapYear(unsigned int year) {
	if (year % 4 == 0) return 1;
	return 0;
}

// Check if day is valid
char isValidDay(unsigned int day, unsigned int month, unsigned int year) {
	if (month == 2) {
		if (isLeapYear(year)) {
			if (day > 0 && day < 30) return 1;
		} else {
			if (day > 0 && day < 29) return 1;
		}
	} else if (month == 4 || month == 6 || month == 9 || month == 11) {
		if (day > 0 && day < 31) return 1;
	} else {
		if (day > 0 && day < 32) return 1;
	}
	return 0;
}

// Check if month is valid
char isValidMonth(unsigned int month) {
	if (month > 0 && month <= 12) return 1;
	return 0;
}

// Check if year is valid
char isValidYear(unsigned int year) {
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);
	if (year <= tm.tm_year+1900) return 1;	
	return 0;
}

int main() {
	unsigned int day, month, year;
	scanf("%u %u %u", &day, &month, &year);

	if (isValidDay(day, month, year) && isValidMonth(month) && isValidYear(year))
		puts("Data válida");
	else
		puts("Data inválida");

	return 0;
}
