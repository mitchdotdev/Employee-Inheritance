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
	SoftwareArchitect(std::string, int, char, long, std::string, std::string, double, long, std::string, double, int);
	/* Mutator Functions */
	void setDepartmentNumber();
	void setSupervisorName();
	void setSalaryIncreasePercent();
	void setExperienceYears();
	/* Accessor Functions */
	long getDepartmentNumber() const;
	std::string getSupervisorName() const;
	double getSalaryIncreasePercent() const;
	int getExperienceYears() const;
	void printAttributes() const;
};

#endif /* SOFTWAREARCHITECTCLASS_H_ */
