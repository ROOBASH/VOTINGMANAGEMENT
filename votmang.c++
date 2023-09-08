#include <bits/stdc++.h>
#define CANDIDATE1 "|PARTY 1|     <ADMK>    |1|"
#define CANDIDATE2 "|PARTY 2|     <DMK>     |2|"
#define CANDIDATE3 "|PARTY 3|     <BJP>     |3|"
#define CANDIDATE4 "|PARTY 4|   <CONGRESS>  |4|"
#define NOTA "|              NOTA     |5|"

using namespace std;

int vote1 = 0;
int vote2 = 0;
int vote3 = 0;
int vote4 = 0;
int nota_vote = 0;
int choice;

void vote_cast()
{
    cout << CANDIDATE1 << endl;
    cout << CANDIDATE2 << endl;
    cout << CANDIDATE3 << endl;
    cout << CANDIDATE4 << endl;
    cout << NOTA << endl;

    cout << "Enter your choice";
    cin >> choice;

    switch (choice)
    {
    case 1:
        vote1++;
        break;
    case 2:
        vote2++;
        break;
    case 3:
        vote3++;
        break;
    case 4:
        vote4++;
        break;
    case 5:
        nota_vote++;
        break;
    default:
        cout << "Error" << endl;
    }
    cout << "Thanks for the vote" << endl;
}

void vote_count()
{
    cout << CANDIDATE1 << vote1 << endl;
    cout << CANDIDATE2 << vote2 << endl;
    cout << CANDIDATE3 << vote3 << endl;
    cout << CANDIDATE4 << vote4 << endl;
    cout << NOTA << nota_vote << endl;
}

void lead_candidate()
{
    cout << "Leading candidate";
    if (vote1 > vote2 && vote1 > vote3 && vote1 > vote4)
        cout << CANDIDATE1 << "is leading" << endl;
    else if (vote2 > vote1 && vote2 > vote3 && vote2 > vote4)
        cout << CANDIDATE2 << "is leading" << endl;
    else if (vote3 > vote1 && vote3 > vote2 && vote3 > vote4)
        cout << CANDIDATE3 << "is leading" << endl;
    else if (vote4 > vote1 && vote4 > vote3 && vote4 > vote3)
        cout << CANDIDATE4 << "is leading" << endl;
    else
        cout << "NOTA is high";
}
int main()
{
    int age;
    cout<<"Enter your age";
    cin>>age;
    if(age>=18){
        do
        {
        cout<<"Welcome to TN voting counter"<<endl;
        cout<<"1. vote cast"<<endl;
        cout<<"2. vote count"<<endl;
        cout<<"3. leading count"<<endl;
        cout<<"4. exit"<<endl;

        cout<<"Enter your choice"<<endl;
        cin>>choice;

        switch (choice)
        {
        case 1: vote_cast(); break;
        case 2: vote_count(); break;
        case 3: lead_candidate(); break;
        // default:cout<<"Error"<<endl; break;
        }
           
        } while (choice!=4);
        

    }
    else{
        cout<<"Your are not eligble for voting";
    }
}