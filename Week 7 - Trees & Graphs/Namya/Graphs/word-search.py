class Solution:
    
    #aply to one cell and let it move to the rest
    
    #in the dfs call, check if out of bounds
    #set current to marked or checked
    #run the calls on the neighbours in whatever firection is asked
    #mostly path finding u can use depth first search
    
    
    
    def exist(self, board: List[List[str]], word: str) -> bool:
        def dfs(board, i, j, count, word):
            if len(word) == count:
                return True
            if i < 0 or i >= len(board) or j < 0 or j >= len(board[0]) or board[i][j] != word[count]:
                return False
            temp = board[i][j]
            #so u dont go back to the same cell
            board[i][j] = ' '
            found = dfs(board, i+1, j, count+1, word) or dfs(board, i, j+1, count+1, word) or dfs(board, i, j-1, count+1, word) or dfs(board, i-1, j, count+1, word) 
            board[i][j] = temp
            return found
        
        for i in range(len(board)):
            for j in range(len(board[0])):
                if board[i][j] == word[0] and dfs(board, i, j, 0, word):
                    return True
        return False
    