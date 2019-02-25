#include<iostream>
#include<conio.h>
using namespace std;

main()
{
    int i, j, m, n;
    
    cout<<"PROGRAM UNTUK MENAMPILKAN ANGKA 1-N SEBANYAK M BARIS\n\n";
    cout<<"Masukkan N: ";
    cin>>n;
    cout<<"Masukkan M: ";
    cin>>m;
    
    if(m>0&&n>0)
    {
       for(i=0;i<m;i++)
       {
          for(j=0;j<n;j++)
          {
             cout<<j+1<<' ';           
          }            
          cout<<endl;
       }
    }
    
    else
    {
        cout<<"ERROR";
    }   
    
    getche();
    return 0;  
}
