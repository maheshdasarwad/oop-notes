/*
Application of Container :
1. State functions of a vector in STL. Write a program to explain the same.
-->
    Functions of a Vector in STL
        A vector is a dynamic array in the STL that supports the following key functions:

    Capacity Functions:
        size()      : Returns the number of elements.
        capacity()  : Returns the size of the allocated storage.
        resize(n)   : Changes the number of elements.
        empty()     : Checks if the vector is empty.

    Modifiers:
        push_back(val)  : Adds an element to the end.
        pop_back()      : Removes the last element.
        insert(pos, val): Inserts an element at a specific position.
        erase(pos)      : Removes an element at a specific position.
        clear()         : Removes all elements.

    Element Access:
        operator[]  : Accesses elements by index.
        at(index)   : Accesses elements with bounds checking.
        front()     : Returns the first element.
        back()      : Returns the last element.
    
    Iterators:
        begin()     : Returns an iterator to the beginning.
        end()       : Returns an iterator to the end.

    
    Example :

        #include <iostream>
        #include <vector>
        using namespace std;


        void display(vector<int> &v)
        {
            if(v.empty())
            {
                cout<<"\nEmpty Vector..!"<<endl;
                return;
            }
            for(int i = 0 ; i < v.size() ; i++)
            {
                cout<<v[i]<<" ";
            }
            cout<<endl;
        }

        int main() {
            vector<int> v;

            // Modifiers
            cout<<"\nModifiers ---> "<<endl;
            v.push_back(10);
            v.push_back(20);
            v.push_back(30); 
            display(v);
            
            v.pop_back(); // Remove last element
            cout<<"After pop : ";
            display(v);

            v.insert(v.begin(), 15); // Insert 15 at index 0
            cout<<"After insertion : ";
            display(v);

            v.erase(v.begin()); // Remove the first element
            cout<<"After erase : ";
            display(v);

            // Capacity Functions
            cout<<"\nCapacity Functions ---> "<<endl;
            cout <<"Size : " <<v.size()<<endl;
            cout <<"Capacity : "<< v.capacity()<<endl;

            // Element Access
            cout<<"\nElement Access ---> "<<endl;
            cout <<"First element : "<<v.front()<<endl;
            cout <<"Last element : "<<v.back()<<endl;

            return 0;
        }
        /*
        OUTPUT :
            Modifiers ---> 
            10 20 30 
            After pop : 10 20 
            After insertion : 15 10 20 
            After erase : 10 20 

            Capacity Functions ---> 
            Size : 2
            Capacity : 4

            Element Access ---> 
            First element : 10
            Last element : 20
        */


/*
3. How can vectors and lists be used as sequence containers in the STL? Explain with an appropriate example. 
-->
    Both vectors and lists are sequence containers in the STL used to store elements 
        in a linear order.
    The key difference lies in implementation and the operations they are optimized for.

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

                cout << "Vector elements : "<<endl;
                for (int i = 0 ; i < v.size() ; i++ )
                {
                    cout<<v[i]<<" ";
                }

                cout<<"\nAt index 2 = "<<v.at(2)<<endl;
                return 0;
            }

    2. List (Sequential Container)
        A list is a doubly linked list that allows efficient insertion 
            and deletion anywhere in the sequence.
        It does not support random access, so traversal is done sequentially.
        Best for scenarios where frequent insertion and deletion are needed.
        
        Common Operations:
            push_back(): Adds an element to the end.
            push_front(): Adds an element to the front.
            pop_back(): Removes the last element.
            pop_front(): Removes the first element.
            insert(): Inserts an element at a specific position.
            size(): Returns the number of elements.
            reverse(): Reverses the order of elements in the list.
        Example:
      
            #include <iostream>
            #include <list>
            using namespace std;

            void display(list<int> &l)
            {
                cout <<"List elements: ";
                for (int i : l) {
                    cout<< i <<" ";
                }
                cout<<endl;
            }

            int main() {

                list<int> l = {10, 20, 30};

                cout<<"\nAfter push --> "<<endl;
                l.push_back(40);  
                l.push_front(5); 
                display(l);

                cout<<"\nAfter pop --> "<<endl;
                l.pop_back();  
                l.pop_front(); 
                display(l);

                cout<<"\nSize of the list : "<< l.size()<< endl;

                cout<<"\nAfter reverse --> "<<endl;
                l.reverse(); // Reverse the list
                display(l);

                return 0;
            }

        /* 
        Output:
            After push --> 
            List elements: 5 10 20 30 40 

            After pop --> 
            List elements: 10 20 30 

            Size of the list : 3

            After reverse --> 
            List elements: 30 20 10
*/
