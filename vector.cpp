// # include <iostream>
// # include <vector>

// using namespace std;

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

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    stringstream ss(str);
    vector <int> result;
    char ch;
    int tmp;
    while (ss >>tmp)
    {
        result.push_back(tmp);
        ss >>ch;
        return result;
    }
    
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}