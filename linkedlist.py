'''
LinkedList in python 2.7

A data structure that implements a collection using a sequence of linked nodes.


Complexity : 
===============

Indexing				Theta(n)	
Insert/delete at beginning	        Theta(1)	
Insert/delete at end	                Theta(1) when last element is known / Theta(n) when last element is unknown
Insert/delete in middle	                Theta(1) + search time
Wasted space (average)	                Theta(n)

'''

#
# Node Class, the building block of the linkedlist.
# 
# getData : extract node data
# getNext : pointer to next node
# setData : insert node data
# setNext : set pointer to next node
#

class Node:
    def __init__(self,initialdata):
        self.data = initialdata
        self.next = None

    def getData(self):
        return self.data

    def getNext(self):
        return self.next

    def setData(self,newdata):
        self.data = newdata

    def setNext(self,newnext):
        self.next = newnext


#
# Linked List itself, consisting of many nodes..
#
# isEmpty  : Checks if list is null
# add      : insertion operation
# size     : traverse and gets size
# search   : traverse till reaching an item
# remove   : deletion operation
# traverse : walks through the list 
#

class LinkedList:

    def __init__(self):
        self.head = None
   
    def isEmpty(self):
        return self.head == None

    def add(self,item):
    	temp = Node(item)
    	temp.setNext(self.head)
    	self.head = temp
	print "\nAdded " , item , " to List"

    def size(self):
    	current = self.head
    	count = 0
    	while current != None:
        	count = count + 1
        	current = current.getNext()
    	return count

    def traverse(self):
        print "\nWalking through the list..\n"
    	current = self.head
    	count = 0
    	while current != None:
        	count = count + 1
		print "Item #" , count , " is" , current.getData()
        	current = current.getNext()

    def search(self,item):
	print "\nSearching for ", item , ".."
        current = self.head
    	found = False
    	while current != None and not found:
        	if current.getData() == item:
            		found = True
        	else:
            		current = current.getNext()
    	return found

    def remove(self,item):
	print "\nRemoving ", item , ".."
    	current = self.head
    	previous = None
    	found = False
    	while not found:
        	if current.getData() == item:
        	    found = True
        	else:
        	    previous = current
        	    current = current.getNext()

    	if previous == None:
        	self.head = current.getNext()
    	else:
        	previous.setNext(current.getNext())

        print "Removed!"



#####Simple Testing#####

mylist = LinkedList()

mylist.add(31)
mylist.add(77)
mylist.add(17)
mylist.add(93)
mylist.add(26)
mylist.add(54)

mylist.traverse()
