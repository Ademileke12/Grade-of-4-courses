//Program to calculate my cgpa and gpa for two and the half level
#include <iostream>
using namespace std;
int main()
{
    float total_semesterA = 80, total_semesterB = 75, total_semesterC_200 = 71;
    float unitsA = 22, unitsB =21, unitsC = 18;
    float gpaA, gpaB,gpaC,CGPA_of_all;
    
    gpaA = total_semesterA / unitsA;
    gpaB = total_semesterB / unitsB;
    gpaC = total_semesterC_200 / unitsC;
    
    cout<<"GPA of David John 100 first semseterA:"<<gpaA<<endl;
    cout<<"GPA of David John 100 second semseterB:"<<gpaB<<endl;
    cout<<"GPA of David John 200 first semseterA:"<<gpaC<<endl;
    
    cout<<""<<endl;
    
    CGPA_of_all = (gpaA+gpaB+gpaC)/3;
    
    cout<<"Total CGPA of all Semester is:"<<CGPA_of_all<<endl;

    //Replace_David john_ with the required name
}
