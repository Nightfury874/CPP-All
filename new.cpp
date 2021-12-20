// # include <iostream>

// using namespace std;

// int main ()
// {
//     int arr [] =  {4,8,25,4,2,4} ;

//     cout << arr[5] ;
//     return 0;
// }

// buildinga a better calculator

// # include <iostream>
// using namespace std ;

// int main ()
// {
//     char op;
//     int num1, num2, result;
//     cout << " Enter the first number" ;
//     cin >> num1 ;
//     cout << "Enter the operator" ;
//     cin >> op ;
//     cout << " Enter the second number" ;
//     cin >> num2 ;

//     if ( op == '+') {
//         result = num1 + num2 ;
//     }
//     if ( op == '-') {
//         result = num1 - num2 ;
//     }
//     if ( op == '/') {
//         result = num1 / num2 ;
//     }
//     if ( op == '*') {
//         result = num1 * num2 ;
//     }
//     else {
//         cout << " Invalid Input" ;
//     }

//     cout << result ;
//     return 0;
// }

// Loops

// # include <iostream>
// using namespace std ;
// int main (){
//     int index = 0;
//     while (index < 5)
//     {
//        cout << index << endl ;
//        index ++ ;
//     }
    
// }


//  Arrays writing and reading

# include <iostream>
using namespace std;

int main (){
    int arr[10];
    int i=0;

    for (i =0; i<= 10; i++){
        cin >> arr[i];
    }

    for (i = 0 ; i <=10; i++){
        cout << arr[i] ;
    }
    return 0;
}