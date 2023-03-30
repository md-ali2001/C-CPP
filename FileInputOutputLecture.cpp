//============================================================================
// Name        : FileInputOutputLecture.cpp
// Author      : Abdullah Ahmed
// Version     :
// Copyright   : Don't steal my code!
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;

int main() {

	FILE *ptr;
	char aString[35]; // make an array of chars

	//ptr = fopen("file.txt", "w");

	//fprintf(ptr, "%s", "ibaad"); // creates a new file. Removes old file.

	// Format specifier tells the data type of variable.
	// for integer data type, we use % d, char %c, string %s, float %f,

	ptr = fopen("file.txt", "a"); // this appends to a file. Doesn't make a new file
	fprintf(ptr, "%s %d", "zainab, 12"); // append the name zainab.

	/*
	ptr = fopen("file.txt", "r");
	fscanf(ptr, "%s", aString); // reads only the first word of first line of txt file. Not the whole file.
	cout << aString << endl;
	fprintf(ptr, "%s", "Lubna");
	fclose(ptr); // it closes the file(for program only)
	*/

	//ptr = fopen("file2.txt", "w");


	cout << "Program ending, have a nice day!" << endl; // prints Program ending, have a nice day!
	return 0;
}
