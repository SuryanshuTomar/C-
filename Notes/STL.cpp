// https://www.geeksforgeeks.org/the-c-standard-template-library-stl/

// => What is STL ?
// - STL stands for Standard Template Library.
// - The Standard Template Library (STL) is a set of C++ template classes to provide common programming data structures and functions such as lists, stacks, arrays, etc. It is a library of container classes, algorithms, and iterators. It is a generalized library and so, its components are parameterized. A working knowledge of template classes is a prerequisite for working with STL.

// - STL has four components - 
// 1. Algorithms
// 2. Containers
// 3. Functions
// 4. Iterators


// 1. Algorithms - 
// - The header algorithm defines a collection of functions especially designed to be used on ranges of elements.They act on containers and provide means for various operations for the contents of the containers.

// - Algorithm - 
//    a. Sorting
//    b. Searching
//    c. Important STL Algorithms // https://www.geeksforgeeks.org/c-magicians-stl-algorithms/
//    d. Useful Array algorithms // https://www.geeksforgeeks.org/useful-array-algorithms-in-c-stl/
//    e. Partition Operations    // https://www.geeksforgeeks.org/stdpartition-in-c-stl/

// - Numeric - 
//    a. valarray class


// 2. Containers - 
// - Containers or container classes store objects and data. There are in total seven standard “first-class” container classes and three container adaptor classes and only seven header files that provide access to these containers or container adaptors.

// a. Sequence Containers: implement data structures which can be accessed in a sequential manner.
//    - vector
//    - list
//    - deque
//    - arrays
//    - forward_list( Introduced in C++11)

// b. Container Adaptors : provide a different interface for sequential containers.
//    - queue
//    - priority_queue
//    - stack

// c. Ordered Associative Containers : implement sorted data structures that can be quickly searched (O(log n) complexity).
//    - set
//    - multiset
//    - map
//    - multimap

// d. Unordered Associative Containers : implement unordered data structures that can be quickly searched
//    - unordered_set (Introduced in C++11)
//    - unordered_multiset (Introduced in C++11)
//    - unordered_map (Introduced in C++11)
//    - unordered_multimap (Introduced in C++11)



// 3. Functions -
// - The STL includes classes that overload the function call operator. Instances of such classes are called function objects or functors. Functors allow the working of the associated function to be customized with the help of parameters to be passed.
// a. Functors


// 4. Iterators - 
// - As the name suggests, iterators are used for working upon a sequence of values. They are the major feature that allow generality in STL.
// - Containers works just like pointers. The Difference between the two of them is that pointers are used to hold the memory address of any vairables whereas iterators are used to hold the memory address of the containers of STL Library.
// a. Iterators


// 5. Utility Library
// a. Defined in header <utility>.
//    - pair

// More on - 
// https://www.geeksforgeeks.org/the-c-standard-template-library-stl/