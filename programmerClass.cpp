#include "programmerClass.h"

Programmer::Programmer() {
	departmentNumber = 0;
	supervisorName = "";
	salaryIncreasePercent = 0.00;
	knowCpp = false;
	knowJava = false;
}

Programmer::Programmer(std::string nme, int ag, char gen, long id, std::string phoneNum, std::string jobTtle, double slry,
					   long deptNum, std::string superName, double salaryIncPrcnt, bool cpp, bool java)
					   : Employee(nme, ag, gen, id, phoneNum, jobTtle, slry) {

	(deptNum > 0) ? departmentNumber = deptNum : departmentNumber = 0;

	supervisorName = superName;

	(salaryIncPrcnt > 0) ? salaryIncreasePercent = salaryIncPrcnt : salaryIncreasePercent = 0;

	knowCpp = cpp;

	knowJava = java;
}

/* Mutator Functions */
void Programmer::setDepartmentNumber() {
	long deptNum;
	std::cout << "\nEnter Department Number: ";
	std::cin  >> deptNum;
	std::cin.clear();
	std::cin.ignore(100, '\n');
	(deptNum > 0) ? departmentNumber = deptNum : departmentNumber = 0;
}

void Programmer::setSupervisorName() {
	std::string superName;
	std::cout << "\nEnter Supervisor's Name: ";
	std::getline(std::cin, superName);
	supervisorName = superName;
}

void Programmer::setSalaryIncreasePercent() {
	double salaryIncPrcnt;
	std::cout << "\nEnter Salary Increase Percent: ";
	std::cin  >> salaryIncPrcnt;
	std::cin.clear();
	std::cin.ignore(100, '\n');
	(salaryIncPrcnt > 0) ? salaryIncreasePercent = salaryIncPrcnt : salaryIncreasePercent = 0;
}

void Programmer::setKnowCpp() {
	bool cpp;
	std::cout << "\nEnter true if you have C++ Knowledge: ";
	std::cin  >> cpp;
	std::cin.clear();
	std::cin.ignore(100, '\n');
	knowCpp = cpp;
}

void Programmer::setKnowJava() {
	bool java;
	std::cout << "\nEnter true if you have Java Knowledge: ";
	std::cin  >> java;
	std::cin.clear();
	std::cin.ignore(100, '\n');
	knowJava = java;
}

/* Accessor Functions */
long Programmer::getDepartmentNumber() const {
	return departmentNumber;
}

std::string Programmer::getSupervisorName() const {
	return supervisorName;
}

double Programmer::getSalaryIncreasePercent() const {
	return salaryIncreasePercent;
}

bool Programmer::getKnowCpp() const {
	return knowCpp;
}

bool Programmer::getKnowJava() const {
	return knowJava;
}

void Programmer::printAttributes() const {
	std::cout << "\n\nName: " << getName()
			  << "\nDepartment: " << getDepartmentNumber()
			  << "\nSupervisor's Name: " << getSupervisorName()
			  << "\nRaise %: " << getSalaryIncreasePercent();

	std::cout << "\nC++ Knowledge: ";
	if(getKnowCpp() == true)
		std::cout << "Yes\n";
	else
		std::cout << "No\n";

	std::cout << "\nJava Knowledge: ";
	if(getKnowJava() == true)
		std::cout << "Yes\n";
	else
		std::cout << "No\n";
}
