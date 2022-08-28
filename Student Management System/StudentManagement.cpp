#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int value, total = 0;
string name[500], course[500],dob[500], arr5[500];
int choice,roll[500];
float phy[500],chem[500],math[500];
void enter()
{

    cout << "How many students you want to enter" << endl;
    cin >> choice;
    for (int i = 0; i < choice; i++)
    {
        cout << endl
             << "Enter the name of the Student" << endl;
        cin >> name[i];
        cout << "Enter the roll number of the Student" << endl;
        cin >> roll[i];
        cout << "Enter the Date of Birth of the Student in DD/MM/YYYY format" << endl;
        cin >> dob[i];
        cout << "Enter the course of the Student" << endl;
        cin >> course[i];
        cout<<"Enter Marks in Physics"<<endl;
        cin>>phy[i];
        cout<<"Enter Marks in Chemistry"<<endl;
        cin>>chem[i];
        cout<<"Enter Marks in Mathematics"<<endl;
        cin>>math[i];
        
    }
}
void show()
{
    for (int i = 0; i < choice; i++)
    {
        cout << endl
             << "Data of Student: " << i + 1 << endl;
        cout << "Name: " << name[i] << endl;
        cout << "Roll No: " << roll[i] << endl;
        cout << "Date of Birth: " << dob[i] << endl;
        cout << "Course: " << course[i] << endl;
        cout<<"Physics Marks: "<<phy[i]<<endl;
        cout<<"Chemistry Marks: "<< chem[i]<<endl;
        cout<<"Maths Marks: "<<math[i] << endl;
    }
}
void search()
{
    int rollno;
    cout << "Enter The Roll No of the Student you want to search" << endl;
    cin >> rollno;
    for (int i = 0; i < choice; i++)
    {
        if ((rollno == roll[i]))
        {
            cout << endl
                 << "Data of Student: " << i + 1 << endl;
            cout << "Name: " << name[i] << endl;
            cout << "Roll No: " << roll[i] << endl;
            cout << "Date of Birth: " << dob[i] << endl;
            cout<<"Physics Marks: "<<phy[i]<<endl;
            cout<<"Chemistry Marks: "<< chem[i]<<endl;
            cout<<"Maths Marks: "<<math[i] << endl;
            goto jump;
            break;
        }  
    }
    if (rollno != 0)
    {
        cout << "We have no record for that roll no, sorry for your inconvenience" << endl;
    }
    else if (rollno = 0)
    {
        cout << "This Roll No does not exist." << endl;
    }
    jump:
         int main();
}
void update()
{
    int rollno;
    cout << "Enter The Roll No of the Student you want to update:" << endl;
    cin >> rollno;
    for (int i = 0; i < choice; i++)
    {
        if ((rollno == roll[i]))
        {
            cout << endl
                 << "Current Data of Student: " << i + 1 << endl;
            cout << "Name: " << name[i] << endl;
            cout << "Roll No: " << roll[i] << endl;
            cout << "Date of Birth: " << dob[i] << endl;
            cout << "Course: " << course[i] << endl;
            cout<<"Physics Marks: "<<phy[i]<<endl;
            cout<<"Chemistry Marks: "<< chem[i]<<endl;
            cout<<"Maths Marks: "<<math[i] << endl;

            cout << endl
                 << "Enter New Data of Student: " << i + 1 << endl;
            cout << endl
                 << "Enter the name of the Student" << endl;
            cin >> name[i];
            cout << "Enter the roll number of the Student" << endl;
            cin >> roll[i];
            cout << "Enter the Date of Birth of the Student in DD/MM/YYYY format" << endl;
            cin >> dob[i];
            cout << "Enter the course of the Student" << endl;
            cin >> course[i];
            cout<<"Enter Marks in Physics"<<endl;
            cin>>phy[i];
            cout<<"Enter Marks in Chemistry"<<endl;
            cin>>chem[i];
            cout<<"Enter Marks in Mathematics"<<endl;
            cin>>math[i];
            goto jump;
            break;
        }
    }
    if (rollno != 0)
    {
        cout << "We have no record for that roll no, sorry for your inconvenience" << endl;
    }
    else if (rollno = 0)
    {
        cout << "This Roll No does not exist." << endl;
    }
    jump:
        int main();
}
void deleterecord()
{
    int rollno;

    cout << "Enter the roll no of student which you wanted to delete" << endl;

    cin >> rollno;

    for (int i = 0; i < choice; i++)

    {

        if (rollno == roll[i])

        {

            for (int j = i; j < choice; j++)

            {

                name[j] = name[j + 1];

                course[j] = course[j + 1];

                roll[j] = roll[j + 1];

                dob[j] = dob[j + 1];

                phy[i]=phy[j+1];

                chem[i]=chem[j+1];

                math[i]=math[j+1];
            }
            cout << "Your required record is deleted" << endl;
        }
    }
}
    
int main()
{
    
    cout << endl
         << "*****************************  Welcome To Student Management Program  *****************************" << endl;
    do
    {

        cout << endl
             << "Press 1 to enter data" << endl;
        cout << "Press 2 to show data" << endl;
        cout << "Press 3 to search data" << endl;
        cout << "Press 4 to update data" << endl;
        cout << "Press 5 to delete data" << endl;
        cout << "Press 6 to exit" << endl;
        cout << "Choose An Option" << endl;

        cin >> value;
        switch (value)
        {
        case 1:
            enter();
            break;
        case 2:
            show();
            break;
        case 3:
            search();
            break;
        case 4:
            update();
            break;
        case 5:
            deleterecord();
            break;
        }

    } while (value != 6);

    return 0;
}