# include <iostream>
using namespace std;
void printNum(int *NumPtr)
{
    cout << *NumPtr<< endl;
}
void printLetter(char *letter)
{
    cout << *letter<< endl;
}

void print (void*ptr, char type){
    switch (type)
    {
    case 'i' : cout << *((int*) ptr) << endl;
        break;
    
    case 'c' : cout<< *((char*) ptr) << endl;
        break;
    
    
    }
}
int main()
{
    int n =5;
    char letter = 'b' ;
    // printNum(&n);

    // printLetter(&letter) ;
    print (&n,' i') ;
    print (&letter,' c') ;
    return 0;
}