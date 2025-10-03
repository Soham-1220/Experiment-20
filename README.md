# Experiment-20

##  AIM
The aim of this project is to implement and understand different **searching algorithms** in C++ using arrays. Searching is a fundamental operation in computer science, used to locate the presence or absence of an element in a dataset.  

This project demonstrates:  
1. **Linear Search (inline)** – Searching element by scanning through each array index.  
2. **Linear Search (function-based)** – Modularized implementation for reusability.  
3. **Binary Search (iterative)** – Efficient search technique on sorted arrays by repeatedly dividing the search range.  



##  THEORY

### 1. Introduction to Searching
**Searching** is the process of finding the location of a specific element (called the **key**) in a collection of data (like an array or list). It is one of the most fundamental tasks in computer science and forms the basis of higher-level algorithms.  

Searching methods are broadly classified into:  
- **Sequential (Linear) Search** – Unordered or ordered lists.  
- **Binary Search** – Ordered lists only, highly efficient.  
- **Advanced methods** – Hashing, interpolation search, etc.  



### 2. Linear Search
- The simplest searching technique.  
- Works by checking each element of the array one by one until the desired key is found or the array ends.  
- **Best Case**: Key found at the first position.  
- **Worst Case**: Key not found or found at the last position.  
- **Time Complexity**: O(n)  
- **Space Complexity**: O(1)  



### 3. Binary Search
- A much more efficient technique, but it **requires a sorted array**.  
- Works by repeatedly dividing the search interval into halves.  
  1. Compare the key with the middle element.  
  2. If key equals mid → success.  
  3. If key < mid → search in left half.  
  4. If key > mid → search in right half.  
- **Best Case**: Key is at the middle element (O(1)).  
- **Worst Case**: O(log n), because the search interval halves at each step.  
- **Space Complexity**: O(1) for iterative version.  



### 4. Comparison Between Linear and Binary Search
| Feature              | Linear Search        | Binary Search            |
|----------------------|----------------------|--------------------------|
| Array requirement    | Works on **any** array | Requires **sorted** array |
| Time Complexity      | O(n)                 | O(log n)                 |
| Best Case            | O(1)                 | O(1)                     |
| Worst Case           | O(n)                 | O(log n)                 |
| Space Complexity     | O(1)                 | O(1)                     |
| Simplicity           | Very simple          | Requires sorting + logic |
| Usage                | Small/unsorted data  | Large/sorted datasets    |



### 5. Real-Life Applications
- **Linear Search**  
  - Small datasets where sorting is unnecessary.  
  - Searching names in attendance lists.  
  - Detecting the presence of a keyword in small text files.  

- **Binary Search**  
  - Large, sorted datasets (e.g., phone directories).  
  - Searching in databases and libraries.  
  - Optimizations in competitive programming.  
  - Used in algorithms like divide-and-conquer methods, searching in dictionaries.  



##  ALGORITHM

### 1. Linear Search (Inline)
**Steps:**
1. Input the array.  
2. Input the key element to search.  
3. Loop through the array from index `0` to `n-1`.  
4. If element at `arr[i] == key`, return the index.  
5. If loop ends without finding, report "not found".  




### 2. Linear Search (Function-Based)
**Steps:**
1. Define a function `sequentialSearch(arr, n, key)`.  
2. Loop through array indices.  
3. If `arr[i] == key`, return index.  
4. If no match found, return -1.  
5. In main, call the function and print the result.  




### 3. Binary Search
**Steps:**
1. Input a sorted array.  
2. Input the key element to search.  
3. Set `low = 0, high = n-1`.  
4. While `low <= high`:  
   - Find `mid = (low + high)/2`.  
   - If `arr[mid] == key`, return mid.  
   - If `arr[mid] < key`, set `low = mid + 1`.  
   - Else set `high = mid - 1`.  
5. If not found, return -1.  




##  CONCLUSION

The three programs implemented—two variations of **linear search** and one **binary search**—demonstrate different approaches to solving the fundamental problem of searching for an element within a dataset. By working through these implementations, we gained both practical programming skills and deeper conceptual insights.

### 1. Linear Search Insights
- Linear search is simple, easy to implement, and works on both **sorted and unsorted arrays**.  
- Its major drawback is inefficiency for large datasets because every element may need to be checked.  
- For small datasets, linear search is effective, and its simplicity makes it useful for quick checks or prototype development.  

### 2. Binary Search Insights
- Binary search is **highly efficient** with logarithmic time complexity, making it ideal for large datasets.  
- However, it requires the dataset to be **sorted in advance**, which may itself be costly if sorting is not already done.  
- The algorithm illustrates the power of the **divide-and-conquer approach**: reducing the problem size by half at every step.  

### 3. Comparison and Trade-offs
- **Linear search** is universal (works everywhere), but inefficient for large data.  
- **Binary search** is efficient, but only if the array is sorted.  
- The choice of search algorithm depends on the **size of data**, **whether sorting is feasible**, and **the number of searches required**.  

For example:  
- If you only need to search once in a small unsorted dataset, linear search is better.  
- If you need to perform multiple searches on a large dataset, sorting once and then applying binary search repeatedly is more efficient.  

### 4. Broader Relevance
These search techniques are not limited to arrays—they form the foundation of searching strategies in databases, file systems, operating systems, and even artificial intelligence. In modern systems:  
- Binary search is often hidden inside libraries and APIs (e.g., `std::binary_search` in C++ STL).  
- Linear search remains relevant when data is small, dynamic, or unsorted.  

### 5. Conceptual Learning
From these programs, we learned:  
- **Algorithmic Thinking**: Breaking down problems into precise steps (looping, checking, branching).  
- **Complexity Analysis**: Time complexity determines which algorithm is suitable for different cases.  
- **Error Handling**: Programs should correctly report when an element is not found.  
- **Programming Modularity**: Function-based linear search improves reusability and readability compared to inline loops.  

### 6. Extended Reflection (~500 words)
The exercise of implementing both linear and binary search goes beyond coding—it introduces us to the **essence of algorithm design and efficiency analysis**. At a basic level, both algorithms answer the same question: *Does the element exist in the dataset, and where?* Yet, the methods differ dramatically in how they approach the problem.

The **linear search** reflects brute-force methodology: it does not make assumptions about the dataset. It simply checks every element until it finds the key. This universality makes it robust, but the cost is evident when the dataset grows large. Imagine searching for a person’s name in a phonebook by reading every entry sequentially—it works, but inefficiently.

On the other hand, **binary search** exploits order. By requiring a sorted dataset, it dramatically improves efficiency. Instead of linearly checking, it uses logic to discard half of the dataset at each step. This divide-and-conquer approach embodies algorithmic elegance: a few comparisons can locate an element in a dataset of millions. For instance, searching in a digital library or dictionary is feasible only because of binary search principles.

These programs also highlight the importance of **choosing the right algorithm for the right context**. In real-world applications, trade-offs between preprocessing cost (sorting), runtime efficiency, and memory constraints guide our decisions. A student learning these algorithms is essentially learning how to think like a computer scientist—balancing simplicity, efficiency, and context-awareness.

Furthermore, searching algorithms connect directly to other advanced areas:  
- In **data structures**, binary search trees generalize binary search.  
- In **databases**, indexing relies on efficient search strategies.  
- In **artificial intelligence**, heuristic search expands upon basic searching concepts.  

Thus, even though linear and binary search are often taught early in programming, they remain fundamental to understanding more complex systems. They teach not only how to search but also **how to reason about problem-solving strategies**.  
