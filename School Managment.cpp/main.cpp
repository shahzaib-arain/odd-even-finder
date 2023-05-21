#include <iostream>

using namespace std;
string name[500], rollNum[500], sclass[500], section[500], courses[500];
int total = 0;
void newAdmission(){
    int num;
    cout<<"How many students are going to take admission"<<endl;
    cin>>num;
    if(total == 0){
total = total + num;

    for(int i = 1; i <= num; i++){
        cout<<" \"Enter the data of student " <<i <<"\" "<< endl << endl;
        cout<<"Enter name of student"<<endl;
        cin>>name[i];
        cout<<"\nEnter roll number of student"<<endl;
        cin>>rollNum[i];
        cout<<"\nEnter class of student "<<endl;
        cin>>sclass[i];
        cout<<"\nEnter section of student"<<endl;
        cin>>section[i];
        cout<<"\nEnter number of courses of student"<<endl;
        cin>>courses[i];
        cout<<endl;

    }
    }

    else{
        for(int i = total+1; i <= num+total; i++){
        cout<<" \"Enter the data of student " <<i <<"\" "<< endl << endl;
        cout<<"Enter name of student"<<endl;
        cin>>name[i];
        cout<<"\nEnter roll number of student"<<endl;
        cin>>rollNum[i];
        cout<<"\nEnter class of student "<<endl;
        cin>>sclass[i];
        cout<<"\nEnter section of student"<<endl;
        cin>>section[i];
        cout<<"\nEnter number of courses of student"<<endl;
        cin>>courses[i];
        cout<<endl;

    }
    total = total + num;
    }
}

void allRecords(){
        cout<<"->Records of all students"<<endl<<endl;
    for( int i = 1; i <= total; i++){
        cout<<" \"Record of student " <<i <<"\" "<< endl << endl;
        cout<<"Name: "<<name[i]<<endl;
        cout<<"\nRoll number: "<<rollNum[i]<<endl;
        cout<<"\nClass: "<<sclass[i]<<endl;;
        cout<<"\nSection: "<<section[i]<<endl;;
        cout<<"\nCourses: "<<courses[i]<<endl<<endl;

        }
        if(total == 0){
            cout<<"No Records ---- Press 1 to enter records"<<endl<<endl;
    }
}

void searchRecord(){
        if(total == 0){
             cout<<"No Records ---- Press 1 to enter records"<<endl<<endl;
        }

    else if(true){
    cout<<"Enter rollnumber to view the record of this rollnumber"<<endl;
    string rroll;
    cin>>rroll;
    cout<<endl;
        for(int i = 1; i <= total; i++){

   if(rroll == rollNum[i])
    {
        cout<<" \"Record of student "<<"\" "<< endl << endl;
        cout<<"Name: "<<name[i]<<endl;
        cout<<"\nRoll number: "<<rollNum[i]<<endl;
        cout<<"\nClass: "<<sclass[i]<<endl;;
        cout<<"\nSection: "<<section[i]<<endl;
        cout<<"\nCourses: "<<courses[i]<<endl<<endl;
    }

}


}


}
void updateRecord(){
      cout<<"Enter rollnumber to update the record of this rollnumber"<<endl;
    string rollnum1;
    cin>>rollnum1;
    cout<<endl;

        for(int i = 1; i <= total; i++){
    if(rollnum1 == rollNum[i])
    {
        cout<<" \"previous record of student "<<"\" "<< endl << endl;
        cout<<"Name: "<<name[i]<<endl;
        cout<<"\nRoll number: "<<rollNum[i]<<endl;
        cout<<"\nClass: "<<sclass[i]<<endl;;
        cout<<"\nSection: "<<section[i]<<endl;
        cout<<"\nCourses: "<<courses[i]<<endl<<endl;
        cout<<"Now, type data that you want to update"<<endl<<endl;
        cout<<"Enter name: ";
        cin>>name[i];
        cout<<endl;
        cout<<"Enter Rollnumber: ";
        cin>>rollNum[i];
        cout<<endl;
        cout<<"Enter Class: ";
        cin>>sclass[i];
        cout<<endl;
        cout<<"Enter Section: ";
        cin>>section[i];
        cout<<endl;
        cout<<"Enter Courses: ";
        cin>>courses[i];
        cout<<endl;
        }
    }
}

void deleteRecord(){
    int opt;
    cout<<"Press 1 to delete all record"<<endl;
    cout<<"Press 2 to delete specific record of any student"<<endl;
    cin>>opt;
    if(opt == 1){
        total = 0;
        cout<<"Your all record has been deleted"<<endl<<endl;
    }


  else if(opt==2)

{

string rollno;

cout<<"Enter the roll no of student which you wanted to delete"<<endl;

cin>>rollno;

for(int i=0;i<=total;i++)

{

if(rollno==rollNum[i])

{

for(int j=i;j<total;j++)

{

name[j]=name[j+1];

rollNum[j]=rollNum[j+1];

sclass[j]=sclass[j+1];

section[j]=section[j+1];

courses[j]=courses[j+1];

    }

total--;

cout<<"Your required record is deleted"<<endl;

}

}

}

else

{

cout<<"Invalid input";

}

}

int main()
{
    while(true){
        int press;
        cout<<"\n\n\n\t\t\t----------------------->>Welcome On School Managemnt System<<-----------------------"<<endl<<endl;
        cout<<"Press 1 for new Admisson"<<endl<<endl;
        cout<<"Press 2 to show all records"<<endl<<endl;
        cout<<"Press 3 to search any record"<<endl<<endl;
        cout<<"Press 4 to update the record"<<endl<<endl;
        cout<<"Press 5 to delete any record"<<endl<<endl;
        cout<<"Press 6 for exit"<<endl<<endl;
        cin>>press;
        cout<<endl;


        switch(press){
            case 1:
            newAdmission();
            break;

            case 2:
            allRecords();
            break;

            case 3:
            searchRecord();
            break;

            case 4:
            updateRecord();
            break;

            case 5:
            deleteRecord();
            break;

            case 6:
            exit(0);
            break;

            default:
            cout<<" \"Invalid Number   Please enter valid number between ( 1 to 6) because right now only 6 options are available\""<<endl<<endl;;

        }

    }

    return 0;
}
