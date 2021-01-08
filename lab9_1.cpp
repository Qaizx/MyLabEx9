#include<iostream>
#include<string>
using namespace std;

int main(){
	char grade;
	int round = 1;
	int getA = 0, getB = 0, getC = 0, getD = 0, getF = 0;

	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	do{
		cout << "Student [" << round << "]: ";
		cin >> grade; 
		if(grade == 'A'){ 
			getA++;
			round++;
		}
		else if(grade == 'B'){ 
			getB++;	
			round++;
		}
		else if(grade == 'C'){ 
			getC++;	
			round++;
		}
		else if(grade == 'D'){ 
			getD++;	
			round++;
		}
		else if(grade == 'F'){ 
			getF++;
			round++;
		}
		else if(grade == '0') 
			break;			
		else{ 
			cout << "Wrong input. Please input again." << endl;
			continue;
		} 
	}while(true);
	
	
	cout << "In total " << round << " students." << endl;
	cout << "A = " << getA <<", ";
	cout << "B = " << getB <<", ";	
	cout << "C = " << getC <<", ";	
	cout << "D = " << getD <<", ";	
	cout << "F = " << getF <<", ";	
	
		
	
	return 0;
}
