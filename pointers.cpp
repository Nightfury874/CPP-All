// # include <iostream>
// using namespace std;
// void printNum(int *NumPtr)
// {
//     cout << *NumPtr<< endl;
// }
// void printLetter(char *letter)
// {
//     cout << *letter<< endl;
// }

// void print (void*ptr, char type){
//     switch (type)
//     {
//     case 'i' : cout << *((int*) ptr) << endl;
//         break;
    
//     case 'c' : cout<< *((char*) ptr) << endl;
//         break;
    
    
//     }
// }
// int main()
// {
//     int n =5;
//     char letter = 'b' ;
//     // printNum(&n);

//     // printLetter(&letter) ;
//     print (&n,' i') ;
//     print (&letter,' c') ;
//     return 0;
// }



// Arrays with pointer


// # include <iostream>

// using namespace std;

// int getMin(int arr[] , int size)
// {
//       int min = arr [0];
//       for ( int i =0 ; i<size; i++)
//       {
//           if (arr[i]< min){
//               min = arr [i] ;
//           }
//       }

//       return min;

// }
// int getMax (int arr[], int size)
// {
//     int max = 0;
//     for (int i = 0; i<size ; i++)
//     {
//         if( arr[i] > max)
//         {
//             max = arr [i];
//         }
//     }
//     return max;
// }

// void getMinMax (int arr[], int size, int* min, int* max )
// {
//     for (int i = 0; i<size ; i++)
//     {
//         if( arr[i] > *max)
//         {
//             *max = arr [i];
//         }
//     }
//     for (int i = 0; i<size ; i++)
//     {
//         if( arr[i] < *min)
//         {
//             *min = arr [i];
//         }
//     }
// }
// int main ()
// {
//     int arr[5]= {2,8,5,7,6} ;
//     cout << " min element is " << getMin(arr, 5) << endl;
//     cout << " max element is " << getMax(arr, 5) << endl ;

//     int min = arr[0];
//     int max = arr[0];
//     getMinMax (arr, 5, &min, &max);

//     cout << "The max number is " << max << " and min number is " << min << endl;

//     return 0;
// }


// Dynamic allocation of arrays 
# include <iostream>

using namespace std;

int main()
{
    int size ; 
    cout << " enter size of array" << endl ;
    cin >> size ;

    int* arr = new int [size];

    for (int i = 0; i< size ; i++)
    {
        cout << " enter array elements: " << endl;
        cin >> arr[i];

    } 
    for (int i = 0; i< size ; i++)
    {
        // cout <<  arr[i]; 
        cout << *(arr +i) << "   " ;

      
    } 
    return 0; 

}