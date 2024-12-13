/*
Iterator
1. What is an iterator? Explain how to use an iterator in a C++ program with an example.
-->
    Iterator :
        It is an object that allows a program to traverse through the elments of a container
            like vector, list, set etc.
        It provides a generalized way to access the elements of containers, making it easier to work 
            with different types of containers in a unifrom manner.
        
        Different Types:
            1. Input iterator  : For reading elements.
            2. Output iterator : For writing elements.
            3. Forward iterator : Allows one-way traversal.
            4. Bidirectional iterator  :  Allows traversal in both directions.
            5. Random-access iterator  :  Allows accessing elements using indices.
        
        Common Iterator Operations
            Dereference : *it to access the value pointed by the iterator.
            Increment : ++it to move to the next element.
            Decrement : --it (for bidirectional and random-access iterators).
            Comparison : it1 == it2 or it1 != it2 to check if two 
                            iterators are equal or not.
        
        Example :-

            #include <iostream>
            #include <vector>
            using namespace std;

            int main() {
            //S1 : Initialize a vector
                vector<int> v = {10, 20, 30, 40, 50};
            
            //S2 : Create an iterator to traverse the vector
                vector<int>::iterator i;

            //S3 : Traverse the vector using the iterator
                cout<<"Using iterator to display vector elements --> "<<endl;
                for(i = v.begin() ; i != v.end() ; i++) {
                    cout<<*i<<" ";
                }
                cout<<endl;

            //S4 : Modify an element using the iterator
                cout<<"\nModified vector using iterator --> "<<endl;
                *v.begin() = 100;
                for(i = v.begin() ; i != v.end() ; i++) {
                    cout<<*i<<" ";
                }
                cout<<endl;

                return 0;
            }
*/

/*

2. Explain the concept of iterators in STL. Differentiate between iterators and pointers.
-->
/*
Iterator vs Pointer Comparison:

    Iterator:
        - An object that allows traversal through the elements of a container.
        - Provide a general interface for accessing container elements in STL.
        - Designed for specific container types (like vector, list, etc.)
        - Provide various access types such as input, output, bidirectional, 
            or random access depending on the container.
        - Iterators use begin() and end() to specify the range of elements in a container. 
        - Iterators provide safe bounds checking and prevent accessing elements outside the container.
        - Provide flexibility in traversing containers in various ways (e.g., random access, bidirectional).
        - Widely used in STL algorithms
        - Example : 
                vector<int>::iterator it = v.begin();

    Pointer:
        - A variable that holds the memory address of another variable.
        - A low-level concept used for direct memory access.
        - Independent of containers and not tied to any specific container type.
        - Direct access to any memory location.
        - Manipulated using * (dereference) and & (reference) operators.
        - Do not provide bounds checking, and accessing invalid memory locations 
            can lead to undefined fault.
        - Povide flexibility in direct memory manipulation but lack container-awareness.
        - Used in any context where direct memory access is needed.
        - Example: 
                int* ptr = &value;


*/




/*
3. What is the purpose of an iterator and an algorithm? Explain each with an example.

*/