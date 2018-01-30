#ifndef DATECLASS_H_
#define DATECLASS_H_

#include <iostream>
#include <list>
class Date {
	int month;
	int day;
	int year;
public:
	/* Default constructor */
	Date();
	/* Constructor w/ parameters */
	Date(int, int, int);
	/* Mutator Function */
	void setMonth(int);
	void setDay(int);
	void setYear(int);
	/* Accessor Functions */
	int getMonth() const;
	int getDay() const;
	int getYear() const;
};

#endif /* DATECLASS_H_ */
