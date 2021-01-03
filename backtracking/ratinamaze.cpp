#include<iostream>
using namespace std;
//This function is used to find isSafe
bool isSafe(int** arr, int x, int y, int n)
{
    if(x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}

bool ratInMaze(int** arr, int x, int y, int n, int** solMatrix)
{
    if(x == n-1 && y == n-1)
    {
        solMatrix[x][y] = 1;
        return true;
    }

    if(isSafe(arr, x, y, n))
    {
        solMatrix[x][y] = 1;
        if(ratInMaze(arr, x + 1, y, n, solMatrix))
        {
            return true;
        }

        if(ratInMaze(arr, x, y + 1, n, solMatrix))
        {
            return true;
        }
        
        solMatrix[x][y] = 0;    //backtracking
        return false;
    }

    return false;
}

int main(){

    int n;
    cin>>n;
    cout<<"\n";

    int** arr = new int*[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }

     for (int i = 0; i < n; i++)
     {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }

    int** solMatrix = new int*[n];
    for (int i = 0; i < n; i++)
    {
        solMatrix[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            solMatrix[i][j] = 0;
        }
    }

    if(ratInMaze(arr, 0, 0, n, solMatrix)){
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << solMatrix[i][j] << " ";
            }
            cout<<"\n";  
        }
    }

    return 0;
}