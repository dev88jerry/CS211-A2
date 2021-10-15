/**
inline comments
*/

#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int yr, mon, startD;
    
    cout <<"Please enter the year"<<endl;
    cin >> yr;
    
    cout <<"Please enter the month (1-12)"<<endl;
    cin >> mon;
  
    cout <<"Sun = 1, Mon = 2, Tue = 3, Wed = 4, Thu = 5, Fri = 6, Sat = 7"<<endl;
    cout <<"Please enter the day of the start of the month (1-7)"<<endl;
    cin >> startD;
  
  
    int days;
  
    //Check days in months for 30-31 in month
    switch (mon): {
	    case 1: case 3: case 5: case 7: case 8; case 10: case 12:
	    days = 31;
	    break;
	    
        case 2:
		if(yr % 4 == 0 && yr % 100 == 0 && yr % 400 == 0)
        	days = 29;
		days =28;		
	    break;
	
        default:
	    days = 30;
    }  
  
    for (int i=1;i<=days;i++){
	    cout << left << i << "";
		//condition to end line depending on the day
		if(false)
		    cout << endl;
  
    }  
  
    return 0; 
}
