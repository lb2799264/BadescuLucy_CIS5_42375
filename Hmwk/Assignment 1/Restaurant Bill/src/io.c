/* 
 * File: main.cpp
 * Author: Lucy Badescu
 * Created on March 3rd, 2018, 2:56 PM
 * Purpose: Calculate tax and tip on a restaurant bill
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created 

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns


void go();

int main(int argc, char**argv) {
    go();
    return 0;
}

void go() {
    int i;

    char *prompt = "\nType a string (or 'q' when done) >>>\n";
    for (i = 0; i < 25; i++) {
	char line[132];
	if (feof(stdin))
	    break;
	printf(prompt);
	fflush(stdout);
	scanf("%s", line);
	printf("Read: %s\n", line);
	if (line[0] == 'q' || line[0] == 'Q')
	    break;
    }
}
