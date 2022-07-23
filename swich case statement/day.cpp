#include<iostream>
using namespace std;

int main() {
// local variable declaration
  char Day ='D';

switch(Day) {
	
	case 'A' :
	   cout<<"Today is Sunday";
	   break;

	case 'B' :
	   cout<<"Today is Monday";
	   break;

	case 'C' :
	   cout<<"Today is Tuesday";
	   break;

	case 'D' :

	case 'E' :
	   cout<<"Today is Wednesday";
	   break;

	case 'F' :
	   cout<<"Today is Thurday";
	   break;

	case 'G' :
	   cout<<"Today is Friday";
	   break;

	case 'H' :
	   cout<<"Today is Saturday";
	   break;

	default :
	   cout<<"Day is Not Found";
}
return 0;
}