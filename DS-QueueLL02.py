class queue:
    def __init__(self, v, l=None, r=None):
        self.v = v
        self.next = None
         
class Queue:
    def __init__(self):
        self.rear = None
        self.front = None
        
    def deletion(self):          
        if self.front is None:
            print('Underflow')
            
        node = self.front
        print('\nQueue after deleting a value:',node.v)

        self.front = self.front.next
        if self.front is None:
            self.rear = None
            return node.v
 
    def insertion(self, item):    
        node = queue(item)
        print('\nQueue after adding a value:', item)

        if self.front is None:
            self.front = node
            self.rear = node
        else:
            self.rear.next = node
            self.rear = node

    def peek(self):
       
        if self.front:
            return self.front.v
        else:
            print("peek element is")
 
    def isEmpty(self):
        return self.rear is None and self.front is None
 
if __name__ == '__main__':
 
    q =Queue()
    q.insertion(23)
    q.insertion(42)
    q.insertion(57)
    q.insertion(68)
 

    q.deletion()
    q.deletion()
    q.deletion()
    
 
    if q.isEmpty():
        print('\nQUEUE  IS EMPTY\n')
    else:
        print('\nElement after deleting the value from queue:\n', q.peek())