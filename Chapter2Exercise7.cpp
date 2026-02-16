/* Assignment: Chapter 2 Exercise 7 
Programmer: Christopher O'Keefe
Program objective:
Calculate the ocean rise in 5, 7, and 10 years assuming that the ocean rises 1.5 millimeters each year 
*/

#include <iostream>
using namespace std;

int main()
{ 
    // Milimeter per year, fixed at 1.5
    const double MilimetersPerYear = 1.5;

   int year1 = 5; // Five years with ocean rise
   int year2 = 7; // Seven years with ocean rise
   int year3 = 10; // Ten years with ocean rise 
   
   // Process
   float riseIn5Years = MilimetersPerYear * year1; 
   float riseIn7Years = MilimetersPerYear * year2;
   float riseIn10Years = MilimetersPerYear * year3;

    //Output
    cout << "In 5 years, the ocean will have risen " << riseIn5Years << " millimeters." << endl;
    cout << "In 7 years, the ocean will have risen " << riseIn7Years << " millimeters." << endl;
    cout << "In 10 years, the ocean will have risen " << riseIn10Years << " millimeters." << endl;
  return 0;

}
