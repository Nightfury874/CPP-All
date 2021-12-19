//  # include <iostream>

//  using namespace std;

//  int main ()
//  {
//      string Name = "geekforgeeks" ;
//      // will give output of the location of the first index
//      cout << Name.find("geek") << endl ;
//      cout << Name.substr(2,4) << endl;




//  }

// To find if two stings are anagram of each other

# include <iostream>
# include <bits/stdc++.h>
using namespace std ;

// creating function to check conditions

bool anagramStrings (string s1, string s2)
{
    // find string length
    int l1 = s1.length();
    int l2 = s2.length();


    // first condition that both the integers must be same
    if ( l1 != l2)
        return false;

    // second condtion of sorting both the strings and comparing

    sort (s1.begin(), s1.end());
    sort (s2.begin(), s2.end());

    for (int i =0; i< l1; i++)
        if (s1[i] != s2[i])

            return false;
    
    return true;

}

// Driver code
int main()
{
    string s1 = "listten" ;
    string s2 = "silent" ;

    if (anagramStrings(s1, s2))
        cout << "The given strings are anagrams of each other" << endl;
    
    else 
        cout << " The given strings are not anagrams of each other" << endl ;

    return 0;
}
