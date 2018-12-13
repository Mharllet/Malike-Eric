#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

struct student
    {
        char name[25];
        char address[50];

        int id;
        char _class[20];
        int age;
        long double mobile_number;
        int marks;
        char grade[4];
        int course_code;
        char course_title[25];
    };





int main()
{
   char dow;
     int array=0;
     int array2=0;
     int array3=0;

       cout << "tap 1 Edit/Delete/Add Student" << endl;
       cout << "tap 2 Edit/Delete/Add Staff" << endl;


       cout << endl;
       cout << "\m choose Option:";

       int sw2;
       cin >> sw2;

       switch(sw2)
    {
        case  1 :

         cout << "Now Edit/Add/Delete Student Records.. \n";

    do
   {
       student stud[20];

       cout << "Select 1 to Add New Record" << endl;
       cout << "Select 2 to Delete Record" << endl;
       cout << "Select 3 to Edit Record" << endl;
       cout << "Select 4 to View Record" << endl;

       cout << endl;
       cout << "\m choose Option:";

       int rolcheck = 0;

    int sw;
    cin >> sw;

    switch(sw)
    {
        case  1 :


        cout << "\n Enter student's info " << array+1 << " is :" << endl;

        cout << "\m Enter student's ID No. = ";
    int id2;
    int id1;



    cin >> id1;

    for(int a=0; a<=array; a++){

        id2=id1;
    if(id2 == stud[a].id)
    {
        rolcheck = 1;
         }
    }
    if(rolcheck!= 1){
        stud[array].id=id1;

    cout <<"\m Enter student's Name = ";
    cin >> stud[array].name;

    cout << "\m Enter Address = ";
    cin >> stud[array].address;

    cout << "\m Enter Mobile no = ";
    cin >> stud[array].mobile_number;

    cout << "\m Enter Class = ";
    cin >> stud[array]._class;

    cout << "\m Enter Course code = ";
    cin >> stud[array].course_code;

    cout << "\m Enter Course title = ";
    cin >> stud[array].course_title;

    cout << "\m Enter Marks = ";
    cin >> stud[array].marks;

    cout << "\m Enter Grade = ";
    cin >> stud[array].grade;

    cout << "\m Enter Age = ";
    cin >> stud[array].age;
    array=array+1;
    }
    else
    {
        cout << "This Record Already Exists \n";
    }


            break;

        case 2:
            cout << "\n Enter student's ID no. to Delete: " << endl;

            cin >> id1;

            for(int a=0; a<=array; a++)
            {

                id2=id1;
            if(id2==stud[a].id)
            {
                stud[a].id = 'd';
                cout << "\m Record Deleted Succcessfully";
                  }
            }
                    break;
        case 3:
            cout << "\n Enter Student's ID no. to Edit: " << endl;


            cin >>id1;

        for(int i=0; i<=array; i++)
        {


            id2=id1;
        if(id2==stud[i].id)
        {
        cout << "\m ID No.  ";
        cout << stud[i].id;
        cout << "\m Name = ";
        cout << stud[i].name;
        cout << "\m Address = ";
        cout << stud[i].address;
        cout << "\m Mobile no ";
        cout << stud[i].mobile_number;
        cout << "\m Class = ";
        cout << stud[i]._class;

        cout << "\m Course Code = ";
        cout << stud[i].course_code;

        cout << "\m Course Title = ";
        cout << stud[i].course_title;
        cout << "\m Marks = ";
        cout << stud[i].marks;
        cout << "\m Grade = ";
        cout << stud[i].grade;


    cout << "\n\m Enter Info Again ";
            cout << "\n\m Enter Name = ";
            cin >> stud[i].name;

            cout << "\n\m Enter Address = ";
            cin >> stud[i].address;

            cout << "\n\m Enter Moblie no = ";
            cin >> stud[i].mobile_number;

            cout << "\n\m Enter Class = ";
            cin >> stud[i]._class;

            cout << "\n\m Enter Course Code = ";
            cin >> stud[i].course_code;

            cout << "\n\m Enter Course Title = ";
            cin >> stud[i].course_title;

            cout << "\n\m Enter Marks = ";
            cin >> stud[i].marks;

            cout << "\n\m Enter Grade = ";
            cin >> stud[i].grade;

            cout << "\n\m Enter Age = ";
            cin >> stud[i].age;
               }

    }
    break;


        case 4:
            cout << "\n________________________________________________________________________________________________________" << endl;
            for(int i=0; i<1; i++)
            {
                cout << "ID No.       ||";
                cout << " Name        ||";
                cout << " Address     ||";
                cout << "Tele no      ||";
                cout << " Class       ||";
                cout << " Course Code ||";
                cout << " Course Title||";
                cout << " Marks       ||";
                cout << " Grade       ||";
            for(int b=0;b<array;b++)
            {
                if(stud[b].id!='d')
                {
                    cout << "\n";
                      cout << " ";
                    cout << stud[b].id;
                    cout << " || ";
                    cout << stud[b].name;
                    cout << " || ";
                    cout << stud[b].address;
                    cout << " ||  ";
                    cout << stud[b].mobile_number;
                    cout << " ||  ";
                    cout << stud[b]._class;
                    cout << " ||  ";
                    cout << stud[b].course_code;
                    cout << " ||  ";
                    cout << stud[b].course_title;
                    cout << " ||   ";
                    cout << stud[b].marks;
                    cout << " ||   ";
                    cout << stud[b].grade;
                    cout << " ||";
                }

            }
            }

            cout << "\n________________________________________________________________________________________________________\n";
                break;


        default:
            cout << "\m wrong Option";
            break;
    }
          cout << "\n \n \m Would you like to Continue ? [Yes/No]";
          cin>> dow;
            }

            while(dow=='y');


      break;

        case 2:
            cout << "Edit/Add/Delete Staff Records: " << endl;

            //update/delete/edit staff records
             do
   {
       student stud[20];

       cout << "Tap 1 to Add New Record" << endl;
       cout << "Tap 2 to Delete Record" << endl;
       cout << "Tap 3 to Edit Record" << endl;
       cout << "Tap 4 to Display Record" << endl;

       cout << endl;
       cout << "\m Choose Option:";

       int rolcheck = 0;

    int sw;
    cin >> sw;

    switch(sw)
    {
        case  1 :


        cout << "\n Enter Staff's info " << array2+1 << " is :" << endl;

        cout << "\m Enter ID No. = ";
    int id2;
    int id1;

    cin >> id1;

    for(int a=0; a<=array2; a++){

        id2=id1;
    if(id2 == stud[a].id)
    {
        rolcheck = 1;
         }
    }
    if(rolcheck!= 1){
        stud[array2].id=id1;

    cout <<"\m Enter Name = ";
    cin >> stud[array2].name;

    cout << "\m Enter Address = ";
    cin >> stud[array2].address;

    cout << "\m Enter Moblie no = ";
    cin >> stud[array2].mobile_number;

    cout << "\m Enter Age = ";
    cin >> stud[array2].age;
    array2=array2+1;
    }
    else
    {
        cout << " Record Already Exists \n";
    }


            break;

        case 2:
            cout << "\n Enter Staff's ID to Delete: " << endl;

            cin >> id1;

            for(int a=0; a<=array2; a++)
            {

                id2=id1;
            if(id2==stud[a].id)
            {
                stud[a].id = 'd';
                cout << "\m Record Deleted Successfully";
                  }
            }
                    break;
        case 3:
            cout << "\n Enter Staff ID to Edit: " << endl;


            cin >>id1;

        for(int a=0; a<=array; a++)
        {


            id2=id1;
        if(id2==stud[a].id)
        {
        cout << "\t ID No.  ";
        cout << stud[a].id;
        cout << "\t Staff Name = ";
        cout << stud[a].name;
        cout << "\t Address = ";
        cout << stud[a].address;
        cout << "\m Mobile no ";
        cout << stud[a].mobile_number;
        cout << "\t Age ";
        cout << stud[a].age;


    cout << "\n\t Re-Enter Info ";
            cout << "\n\m Enter Staff ID No. = ";
            cin >> stud[a].id;
            cout << "\n\m Enter Staff Name = ";
            cin >> stud[a].name;

            cout << "\n\m Enter Address = ";
            cin >> stud[a].address;

            cout << "\n\m Enter Mobile no = ";
            cin >> stud[a].mobile_number;

            cout << "\n\t Enter Age = ";
            cin >> stud[a].age;
               }
        }

                break;

            case 4:
            cout << "\n_________________________________________________________________________________________________________" << endl;
            for(int i=0; i<1; i++)
            {
                cout << "ID No. |";
                cout << " Name |";
                cout << " Address |";
                cout << "Tele no |";
                cout << " Age |";
            for(int b=0;b<array;b++)
            {
                if(stud[b].id!='d')
                {
                    cout << "\n";
                      cout << " ";
                    cout << stud[b].id;
                    cout << "   | ";
                    cout << stud[b].name;
                    cout << "   | ";
                    cout << stud[b].address;
                    cout << "   |  ";
                    cout << stud[b].mobile_number;
                    cout << "   |  ";

                    cout << stud[b].age;
                    cout << "   |";
                }

            }
            }

            cout << "\n-----------------------------------------------------------------------------------------------------------\n";

                break;


        default:
            cout << "\m wrong Option";
            break;
    }
          cout << "\n \n \m Would you like to Continue ? [Yes/No]";
          cin>> dow;
            }

            while(dow=='y');

            break;




    return 0;
    getch();




    }


}

