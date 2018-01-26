#ifndef SOFTWAREARCHITECTCLASS_H_
#define SOFTWAREARCHITECTCLASS_H_

#include "employeeClass.h"

class SoftwareArchitect : public Employee {
	long departmentNumber;
	std::string supervisorName;
	double salaryIncreasePercent;
	int experienceYears;
public:
	/* Default constructor */
	SoftwareArchitect();
	/* Constructor w/ parameters */
	SoftwareArchitect(long, std::string, double, int,
			          std::string, int, char, double, std::string, std::string, double);
	/* Mutator Functions */
	void setDepartmentNumber(long);          // look into making these virtual as Programmer Class
	void setSupervisorName(std::string);     // has these same functions that are not inherited
	void setSalaryIncreasePercent(double);   // from Employee Class
	void setExperienceYears(int);
	/* Accessor Functions */
	long getDepartmentNumber() const;        // look into making these virtual as Programmer Class
	std::string getSupervisorName() const;   // has these same functions that are not inherited
	double getSalaryIncreasePercent() const; // from Employee Class
	int getExperienceYears() const;
};

#endif /* SOFTWAREARCHITECTCLASS_H_ */
