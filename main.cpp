#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int pembilang,penyebut,hasil;
    cout<<"program mengubah bilangan pecahan ke bilangan bulat"<<endl;
    cout<<endl<<endl;

    cout<<"masukan pembilang : "; cin>>pembilang;
    cout<<"masukan penyebut :  "; cin>>penyebut;

    hasil=pembilang/penyebut;

    cout<<"Hasil bilangan bulat adalah "<<hasil<<endl;

    getch();
    return 0;
}
