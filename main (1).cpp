#include <iostream>
#include <iomanip>
#include <string.h>
#include <string>
#include <fstream>
#include <bits/stdc++.h>

using namespace std; 




//Gives back a resulting grade, getting student's  points as an input.

void grading(){
     char ans;
    cout << "Do you want to want to check your grade? (y/n) ";
    cin >> ans;
    

    while (ans == 'y'){
        int studPoints;
        int minPass = 41;

        cout << "Enter the student points: ";
        cin >> studPoints;

        if (studPoints<minPass){
            cout << "This student has failed";
            cout << "You got a D-\n";
        } else {

            cout << "Congratulations you have passed the exam\n"<<endl;
            if (studPoints>41 && studPoints<51){
                cout<<"You got a D";
            }else if (studPoints>50 && studPoints<61){
                cout<<"You got a C-";
            }else if (studPoints>60 && studPoints<71){
                cout<<"You got a C";
            }else if (studPoints>70 && studPoints<81){
                cout<<"You got a B-";
            }else if (studPoints>80 && studPoints<91){
                cout<<"You got a B";
            }else if (studPoints>90 && studPoints<90){
                cout<<"You got a A-";
            }else if(studPoints>=91 && studPoints<=94){
                cout<<"Congratiulations you got an A";
            }else if(studPoints>=95 && studPoints<=100){
                cout<< "Congratulations you are in top tier max grade A+";
            }else{
                cout<<"The given data is not valid please check!\n";
            }
        
        cout << "Do you want to check some other class grade? (y/n): ";
        cin >> ans;
        }
    do{
        if(ans == 'n'){
            cout<<"The program is being terminated!!!";
        }
        if(ans!= 'y'){
            cout<< "This is not a valid answer!!!";
        }    
    } while (false);
    }
}
//Provides neccesary book for the student regarding to their program & deegre

