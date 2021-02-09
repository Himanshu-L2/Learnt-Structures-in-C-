#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

struct student{
    int rno;
    char name[15];
    int sub1;
    int sub2;
};

int main()
{
    int mean1 , mean2 ,mean3 ;
    student s1 ,s2 ,s3;
    cout<<"Student 1"<<endl;
    cout<<"\tRoll no.:";
    cin>>s1.rno;
    cout<<"\n\tName : ";
    cin>>s1.name;
    cout<<"\n\tScience marks(Out of 20) : ";
    cin>>s1.sub1;
    cout<<"\n\tMaths marks(Out of 20) : ";
    cin>>s1.sub2;
    cout<<"Student 2"<<endl;
    cout<<"\tRoll no. : ";;
    cin>>s2.rno;
    cout<<"\n\tName : ";
    cin>>s2.name;
    cout<<"\n\tScience marks(Out of 20) : ";
    cin>>s2.sub1;
    cout<<"\n\tMaths marks(Out of 20) : ";
    cin>>s2.sub2;
    cout<<"Student 3"<<endl;
    cout<<"\tRoll no. : ";;
    cin>>s3.rno;
    cout<<"\n\tName : ";
    cin>>s3.name;
    cout<<"\n\tScience marks(Out of 20) : ";
    cin>>s3.sub1;
    cout<<"\n\tMaths marks(Out of 20) : ";
    cin>>s3.sub2;
    
    mean1 = (s1.sub1+s1.sub2)/2;
    mean2 = (s2.sub1+s2.sub2)/2;
    mean3 = (s3.sub1+s3.sub2)/2;
    
    if (mean1 > mean2 ){
        if (mean1 > mean3) 
        cout<<s1.name<<" scored the most .. ";
        else
        cout<<s3.name<<" scored the most .. ";
        
    
    }
    else{
        if ( mean2 > mean3)
        cout<<s2.name<<" scored the most ..";
        else
        cout<<s3.name<<" scored the most ..";
    }
    cout<<"\nA facebook like for U...";
    getch();
    
    return 0;
}
