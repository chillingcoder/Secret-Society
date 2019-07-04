#include<iostream>

using namespace std;

//Declarations
string societyName[20];
string Names[20];
int j,i;
string str;

//Function to get the first character in the string of the array(societyName)
string society(string str){
    cout<<str.at(0);
}

//main function
int main(){
    cout<<"\t\t\t"<<"SOCIETY NAME\n"<<endl;
    cout<<"\t Enter first names of members in the society: "<<endl;
    for(j=0;j<20;j++){
    cin>>(Names[j]);
    }
    cout<<"\t\tThe Secret society Name is: ";
    for(i=0;i<20;i++){
        str=Names[i];
        society(str);
    }
}
