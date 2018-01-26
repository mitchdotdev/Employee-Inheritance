#ifndef PROGRAMMERCLASS_H_
#define PROGRAMMERCLASS_H_

#include "employeeClass.h"

class Programmer : public Employee {
	long departmentNumber;
	std::string supervisorName;
	double salaryIncreasePercent;
	bool knowCpp;
	bool knowJava;
public:
    /* Default constructor */
	Programmer();
	/* Constructor w/ parameters */
	Programmer(long, std::string, double, bool, bool,
			   std::string, int, char, double, std::string, std::string, double);
	/* Mutator Functions */
	void setDepartmentNumber(long);          // look into making these virtual as Software Class
	void setSupervisorName(std::string);     // has these same functions that are not inherited
	void setSalaryIncreasePercent(double);   // from Employee Class
	void setKnowCpp(bool);
	void setKnowJava(bool);
	/* Accessor Functions */
	long getDepartmentNumber() const;        // look into making these virtual as Software Class
	std::string getSupervisorName() const;   // has these same functions that are not inherited
	double getSalaryIncreasePercent() const; // from Employee Class
	bool getKnowCpp() const;
	bool getKnowJava() const;
};

#endif /* PROGRAMMERCLASS_H_ */
