class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();

    int x = n , z = -1 , y = n / 2 ;

    int e = 0 ;

    int a  =  0 , b = n-1  , c = n-1  , d = 0 ;
    


    while(++z < y)
    {
      e = z ; --x;
      int u = x ;
     
      while(e < x)
      {
        int l = matrix[a][e];
        int m = matrix[e][b];
        int n = matrix[c][u];
        int o = matrix[u][d];
        matrix[a][e] = o ; 
        matrix[e][b] = l ;
        matrix[c][u] = m ;
        matrix[u][d] = n ;
        e++; u--;
        
      }
      a++; d++; b--; c--;
    }  


    }
};