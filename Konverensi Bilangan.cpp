#include<iostream>
using namespace std;
int main()
{
	cout<< " ===================================== \n";
    cout << "|	KALKULATOR SEDERHANA 	     | \n";
    cout << "| 	Reza Kurnia Setiawan 	     | \n";
    cout << " ===================================== \n";
        long desimal, pembagi=10737423498, bit;
        cout<<"Nilai Desimal : ";
        cin>>desimal;

                cout<<"Hexadesimal = "<<hex<<desimal<<endl;
                cout<<"Oktal       = "<<oct<<desimal<<endl;
                cout<<"Biner       = ";
        while(pembagi>desimal) pembagi/=2;
        do{
                bit=desimal/pembagi;
                cout<<bit;
                desimal=desimal%pembagi;
                pembagi/=2;
        }
        while(pembagi>=1);
        cout<<"\n";

        return 0;    
}
