#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
    bool c = false,r = false;
    
    int n = matrix.size();
    int m = matrix[0].size();
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(matrix[i][j] == 0)
            {
                if(j == 0){

                    c = true;
                    
                }
                if(i == 0)
                {
                    
                    r = true;
                    
                }
                matrix[0][j] = 0;
                matrix[i][0] = 0;
                
            }
        }
    }
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<m;j++)
        {
            if(matrix[i][0] == 0 || matrix[0][j] == 0)
            {
                matrix[i][j] = 0;
            }
        }
    }
    if(c){
        for(int i=0;i<n;i++)
        {
            matrix[i][0] = 0;
        }
    }
    if(r){
        for(int i = 0;i<m;i++)
        {
            matrix[0][i] = 0;
        }
    }
}