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
Employee::Employee(std::string nme, int ag, char gen, long id,
			       std::string phoneNum, std::string jobTtle, double slry) {
	name = nme;

	(ag > 0) ? age = ag : age = 0;

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
void Employee::setName() {
	std::string nme;
	std::cout << "\nEnter Name: ";
	std::getline(std::cin, nme);

	name = nme;
}

void Employee::setAge() {
	int ag;
	std::cout << "\nEnter Age: ";
	std::cin  >> ag;
	std::cin.clear();
	std::cin.ignore(100, '\n');
	if(ag > 0) {
		age = ag;
	} else {
		std::cout << "\nINVALID AGE ENTRY . . . AGE NOT SET\n";
	}
}

void Employee::setGender() {
	char gen;
	std::cout << "\nEnter Gender: ";
	std::cin.get(gen);
	std::cin.clear();
	std::cin.ignore(100, '\n');
	if(gen == 'M' || gen == 'm' ||
	   gen == 'F' || gen == 'f')
		gender = gen;
	else
		std::cout << "\nINVALID GENDER ENTRY . . . GENDER NOT SET\n";
}

void Employee::setID() {
	long id;
	std::cout << "\nEnter Employee ID: ";
	std::cin  >> id;
	std::cin.clear();
	std::cin.ignore(100, '\n');
	if(id > 0) {
		ID = id;
	} else {
		std::cout << "\nINVALID ID ENTRY . . . ID NOT SET\n";
	}
}

void Employee::setPhoneNumber() {
	std::string phoneNum;
	std::cout << "\nEnter Phone Number: ";
	std::getline(std::cin, phoneNum);
	phoneNumber = phoneNum;
}

void Employee::setJobTitle() {
	std::string jobTtle;
	std::cout << "\nEnter Job Title: ";
	std::getline(std::cin, jobTtle);
	jobTitle = jobTtle;
}

void Employee::setSalary() {
	double slry;
	std::cout << "\nEnter Salary: ";
	std::cin  >> slry;
	std::cin.clear();
	std::cin.ignore(100, '\n');
	(slry > 0) ? salary = slry : salary = 0.00;
}

void Employee::setDate() {
	int mnth, dy, yr;
	std::cout << "\nEnter Month hired: ";
	std::cin  >> mnth;
	std::cin.clear();
	std::cin.ignore(100, '\n');
	std::cout << "\nEnter Day hired: ";
	std::cin  >> dy;
	std::cin.clear();
	std::cin.ignore(100, '\n');
	std::cout << "\nEnter Year hired: ";
	std::cin  >> yr;
	std::cin.clear();
	std::cin.ignore(100, '\n');

	if(mnth > 0 && dy > 0 && yr > 0)
	{
		hireDate.setMonth(mnth);
		hireDate.setDay(dy);
		hireDate.setYear(yr);
	} else {
		std::cout << "\nINVALID DATE ENTRY . . . DATE NOT SET\n";
	}
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

long Employee::getID() const {
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

void Employee::print() const {
	std::cout << "\n\nName: " << getName()
			  << "\nEmployee ID: " << getID()
			  << "\nPhone: " << getPhoneNumber()
			  << "\nAge: " << getAge()
			  << "\nGender: " << getGender()
			  << "\nJob Title: " << getJobTitle()
			  << "\nSalary: $" << std::setprecision(2) << std::fixed << getSalary()
			  << "\nHire Date: " << hireDate.getMonth() << '/' << hireDate.getDay() << '/' << hireDate.getYear()
			  << "\n\n";
}
