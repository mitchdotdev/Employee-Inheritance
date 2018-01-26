#include "softwarearchitectClass.h"

SoftwareArchitect::SoftwareArchitect() {
	departmentNumber = 0;
	supervisorName = "";
	salaryIncreasePercent = 0.00;
	experienceYears = 0;
}

SoftwareArchitect::SoftwareArchitect(long deptNum, std::string superName, double salaryIncPrcnt, int exp,
			                         std::string nme, int ag, char gen, double id, std::string phoneNum, std::string jobTtle, double slry)
								     : Employee(nme, ag, gen, id, phoneNum, jobTtle, slry) {

	(deptNum > 0) ? departmentNumber = deptNum : departmentNumber = 0;

	supervisorName = superName;

	(salaryIncPrcnt > 0) ? salaryIncreasePercent = salaryIncPrcnt : salaryIncreasePercent = 0;

	(exp > 0) ? experienceYears = exp : experienceYears = 0;
}