void books(){
    int  period, program, deegre;

    cout<<"-----------------------------------------------------------------------------\n";
    cout<<"--                              Collage                                    --\n";
    cout<<"-----------------------------------------------------------------------------\n";
    cout<<"--                                                                         --\n";
    cout<<"--                       1.Bachelor                                        --\n";
    cout<<"--                       2.Master                                          --\n";
    cout<<"Enter your deegre: ";
    cin>>deegre;


    if (deegre==2)
    {
        cout<<"-----------------------------------------------------------------------------\n";
        cout<<"--                              Year                                       --\n";
        cout<<"-----------------------------------------------------------------------------\n";
        cout<<"--                                                                         --\n";
        cout<<"--                       1.First year                                      --\n";
        cout<<"--                       2.Second year                                     --\n";
        cout<<"Enter the period: ";
        
        cin>>period;
        
    }else if (deegre==1)
    {
        cout<<"-----------------------------------------------------------------------------\n";
        cout<<"--                              Year                                       --\n";
        cout<<"-----------------------------------------------------------------------------\n";
        cout<<"--                                                                         --\n";
        cout<<"--                       1.First year                                      --\n";
        cout<<"--                       2.Second year                                     --\n";
        cout<<"--                       3.Third  year                                     --\n";
        cout<<"Enter the period: ";

        cin>>period;
        
    }else{
        cout<<"Something went wrong!";
    }
    
    cout<<"-----------------------------------------------------------------------------\n";
    cout<<"--                              Program                                    --\n";
    cout<<"-----------------------------------------------------------------------------\n";
    cout<<"--                                                                         --\n";
    cout<<"--                       1.Software Engineering                            --\n";
    cout<<"--                       2.Economics                                       --\n";
    cout<<"--                       3.Business                                        --\n";
    cout<<"--                       4.Law                                             --\n";
    cout<<"--                       5.Pharmacy                                        --\n";
    cout<<"--                       6.Political Science                               --\n";
    cout<<"--                       7.Biology                                         --\n";
    cout<<"--                       7.Cyber Security                                  --\n";
    cout<<"--                       8.Finance & Banking                               --\n";
    cout<<"--                       9.Architecture                                    --\n";
    cout<<"--                       10.Psychology                                     --\n\n\n";

    cout<<"Enter your studing program: ";

    cin>>program;

    if(deegre==1 && period==1 && (program==1 || 2 || 3 ))
    {
        cout<<"Money, Banking, and Financial Markets / Edition 2: Stephen G. Cecchetti";
    }else if (deegre==1 && period==1 && (program==4 || 6 || 10 ))
    {
        cout<<"Business Law: Text and Cases (West's Business Law): Kenneth W. Clarkson, Roger LeRoy Miller, Gaylord A. Jentz, Frank B. Cross";
    }else if (deegre==1 && period==1 && (program==9 || 3 || 2 ))
    {
        cout<<"Management: Skills and Application: Leslie Rue, Lloyd Byars ";
    }else if (deegre==1 && period==1 && (program==7 || 8 || 9 ))
    {
        cout<<"Computer Science Illuminated, Fourth Edition: Nell Dale ";
    }else if (deegre==1 && period==1 && (program==10 || 9 || 6 ))
    {
        cout<<"Understanding Politics: Thomas M. Magstadt ";
    }else if (deegre==1 && period==1 && (program==7 || 5 || 6 ))
    {
        cout<<"Risk Analysis in Engineering: Techniques, Tools, and Trends ";
    }else if (deegre==1 && period==1 && (program==10 || 5 || 7 ))
    {
        cout<<"Human Anatomy Plus MasteringA&P with eText — Access Card Package (7th Edition): Frederic H. Martini, Michael J. Timmons, Robert B. Tallitsch ";
    }else if (deegre==1 && period==1 && (program==9 || 3 || 2 ))
    {
        cout<<"Introduction to International Political Economy (5th Edition): David N. Balaam, Bradford Dillman ";
    }else if (deegre==1 &&(period==2||3)&&(program==1 || 2 || 3 ))
    {
        cout<<"Introduction to Emergency Management, Fourth Edition: George Haddow, Jane Bullock, Damon P. Coppola ";
    }else if (deegre==1 &&(period==2||3)&&(program==4 || 6 || 10 ))
    {
        cout<<"Pipe Drafting and Design, Third Edition: Roy A. Parisher ";
    }else if (deegre==1 &&(period==2||3)&&(program==9 || 3 || 2 ))
    {
        cout<<"Human Anatomy Plus MasteringA&P with eText — Access Card Package ";
    }else if (deegre==1 &&(period==2||3)&&(program==7 || 8 || 9 ))
    {
        cout<<"Arc of Justice: A Saga of Race, Civil Rights, and Murder in the Jazz Age ";
    }else if (deegre==1 &&(period==2||3)&&(program==10 || 9 || 6 ))
    {
        cout<<"Essentials of Criminal Justice: Larry J. Siegel ";
    }else if (deegre==1 &&(period==2||3)&&(program==7 || 5 || 6 ))
    {
        cout<<"Crime Victims: An Introduction to Victimology: Andrew Karmen ";
    }else if (deegre==1 &&(period==2||3)&&(program==10 || 5 || 7 ))
    {
        cout<<"Data Analysis Using SQL and Excel: Gordon S. Linoff ";
    }else if (deegre==1 &&(period==2||3)&&(program==9 || 3 || 2 ))
    {
        cout<<" Introduction to Modern Cryptography: Principles and Protocols (Chapman & Hall/CRC Cryptography and Network Security Series)";
    }else if (deegre==2 &&(period==1)&&(program==9 || 3 || 2 ))
    {
        cout<<"Designing Interfaces  Jenifer Tidwell ";
    }else if (deegre== 2&&period==1&&(program==1 || 2 || 3 ))
    {
       cout<<"Absolute Beginner¿s Guide to Computer Basics (5th Edition) ";
    }else if (deegre== 2&&period==1&&(program== 2|| 4 || 7 ))
    {
        cout<<"Applied Management Science: Modeling, Spreadsheet Analysis, and Communication for Decision Making, 2nd Edition ";
    }else if (deegre== 2&&period==1&&(program== 6|| 8 || 9 ))
    {
        cout<<"Python Pocket Reference: Python in Your Pocket (Pocket Reference (O'Reilly)) ";
    }else if (deegre== 2&&period==1&&(program== 3||  2||1  ))
    {
        cout<<"Sams Teach Yourself Java in 21 Days (Covering Java 7 and Android) (6th Edition) ";
    }else if (deegre== 2&&period==1&&(program== 10||  4||5  ))
    {
        cout<<"LPIC-1: Linux Professional Institute Certification Study Guide: (Exams 101 and 102): Roderick W. Smith ";
    }else if (deegre== 2&&period==1&&(program==6 || 7 || 8 ))
    {
        cout<<" Learning SQL  Alan Beaulieu";
    }else if (deegre== 2&&period==1&&(program==1 || 4 || 6 ))
    {
        cout<<"Mastering AutoCAD Civil 3D 2013 (Autodesk Official Training Guides) ";
    }else if (deegre== 2&&period==2&&(program== 1||  2|| 3 ))
    {
        cout<<"A Practical Guide to Fedora and Red Hat Enterprise Linux (6th Edition) ";
    }else if (deegre== 2&&period==2&&(program== 3|| 5 || 7 ))
    {
        cout<<"Health Psychology: Shelley Taylor ";
    }else if (deegre== 2&&period==2&&(program==6 || 9 || 10 ))
    {
        cout<<"Introduction to Emergency Management, Fourth Edition: George Haddow, Jane Bullock, Damon P. Coppola ";
    }else if (deegre== 2&&period==2&&(program== 2|| 4 || 6 ))
    {
        cout<<"A Gift of Fire: Social, Legal, and Ethical Issues for Computing Technology (4th Edition) ";
    }else if (deegre== 2&&period==2&&(program== 8|| 9 || 10 ))
    {
        cout<<"Ethics in Information Technology: George Reynolds ";
    }else{
        cout<<"Something went wrong!";
    }
 
}
//Returns students average taking as an input their grade
void average(){
    int subjectNr;

    cout<<"Enter the number of the subjects you want to calculate average for: "<<endl;
    cin>>subjectNr;

    int * v = new int[subjectNr];

    

    for (int i = 0; i <subjectNr; i++)
    {
    
        cout<<"Enter the grade: ";
        cin>>v[i];
    }
    cout<<endl;
    float sum = 0; 
    float average = 0;

    for (int i = 0; i < subjectNr; i++)
    {
        sum += v[i];
    }
    cout <<"The sum is: "<<sum;
    average = (sum/subjectNr);
    cout<<"The average is: "<<average;
}



