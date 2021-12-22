# include <iostream>
# include <vector>

using namespace std;

// int main()
// {
//     vector <int>n;
//     n.assign(9,1);

//     cout<< "The contents are : ";

//     for (int i = 0; i< n.size(); i++)
//     {
//         cout<<n[i] << " "<< endl;
//     }
//     n.push_back(2);
//     int num = n.size();

//     cout << "Last element is :" << n[num-1] << endl;
//      for (int i = 0; i< n.size(); i++)
//     {
//         cout<<n[i] << " "<< endl;
//     }
//     n.pop_back();
//      for (int i = 0; i< n.size(); i++)
//     {
//         cout<<n[i] << " "<< endl;
//     }
//     cout <<"new line from here on" ;

//     n.insert(n.begin() + 4, 10);
//      for (int i = 0; i< n.size(); i++)
//     {
//         cout<<n[i] << " "<< endl;
//     }

//     n.clear();
//     cout << "size is "<< n.size();

//     return 0;
// }

int main()
{
    vector<int>n;
    int a;

    for (int i = 0 ; i< 5 ; i++)
    {
        cin >> a;
        n.push_back(a);
    }
    for ( auto a = n.begin(); a != n.end(); a++ )
    {
        cout<<" the elements are " << *a << endl;

        // comment
        
    }
    return 0;
}