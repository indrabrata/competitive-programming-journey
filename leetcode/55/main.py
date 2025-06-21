class Solution:
  def __init__(self) -> None:
    pass

  def canJump(self, nums: list[int]) -> bool:
    if len(nums) == 0 or len(nums) == 1:
      return True
    
    return self.solve(0, nums)    
  
  
  def solve(self, idx: int, nums: list[int]):
    if idx >= len(nums) - 1:
        return True
    for jump in range(1, nums[idx] + 1):
        if self.solve(idx + jump, nums):
            return True
    return False

    

if __name__ == "__main__":
  nums = [3,0,8,2,0,0,1]
  solution = Solution()
  print(solution.canJump(nums))