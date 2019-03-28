#include <iostream>
#include <string>
#include <vector>
#include "Student.h"
#include "Faculty.h"
#include "Course.h"


int main()
{
	char n, k, ws;
	unsigned int x = 0;

	std::cout << "Welcome to the Staff Module of the Student Registration System (SRS). \n";
LOOP:	std::cout << "Please select one of the following options by entering the number associated with the menu option: \n"
	<< std::endl
	<< "1. Add a course\n"
	<< "2. Course Information Retrieval\n"
	<< "3. Student Information\n"
	<< "4. Course List\n"
	<< "5. Student-Course Report\n"
	<< std::endl
	<< "Enter the menu option: ";
		std::cin >> n;

		switch (n)
		{
		case '1':
			std::cout << "Add a course selected...\n";
			break;
		case '2':
			std::cout << "Case 2 selected.";
			break;
		case '3':
			std::cout << "Case 3 selected.";
			break;
		case '4':
			std::cout << "Case 4 selected.";
			break;
		case '5':
			std::cout << "Case 5 selected.";
			break;
		default:
			std::cout << "Invalid input. ";
			goto LOOP;
		}

		system("pause");
		return 0;
}