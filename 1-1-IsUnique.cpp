/****************************************************************************************************************************************

Is Unique: Implement an algorithm to determine if a string has all unique characters. What if you cannot use additional data structures? 

Idea 2 : a) Sort the string. 
         b) Loop through the string compare char next to each other.O(n)

*****************************************************************************************************************************************/

#include <iostream>
#include <string>

using namespace std;

bool isUnique(string input)
{
    int len = input.size();
    
    for(int i = 0; i<len -1; i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(input[i] == input[j]) return false;
        }
    }
    
    return true;
}


int main()
{
    // Taking input
    string input; cin>>input; 
    
    // Function call
    bool result = isUnique(input);
    
    if(result) cout<<input<<" is a unique string "<<endl;
    else cout<<input<<" is not a unique string "<<endl;
    
    
    return 0;
}

