#include <iostream>
using namespace std;
int main()
{
    int n,a;
    int b=0;
    cout<<"Masukkan N = ";
    cin>>n;
    cout<<"Jumlah Faktor Bilangan dari "<<n<<" adalah ";
    for(a=n;a>0;a--){ 
        if(n%a==0){ 
            b++;
        }
    }
    cout<<b;
    cout<<endl;
    return 0;
}
