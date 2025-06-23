class Solution:
    def setZeroes(self, matrix: list[list[int]]) -> None:
      coord: list[tuple[int, int]] = []
      
      for i in range(len(matrix)):
        for j in range(len(matrix[i])):
          if matrix[i][j] == 0:
            coord.append((i,j))

      for i, element in enumerate(coord):
        for i in range(len(matrix)):
          matrix[i][element[1]] = 0
          
        for i in range(len(matrix[element[0]])):
          matrix[element[0]][i] = 0  
          
if __name__ == "__main__":
  solution = Solution()
  arr = [[0,1,2,0],[3,4,5,2],[1,3,1,5]]
  solution.setZeroes(arr)
  print(arr)