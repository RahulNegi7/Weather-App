#include<iostream>
#include<string>
using namespace std;

struct S1{    
    string Name;
    int Rollno;
    char Section;
};

int main(){
    S1.Name="Rahul";
    S1.Rollno=46;
    S1.Section='D';

    cout<<S1.Name<<endl;
    cout<<S1.Rollno<<endl;
    cout<<S1.Section<<endl;

    return 0;
}