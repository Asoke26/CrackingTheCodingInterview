#include <vector>
#include <algorithm>
#include <iostream>

void rotate(std::vector<std::vector<int> >& matrix){
    // Rotation must be in place
    // First calculate the transpose
    int n = matrix.size();
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
	    std::swap(matrix[i][j], matrix[j][i]);
	}
    }

    for (int i = 0; i < n; i++) std::reverse(std::begin(matrix[i]), std::end(matrix[i]));
    return;
}

int main(int argc, char ** argv){
    std::vector<std::vector<int> > myvec = {{1, 2, 3},
    					    {4, 5, 6},
    					    {7, 8, 9}};
    rotate(myvec);
    // Print vector
    int n = myvec.size();
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
	    std::cout << myvec[i][j] << " ";
	}
	std::cout << '\n';
    }

    return 0;
}
