#ifndef EMPLOYEECLASS_H_
#define EMPLOYEECLASS_H_

#include <iostream>
#include "dateClass.h"

class Employee {
	std::string name;
	int age;
	char gender;
	double ID;
	std::string phoneNumber;
	std::string jobTitle;
	double salary;
	Date hireDate;
public:
	/* Default constructor */
	Employee();
	/* Constructor w/ parameters */
	Employee(std::string, int, char, double, std::string, std::string, double);
	/* Mutator Functions */
	void setName(std::string);
	void setAge(int);
	void setGender(char);
	void setID(double);
	void setPhoneNumber(std::string);
	void setJobTitle(std::string);
	void setSalary(double);
	/* Accessor Functions */
	std::string getName() const;
	int getAge() const;
	char getGender() const;
	double getID() const;
	std::string getPhoneNumber() const;
	std::string getJobTitle() const;
	double getSalary() const;
};

#endif /* EMPLOYEECLASS_H_ */
