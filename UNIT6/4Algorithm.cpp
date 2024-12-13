/*
Algorithm
1. What are the various algorithms available in STL ? Explain any one with a C++ program.
-->
    Algorithms :
        are collection of steps.
        acts on containers.
        used to perform the operations on container objects.
    
    Various algorithms available in STL :-
    1. Searching Algorithm :
        find : Search for an element in a range.
        binary_search : Checks if an element exists in a sorted range.
        lower_bound : Finds the first position where a value can be
                         inserted to maintain order.
        upper_bound : Finds the last position where a value can be 
                            inserted to maintain order.
    
    2. Sorting Algorithms:
        sort    : Sorts elements in ascending order by default.
        partial_sort    : Sorts the first n elements of a range.
        stable_sort : Sorts elements while preserving relative order.
        is_sorted   : Checks if a range is sorted.
    
    3. Min-Max Algorithms:
        min : Returns the smaller of two values.
        max : Returns the larger of two values.
        min_element : Finds the smallest element in a range.
        max_element : Finds the largest element in a range.
    
    4. Set Operations:
        set_union   : Combines two sorted ranges into one.
        set_intersection    : Finds common elements between two sorted ranges.
        set_difference  : Finds elements in the first range not present in the second.
        set_symmetric_difference    : Finds elements exclusive to each range.
    
    5. Heap Operations:
        make_heap   : Converts a range into a max-heap.
        push_heap   : Adds an element to a heap.
        pop_heap    : Removes the largest element from a heap.
        sort_heap   : Sorts a heap into ascending order.

    Example :-

        #include <iostream>
        #include <vector>
        #include <algorithm> // Required for algorithms
        using namespace std;

        void display(vector<int> &v)
        {
            for(int i : v)
            {
                cout<< i <<" ";
            }
            cout<<endl;
        }

        int main() {

            vector<int> v = {50, 20, 30, 10, 40};

            // Sorting
            cout<<"\nSorting-->"<<endl;
            sort(v.begin(), v.end());
            cout <<"Sorted : ";
            display(v);
            
            // Min and Max Element
            cout<<"\nMin-Max -->"<<endl;
            cout<<"Min element : "<<*min_element(v.begin(), v.end())<<endl;
            cout<<"Max element : "<<*max_element(v.begin(), v.end())<<endl;

            // Binary Search
            cout<<"\nBinary Search -->"<<endl;
            bool found = binary_search(v.begin(), v.end(), 30);

            if(found == true) cout<<"Found in the list"<<endl;
            else cout<<"Not Found in the list"<<endl;
            return 0;

        }

        OUTPUT :
            Sorting -->
            Sorted : 10 20 30 40 50 

            Min-Max -->
            Min element : 10
            Max element : 50

            Binary Search -->
            Found in the list
*/

/*
2. Describe the process of using STL algorithms for Quick sort
-->
    Process of using STL algorithms for Quick sort :

    1. Include the <algorithm> and <vecotr> headers to provide 
        access to std::sort and containers like std::vector.
    2. Prepare your data by using container like vector, array etc. to
         hold the elements you want to sort.
    3. call the std::sort function :
            default behaviour - sort in ascending order using the < operator.
            custom comparator - provide a custom comparison function 
                                    to modify the sorting order.
    4. Iterate and display the sorted data using loop.


        #include <iostream>
        #include <vector>
        #include <algorithm>
        using namespace std;

        void display(vector<int> &v) {
            if(v.empty()) {
                cout<<"\nEmpty vector..!";
                return;
            }

            for(int i : v) {
                cout<< i <<" ";
            }
            cout<<endl;
        }

        bool CustomComparator(int a, int b) {
            return a>b;
        }

        int main() {

        //S1 : initialize the vector
            vector<int> v = {50, 20, 30, 10, 40};

        //S2 : display of unsorted vector.
            cout<<"\nUnsorted --> "<<endl;
            display(v);

        //S3 : sort using std::sort (Quick sort internally)
            sort(v.begin() , v.end());
            cout<<"Default Sorted (Ascending) --> "<<endl;
            display(v);

        //S4 : sort in desending order using custom comparator
            cout<<"Custom Sorted (Decending) --> "<<endl;
            sort(v.begin() , v.end() , CustomComparator);
            display(v);

            return 0;
        }

*/

/*

3. Enlist algorithms and explain any algorithm in detail.
4. Explain the sort function with an example. 

*/