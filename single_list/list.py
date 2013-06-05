class LinkedList:
    class __Node:
        def __init__(self, element=None):
            self.element = element
            self.next = None

        def __str__(self):
            '''string representation of Node'''
            return str(self.element)

        def hasNext(self):
            '''returns true if the Node points to another Node'''
            return self.next != None

    def __init__(self):
        self.first = LinkedList.__Node()
        self.length = 0

    def __len__(self):
        return self.length

    def append(self, element):
        node = self.first
        while node.next:
            node = node.next
        node.next = LinkedList.__Node(element)
        self.length+=1

    def __str__(self):
        if self.length == 0:    
            return '()'
        retString = "("
        node = self.first.next

        while node:
            retString += str(node) +", "
            node = node.next

        return retString[:-2] + ')'

    def getNode(self, i):
        node = self.first
        for i in xrange(0, i + 1):
            node = node.next
        return node

    def detectCycle(self):
        slow = 0
        fast = 1

        slow_node = self.getNode(slow)
        fast_node = self.getNode(fast)

        while(fast_node and slow_node):
            slow_node = self.getNode(slow)
            fast_node = self.getNode(fast)

            print "Slow: " + str(slow)
            print "\t\tFast: " + str(fast)

            if fast_node == slow_node:
                return True

            slow += 1
            fast += 1
            if(self.getNode(fast).next):
                fast +=1

        return false
    
l = LinkedList()
for i in xrange(0, 10):
    l.append(i)
print l

a = l.getNode(2)
b = l.getNode(8)
b.next = a
# print l

l.detectCycle()

