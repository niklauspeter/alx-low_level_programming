SEARCH ALGORITHMS
including:

LINEAR SEARCH:

Linear search is a simple search algorithm that sequentially checks each element of the list until it finds an element that matches the target value. If the algorithm reaches the end of the list, the search terminates unsuccessfully.

The linear search algorithm works as follows:

Start at the beginning of the list.
Compare the current element to the target value.
If the current element is equal to the target value, then the algorithm has found the element and returns its index.
If the current element is not equal to the target value, then move to the next element in the list.
Repeat steps 2 and 3 until the end of the list is reached.
If the end of the list is reached and the target value has not been found, then the algorithm returns -1.
The linear search algorithm is a simple and easy-to-implement algorithm. However, it is not very efficient for large lists. The time complexity of linear search is O(n), where n is the length of the list. This means that the algorithm will need to make n comparisons in the worst case.

Here is an example of the linear search algorithm in Python:

Python
def linear_search(array, element):
    for index, value in enumerate(array):
        if value == element:
            return index
    return -1
Use code with caution. Learn more
This algorithm takes a constant amount of space, regardless of the size of the array. The only variables that the algorithm needs to store are the current index, the element to be searched for, and the array of elements. These variables are all integers, which only require a constant amount of space.

The linear search algorithm is a good choice for searching small lists or lists that are not sorted. However, for large lists or sorted lists, other search algorithms, such as binary search, are more efficient.

BINARY SEARCH

Binary search is a search algorithm that works on sorted arrays. The algorithm works by repeatedly dividing the search space in half and then comparing the target value to the middle element of the search space. If the target value is equal to the middle element, then the algorithm has found the element and returns its index. If the target value is less than the middle element, then the algorithm searches the lower half of the search space. If the target value is greater than the middle element, then the algorithm searches the upper half of the search space.

The binary search algorithm works as follows:

Start with the entire array as the search space.
Find the middle element of the search space.
Compare the target value to the middle element.
If the target value is equal to the middle element, then the algorithm has found the element and returns its index.
If the target value is less than the middle element, then the algorithm searches the lower half of the search space.
If the target value is greater than the middle element, then the algorithm searches the upper half of the search space.
Repeat steps 2 and 3 until the target value is found or the search space is empty.
The binary search algorithm is a very efficient algorithm for searching sorted arrays. The time complexity of binary search is O(log n), where n is the length of the array. This means that the algorithm will need to make log n comparisons in the worst case.

Here is an example of the binary search algorithm in Python:

Python
def binary_search(array, element):
    low = 0
    high = len(array) - 1
    while low <= high:
        mid = (low + high) // 2
        if array[mid] == element:
            return mid
        elif array[mid] < element:
            low = mid + 1
        else:
            high = mid - 1
    return -1
Use code with caution. Learn more
This algorithm takes a constant amount of space, regardless of the size of the array. The only variables that the algorithm needs to store are the low and high indices, the element to be searched for, and the array of elements. These variables are all integers, which only require a constant amount of space.

The binary search algorithm is a good choice for searching large sorted arrays. The algorithm is very efficient and can find the target value in a logarithmic number of comparisons.


JUMP SEARCH:

The jump search algorithm is a search algorithm for finding a specific element in a sorted array. The basic idea is to check fewer elements (than linear search) by jumping ahead by fixed steps or skipping some elements in place of searching all elements.

The jump search algorithm works as follows:

Calculate the block size, which is the square root of the array size.
Start at the first element of the array and jump ahead by the block size.
Compare the element at the current position to the search element.
If the element at the current position is equal to the search element, then the algorithm has found the element and returns its index.
If the element at the current position is less than the search element, then the algorithm continues jumping ahead by the block size until it finds an element that is greater than or equal to the search element.
If the element at the current position is greater than the search element, then the algorithm performs a linear search from the current position to the end of the array.
The jump search algorithm is a good choice for searching sorted arrays that are large enough that linear search would be inefficient. The jump search algorithm has a time complexity of O(√n), which is better than the time complexity of linear search (O(n)) but worse than the time complexity of binary search (O(log n)).

Here is an example of the jump search algorithm in Python:

Python
def jump_search(array, element):
    block_size = int(math.sqrt(len(array)))
    current_index = 0
    while current_index < len(array):
        if array[current_index] == element:
            return current_index
        elif array[current_index] < element:
            current_index += block_size
        else:
            break

    # Perform a linear search from the current position to the end of the array.
    linear_search_index = current_index
    while linear_search_index < len(array):
        if array[linear_search_index] == element:
            return linear_search_index
        linear_search_index += 1
    return -1
Use code with caution. Learn more
This algorithm takes a constant amount of space, regardless of the size of the array. The only variables that the algorithm needs to store are the current index, the element to be searched for, the block size, and the array of elements. These variables are all integers, which only require a constant amount of space.


Exponential search is a search algorithm that works on sorted arrays. The algorithm works by first finding the smallest power of 2 that is greater than the search element. The algorithm then starts at that power of 2 and performs a binary search on the range of elements that are at least that power of 2. If the element is found in the range, then the algorithm returns its index. If the element is not found in the range, then the algorithm returns -1.

EXPONENTIAL SEARCH ALGORITHM

The exponential search algorithm works as follows:

Find the smallest power of 2 that is greater than the search element.
Start at that power of 2 and perform a binary search on the range of elements that are at least that power of 2.
If the element is found in the range, then return its index.
If the element is not found in the range, then return -1.
The exponential search algorithm is a good choice for searching sorted arrays that are large enough that binary search would be inefficient. The exponential search algorithm has a time complexity of O(log log n), which is better than the time complexity of linear search (O(n)) and jump search (O(√n)) but worse than the time complexity of binary search (O(log n)).

Here is an example of the exponential search algorithm in Python:

Python
def exponential_search(array, element):
    """
    Perform an exponential search on the sorted array.

    Args:
        array: The sorted array.
        element: The element to be searched for.

    Returns:
        The index of the element in the array, if found, or -1 if not found.
    """

    i = 1
    while i < len(array) and array[i] < element:
        i = i * 2

    if i >= len(array):
        return -1

    low = i // 2
    high = i
    while low <= high:
        mid = (low + high) // 2
        if array[mid] == element:
            return mid
        elif array[mid] < element:
            low = mid + 1
        else:
            high = mid - 1

    return -1
Use code with caution. Learn more
This algorithm takes a constant amount of space, regardless of the size of the array. The only variables that the algorithm needs to store are the current index, the element to be searched for, the array of elements, and the smallest power of 2 that is greater than the search element. These variables are all integers, which only require a constant amount of space.

The exponential search algorithm is a good choice for searching large sorted arrays. The algorithm is very efficient and can find the target value in a logarithmic number of comparisons.