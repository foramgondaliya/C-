#include <iostream>
using namespace std;

int main() 
{
    int vivaMarks[5]={23,19,22,28,23};
    int wtnMarks[5]={65,58,49,52,64};

    int totalMarks = 0;
    double average;
    double totalSubjectMarks ;
    double marksOutOf;

    cout << "Subject\t\tTotal Marks\tMarks out of 100" << endl;
    for (int i = 0; i < 5; ++i) 
	{
         totalSubjectMarks= vivaMarks[i] + wtnMarks[i];
         marksOutOf=(totalSubjectMarks*100) / 100;
        cout << "Subject " << (i+1) << ":\t" << totalSubjectMarks << "\t\t" << marksOutOf << endl;
        totalMarks += totalSubjectMarks;
    }

   
    average = totalMarks/5;

    
    cout << "\nFinal Total Examination Marks: " << totalMarks << " out of 500" << endl;
    cout << "Final Total Average: " << average<<"%"<<"out of 100"<< endl;

    return 0;
}

