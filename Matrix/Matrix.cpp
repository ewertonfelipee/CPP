#include <iostream>
using namespace std;

int main(){
    int matrix[2][2];

    for(int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++)
        {
            if(i < j){
                matrix[i][j] = 1;
            }
            else if(i == j){
                matrix[i][j] = 0;
            }
            else if(i > j){
                matrix[i][j] = -1;
            }
        }
    }

    for (int i = 0; i < 2; i++)
	{
		std::cout << " ";
		//For aninhado ou seja, i = 0 j vai de 0 até 4
		for (int j = 0; j < 2; j++)
		{
			if (i > j)
			{
				std::cout << matrix[i][j] << " ";
			}
			else
			{
				std::cout << " " << matrix[i][j] << " ";
			}
	    }

    cout << endl;
    }
    return 0;
}