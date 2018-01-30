#include "softwarearchitectClass.h"

SoftwareArchitect::SoftwareArchitect() {
	departmentNumber = 0;
	supervisorName = "";
	salaryIncreasePercent = 0.00;
	experienceYears = 0;
}

SoftwareArchitect::SoftwareArchitect(std::string nme, int ag, char gen, long id, std::string phoneNum, std::string jobTtle, double slry,
									long deptNum, std::string superName, double salaryIncPrcnt, int exp)
									: Employee(nme, ag, gen, id, phoneNum, jobTtle, slry){

	(deptNum > 0) ? departmentNumber = deptNum : departmentNumber = 0;

	supervisorName = superName;

	(salaryIncPrcnt > 0) ? salaryIncreasePercent = salaryIncPrcnt : salaryIncreasePercent = 0;

	(exp > 0) ? experienceYears = exp : experienceYears = 0;
}

/* Mutator Functions */
void SoftwareArchitect::setDepartmentNumber() {
	long deptNum;
	std::cout << "\nEnter Department Number: ";
	std::cin  >> deptNum;
	std::cin.clear();
	std::cin.ignore(100, '\n');
	(deptNum > 0) ? departmentNumber = deptNum : departmentNumber = 0;
}

void SoftwareArchitect::setSupervisorName() {
	std::string superName;
	std::cout << "\nEnter Supervisor's Name: ";
	std::getline(std::cin, superName);
	supervisorName = superName;
}

void SoftwareArchitect::setSalaryIncreasePercent() {
	double salaryIncPrcnt;
	std::cout << "\nEnter Salary Increase Percent: ";
	std::cin  >> salaryIncPrcnt;
	std::cin.clear();
	std::cin.ignore(100, '\n');
	(salaryIncPrcnt > 0) ? salaryIncreasePercent = salaryIncPrcnt : salaryIncreasePercent = 0;
}

void SoftwareArchitect::setExperienceYears() {
	int exp;
	std::cout << "\nEnter Years of Experience: ";
	std::cin  >> exp;
	std::cin.clear();
	std::cin.ignore(100, '\n');
	(exp > 0) ? experienceYears = exp : experienceYears = 0;
}

/* Accessor Functions */
long SoftwareArchitect::getDepartmentNumber() const {
	return departmentNumber;
}

std::string SoftwareArchitect::getSupervisorName() const {
	return supervisorName;
}

double SoftwareArchitect::getSalaryIncreasePercent() const {
	return salaryIncreasePercent;
}

int SoftwareArchitect::getExperienceYears() const {
	return experienceYears;
}

void SoftwareArchitect::printAttributes() const {
	std::cout << "\n\nName: " << getName()
			  << "\nDepartment: " << getDepartmentNumber()
			  << "\nSupervisor's Name: " << getSupervisorName()
			  << "nRaise %: " << getSalaryIncreasePercent()
			  << "\nYears of experience: " << getExperienceYears()
			  << "\n\n";
}