int students(){
    int option;
    
    
    cout<<"-----------------------------------------------------------------------------\n";
    cout<<"--                                     MENU                                --\n";
    cout<<"-----------------------------------------------------------------------------\n";
    cout<<"--                                                                         --\n";
    cout<<"--                       1.Pass || Fail                                    --\n";
    cout<<"--                       2.Books                                           --\n";
    cout<<"--                       3.Average                                         --\n";
    cout<<"--                       4.HELP                                            --\n";
    cout<<"Enter your prefered choice by typing down the number: ";
    cin>>option;

    switch (option)
    {
    case 1:
        grading();
        break;
    
    case 2:
        books();
        break;

    case 3:

        average();
        break;
    
    default:
        break;
    }
    
}
//Log's into adm section

void logIn(){
    int count;
    string userID, password, id, pass;
    system("cls");
    cout<<"Please enter your \t\t\t Please enter the Username && Password\n";
    cout<<"\t\t\t Username: "<<endl;
    cin>>userID;
    
    cout<<"Password: "<<endl;
    cin>>password;

    ifstream input("records.txt");
    while (input>>id>>pass){
        if(id==userID && password==pass){
            count=1;
            system("cls");
        }
        input.close();
        if (count==1)
        {
            cout<<userID<<"\n Log in is succesfull \n";
            
        }
        else{
            cout<<"User hasn't been found in the system";
            
        }
        
    }

}


