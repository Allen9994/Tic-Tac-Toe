#include <iostream>
#include<time.h>
#include<string>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,x=1,k[9] = {0},y[20],z[20],a[3][3],n=1,b=0;
    vector <int> vec={0};
    int p;
    string name1= "A",name2 = "B";
    cout<<"WELCOME TO TIC-TAC-TOE";
    cout<<"\nENTER YOUR NAME\nPLAYER1:";
    getline(cin,name1);
    cout<<"\nPLAYER2:";
    getline(cin,name2);
    if(name1 == ""){name1 = "A";}if(name2 == ""){name2 = "B";}
cout<<"[ ][ ][ ]\n[ ][ ][ ]\n[ ][ ][ ]";
    do
    {
        do
        {   
            if(b%2==0)
            {
                do{
                cout<<endl<<name1<<" Please enter your choice:";
                cin>>p;        system("clear");

                }
                while(count(vec.begin(), vec.end(), p) != 0);
                vec.push_back(p);k[n]=p;
            }
            else
            {
                do{
                cout<<endl<<name2<<" Please enter your choice:";
                cin>>p;        system("clear");

                }
                while(count(vec.begin(), vec.end(), p) != 0);
                vec.push_back(p);k[n]=p;
            }
            if(k[n]>6)
            {
                k[n]-=7;
            }else
            if(k[n]>3)
            {
                k[n]-=1;
            }
            else
                k[n]+=5;
            }
        while(k[n]>8);
        cout<<endl;
        x+=1;
        y[n]=k[n]/3;
        z[n]=k[n]%3;
        for(i=0;i<3;i++)
        {  
            cout<<endl;
            for(j=0;j<3;j++)
            {
                
                if(y[n]==i && z[n]==j && x%2==0 || a[i][j]==1)
                {
                    a[i][j]=1;
                }
            else
                if(y[n]==i&&z[n]==j|| a[i][j]==2)
                {
                    a[i][j]=2;
                }else
                {
                    a[i][j]=9;
                }
            }
        }
        for(i=0;i<3;i++)
        {
            cout<<endl;
            for(j=0;j<3;j++)
            {
                if(a[i][j]==9)
                {
                    cout<<"[ ]";
                }
                else
                {
                   if(a[i][j]==1)
                   {
                        cout<<"[o]";
                   }
                   else
                    cout<<"[x]";
                }
            }
        }
        if(a[0][0]==1&&a[0][1]==1&&a[0][2]==1||a[0][0]==1&&a[1][0]==1&&a[2][0]==1||
        a[0][2]==1&&a[1][2]==1&&a[2][2]==1||a[2][0]==1&&a[2][1]==1&&a[2][2]==1||
        a[0][0]==1&&a[1][1]==1&&a[2][2]==1||a[0][2]==1&&a[1][1]==1&&a[2][0]==1||
        a[1][0]==1&&a[1][1]==1&&a[1][2]==1||a[0][1]==1&&a[1][1]==1&&a[2][1 ]==1)
        {
            cout<<endl<<name1<<" WINS  ";break;
            
        }
        if(a[0][0]==2&&a[0][1]==2&&a[0][2]==2||a[0][0]==2&&a[1][0]==2&&a[2][0]==2||
        a[0][2]==2&&a[1][2]==2&&a[2][2]==2||a[2][0]==2&&a[2][1]==2&&a[2][2]==2||
        a[0][0]==2&&a[1][1]==2&&a[2][2]==2||a[0][2]==2&&a[1][1]==2&&a[2][0]==2||
        a[1][0]==2&&a[1][1]==2&&a[1][2]==2||a[0][1]==2&&a[1][1]==2&&a[2][1]==2)
        {
            cout<<endl<<name2<<" WINS ";break;
        }
        n+=1;b+=1;
    }while(n<10)  ; 
    return 0;
}
