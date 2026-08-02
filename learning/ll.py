class Node :
    def __init__(self, data):
        self.data = data
        self.next = None

node1 = Node(10)
node2 = Node(20)
node3 = Node(30)
node4 = Node(40)

node1.next = node2
node2.next= node3
node3.next = node4
node4.next = None


# print(node1.data)
# print(node1.next) #give address of node 2
# print(node1.next.data)
# print(node2.next.data)
# print(node3.next.data)
# print(node4.next)

# current = head
# while current:
#     print(current.data)
#     current = current.next
# print(None)

new_node1 = Node(80)
new_node1.next = node1

print("ll after updating") #current is at none , update current
current = new_node1
while current.next:
    print(current.data)
    current = current.next # at the end of loop , current points to NOne


print("inserting new element at the end")
new_node2 = Node(100)
current.next = new_node2

current = new_node1
while current:
    print(current.data)
    current = current.next