//Register as an adm
void admRegistration(){
    string rUserId, rPassword, rId, rPass;
    system("cls");

    cout<<"Enter the username: ";
    cin>>rUserId;

    cout<<"Enter the password; ";
    cin>>rPassword;

    ofstream f1("records.txt", ios::app);
    f1<<rUserId<<"    "<<rPassword<<endl;
    system("cls");
    cout<<"The registration was successful!";
    

}

//Forgot the password 
void forgotPassAdm (){
    int option;
    system("cls");
    cout<<"Password has been forgotten!"<<endl;
    cout<<"1. Search your ID using your username"<<endl;
    cout<<"2. Main menu";

    cin>>option;

    switch (option)
    {
    case 1:
        {
        int count =0;
        string sUserId, sId, sPass;
        cout<<"Enter your username: ";
        cin>>sUserId;
        ifstream f2("records.txt");
        while(f2>>sId>>sPass)
        {
            if (sId==sUserId)
            {
                count=1;
            }
            
        }
        f2.close();
        if(count==1)
        {
            cout<<"Your account has been found!"<<endl;
            cout<<"Your password is: "<<sPass;
        }
        else
        {
            cout<<"Your account has not been found!";
            
        }
        break;
        }
    default:
        cout<<"Wrong choice, please try again"<<endl;
        system("cls");
        forgotPassAdm();
    }


}

void admMain(){
    int userDecision;

    cout<<"\t\t\t\t\t\t-----------------------\t\t\t\t\t\t"<<endl;
    cout<<"\t\t\t\t\t\t Welcome to the log in page \t\t\t\t\t\t"<<endl;
    cout<<"\t\t\t\t\t\t 1. Log in \t\t\t\t\t\t"<<endl;
    cout<<"\t\t\t\t\t\t 2. Sign Up \t\t\t\t\t\t"<<endl;
    cout<<"\t\t\t\t\t\t 3. Forgot Password \t\t\t\t\t\t"<<endl;
    cin>>userDecision;
    

    switch (userDecision)
    {
    case 1:
        logIn();
        break;
    
    case 2:
        admRegistration();
        break;
    
    case 3:
        forgotPassAdm();
        break;
        
    
    default:
        system("cls");
        cout<<"Are you sure?!(cus it doesn't make sense!";
        break;
    }
}
void help(){
    cout<<"--------------------------------------------------------------------------------------------------------------------------\n";
    cout<<"--                                                        GET SOME HELP                                                 --\n";
    cout<<"--This program takes numbers as inputs to pass from a section to another                                                --\n";
    cout<<"--There are two main parts of this program, administration section and the student section                              --\n";
    cout<<"--This program it has been built using c++ as programming languages and uses a .txt file to save and review and get data--\n";
    cout<<"--It has been created mainly by if-else statements case-break statements and small functions                            --\n";
    cout<<"--For further information feel free to reach!                                                                           --\n";
    cout<<"--e-mail: elfatmemaj@gmail.com                                                                                          --\n";
    
    
}

int main()
{
    int response;


    cout<<"-----------------------------------------------------------------------------\n";
    cout<<"--                           Welcome to --- SlaB                           --\n";

    cout<<"--                                     MENU                                --\n";
    cout<<"--                       1. ADMINISTRATION                                 --\n";
    cout<<"--                       2.STUDENTS                                        --\n";
    cout<<"--                       3.HELP                                            --\n";
    cout<<"Enter your prefered choice by typing down the number: ";
    cin>>response;

    switch (response)
    {
    case 1:
        admMain();
        break;
    case 2:
        students();
        break;
    case 3:
        help();
        break;
    
    default:
        system("cls");
        cout<<"Are you sure about that!?";
        break;
    }
       
    return 0;
}