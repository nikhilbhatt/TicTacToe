#include<bits/stdc++.h>
using namespace std;
void display(int *);
int gameover(const int *);
void player2(int *,int);
int main(){
	int board[9]={0},moves=0;
	display(board);
	while(moves<9){
        int mv;
        cout<<"Enter Player 1[x] move:";
        cin>>mv;
        if(board[mv-1]==0&&mv>=1&&mv<=9)
        {
            board[mv-1]=-1;
            moves++;
            cout<<"Board After Player 1 move look like this:\n\n"<<endl;
            display(board);
            if(gameover(board)==0)
            {
                   player2(board,moves);
                   moves++;
                   if(gameover(board)!=0)
                    break;
            }
            else
                break;
        }
        else
                cout<<"Illegal move!! Try again:\n";
    }
    switch(gameover(board)){
        case 0:
        cout<<"Game drawn:";
        break;
        case 1:
        cout<<"Congratulations,Player 2[0] Wins:";
        break;
        case -1:
        cout<<"Congratulations,Player 1[x] wins:";
        break;
    }
}
void display(int *b){
    system("cls");
    cout <<"\n~~~~~~~~~~~~~Tic Tac Toe~~~~~~~~~~~~~\n";
	cout <<"\n\n   BOARD:\n";
    int k=0;
    cout<<"----++---++----"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"| ";
            if(b[k]==0)
                cout<<k+1<<" |";
            else
                if(b[k]==-1)
                 cout<<"x |";
            else
                cout<<"0 |";
                k++;
        }
        cout<<"\n----++---++----"<<endl;
    }
}
int gameover(const int *board){
  int a[8][3]={{0,1,2},{3,4,5},{6,7,8},{0,3,6},{1,4,7},{2,5,8},{0,4,8},{2,4,6}};
  for(int i=0;i<8;i++)
  {
    if(board[a[i][0]]!=0&&board[a[i][0]]==board[a[i][1]]&&board[a[i][1]]==board[a[i][2]])
      return board[a[i][2]];
  }
  return 0;
}
void player2(int *board,int m){
    int mv1;
    if(m!=9)
    {
        cout<<"Enter Player 2[0] Move:";
        cin>>mv1;
        if(board[mv1-1]==0&&mv1>=1&&mv1<=9)
        {
           board[mv1-1]=1;
           cout<<"After player 2 move Board look like this\n\n";
           display(board);
         }
        else
        {
           cout<<"illegal move!! Try Again\n";
           player2(board,m);
         }
     }
}

