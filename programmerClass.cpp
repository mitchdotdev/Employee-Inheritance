#include "programmerClass.h"

Programmer::Programmer() {
	departmentNumber = 0;
	supervisorName = "";
	salaryIncreasePercent = 0.00;
	knowCpp = false;
	knowJava = false;
}

Programmer::Programmer(long deptNum, std::string superName, double salaryIncPrcnt, bool cpp, bool java,
		               std::string nme, int ag, char gen, double id, std::string phoneNum, std::string jobTtle, double slry)
                       : Employee(nme, ag, gen, id, phoneNum, jobTtle, slry) {

	(deptNum > 0) ? departmentNumber = deptNum : departmentNumber = 0;

	supervisorName = superName;

	(salaryIncPrcnt > 0) ? salaryIncreasePercent = salaryIncPrcnt : salaryIncreasePercent = 0;

	knowCpp = cpp;

	knowJava = java;
}
