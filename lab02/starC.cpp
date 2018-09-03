// starC.cpp   A demonstration of ASCII Art printing C characters
// P. Conrad for CS16, Fall 2014, UCSB
// Modified by D. Mirza for CS16, Winter 2018, UCSB

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

void assertEquals(string expected, string actual, string message);
string starC(int width, int height);
void runTests(void);

// Write starC per specifictions in the lab writeup
// so that internal tests pass, and submit.cs system tests pass


string starC(int width, int height)
{
  string result="";
  // check if parameters are valid;
	if (width<2 || height <3)
  	return result;
	
	// Print first row;
	for (int col=1; col<= width; col++){
		result += "*";
	}
	result += "\n";
	
	// Print the stick
	for (int row=1; row <= height-2; row++){
		result += "*";
		for (int col=1; col <= width-1; col++){
		result +=" ";
		}
		result += "\n";
	}

	// Print the last row
	for (int col=1; col<= width; col++){
		result +="*";
	}
	result+="\n";
	return result;
}

// Test-Driven Development; check expected results against actual

void runTests(void) {

  // The following line works because in C and C++ when string literals
  // are separated only by whitespace (space, tab, newline), they 
  // automatically get concatenated into a single string literal

  string starC34Expected = 
    "***\n"
    "*  \n"
    "*  \n"
    "***\n";
  
  assertEquals(starC34Expected,starC(3,4),"starC(3,4)");

  string starC53Expected =     
    "*****\n"
    "*    \n"
    "*****\n";

  
  assertEquals(starC53Expected,starC(5,3),"starC(5,3)");

  assertEquals("",starC(2,1),"starC(2,1)");
  assertEquals("",starC(2,2),"starC(2,2)");

  string starC23Expected =     
    "**\n"
    "* \n"
    "**\n";
  
  assertEquals(starC23Expected,starC(2,3),"starC(2,3)");
}

// Test harness

void assertEquals(string expected, string actual, string message="") {
  if (expected==actual) {
    cout << "PASSED: " << message << endl;;
  } else {
    cout << "   FAILED: " << message << endl << "   Expected:[\n" << expected << "] actual = [\n" << actual << "]\n" << endl;
  }
}


// Main function

int main(int argc, char *argv[])
{

  // TODO: Add check for parameters
  // and code to print usage message
	if (argc != 3){
		cerr << "Usage: " << argv[0] << "width height" << endl;
		exit(1);
	}

  // TODO: Add code to get width and height from cmd line args
  // code that checks if they are both -1; if so, call runTests()
  // then exit.
	int width = stoi(argv[1]);
	int height = stoi(argv[2]);

	if (width == -1 && height == -1){
	runTests();
	exit(0);
	}


  // TODO: Add code that calls the starC function and prints
  // the result on cout (without an extra newline)
	cout << starC(width,height);
  return 0;
}
