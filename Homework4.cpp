#include <iostream>
using namespace std;
int main() {
    char grade;
    int i=0,total=0;
    do {
        cout<<"Enter the letter grade (Enter 'X' to Exit)"<<endl;
        cin>>grade;
        if(grade == 'A'||grade == 'a') total+=4;
        else if(grade=='B'||grade=='b') total+=3;
        else if(grade=='C'||grade=='c') total+=2;
        else if(grade=='D'||grade=='d') total+=1;
        else if(grade=='F'||grade=='f') total=total;
        i++;
    } while (grade!='x'&&grade!='X');
	i--;
    cout<<"Total Grade Points: "<<total<< endl;
    cout<<"GPA: "<<(float) total/i<<endl;
    system("pause");
    return(0);
}