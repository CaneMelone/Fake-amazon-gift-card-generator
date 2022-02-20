#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

char characters[] ="ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890";   //34 character
char *code; 
int lenght = 16; //code's lenght

srand((unsigned)time(NULL)); //seed

    for(int i = 0; i < lenght; i++)
    {      
        code[i] = characters[rand() % 34];
        code[4] = '-'; //after the 4 character insert "-"
        code[11] = '-'; //after the 11 character insert "-"
    }

    cout<<code;

    return 0;
}