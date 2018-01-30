#ifndef EMPLOYEECLASS_H_
#define EMPLOYEECLASS_H_

#include <iostream>
#include <iomanip>
#include "dateClass.h"

class Employee {
	std::string name;
	int age;
	char gender;
	long ID;
	std::string phoneNumber;
	std::string jobTitle;
	double salary;
	Date hireDate;
public:
	/* Default constructor */
	Employee();
	/* Constructor w/ parameters */
	Employee(std::string, int, char, long, std::string, std::string, double);
	/* Mutator Functions */
	void setName();
	void setAge();
	void setGender();
	void setID();
	void setPhoneNumber();
	void setJobTitle();
	void setSalary();
	void setDate();
	/* Accessor Functions */
	std::string getName() const;
	int getAge() const;
	char getGender() const;
	long getID() const;
	std::string getPhoneNumber() const;
	std::string getJobTitle() const;
	double getSalary() const;
	void print() const;
};

#endif /* EMPLOYEECLASS_H_ */
