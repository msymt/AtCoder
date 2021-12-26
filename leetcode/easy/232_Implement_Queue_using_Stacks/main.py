class MyQueue:

    def __init__(self):
        self.queue = []

    def push(self, x: int) -> None:
        self.queue.append(x)

    def pop(self) -> int:
        if(self.empty()):
            return None
        else:
            front_element = self.peek()
            self.queue.pop(0)
            return front_element

    def peek(self) -> int:
        if(self.empty()):
            return None
        else:
            return self.top()

    def empty(self) -> bool:
        if(len(self.queue) == 0):
            return True
        else:
            return False
    
    def top(self):
        if(self.empty()):
            return None
        else:
            return self.queue[0]

# Your MyQueue object will be instantiated and called as such:
x = 1
y = 2
obj = MyQueue()
obj.push(x)
obj.push(y)
param_2 = obj.pop()
param_3 = obj.peek()
param_4 = obj.empty()
print(param_2, param_3, param_4)