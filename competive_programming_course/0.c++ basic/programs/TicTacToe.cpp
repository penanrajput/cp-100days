#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

#define SX 'X'
#define SO 'O'
char mat[3][3];
char symbol = SO;
int count = 0;
int version = 0;

void init()
{
    int i,j;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            mat[i][j]='a';
}
void print()
{
    int i,j;
        for(i=0;i<3;i++)
        {
            cout<<"\n\n\n\t\t\t\t";
            for(j=0;j<3;j++)
            {
                cout<<mat[i][j]<<"\t";
            }
            cout<<endl;
        }
        cout<<"\nPLAYER  I SCORE :";
        cout<<"\nPLAYER II SCORE :";
        
}

void isWin()
{
    // horizontal
    if(mat[0][0]==symbol && mat[0][1]==symbol && mat[0][2]==symbol  )
    {
        version = 1;
    }
    else if(mat[1][0]==symbol && mat[1][1]==symbol && mat[1][2]==symbol  )
    {
        version = 2;
    }
    else if(mat[2][0]==symbol && mat[2][1]==symbol && mat[2][2]==symbol  )
    {
        version = 3;
    }

    // vertical
    else if(mat[0][0]==symbol && mat[1][0]==symbol && mat[2][0]==symbol  )
    {
        version = 4;
    }
    else if(mat[0][1]==symbol && mat[1][1]==symbol && mat[2][1]==symbol  )
    {
        version = 5;
    }
    else if(mat[0][2]==symbol && mat[1][2]==symbol && mat[2][2]==symbol  )
    {
        version = 6;
    }

    // cross
    else if(mat[0][0]==symbol && mat[1][1]==symbol && mat[2][2]==symbol  )
    {
        version = 7;
    }
    else if(mat[0][2]==symbol && mat[1][1]==symbol && mat[2][0]==symbol  )
    {
        version = 8;
    }
    else{
    }

}
void switchSymbol(void)
{
    isWin();
        if(symbol==SO)
            symbol = SX;
        else
            symbol = SO;
}
void input()
{
    int input,row,col;
        cout<<"\n\nchoices done until now => "<<count;

        cout<<"\nChance => "<<symbol;
        cout<<"\nChoose the number {0-9} =>  ";
        cin >> input;
           
            switch(input)
            {
                case 1:
                if(mat[2][0]=='a')
                {    mat[2][0] = symbol;
                switchSymbol();
                ++count;
                
                }
                    break;
                case 2:
                if(mat[2][1]=='a')
                   { mat[2][1] = symbol;
                   switchSymbol();
                   ++count;
                   
                   }
                    break;
                case 3:
                if(mat[2][2]=='a')
                   { mat[2][2] = symbol;
                   switchSymbol();
                   ++count;
                   
                   }
                    break;
                case 4:
                if(mat[1][0]=='a')
                    {mat[1][0] = symbol;
                    switchSymbol();
                    ++count;
                    
                    }
                    break;
                case 5:
                if(mat[1][1]=='a')
                  {  mat[1][1] = symbol;
                  switchSymbol();
                  ++count;
                  
                  }
                    break;
                case 6:
                if(mat[1][2]=='a')
                   { mat[1][2] = symbol;
                   switchSymbol();
                   ++count;
                   
                   }
                    break;
                case 7:
                if(mat[0][0]=='a')
                  {  mat[0][0] = symbol;
                  switchSymbol();
                  ++count;
                  
                  }
                    break;
                case 8:
                if(mat[0][1]=='a')
                   { mat[0][1] = symbol;
                   switchSymbol();
                   ++count;
                   
                   }
                    break;
                case 9:
                if(mat[0][2]=='a')
                   { mat[0][2] = symbol;
                   switchSymbol();
                   ++count;
                   
                   }
                    break;
                default:
                    cout<<"You entered Wrong Choice Try again\n";
                    Sleep(3000);
                    break;  
            }
        
        if(count==9)
            count = 10;
}
int main()
{
    init();
    while( count <= 9 && version == 0 )
    {
        system("CLS");
        print();
        input();
        system("CLS");
        print();
        isWin();
    }
    
    if( count == 10 )
    {
        
        cout<<"\n\nGame over";
        cout<<"\nNo one won";
        Sleep(5000);
    }
    if( version != 0 )
    {
        
        cout<<"\n\nGame over";
        switchSymbol();
        cout<<"\n\n************************ "<<symbol<<" Wins !!! **********************";
        cout<<"\nLevel "<<version<<" matched !!!";
        Sleep(5000);
    }
    
    return 0;
}