#include <iostream>
#include<time.h>
#include<string>
#include<vector>
#include<random>
#include<bits/stdc++.h>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */


using namespace std;

int main()
{
    srand (time(NULL));
    int i,j,x=1,k[9] = {0},y[20],z[20],a[3][3],n=1,b=0;
    int add = 0;
    vector <int> vec={0};
    vector <int> vic={1,2,3,4,5,6,7,8,9};
    vector <int> pc = {0};
    vector <int> pl = {0};
    vector <int> diag = {1,3,7,9};
    int diagsize = 4;
    
    int p,r = 0,choice;
    string name1= "A",name2 = "B";
    cout<<"WELCOME TO TIC-TAC-TOE";
    cout<<"\nDo you want to play against player or against PC?\nPress 1 for v/s player\nPress 2 for v/s PC(DUMB)\nPress 2 for v/s PC(SMART)";
    cin>>choice;
    choice = choice % 5;
    vector<int>::iterator new_end;
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
                    cin>>p;        //system("clear");
                }
                while(count(vec.begin(), vec.end(), p) != 0);
                
                if(p == 1 || p == 3 || p == 7 || p == 9)
                {
                    new_end = remove(diag.begin(), diag.end(), p);
                    diagsize--;
                }
                pl.push_back(p);
                vec.push_back(p);k[n]=p;
                
                new_end = remove(vic.begin(), vic.end(), p);
            }
            else
            {
                if(choice == 1)
                {
                    do{
                        cout<<endl<<name2<<" Please enter your choice:";
                        cin>>p;        //system("clear");
    
                    }
                    while(count(vec.begin(), vec.end(), p) != 0);
                    vec.push_back(p);k[n]=p;
                    }
                else
                if(choice == 2)
                {
                    int siz = vic.size() - vec.size() + 1;
                    int y = rand() % siz;
                    p = vic[y];
                    vec.push_back(p);k[n]=p;
                    new_end = remove(vic.begin(), vic.end(), p);
                    //system("clear");
                }
                else if(choice == 3)
                {
                    if(count(pc.begin(),pc.end(),1) == 1 && count(pc.begin(),pc.end(),3) == 1 && count(pl.begin(),pl.end(),2) == 0){k[n]=2;}else
                    if(count(pc.begin(),pc.end(),3) == 1 && count(pc.begin(),pc.end(),7) == 1 && count(pl.begin(),pl.end(),5) == 0){k[n]=5;}else
                    if(count(pc.begin(),pc.end(),7) == 1 && count(pc.begin(),pc.end(),9) == 1 && count(pl.begin(),pl.end(),8) == 0){k[n]=8;}else
                    if(count(pc.begin(),pc.end(),1) == 1 && count(pc.begin(),pc.end(),7) == 1 && count(pl.begin(),pl.end(),4) == 0){k[n]=4;}else
                    if(count(pc.begin(),pc.end(),9) == 1 && count(pc.begin(),pc.end(),3) == 1 && count(pl.begin(),pl.end(),6) == 0){k[n]=6;}else
                    if(count(pc.begin(),pc.end(),9) == 1 && count(pc.begin(),pc.end(),1) == 1 && count(pl.begin(),pl.end(),5) == 0){k[n]=5;}else
                    if(count(pc.begin(),pc.end(),1) == 1 && count(pc.begin(),pc.end(),4) == 1 && count(pl.begin(),pl.end(),7) == 0){k[n]=7;}else
                    if(count(pc.begin(),pc.end(),7) == 1 && count(pc.begin(),pc.end(),8) == 1 && count(pl.begin(),pl.end(),9) == 0){k[n]=9;}else
                    if(count(pc.begin(),pc.end(),9) == 1 && count(pc.begin(),pc.end(),6) == 1 && count(pl.begin(),pl.end(),3) == 0){k[n]=3;}else
                    if(count(pc.begin(),pc.end(),2) == 1 && count(pc.begin(),pc.end(),3) == 1 && count(pl.begin(),pl.end(),1) == 0){k[n]=1;}else
                    if(count(pc.begin(),pc.end(),4) == 1 && count(pc.begin(),pc.end(),6) == 1 && count(pl.begin(),pl.end(),5) == 0){k[n]=5;}else
                    if(count(pc.begin(),pc.end(),5) == 1 && count(pc.begin(),pc.end(),4) == 1 && count(pl.begin(),pl.end(),6) == 0){k[n]=6;}else
                    if(count(pc.begin(),pc.end(),8) == 1 && count(pc.begin(),pc.end(),7) == 1 && count(pl.begin(),pl.end(),9) == 0){k[n]=9;}else
                    if(count(pc.begin(),pc.end(),2) == 1 && count(pc.begin(),pc.end(),5) == 1 && count(pl.begin(),pl.end(),8) == 0){k[n]=8;}else
                    if(count(pc.begin(),pc.end(),1) == 1 && count(pc.begin(),pc.end(),2) == 1 && count(pl.begin(),pl.end(),3) == 0){k[n]=3;}else
                    if(count(pc.begin(),pc.end(),5) == 1 && count(pc.begin(),pc.end(),7) == 1 && count(pl.begin(),pl.end(),3) == 0){k[n]=3;}else
                    if(count(pc.begin(),pc.end(),1) == 1 && count(pc.begin(),pc.end(),5) == 1 && count(pl.begin(),pl.end(),9) == 0){k[n]=9;}else
                    if(count(pc.begin(),pc.end(),4) == 1 && count(pc.begin(),pc.end(),7) == 1 && count(pl.begin(),pl.end(),1) == 0){k[n]=1;}else
                    if(count(pc.begin(),pc.end(),5) == 1 && count(pc.begin(),pc.end(),9) == 1 && count(pl.begin(),pl.end(),1) == 0){k[n]=1;}else
                    if(count(pc.begin(),pc.end(),5) == 1 && count(pc.begin(),pc.end(),3) == 1 && count(pl.begin(),pl.end(),7) == 0){k[n]=7;}else
                    if(count(pc.begin(),pc.end(),8) == 1 && count(pc.begin(),pc.end(),9) == 1 && count(pl.begin(),pl.end(),7) == 0){k[n]=7;}else
                    if(count(pc.begin(),pc.end(),8) == 1 && count(pc.begin(),pc.end(),2) == 1 && count(pl.begin(),pl.end(),5) == 0){k[n]=5;}else
                    if(count(pc.begin(),pc.end(),6) == 1 && count(pc.begin(),pc.end(),5) == 1 && count(pl.begin(),pl.end(),4) == 0){k[n]=4;}else
                    if(count(pc.begin(),pc.end(),8) == 1 && count(pc.begin(),pc.end(),5) == 1 && count(pl.begin(),pl.end(),2) == 0){k[n]=2;}else
                    {
                        int y = rand() % diagsize;
                        p = diag[y];
                        diagsize--;
                        cout<<"  Y"<<y<<"  P"<<y;
                        pc.push_back(p);
                        for(i = 0;i<pc.size();i++)
                        {
                            cout<<pc[i];
                        }
                        vec.push_back(p);k[n]=p;
                        new_end = remove(vic.begin(), vic.end(), p);
                        new_end = remove(diag.begin(), diag.end(), p);
                    }
                }
                else if(choice == 4)
                {cout<<"HI";
                    if(count(pc.begin(),pc.end(),1) == 1 && count(pc.begin(),pc.end(),3) == 1 && count(pl.begin(),pl.end(),2) == 0){k[n]=2;}else
                    if(count(pc.begin(),pc.end(),3) == 1 && count(pc.begin(),pc.end(),7) == 1 && count(pl.begin(),pl.end(),5) == 0){k[n]=5;}else
                    if(count(pc.begin(),pc.end(),7) == 1 && count(pc.begin(),pc.end(),9) == 1 && count(pl.begin(),pl.end(),8) == 0){k[n]=8;}else
                    if(count(pc.begin(),pc.end(),1) == 1 && count(pc.begin(),pc.end(),7) == 1 && count(pl.begin(),pl.end(),4) == 0){k[n]=4;}else
                    if(count(pc.begin(),pc.end(),9) == 1 && count(pc.begin(),pc.end(),3) == 1 && count(pl.begin(),pl.end(),6) == 0){k[n]=6;}else
                    if(count(pc.begin(),pc.end(),9) == 1 && count(pc.begin(),pc.end(),1) == 1 && count(pl.begin(),pl.end(),5) == 0){k[n]=5;}else
                    if(count(pc.begin(),pc.end(),1) == 1 && count(pc.begin(),pc.end(),4) == 1 && count(pl.begin(),pl.end(),7) == 0){k[n]=7;}else
                    if(count(pc.begin(),pc.end(),7) == 1 && count(pc.begin(),pc.end(),8) == 1 && count(pl.begin(),pl.end(),9) == 0){k[n]=9;}else
                    if(count(pc.begin(),pc.end(),9) == 1 && count(pc.begin(),pc.end(),6) == 1 && count(pl.begin(),pl.end(),3) == 0){k[n]=3;}else
                    if(count(pc.begin(),pc.end(),2) == 1 && count(pc.begin(),pc.end(),3) == 1 && count(pl.begin(),pl.end(),1) == 0){k[n]=1;}else
                    if(count(pc.begin(),pc.end(),4) == 1 && count(pc.begin(),pc.end(),6) == 1 && count(pl.begin(),pl.end(),5) == 0){k[n]=5;}else
                    if(count(pc.begin(),pc.end(),5) == 1 && count(pc.begin(),pc.end(),4) == 1 && count(pl.begin(),pl.end(),6) == 0){k[n]=6;}else
                    if(count(pc.begin(),pc.end(),8) == 1 && count(pc.begin(),pc.end(),7) == 1 && count(pl.begin(),pl.end(),9) == 0){k[n]=9;}else
                    if(count(pc.begin(),pc.end(),2) == 1 && count(pc.begin(),pc.end(),5) == 1 && count(pl.begin(),pl.end(),8) == 0){k[n]=8;}else
                    if(count(pc.begin(),pc.end(),1) == 1 && count(pc.begin(),pc.end(),2) == 1 && count(pl.begin(),pl.end(),3) == 0){k[n]=3;}else
                    if(count(pc.begin(),pc.end(),5) == 1 && count(pc.begin(),pc.end(),7) == 1 && count(pl.begin(),pl.end(),3) == 0){k[n]=3;}else
                    if(count(pc.begin(),pc.end(),1) == 1 && count(pc.begin(),pc.end(),5) == 1 && count(pl.begin(),pl.end(),9) == 0){k[n]=9;}else
                    if(count(pc.begin(),pc.end(),4) == 1 && count(pc.begin(),pc.end(),7) == 1 && count(pl.begin(),pl.end(),1) == 0){k[n]=1;}else
                    if(count(pc.begin(),pc.end(),5) == 1 && count(pc.begin(),pc.end(),9) == 1 && count(pl.begin(),pl.end(),1) == 0){k[n]=1;}else
                    if(count(pc.begin(),pc.end(),5) == 1 && count(pc.begin(),pc.end(),3) == 1 && count(pl.begin(),pl.end(),7) == 0){k[n]=7;}else
                    if(count(pc.begin(),pc.end(),8) == 1 && count(pc.begin(),pc.end(),9) == 1 && count(pl.begin(),pl.end(),7) == 0){k[n]=7;}else
                    if(count(pc.begin(),pc.end(),8) == 1 && count(pc.begin(),pc.end(),2) == 1 && count(pl.begin(),pl.end(),5) == 0){k[n]=5;}else
                    if(count(pc.begin(),pc.end(),6) == 1 && count(pc.begin(),pc.end(),5) == 1 && count(pl.begin(),pl.end(),4) == 0){k[n]=4;}else
                    if(count(pc.begin(),pc.end(),8) == 1 && count(pc.begin(),pc.end(),5) == 1 && count(pl.begin(),pl.end(),2) == 0){k[n]=2;}else
                    if(count(pl.begin(),pl.end(),1) == 1 && count(pl.begin(),pl.end(),3) == 1 && count(pc.begin(),pc.end(),2) == 0){k[n]=2;}else//
                    if(count(pl.begin(),pl.end(),3) == 1 && count(pl.begin(),pl.end(),7) == 1 && count(pc.begin(),pc.end(),5) == 0){k[n]=5;}else
                    if(count(pl.begin(),pl.end(),7) == 1 && count(pl.begin(),pl.end(),9) == 1 && count(pc.begin(),pc.end(),8) == 0){k[n]=8;cout<<"PL";}else
                    if(count(pl.begin(),pl.end(),1) == 1 && count(pl.begin(),pl.end(),7) == 1 && count(pc.begin(),pc.end(),4) == 0){k[n]=4;}else
                    if(count(pl.begin(),pl.end(),9) == 1 && count(pl.begin(),pl.end(),3) == 1 && count(pc.begin(),pc.end(),6) == 0){k[n]=6;}else
                    if(count(pl.begin(),pl.end(),9) == 1 && count(pl.begin(),pl.end(),1) == 1 && count(pc.begin(),pc.end(),5) == 0){k[n]=5;}else
                    if(count(pl.begin(),pl.end(),1) == 1 && count(pl.begin(),pl.end(),4) == 1 && count(pc.begin(),pc.end(),7) == 0){k[n]=7;}else
                    if(count(pl.begin(),pl.end(),7) == 1 && count(pl.begin(),pl.end(),8) == 1 && count(pc.begin(),pc.end(),9) == 0){k[n]=9;}else
                    if(count(pl.begin(),pl.end(),9) == 1 && count(pl.begin(),pl.end(),6) == 1 && count(pc.begin(),pc.end(),3) == 0){k[n]=3;}else
                    if(count(pl.begin(),pl.end(),2) == 1 && count(pl.begin(),pl.end(),3) == 1 && count(pc.begin(),pc.end(),1) == 0){k[n]=1;}else
                    if(count(pl.begin(),pl.end(),4) == 1 && count(pl.begin(),pl.end(),6) == 1 && count(pc.begin(),pc.end(),5) == 0){k[n]=5;}else
                    if(count(pl.begin(),pl.end(),5) == 1 && count(pl.begin(),pl.end(),4) == 1 && count(pc.begin(),pc.end(),6) == 0){k[n]=6;}else
                    if(count(pl.begin(),pl.end(),8) == 1 && count(pl.begin(),pl.end(),7) == 1 && count(pc.begin(),pc.end(),9) == 0){k[n]=9;}else
                    if(count(pl.begin(),pl.end(),2) == 1 && count(pl.begin(),pl.end(),5) == 1 && count(pc.begin(),pc.end(),8) == 0){k[n]=8;}else
                    if(count(pl.begin(),pl.end(),1) == 1 && count(pl.begin(),pl.end(),2) == 1 && count(pc.begin(),pc.end(),3) == 0){k[n]=3;}else
                    if(count(pl.begin(),pl.end(),5) == 1 && count(pl.begin(),pl.end(),7) == 1 && count(pc.begin(),pc.end(),3) == 0){k[n]=3;}else
                    if(count(pl.begin(),pl.end(),1) == 1 && count(pl.begin(),pl.end(),5) == 1 && count(pc.begin(),pc.end(),9) == 0){k[n]=9;}else
                    if(count(pl.begin(),pl.end(),4) == 1 && count(pl.begin(),pl.end(),7) == 1 && count(pc.begin(),pc.end(),1) == 0){k[n]=1;}else
                    if(count(pl.begin(),pl.end(),5) == 1 && count(pl.begin(),pl.end(),9) == 1 && count(pc.begin(),pc.end(),1) == 0){k[n]=1;}else
                    if(count(pl.begin(),pl.end(),5) == 1 && count(pl.begin(),pl.end(),3) == 1 && count(pc.begin(),pc.end(),7) == 0){k[n]=7;}else
                    if(count(pl.begin(),pl.end(),8) == 1 && count(pl.begin(),pl.end(),9) == 1 && count(pc.begin(),pc.end(),7) == 0){k[n]=7;}else
                    if(count(pl.begin(),pl.end(),8) == 1 && count(pl.begin(),pl.end(),2) == 1 && count(pc.begin(),pc.end(),5) == 0){k[n]=5;}else
                    if(count(pl.begin(),pl.end(),6) == 1 && count(pl.begin(),pl.end(),5) == 1 && count(pc.begin(),pc.end(),4) == 0){k[n]=4;}else
                    if(count(pl.begin(),pl.end(),8) == 1 && count(pl.begin(),pl.end(),5) == 1 && count(pc.begin(),pc.end(),2) == 0){k[n]=2;}else
                    
                    {
                        int y = rand() % diagsize;
                        p = diag[y];
                        diagsize--;
                        cout<<"  Y"<<y<<"  P"<<p<<"  ";
                        //pc.push_back(p);
                        for(i = 0;i<pc.size();i++)
                        {
                            cout<<pc[i];
                        }
                        vec.push_back(p);k[n]=p;
                        new_end = remove(vic.begin(), vic.end(), p);
                        new_end = remove(diag.begin(), diag.end(), p);
                    }pc.push_back(k[n]);
                    cout<<"D";
                    for(i = 0;i<pc.size();i++)
                        {
                            cout<<pc[i];
                        }
                    }
                    //system("clear");
                
            }cout<<"  P"<<k[n];
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
        //system("clear");
        for(i=0;i<3;i++)
        {  
            cout<<endl;
            for(j=0;j<3;j++)
            {
                
                if((y[n]==i && z[n]==j && x%2==0) || a[i][j]==1)
                {
                    a[i][j]=1;
                }
            else
                if((y[n]==i && z[n]==j)|| a[i][j]==2)
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
        if((a[0][0]==1&&a[0][1]==1&&a[0][2]==1)||(a[0][0]==1&&a[1][0]==1&&a[2][0]==1)||
        (a[0][2]==1&&a[1][2]==1&&a[2][2]==1)||(a[2][0]==1&&a[2][1]==1&&a[2][2]==1)||
        (a[0][0]==1&&a[1][1]==1&&a[2][2]==1)||(a[0][2]==1&&a[1][1]==1&&a[2][0]==1)||
        (a[1][0]==1&&a[1][1]==1&&a[1][2]==1)||(a[0][1]==1&&a[1][1]==1&&a[2][1 ]==1))
        {
            cout<<endl<<name1<<" WINS  ";break;
            
        }
        if((a[0][0]==2&&a[0][1]==2&&a[0][2]==2)||(a[0][0]==2&&a[1][0]==2&&a[2][0]==2)||
        (a[0][2]==2&&a[1][2]==2&&a[2][2]==2)||(a[2][0]==2&&a[2][1]==2&&a[2][2]==2)||
        (a[0][0]==2&&a[1][1]==2&&a[2][2]==2)||(a[0][2]==2&&a[1][1]==2&&a[2][0]==2)||
        (a[1][0]==2&&a[1][1]==2&&a[1][2]==2)||(a[0][1]==2&&a[1][1]==2&&a[2][1]==2))
        {
            cout<<endl<<name2<<" WINS ";break;
        }cout<<n;
        n+=1;b+=1;
    }while(n<10)  ; 
    return 0;
}
