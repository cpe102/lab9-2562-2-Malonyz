//cout << "-------------------- SOTUS ---------------------";
//cout << textline;
//cout << "-------------------- SOTUS ---------------------";
//Don't forget to change cout to output filestream
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ofstream cheer;
    cheer.open("cheerbook_copy.txt");
    cheer <<"-------------------- SOTUS ---------------------"<<"\n";
    ifstream book;
    book.open("cheerbook.txt");
    string textline;
    while (getline(book,textline))
    {
        cheer << textline <<"\n";
    }
    cheer <<"-------------------- SOTUS ---------------------"<<"\n";
    cheer.close();


    




}
