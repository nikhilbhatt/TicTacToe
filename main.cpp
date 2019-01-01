#include <bits/stdc++.h>
using namespace std;
void display();
void turn(int);
int gameover();
int playerturn(int);
void last();
char a[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}},m;
int row,coloumn,d=0;
int main()
{
    while(gameover())
     {
         last();
     }
    return 0;
}
void last()
{
         d++;
         if(d%2==1)
            {
                m='x';
                turn(1);
            }
         else
         {
                m='0';
                turn(2);
         }
}
void turn(int g)
{
    int t,y;
    cout<<"Player "<<g<<" Turn:";
    cin>>t;
    y=playerturn(t);
    if(y==0)
    {
        if(a[row][coloumn]!='x'&&a[row][coloumn]!='0')
        {
            a[row][coloumn]=m;
        }
        else
        {
            cout<<"Wrong Choice:"<<endl<<"Try again:";
            d--;
            last();
        }
    }
    else
    {
        cout<<"Wrong choice:"<<endl<<"Try again:";
        d--;
        last();
    }
}
int playerturn(int x)
{
    int z=0;
    switch(x)
      {
        case 1:
         {
            row=0;
            coloumn=0;
            break;
         }
        case 2:
         {
            row=0;
            coloumn=1;
            break;
          }
        case 3:
          {
             row=0;
             coloumn=2;
             break;
           }
        case 4:
           {
             row=1;
             coloumn=0;
             break;
            }
         case 5:
            {
              row=1;
              coloumn=1;
              break;
            }
         case 6:
            {
              row=1;
              coloumn=2;
              break;
            }
         case 7:
            {
              row=2;
              coloumn=0;
              break;
            }
         case 8:
            {
              row=2;
              coloumn=1;
              break;
            }
         case 9:
            {
              row=2;
              coloumn=2;
              break;
            }
         default:
            {
              z=100;
              break;
            }
    }
  return z;
}
int gameover()
{
    display();
    if((a[0][0]==a[0][1]&&a[0][0]==a[0][2]&&a[0][0]=='x')||(a[1][0]==a[1][1]&&a[1][0]==a[1][2]&&a[1][0]=='x')||(a[2][0]==a[2][1]&&a[2][0]==a[2][2]&&a[2][0]=='x'))
    {
        display();
        cout<<"Player 1 wins:";
        return 0;
    }
    if((a[0][0]==a[0][1]&&a[0][0]==a[0][2]&&a[0][0]=='0')||(a[1][0]==a[1][1]&&a[1][0]==a[1][2]&&a[1][0]=='0')||(a[2][0]==a[2][1]&&a[2][0]==a[2][2]&&a[2][0]=='0'))
    {
        display();
        cout<<"Player 2 wins:";
        return 0;
    }
    if((a[0][0]==a[1][0]&&a[0][0]==a[2][0]&&a[0][0]=='x')||(a[0][1]==a[1][1]&&a[1][1]==a[2][1]&&a[0][1]=='x')||(a[0][2]==a[1][2]&&a[1][2]==a[2][2]&&a[0][2]=='x'))
    {
        display();
        cout<<"Player 1 wins:";
        return 0;
    }
    if((a[0][0]==a[1][0]&&a[0][0]==a[2][0]&&a[0][0]=='0')||(a[0][1]==a[1][1]&&a[1][1]==a[2][1]&&a[0][1]=='0')||(a[0][2]==a[1][2]&&a[1][2]==a[2][2]&&a[0][2]=='0'))
    {
        display();
        cout<<"Player 2 wins:";
        return 0;
    }
    if((a[0][0]==a[1][1]&&a[1][1]==a[2][2]&&a[0][0]=='x')||(a[0][2]==a[1][1]&&a[1][1]==a[2][0]&&a[2][0]=='x'))
    {
        display();
        cout<<"Player 1 Wins:";
        return 0;
    }
    if((a[0][0]==a[1][1]&&a[1][1]==a[2][2]&&a[0][0]=='0')||(a[0][2]==a[1][1]&&a[1][1]==a[2][0]&&a[2][0]=='0'))
    {
        display();
        cout<<"Player 2 Wins:";
        return 0;
    }
    if((a[0][0]=='x'||a[0][0]=='0')&&(a[0][1]=='x'||a[0][1]=='0')&&(a[0][2]=='x'||a[0][2]=='0'))
      {
          if((a[1][0]=='x'||a[1][0]=='0')&&(a[1][1]=='x'||a[1][1]=='0')&&(a[1][2]=='x'||a[1][2]=='0'))
          {
              if((a[2][0]=='x'||a[2][0]=='0')&&(a[2][1]=='x'||a[2][1]=='0')&&(a[2][2]=='x'||a[2][2]=='0'))
                {
                    display();
                    cout<<"Game Drawn:"<<endl;
                    return 0;
                }
          }
      }
}
void display()
{
    system("cls");
    cout<<"   |   |   "<<endl;
    cout<<"_"<<a[0][0]<<"_|_"<<a[0][1]<<"_|_"<<a[0][2]<<"_"<<endl;
    cout<<"   |   |   "<<endl;
    cout<<"_"<<a[1][0]<<"_|_"<<a[1][1]<<"_|_"<<a[1][2]<<"_"<<endl;
    cout<<"   |   |   "<<endl;
    cout<<"_"<<a[2][0]<<"_|_"<<a[2][1]<<"_|_"<<a[2][2]<<"_"<<endl;
}
