#include "menu.h"
#include "dateClass.h"
#include "employeeClass.h"
#include "programmerClass.h"
#include "softwarearchitectClass.h"
#include <deque>

int main() {

	bool exit = false;
	int add, edit;

	std::deque<Employee> employeeDeque;
	Employee csEmployee("Tom Brady", 40, 'M', 12345, "(949) 555-1234", "Quarterback", 100000);
	employeeDeque.push_back( csEmployee );

	std::deque<Programmer> programmerDeque;
	Programmer programmer("Sam Software", 21, 'M', 54321, "(819) 123-4567", "Programmer", 223000, 5432122, "Joe Boss", 4, true, false);
	programmerDeque.push_back( programmer );

	std::deque<SoftwareArchitect> softwareArchitectDeque;
	SoftwareArchitect architect("Alex Arch", 31, 'M', 88888, "(819) 123-4444", "Architect", 323000, 5434222, "Big Boss", 5, 4);
	softwareArchitectDeque.push_back( architect );

	while(!exit)
	{
		add = 1;
		edit = 1;
		switch( welcome() )
		{
			case 1: // CS1C Employee
				if( (add = addOrEdit()) == 1 )
				{
					while(add == 1)
					{
						csEmployee.setName();
						csEmployee.setAge();
						csEmployee.setGender();
						csEmployee.setID();
						csEmployee.setPhoneNumber();
						csEmployee.setJobTitle();
						csEmployee.setSalary();
						csEmployee.setDate();

						employeeDeque.push_back( csEmployee );

						std::cout << "\nWould you like to add another new employee?\n"
									 "[ 1 ] Yes\n"
									 "[ ANY KEY ] No\n\n"
									 ": ";
						std::cin  >> add;
						std::cin.clear();
						std::cin.ignore(100, '\n');
					}
				} else {
					while( edit == 1 )
					{
						for(unsigned i = 0; i < employeeDeque.size(); i++)
						{
							std::cout << "\n [ " << i << " ]\n";
							employeeDeque.at(i).print();
						}

						std::cout << "\nWhich information would you like to edit?\n"
									 "[ NUMBER ] \n\n"
									 ": ";
						std::cin  >> edit;
						std::cin.clear();
						std::cin.ignore(100, '\n');

						if(edit >= 0 || edit < employeeDeque.size())
						{
							employeeDeque.at(edit).setName();
							employeeDeque.at(edit).setAge();
							employeeDeque.at(edit).setGender();
							employeeDeque.at(edit).setID();
							employeeDeque.at(edit).setPhoneNumber();
							employeeDeque.at(edit).setJobTitle();
							employeeDeque.at(edit).setSalary();
							employeeDeque.at(edit).setDate();

							std::cout << "\nWould you like to edit another employee?\n"
										 "[ 1 ] Yes\n"
										 "[ ANY KEY ] No\n\n"
										 ": ";
							std::cin  >> edit;
							std::cin.clear();
							std::cin.ignore(100, '\n');
						}else {
							edit = 0;
						}
					}
				}
				break;
			case 2: // Programmer Employee
				if( (add = addOrEdit()) == 1 )
				{
					while( add == 1 )
					{
						programmer.setName();
						programmer.setAge();
						programmer.setGender();
						programmer.setID();
						programmer.setPhoneNumber();
						programmer.setJobTitle();
						programmer.setSalary();
						programmer.setDate();
						programmer.setDepartmentNumber();
						programmer.setSupervisorName();
						programmer.setSalaryIncreasePercent();
						programmer.setKnowCpp();
						programmer.setKnowJava();

						programmerDeque.push_back( programmer );

						std::cout << "\nWould you like to add another new programmer?\n"
									 "[ 1 ] Yes\n"
									 "[ ANY KEY ] No\n\n"
									 ": ";
						std::cin  >> add;
						std::cin.clear();
						std::cin.ignore(100, '\n');
					}
				} else {
					while( edit == 1 )
					{
						for(unsigned i = 0; i < softwareArchitectDeque.size(); i++)
						{
							std::cout << "\n [ " << i << " ]\n";
							programmerDeque.at(i).print();
							programmerDeque.at(i).printAttributes();
						}

						std::cout << "\nWhich information would you like to edit?\n"
									 "[ NUMBER ] \n\n"
									 ": ";
						std::cin  >> edit;
						std::cin.clear();
						std::cin.ignore(100, '\n');

						if(edit >= 0 || edit < programmerDeque.size())
						{
							programmerDeque.at(edit).setName();
							programmerDeque.at(edit).setAge();
							programmerDeque.at(edit).setGender();
							programmerDeque.at(edit).setID();
							programmerDeque.at(edit).setPhoneNumber();
							programmerDeque.at(edit).setJobTitle();
							programmerDeque.at(edit).setSalary();
							programmerDeque.at(edit).setDate();
							programmerDeque.at(edit).setDepartmentNumber();
							programmerDeque.at(edit).setSupervisorName();
							programmerDeque.at(edit).setSalaryIncreasePercent();

							std::cout << "\nWould you like to edit another programmer?\n"
										 "[ 1 ] Yes\n"
										 "[ ANY KEY ] No\n\n"
										 ": ";
							std::cin  >> edit;
							std::cin.clear();
							std::cin.ignore(100, '\n');
						}else {
							edit = 0;
						}
					}
			    }
				break;
			case 3: // Software Architect Employee
				if( (add = addOrEdit()) == 1 )
				{
					while( add == 1 )
					{
						architect.setName();
						architect.setAge();
						architect.setGender();
						architect.setID();
						architect.setPhoneNumber();
						architect.setJobTitle();
						architect.setSalary();
						architect.setDate();
						architect.setDepartmentNumber();
						architect.setSupervisorName();
						architect.setSalaryIncreasePercent();
						architect.setExperienceYears();

						softwareArchitectDeque.push_back( architect );

						std::cout << "\nWould you like to add another new software architect?\n"
									 "[ 1 ] Yes\n"
									 "[ ANY KEY ] No\n\n"
									 ": ";
						std::cin  >> add;
						std::cin.clear();
						std::cin.ignore(100, '\n');
					}
				} else {
					while( edit == 1 )
					{
						for(unsigned i = 0; i < softwareArchitectDeque.size(); i++)
						{
							std::cout << "\n [ " << i << " ]\n";
							softwareArchitectDeque.at(i).print();
							softwareArchitectDeque.at(i).printAttributes();
						}

						std::cout << "\nWhich information would you like to edit?\n"
									 "[ NUMBER ] \n\n"
									 ": ";
						std::cin  >> edit;
						std::cin.clear();
						std::cin.ignore(100, '\n');

						if(edit >= 0 || edit < softwareArchitectDeque.size())
						{
							softwareArchitectDeque.at(edit).setName();
							softwareArchitectDeque.at(edit).setAge();
							softwareArchitectDeque.at(edit).setGender();
							softwareArchitectDeque.at(edit).setID();
							softwareArchitectDeque.at(edit).setPhoneNumber();
							softwareArchitectDeque.at(edit).setJobTitle();
							softwareArchitectDeque.at(edit).setSalary();
							softwareArchitectDeque.at(edit).setDate();
							softwareArchitectDeque.at(edit).setDepartmentNumber();
							softwareArchitectDeque.at(edit).setSupervisorName();
							softwareArchitectDeque.at(edit).setSalaryIncreasePercent();
							softwareArchitectDeque.at(edit).setExperienceYears();

							std::cout << "\nWould you like to edit another software architect?\n"
										 "[ 1 ] Yes\n"
										 "[ ANY KEY ] No\n\n"
										 ": ";
							std::cin  >> edit;
							std::cin.clear();
							std::cin.ignore(100, '\n');
						}else {
							edit = 0;
						}
					}
			    }
				break;
			default: // Exit
				std::cout << "\n\n* * * CS1C EMPLOYEES * * *\n\n";
				for(unsigned i = 0; i < employeeDeque.size(); i++)
				{
					employeeDeque.at(i).print();
				}

				std::cout << "\n* * * CS1C PROGRAMMERS * * *\n\n";
				for(	unsigned i = 0; i < programmerDeque.size(); i++)
				{
					programmerDeque.at(i).print();
					programmerDeque.at(i).printAttributes();
				}

				std::cout << "\n* * * CS1C SOFTWARE ARCHITECTS * * *\n\n";
				for(unsigned i = 0; i < softwareArchitectDeque.size(); i++)
				{
					softwareArchitectDeque.at(i).print();
					softwareArchitectDeque.at(i).printAttributes();
				}

				exit = true;
				break;
		}
	}
	return 0;
}
