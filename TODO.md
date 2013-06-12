---
layout: page
title: TODO
tagline: So nothing is forgotten...
---

{% include JB/setup %}

# TODO 

1. Paxos Algorithm

# DONE 


### Data Structures

#### Set
* Set - A collection that contains no duplicate elements.
* Hash set - Hashtable with order
* Tree set - Stores in a tree structure
* BitSet - Array of bits with and, or xor set and get

#### Map
Map - An object that maps keys to values. A map cannot contain duplicate keys; each key can map to at most one value.
HashMap - Maps hash key to object
Properties - map<String, String>

#### List
List - An ordered collection (also known as a sequence). Supports duplicate. 
LinkedList - efficient removal in between elements or at the start.
ArrayList - Supports dynamic arrays that can grow as needed. Not synchronized. need random access to elements

### Other
Vector - It can grow as necessary to accommodate new elements. Object can be accessed via an index. Vectors are synchronized.
Array - [] Has binary search but has to be sorted previosly
Queue - order elements in a FIFO (linked lists are queues)
Stack - The Stack class implements a last-in-first-out (LIFO) stack of elements.


### Personal Questions

1. In every interviews, this questions are always present
  1. Tell me about yourself
        Since little I ... I graduated from XYZ university, worked at ABC during x months on a small team developing. Afterwards I was invited to do an PhD at ...
  2. Why should we NOT hire you
        Not eager to learn/research new things. Someone who wants to doesn't want to try new things, stagnant.
  3. Why should we hire you and not another?
       Eager to learn. I not be the fastest person in understading many algorithms but I am hard working and I always strive to give my best.
       Looking to make a difference. Motivated to do new stuff. Accountability, need to see that I'm contributing to the company.
  4. How do I measure success
        I measure sucess when I meet the expectation of the team I am interacting with it.
  5. How did you get along with you last boss
        ...


### Java Singleton
class Bar {
    private static class BarAux {
        public static Bar bar = new Bar();
    }

    public static Bar getBar() {
        return BarAux.bar;
    }
}

### Difference between heap and stack

from [http://stackoverflow.com/questions/79923/what-and-where-are-the-stack-and-heap][] answered by answered Jeff Hill

    The stack is the memory set aside as scratch space for a thread of execution. When a function is called, a block is reserved on the top of the stack for local variables and some bookkeeping data. When that function returns, the block becomes unused and can be used the next time a function is called. The stack is always reserved in a LIFO order; the most recently reserved block is always the next block to be freed. This makes it really simple to keep track of the stack; freeing a block from the stack is nothing more than adjusting one pointer.

    The heap is memory set aside for dynamic allocation. Unlike the stack, there's no enforced pattern to the allocation and deallocation of blocks from the heap; you can allocate a block at any time and free it at any time. This makes it much more complex to keep track of which parts of the heap are allocated or free at any given time; there are many custom heap allocators available to tune heap performance for different usage patterns.

    Each thread gets a stack, while there's typically only one heap for the application (although it isn't uncommon to have multiple heaps for different types of allocation).

#### To what extent are they controlled by the OS or language runtime?

    The OS allocates the stack for each system-level thread when the thread is created. Typically the OS is called by the language runtime to allocate the heap for the application.

#### What is their scope?

    The stack is attached to a thread, so when the thread exits the stack is reclaimed. The heap is typically allocated at application startup by the runtime, and is reclaimed when the application (technically process) exits.

#### What determines the size of each of them?

    The size of the stack is set when a thread is created. The size of the heap is set on application startup, but can grow as space is needed (the allocator requests more memory from the operating system).

#### What makes one faster?

    The stack is faster because the access pattern makes it trivial to allocate and deallocate memory from it (a pointer/integer is simply incremented or decremented), while the heap has much more complex bookkeeping involved in an allocation or free. Also, each byte in the stack tends to be reused very frequently which means it tends to be mapped to the processor's cache, making it very fast.
