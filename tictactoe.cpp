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
    int i,j,x=1,k[9] = {0},y[20],z[20],n=1,b=0;
    string a[3][3];
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
    cout<<"\nDo you want to play against player or against PC?\nPress 1 for v/s player\nPress 2 for v/s PC(DUMB)\nPress 3 for v/s PC(SMART) \nPress 4 for v/s PC(INTELLIGENT)";
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
                    cin>>p;        
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
                if(choice == 1 || choice == 0)
                {
                    do{
                        cout<<endl<<name2<<" Please enter your choice:";
                        cin>>p;        
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
                        vec.push_back(p);k[n]=p;
                        new_end = remove(vic.begin(), vic.end(), p);
                        new_end = remove(diag.begin(), diag.end(), p);
                    }
                }
                else if(choice == 4)
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
                    if(count(pl.begin(),pl.end(),1) == 1 && count(pl.begin(),pl.end(),3) == 1 && count(pc.begin(),pc.end(),2) == 0){k[n]=2;}else//
                    if(count(pl.begin(),pl.end(),3) == 1 && count(pl.begin(),pl.end(),7) == 1 && count(pc.begin(),pc.end(),5) == 0){k[n]=5;}else
                    if(count(pl.begin(),pl.end(),7) == 1 && count(pl.begin(),pl.end(),9) == 1 && count(pc.begin(),pc.end(),8) == 0){k[n]=8;}else
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
                        vec.push_back(p);k[n]=p;
                        new_end = remove(vic.begin(), vic.end(), p);
                        new_end = remove(diag.begin(), diag.end(), p);
                    }
                    pc.push_back(k[n]);
                    for(i = 0;i<pc.size();i++)
                        {
                            cout<<pc[i];
                        }
                    }
                    system("clear");
                
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
        system("clear");
        for(i=0;i<3;i++)
        {  
            cout<<endl;
            for(j=0;j<3;j++)
            {
                if((y[n]==i && z[n]==j && x%2==0) || a[i][j]=="[o]")
                {
                    a[i][j]="[o]";
                }
            else
                if((y[n]==i && z[n]==j)|| a[i][j]=="[x]")
                {
                    a[i][j]="[x]";
                }else
                {
                    a[i][j]="[ ]";
                }
                cout<<a[i][j];
            }
        }
        

        if((a[0][0]=="[o]"&&a[0][1]=="[o]"&&a[0][2]=="[o]")||(a[0][0]=="[o]"&&a[1][0]=="[o]"&&a[2][0]=="[o]")||
        (a[0][2]=="[o]"&&a[1][2]=="[o]"&&a[2][2]=="[o]")||(a[2][0]=="[o]"&&a[2][1]=="[o]"&&a[2][2]=="[o]")||
        (a[0][0]=="[o]"&&a[1][1]=="[o]"&&a[2][2]=="[o]")||(a[0][2]=="[o]"&&a[1][1]=="[o]"&&a[2][0]=="[o]")||
        (a[1][0]=="[o]"&&a[1][1]=="[o]"&&a[1][2]=="[o]")||(a[0][1]=="[o]"&&a[1][1]=="[o]"&&a[2][1]=="[o]"))
        {
            if(choice==1)
        	{
                cout<<endl<<name1<<" WINS \n";return 0;
        	}else
        	{
        		cout<<endl<<"You WON! \n";return 0;
        	}
        }
        if((a[0][0]=="[x]"&&a[0][1]=="[x]"&&a[0][2]=="[x]")||(a[0][0]=="[x]"&&a[1][0]=="[x]"&&a[2][0]=="[x]")||
        (a[0][2]=="[x]"&&a[1][2]=="[x]"&&a[2][2]=="[x]")||(a[2][0]=="[x]"&&a[2][1]=="[x]"&&a[2][2]=="[x]")||
        (a[0][0]=="[x]"&&a[1][1]=="[x]"&&a[2][2]=="[x]")||(a[0][2]=="[x]"&&a[1][1]=="[x]"&&a[2][0]=="[x]")||
        (a[1][0]=="[x]"&&a[1][1]=="[x]"&&a[1][2]=="[x]")||(a[0][1]=="[x]"&&a[1][1]=="[x]"&&a[2][1]=="[x]"))
        {
    	if(choice==1)
    	{
            cout<<endl<<name2<<" WINS \n";return 0;
    	}else
    	{
    		cout<<endl<<"PC"<<" WINS \n";return 0;
    	}
        }
        n+=1;b+=1;
    }while(n<10)  ; 
    cout<<"\nGame tied!\n";
    return 0;
}
