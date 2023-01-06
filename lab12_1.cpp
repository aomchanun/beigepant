#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>

using namespace std;

string g()
{
    string grade[] = {"A","B+","B","C+","C","D+","D","F","W"};
    string x = "";
    return x = grade[rand()%9];
}

int main()
{
    srand(time(0));
   
    
    cout << "Press Enter 3 times to reveal your future.";
    for(int j=1;j<=3;j++)
    {
        cin.get();
    }
    cout << "You will get " << g() << " in this 261102.";
    
    return 0;

}