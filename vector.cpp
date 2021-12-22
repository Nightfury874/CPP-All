# include <iostream>
# include <vector>

using namespace std;

int main()
{
    vector <int>n;
    n.assign(9,1);

    cout<< "The contents are : ";

    for (int i = 0; i< n.size(); i++)
    {
        cout<<n[i] << " "<< endl;
    }
    n.push_back(2);
    int num = n.size();

    cout << "Last element is :" << n[num-1] << endl;
     for (int i = 0; i< n.size(); i++)
    {
        cout<<n[i] << " "<< endl;
    }
    n.pop_back();
     for (int i = 0; i< n.size(); i++)
    {
        cout<<n[i] << " "<< endl;
    }
    return 0;
}