#include<iostream>
using namespace std;
class Rectangle
{
    public:
    int length;
      int breadth;

    Rectangle()
    {
        length=10;
        breadth=20;
        cout<<"the length of wall is: "<<length<<endl;
         cout<<"the braedth of wall is: "<<breadth<<endl;
    }

    int calculateArea(){
     return length*breadth;
    }
};

int main()
{
   Rectangle rec;
   cout<<"the area of rectangle is: "<<rec.calculateArea();
    return 0;

}
