#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Car
{
private:
    int carNu;
    char carName[30];
    float carIssue_date;
public:
    void setcar_Data()
    {
        cout<<endl<<"\n\t\"ENTER THE USER DATA\"\n";
        fflush(stdin);
        cout<<"\nPlease Input Your Car Name: ";
        cin.get(carName,30);
        cout<<"\nPlease Input Your Car Number And Issue Date: ";
        cin>>carNu>>carIssue_date;
    }
    void showcar_data()
    {
        cout<<"\n\n\tENTERED USER DATA IS ON YOUR SCREEN: \n\n";
        cout<<"CAR_NUMBER: "<<carNu<<"   "<<"CAR_NAME: "<<carName<<"  "<<"CAR_ISSUE_DATE: "<<carIssue_date;
    }
};
class User:public Car
{
private:
    int Id_nu;
public:
    void Setid()
    {
        cout<<"\nEnter Your Id Number: ";
        cin>>Id_nu;
    }
    void show_Data()
    {

        setcar_Data();
        Setid();
        showcar_data();
        cout<<"  ID:"<<" "<<Id_nu;
    }
};
int main()
{
    User U1;
    U1.show_Data();
    getch();
}
