//cout << "Number of data = ";
//cout << "Mean = ";
//cout << "Standard deviation = ";
#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
using namespace std;

int main(){
    string x;
    float sum=0,count=0,sqrtsum=0;

    ifstream problem;
    problem.open("score.txt");
    while(getline(problem,x)){
        sum += atof(x.c_str());
        count ++;
        sqrtsum += pow(atof(x.c_str()),2);



     }
     cout <<"Number of data = "<<count<<"\n";
     cout <<"Mean = "<<(1/count)*sum<<"\n";
     cout <<"Standard deviation = "<<sqrt(sqrtsum/count - pow((1/count)*sum,2));



}