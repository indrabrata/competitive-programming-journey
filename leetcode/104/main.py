from typing import Optional


class TreeNode:
    def __init__(self, val: int=0, left: Optional['TreeNode']=None, right: Optional['TreeNode']=None):
        self.val = val
        self.left = left
        self.right = right


class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        if root is None:
            return 0


        stack: list[tuple[Optional[TreeNode], int]] = []
        stack.append((root, 0))
        
        
        depth: int = 0
        while (len(stack) != 0):
          node = stack.pop()  

          if node[1] > depth:
            depth = node[1]
          
          if node[0] is not None and node[0].left is not None:
            stack.append((node[0].left, node[1]+1))  
            
          if node[0] is not None and node[0].right is not None:
            stack.append((node[0].right, node[1]+1))
            
        
        
        return depth+1