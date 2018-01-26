#include "employeeClass.h"

/* Default constructor */
Employee::Employee() {
	name = "";
	age = 0;
	gender = ' ';
	ID = 0.00;
	phoneNumber = "";
	jobTitle = "";
    salary = 0.00;
}

/* Constructor w/ parameters */
Employee::Employee(std::string nme, int ag, char gen, double id,
			       std::string phoneNum, std::string jobTtle, double slry) {
	name = nme;

	(age > 0) ? age = ag : age = 0;

	if(gen == 'M' || gen == 'm' ||
	   gen == 'F' || gen == 'f')
		gender = gen;
	else
		gender = ' ';

	(id > 0) ? ID = id : ID = 0;

	phoneNumber = phoneNum;

	jobTitle = jobTtle;

	(slry > 0) ? salary = slry : salary = 0.00;

}

/* Mutator Functions */
void Employee::setName(std::string nme) {
	name = nme;
}

void Employee::setAge(int ag) {
	if(ag > 0) {
		age = ag;
	} else {
		std::cout << "\nINVALID AGE ENTRY . . . AGE NOT SET\n";
	}
}

void Employee::setGender(char gen) {
	if(gen == 'M' || gen == 'm' ||
	   gen == 'F' || gen == 'f')
		gender = gen;
	else
		std::cout << "\nINVALID GENDER ENTRY . . . GENDER NOT SET\n";
}

void Employee::setID(double id) {
	if(id > 0) {
		ID = id;
	} else {
		std::cout << "\nINVALID ID ENTRY . . . ID NOT SET\n";
	}
}

void Employee::setPhoneNumber(std::string phoneNum) {
	phoneNumber = phoneNum;
}

void Employee::setJobTitle(std::string jobTtle) {
	jobTitle = jobTtle;
}

void Employee::setSalary(double slry) {
	(slry > 0) ? salary = slry : salary = 0.00;
}

/* Accessor Functions */
std::string Employee::getName() const {
	return name;
}

int Employee::getAge() const {
	return age;
}

char Employee::getGender() const {
	return gender;
}

double Employee::getID() const {
	return ID;
}

std::string Employee::getPhoneNumber() const {
	return phoneNumber;
}

std::string Employee::getJobTitle() const {
	return jobTitle;
}

double Employee::getSalary() const {
	return salary;
}
