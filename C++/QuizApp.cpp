#include <iostream>
#include <string>
using namespace std;
int main(){
    int arr[4];
    for(int i=0;i<8;i++){
        arr[i] = i+1;
    }
    typedef struct options
    {
        string q;
        string o1;
        string o2;
        string o3;
    }op;
    op qu1;
    qu1.q = "What is the most basic element in Organic Compounds";
    qu1.o1="Carbon";
    qu1.o2="N";
    qu1.o3="O";
    op qu2;
    qu2.q = "What is the Power of 1 Kw";
    qu2.o1="1000 W";
    qu2.o2="10 W";
    qu2.o3="100 W";
    op qu3;
    qu3.q = "What is the full form of AIS";
    qu3.o1="Air Insulated Transfomer";
    qu3.o2="Aerated Insulation Transformer";
    qu3.o3="Aerayed Supply Transformer";
    op qu4;
    qu4.q = "Whcih software is used for real-time implementation of Programmable Hardware ?";
    qu4.o1="CODESYS";
    qu4.o2="MATLAB";
    qu4.o3="CATIA";
    int ie=0;
    int ix=0;
    while (ie<4)
    {
        int qno;
        int i=0;
        cout<<"Enter Question NUmber\t";
        cin>>qno;
        if (qno==1)
        {
            int ansno;
            cout<<qu1.q<<endl;
            cout<<qu1.o1<<endl;
            cout<<qu1.o2<<endl;
            cout<<qu1.o3<<endl;
            cout<<"Enter Option Number:\t";
            cin>>ansno;
            if (ansno==1)
            {
                i=i+1;
            }
            else if (ansno != 1)
            {
                i=i-1;
            }
        }
        if (qno==2)
        {
            int ansno;
            cout<<qu2.q<<endl;
            cout<<qu2.o1<<endl;
            cout<<qu2.o2<<endl;
            cout<<qu2.o3<<endl;
            cout<<"Enter Option Number:\t";
            cin>>ansno;
            if (ansno==1)
            {
                i=i+1;
            }
            else if (ansno != 1)
            {
                i=i-1;
            }
        }
        if (qno==3)
        {
            int ansno;
            cout<<qu3.q<<endl;
            cout<<qu3.o1<<endl;
            cout<<qu3.o2<<endl;
            cout<<qu3.o3<<endl;
            cout<<"Enter Option Number:\t";
            cin>>ansno;
            if (ansno==1)
            {
                i=i+1;
            }
            else if (ansno != 1)
            {
                i=i-1;
            }
        }
        if (qno==4)
        {
            int ansno;
            cout<<qu4.q<<endl;
            cout<<qu4.o1<<endl;
            cout<<qu4.o2<<endl;
            cout<<qu4.o3<<endl;
            cout<<"Enter Option Number:\t";
            cin>>ansno;
            if (ansno==1)
            {
                i=i+1;
            }
            else if (ansno != 1)
            {
                i=i-1;
            }
        }
        
        
        ie++;
        if (i==1){
            ++ix;
        }
        else if (i==-1)
        {
            --ix;
        }
        cout<<"Your Current Score is "<<ix<<endl;
        
    }
    system("pause>0");
    return 0;
}
