Question Link :  https://practice.geeksforgeeks.org/problems/hopscotch4857/1


// code 
class Solution:
   def valid(self,i,j,n,m):

        if i>=0 and j>=0 and i<n and j<m:

            return True

        return False

   def hopscotch(self, n, m, mat, ty, i, j):

        # code here

      

        if ty==0:

            sums=0

  

            if j%2==0:

                arr=[[-1,0],[-1,1],[0,1],[1,0],[0,-1],[-1,-1]]

                for x in arr:

                    i1=i+x[0]

                    j1=j+x[1]

                    if self.valid(i1,j1,n,m):sums+=mat[i1][j1]

            else:

                arr=[[-1,0],[0,1],[1,1],[1,0],[1,-1],[0,-1]]

                for x in arr:

                    i1=i+x[0]

                    j1=j+x[1]

                    if self.valid(i1,j1,n,m):sums+=mat[i1][j1]

        else:

            sums=0

 

            if j%2==0:

                arr=[[-2,-1],[-2,0],[-2,1],[-1,2],[0,2],[1,2],[1,1],[2,0],[1,-1],[1,-2],[0,-2],[-1,-2]]

                for x in arr:

                    i1=i+x[0]

                    j1=j+x[1]

                    if self.valid(i1,j1,n,m):sums+=mat[i1][j1]

            else:

                arr=[[-1,-2],[-1,-1],[-2,0],[-1,1],[-1,2],[0,2],[1,2],[2,1],[2,0],[2,-1],[1,-2],[0,-2]]

                for x in arr:

                    i1=i+x[0]

                    j1=j+x[1]

                    if self.valid(i1,j1,n,m):sums+=mat[i1][j1]

 

        return sums
