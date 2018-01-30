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
	Programmer(std::string, int, char, long, std::string, std::string, double, long, std::string, double, bool, bool);
	/* Mutator Functions */
	void setDepartmentNumber();
	void setSupervisorName();
	void setSalaryIncreasePercent();
	void setKnowCpp();
	void setKnowJava();
	/* Accessor Functions */
	long getDepartmentNumber() const;
	std::string getSupervisorName() const;
	double getSalaryIncreasePercent() const;
	bool getKnowCpp() const;
	bool getKnowJava() const;
	void printAttributes() const;
};

#endif /* PROGRAMMERCLASS_H_ */
