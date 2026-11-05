#include <stdio.h>
struct today {
	int day;
	int month;
	int year;

};
struct tomorrow {
	int day;
	int month;
	int year;
};
int leap(struct today a) {
	int b;
	if ((a.year% 4 == 0 &&a.year % 100!=0) || a.year % 400 == 0) {
    b = 1;
	}
	else {
		b = 0;
	}
	return b;
}
int bdmonth(struct today a) {
	int days;
	const int month[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	if (a.month == 2 && leap(a)) {
		days = 29;
	}
	else {
		days =month[a.month - 1];
	}
	return days;
}
int main() {
	struct today a;
	scanf("%d %d %d", &a.year, &a.month, &a.day);
	struct tomorrow b;
	if (a.day == bdmonth(a)) {
		if (a.month == 12) {
			b.day = 1;
			b.month = 1;
			b.year = a.year + 1;
		}
		else {
			b.day = 1;
			b.month = a.month + 1;
			b.year = a.year;
		}
	}
	else {
		b.day = a.day + 1;
		b.month = a.month;
		b.year = a.year;


	}
	
	printf("next day is %i-%i-%i", b.year, b.month, b.day);







}