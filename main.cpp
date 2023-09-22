#include<iostream>
#include<cstdlib>
#include<time.h>
#include<windows.h>
using namespace std;
void result(int a , int b,int &pp ,int &cp)
{
    if(a==1)
    {
        if(a==1 && b==1)
        {
            cout<<"you choose ROCK and computer choose ROCK"<<endl;
            cout<<"\t\t\t\tties"<<endl;
        }
        if(a==1 && b==2)
        {
            cout<<"you choose ROCK and computer choose PAPER"<<endl;
            cout<<"\t\t\t\tYou Lost"<<endl;
            cp++;
        }
        if(a==1 && b==3)
        {
            cout<<"you choose ROCK and computer choose SCISSORS"<<endl;
            cout<<"\t\t\t\tHURRAY! YOU WON"<<endl;
            pp++;
        }
    }
    if(a==2){
        if(a==2 && b==1)
        {
            cout<<"you choose PAPER and computer choose ROCK"<<endl;
            cout<<"\t\t\t\tHURRAY! YOU WON"<<endl;
            pp++;
        }
        if(a==2 && b==2)
        {
            cout<<"you choose PAPER and computer choose PAPER"<<endl;
            cout<<"\t\t\t\tTie"<<endl;

        }
        if(a==2 && b==3)
        {
            cout<<"you choose PAPER and computer choose SCISSORS"<<endl;
            cout<<"\t\t\t\tLost"<<endl;
            cp++;
        }
    }
    if(a==3){
        if(a==3 && b==1)
        {
            cout<<"you choose SCISSORS and computer choose ROCK"<<endl;
            cout<<"\t\t\t\tLOSE"<<endl;
            cp++;
        }
        if(a==3 && b==2)
        {
            cout<<"you choose SCISSORS and computer choose PAPER"<<endl;
            cout<<"\t\t\t\tHURRAY! YOU WON"<<endl;
            pp++;
        }
        if(a==3 && b==3)
        {
            cout<<"you choose SCISSORS and computer choose SCISSORS"<<endl;
            cout<<"\t\t\t\tties"<<endl;
        }
    }
}
void loading2(){
    cout<<"\n\n\n Loading";
    char x=219;
    for(int i=0;i<20;i++){
        Sleep(100);
        cout<<x;
    }
    cout<<endl;
}
int main()
{
    srand(time(NULL));
    int player;
    int comp;
    int pp=0;
    int cp=0;
    cout<<"\n\t\t\t\tROCK PAPER SCISSORS \n\n\n";
    cout<<"\t\t\t\tso get ready\n\n\n";
    cout<<"---------------------------------------------------------------------"<<endl;
    loading2();
    int round=-1;
    cout<<"how much round you want to play "<<endl;
    cin>>round;
    for(int i=0;i<round;i++){
        cout<<"1=ROCK \n2=PAPER \n3=SCISSORS "<<endl;
        cout<<"enter your options\n";
        cin>>player;
        comp=(rand()%3)+1;
        result(player,comp,pp,cp);
    }
    cout<<"So after "<<round<<" round you score "<<pp<<" and computer score "<<cp<<endl;
    if(pp>cp){
        cout<<"you won"<<endl;
    }
    else{
        cout<<"you lose"<<endl;
    }
  return 0;
}