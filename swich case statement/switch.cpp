#include<iostream>
using namespace std;

int main () {
   // local variable daclaration
   char grade = 'C' ;

   switch(grade) {
      case 'A' :
         cout << "Excellent!" << endl;
         break;
      case 'B' :
      case 'C' :
         cout << "Well Done" << endl;
         break;
      case 'D' :
         cout << "Your Passed" << endl;
         break;
      case 'E' :
         cout << "Hello World" << endl;
         break;
      case 'F' :
         cout << "Team India" << endl;
      default :
         cout << "Invalid grade" << endl;
   }
   cout << "your grade is" << endl;

  return 0; 
}