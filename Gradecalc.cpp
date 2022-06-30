#include<iostream>
using namespace std;

class Numberofcourses
{
	public:
		void detailsofgradeinfo(){
            int CourseA;
            int CourseB;
            int CourseC;
            int CourseD;
            
            
            cout<<endl;

            cout<<"Type in The Score of The first course:";
            cin>>CourseA;
            cout<<endl;

            if(CourseA >= 70)
            {
                cout<<"Grade :A"<<endl;
            }
            else if(CourseA >=60 && CourseA <=69)
            {
                cout<<"Grade :B"<<endl;
            }
            else if(CourseA >=50 && CourseA <=59)
            {
                cout<<"Grade: C"<<endl;
            }
            else if(CourseA >=40 && CourseA <= 45)
            {
                cout<<"Garde : D"<<endl;
            }
            else if(CourseA < 40)
            {
                cout<<"Grade : fail"<<endl;
            }

            cout<<endl;
            cout<<"Type in The Score of the Second course:";
            cin>>CourseB;
            cout<<endl;

            if(CourseB >= 70)
            {
                cout<<"Grade :A"<<endl;
            }
            else if(CourseB >=60 && CourseB <=69)
            {
                cout<<"Grade :B"<<endl;
            }
            else if(CourseB >=50 && CourseB <=59)
            {
                cout<<"Grade: C"<<endl;
            }
            else if(CourseB >=40 && CourseB <= 45)
            {
                cout<<"Garde : D"<<endl;
            }
            else if(CourseB < 40)
            {
                cout<<"Grade : fail"<<endl;
            }

            cout<<endl;
            cout<<"Type in the score of the third course:";
            cin>>CourseC;

            if(CourseC >= 70)
            {
                cout<<"Grade :A"<<endl;
            }
            else if(CourseC >=60 && CourseC <=69)
            {
                cout<<"Grade :B"<<endl;
            }
            else if(CourseC >=50 && CourseC <=59)
            {
                cout<<"Grade: C"<<endl;
            }
            else if(CourseC >=40 && CourseC <= 45)
            {
                cout<<"Garde : D"<<endl;
            }
            else if(CourseC < 40)
            {
                cout<<"Grade : fail"<<endl;
            }

            cout<<endl;
            cout<<"Type in the score of the fourth number:";
            cin>>CourseD;

            if(CourseD >= 70)
            {
                cout<<"Grade :A"<<endl;
            }
            else if(CourseD >=60 && CourseD <=69)
            {
                cout<<"Grade :B"<<endl;
            }
            else if(CourseD >=50 && CourseD <=59)
            {
                cout<<"Grade: C"<<endl;
            }
            else if(CourseD >=40 && CourseD <= 45)
            {
                cout<<"Garde : D"<<endl;
            }
            else if(CourseD < 40)
            {
                cout<<"Grade : fail"<<endl;
            }
            
            cout<<endl;

            cout<<"Reply with 1 as yes and 2 as no"<<endl;
            cout<<endl;
            cout<<"Would you like to see the total number of courses and the total average:";
            int answer;
            cin>>answer;
            
            if(answer ==1 )
            {
                int sumTotal;
                int average;

                int sumof[4] ={CourseA, CourseB , CourseC, CourseD};

                sumTotal = (sumof[0] + sumof[1] + sumof[2] + sumof[2] + sumof[3]);
                average = sumTotal / 4;

                cout<<"The sum is:"<<sumTotal<<endl;
                cout<<"The average is:"<<average<<endl;
            }

            else if(answer == 2)
            {
                cout<<"Okay"<<endl;
                exit(0);
            }
        }
};

class errorMessage
{
    public:
       void errorInfo(){
           cout<<"only four courses can be calculated"<<endl;
       
	}
};

int main()
{
    Numberofcourses numberofCourses;
    errorMessage errorofMessage;

    int Reply;
    cout<<"The number of courses should be four"<<endl;
    cout<<endl;
    cout<<"What is the total number of courses?:";
    cin>>Reply;

    if(Reply == 4)
    {
        numberofCourses.detailsofgradeinfo();
    }
    else if(Reply != 4)
    {
        errorofMessage.errorInfo();
    }
}
