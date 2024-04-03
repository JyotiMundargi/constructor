#include<iostream>
using namespace std;

class date
{
    private: int d,month,year;
    public:

    date();
    void displaydate()
    {
        cout<<"enter the date:";
        cin>>d;
        cout<<"enter the month:";
        cin>>month;
        cout<<"enter the year:";
        cin>>>year;
    }
};
date::date()
{
    d=0;
    month=0
    year=0;
}
int main()
{
    date mydate;
    mydate.displaydate();

    return 0;
};