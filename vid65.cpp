#include<iostream>

int main(){
    //std::vector<std::vector<int>> matrix on left side for vectors instead of arrays
    int matrix[][3] = {
        {1,2,3}, 
        {3,4,5}, 
        {2,3,4}};//format like this for easy reading
    //the second bracket has to have a set value when defined like this
    //the first bracket is inferred by counting the amount on the right

    for(int i = 0;i<3;i++){
        for(int j = 0;j < 3;j++){
            std::cout << matrix[i][j] << " ";//this is how to access
        }
        std::cout << "\n";
    }//this is how to go through each element

    for(int (&row)[3]: matrix){  //you have to get the reference which has to be casted into an array of size 3
        //an alternative for the above is for(auto &row : matrix)
        for(int col : row){
            std::cout <<col<< " ";
        }
        std::cout << "\n";
    }//this is how to use a for-each loop with matrix
}