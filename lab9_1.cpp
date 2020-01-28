#include<iostream>
using namespace std;

int main(){
	string count[5] = {"A","B","C","D","F"}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	int i=1;
	string grade;
	int a=0,b=0,c=0,d=0,f=0;
	cout << "Please input grade of each student (A-F) or input 0 to exit."<<endl;
	do{
		cout << "Student [" <<i << "]:";
		cin >> grade; //The loop must be terminated when grade = '0'
		if(grade == count[0]){ // if grade is A
			a++;//Do something
		}else if(grade == count[1]){ // if grade is B
			b++;//Do something
		//and so on ... for grade = C, D, F	
		}else if(grade == count[2]){
			c++;
		}else if(grade == count[3]){
			d++;
		}else if(grade == count[4]){
			f++;
		}else if(grade == "0"){
			i--;
			break;
		} else{
			cout <<"Wrong input. Please input again."<<endl;
			i--;
			
			// grade is wrong input
			//Do something
		} 
		i++;
		}
	while(true);
	
	
	cout << "In total "<<i<< " students.\n";
	cout << "A = " << a <<",";
	cout << "B = " << b<<",";
	cout << "C = " << c<<",";
	cout << "D = " <<d <<",";
	cout << "F = " << f <<",";	
	//	and so on ... for grade = C, D, F	
	return 0;
	
	}
	

