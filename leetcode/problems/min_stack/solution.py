class MinStack:

    def __init__(self):
        self.stack = [] # pair: val, current_min_val

    def push(self, val: int) -> None:
        current_min_val = self.getMin()
        if(current_min_val == None or val < current_min_val):
            current_min_val = val
        self.stack.append((val, current_min_val))

    def pop(self) -> None:
        self.stack.pop()

    def top(self) -> int:
        if(len(self.stack) == 0):
            return None
        else:
            return self.stack[len(self.stack) - 1][0]

    def getMin(self) -> int:
        if(len(self.stack) == 0):
            return None
        else:
            return self.stack[len(self.stack) - 1][1] # current_min_val   

                


# Your MinStack object will be instantiated and called as such:
# obj = MinStack()
# obj.push(val)
# obj.pop()
# param_3 = obj.top()
# param_4 = obj.getMin()