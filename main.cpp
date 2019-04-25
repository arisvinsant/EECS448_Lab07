//Aris Vinsant
//main.cpp
//EECS 448 Lab 07

#include <iostream>
#include "LinkedListOfInts.h"
#include "TestSuite.h"

int main(int argc, char** argv)
{
	//LinkedListOfInts testableList;
	TestSuite tester;
	tester.run();

	std::cout << "Running...\nAnd we're done.\nGoodbye.\n";

	return (0);

}
