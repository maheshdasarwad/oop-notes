/*
Container :
1. What is a container? What are the various types of containers? Explain any two containers in detail.
    (List and explain different types of STL containers.)
-->
    Conatiner :
        Containers are data structures that stores collections of objects.
            They are designed to manage memory and organize data efficiently.

    Types of Containers
    1. Sequential Containers :
        Stores elements in a linear sequence.
        Elements of these containers can be accessed using iterators.
        Examples :-
                vector , deque , list.
    
    2. Associated Containers :
        Stores elements in key-value pairs with sorted order.
        Possible to access elements randomly using key.
        Example :-
                    map, multimap, set , multiset.

    3. Container Adapters( derived container ) :
        Simplified interface over other containers.
        Do not support random access to elements beacuse their functionality
            is restricted to the specialized behavior
        Example :- 
                stack , queue , priority_queue.

    Explanation of two containers :

    1. Vector(Sequential Container) :
        It is a dynamic array that can grow or shrink in size.
        It allows random access and is efficient for accessing by index. O(1)
        Slower for frequent insertion and deletions in the middle.

        common operations :
            1. push_back() : Add elements to the end.
            2. pop_back() : Removes the last element.
            3. at(index) : Access the element at a specific index.
            4. size() : return the number of elements.
            5. reverse() : reverse the vector
    
        Example :

            #include <iostream>
            #include <vector>
            using namespace std;

            int main() {

                vector<int> v = {10, 20, 30};

                v.push_back(40); // Add an element
                v.pop_back();    // Remove the last element

                cout<<"\nVector elements : "<<endl;
                for (int i = 0 ; i < v.size() ; i++ )
                {
                    cout<<v[i]<<" ";
                }

                return 0;
            }

    2. map(Associative container) :
        Stores elements as key-value pairs.
        Key is unique and the keys are automatically sorted in ascending order.
        Faster search, insertion and deletion O(logn)

        common operations :
            1. insert(pair) : adds key-value pair.
            2. find(key) : searches for a key.
            3. erase(key) : removes an element by key.
            4. operator[] : Accesses the value associated with a key.
            5. empty() : return true if map is empty
    
    Example :-

        #include <iostream>
        #include <map>
        using namespace std;

        int main() {
            map<int, string> studentMap;

            studentMap[101] = "Ram";
            studentMap[102] = "Lakhan";

            cout << "Students --> "<<endl;
            for (auto &pair : studentMap) {
                cout<<"Roll No : "<<pair.first<<" Name : "<<pair.second<<endl;
            }

            return 0;
        }

        OUTPUT :-

        Students -->
        Roll No : 101 Name : Ram
        Roll No : 102 Name : Lakhan
        
2. List the container classes in C++. Explain any one of them using a program.
-->
        List of Container Classes in C++
        C++ provides the following containers under the Standard Template Library (STL):

        Sequence Containers:
            vector
            deque
            list

        Associative Containers:
            set
            multiset
            map
            multimap

        Unordered Containers:
            unordered_set
            unordered_multiset
            unordered_map
            unordered_multimap

        Container Adapters (Derived Containers):
            stack
            queue
            priority_queue
        
        1. Vector(Sequential Container) :
           -> It is a dynamic array that can grow or shrink in size.
           -> It allows random access and is efficient for accessing by index. O(1)
           -> Slower for frequent insertion and deletions in the middle.

        common operations :
            1. push_back() : Add elements to the end.
            2. pop_back() : Removes the last element.
            3. at(index) : Access the element at a specific index.
            4. size() : return the number of elements.
            5. reverse() : reverse the vector
    
        Example :

            #include <iostream>
            #include <vector>
            using namespace std;

            int main() {

                vector<int> v = {10, 20, 30};

                v.push_back(40); // Add an element
                v.pop_back();    // Remove the last element

                cout << "Vector elements : "<<endl;
                for (int i = 0 ; i < v.size() ; i++ )
                {
                    cout<<v[i]<<" ";
                }

                return 0;
            }


3. What is a sequential container? List various sequential containers. Compare arrays and vectors. 
-->
    1. Sequential Containers :
        Stores elements in a linear sequence.
        Elements of these containers can be accessed using iterators.
        Examples :-
                vector , deque , list.
    
    List of Sequential Containers
        
        vector:
            A dynamic array that can grow or shrink in size.
            Provides random access to elements.

        deque (Double-Ended Queue):
            Allows insertion and deletion from both ends.
            Similar to vector but more efficient for operations at both ends.

        list:
            A doubly-linked list.
            Efficient for frequent insertions and deletions at any position but does 
                not support random access.
        
        forward_list:
            A singly-linked list.
            More memory efficient than list but limited functionality (no reverse traversal).
        
        array:
            It is ordered collection of elements.
            Has fixed size.
            Provides random access and static allocation.
    

    	|  Array	                              |    Vector
        |-----------------------------------------|----------------------------------------------------
   1) 	|   Fixed at compile time.	              |    Dynamic can grow or shrink.
   2)   |   Allocated on the stack (usually).	  |    Allocated on the heap.
   3)	|   Cannot be resized.	                  |    Resizes automatically as needed.
   4)   |   Random access via index.	          |    Random access via index.
   5)   |   Efficient use of memory               |	   Lot of memory is wasted due to 
                                                  |      dynamic allocation.
   6) 	|   Can be initialized with values.	      |    Can be initialized and expanded easily.
   7)   |   Suitable for fixed-size data.	      |    Suitable for dynamic data.



4. Differentiate between sequence containers and associative containers in the STL. Provide examples of each.
-->

    Comparison: Sequence Containers vs Associative Containers

    | SEQUENCE CONTAINERS                              | ASSOCIATIVE CONTAINERS                            
    |--------------------------------------------------|---------------------------------------------------
 1) | Store elements in a linear sequence.             | Store elements in an associative manner using keys.

 2) | Elements are stored in the order of insertion.   | Elements are sorted based on keys.

 3) | Access elements by index or through iteration.   | Access elements by key or through iteration.     

 4) | Efficient for sequential access, insertion,      | Efficient for searches, insertion, and deletion   
    |   and deletion at the end.                       |    based on keys.                                

 5) | Based on arrays or linked lists.                 | Based on balanced binary trees (e.g., map) or     
    |                                                  |    hash tables (e.g., unordered_map).           

 6) | Supports random access (e.g., vector, deque).    | Does not support random access; relies on keys. 

 7) | Allows duplicate elements (e.g., vector, deque). | Allows duplicates in multiset and multimap but 
    |                                                  |    not in set or map.                         

 8) | Examples: vector, deque, list, array.            | Examples: set, map, multiset, multimap, unordered_map.




5. Discuss the advantages of using container adapters in the STL. Provide examples of container adapters.
-->
    Container adapters in the Standard Template Library (STL) are specialized containers 
        built on top of other STL containers. They provide a restricted interface for managing 
            data in specific ways. The three container adapters in the STL are stack, queue, and priority_queue.

    Advantages:
        1) Simplified Interface : They provide a minimal set of operations (e.g., push, pop) for
                specific use cases.
        2) Efficiency : Optimized for their intended purposes like LIFO (stack) or FIFO (queue).
        3) Encapsulation : Hide the complexity of the underlying container.
        4) Flexibility : Can use different base containers (e.g., deque, vector).
        5) Improved Readability : Clear and intuitive behavior improves code clarity.

    Example :
    
        1) Stack :
            The stack adapter implements a Last-In-First-Out (LIFO) data structure.

                #include <iostream>
                #include <stack>
                using namespace std;

                int main() {
                    stack<int> s;

                    s.push(10); // Push elements onto the stack
                    s.push(20);
                    s.push(30);

                    cout <<"Top element = "<<s.top()<<endl;

                    s.pop(); // Remove the top element
                    cout<< "After pop. Top element = "<<s.top()<<endl;

                    return 0;
                }

                Output:
                    Top element = 30  
                    After pop. Top element = 20


        2) Queue :
            The queue adapter implements a First-In-First-Out (FIFO) data structure.

                #include <iostream>
                #include <queue>
                using namespace std;

                int main() {
                    queue<int> q;

                    q.push(20); // Add elements to the queue
                    q.push(30);
                    q.push(40);

                    cout<<"Front = "<<q.front()<< endl;
                    cout<<"Back = "<<q.back()<< endl;

                    q.pop(); // Remove the front element
                    cout <<"After pop. Front = "<<q.front()<<endl;

                    return 0;
                }

                Output:
                    Front = 20
                    Back = 40 
                    After pop. Front : 30

        3) Priority Queue :
            The priority_queue adapter maintains elements in a sorted order, with the largest 
                element at the top by default.

                #include <iostream>
                #include <queue>
                using namespace std;

                int main() {
                    priority_queue<int> pq;

                    pq.push(30); // Add elements
                    pq.push(10);
                    pq.push(20);

                    cout<<"Top element = "<<pq.top()<<endl;

                    pq.pop(); // Remove the largest element
                    cout<<"After pop. Top element : "<<pq.top()<<endl;

                    return 0;
                }
                
                Output:
                    Top element = 30  
                    After pop. Top element = 20
*/