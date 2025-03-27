#include<iostream>
using namespace std;
int main()
{
    float pencil,pen,eraser,sum;
    cout<<"Enter the price of pencil: ";
    cin>>pencil;
    cout<<"Enter the price of pen: ";
    cin>>pen;
    cout<<"Enter the price of eraser: "<<endl;
    cin>>eraser<<endl;
    sum=pencil+pen+eraser<<endl;
    cout<<"The total price of the stationery items is: "<<sum+(sum*0.18)<<endl;
    // gst=(sum*18)/100<<endl<<endl;
    // cout<<"total value with gst"<<sum+gst<<endl;
    return 0;
}