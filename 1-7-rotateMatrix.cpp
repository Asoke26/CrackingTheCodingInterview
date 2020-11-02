/****************************************************************************************************************************************

Is Unique: You are given an n x n = 2D matrix representing an image, rotate the image by 90 degrees (clockwise). Can you do it Inplace ?

Idea : a) Transpose the matrix. Runtime : O(n^2)       
       b) reverse row in a n * n matrix. : O(n^2)

*****************************************************************************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void rotate(vector<vector<int>>& matrix) {
    
    cout<<"11 "<<endl;
    for(int i=0;i<matrix.size();i++)
    {
        for(int j =i;j<matrix.size();j++)
        {
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    
    for(int i=0;i<matrix.size();i++)
        reverse(matrix[i].begin(),matrix[i].end());
    
}


int main()
{
    // Taking input
    vector<vector<int>>matrix = {{5,1,9,11},{2,4,8,10},{13,3,6,7},{15,14,12,16}}; 
    
    // Function call
    rotate(matrix);
    
    for(int i=0;i<matrix.size();i++)
    {
        for(int j =0;j<matrix.size();j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}

