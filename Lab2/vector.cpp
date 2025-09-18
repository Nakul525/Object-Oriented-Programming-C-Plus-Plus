#include <iostream>
#include <vector>

using namespace std;
/**
* @brief prints the elements in the vector and their memory locations
*
* @param v - vector of integers
*/
void printMemVec(const vector<int>& v){
   for (size_t i = 0; i < v.size(); ++i) {
        cout << "Element [" << i << "] = " << v[i] << " | Address = " << &v[i] << endl;
    }
}

/**
 * @brief increments all of the elements in v by 10
 * 
 * @param v - address to a vector of integers
 */
void ncVecBy10( vector<int>& v) {
    for (size_t i = 0; i < v.size(); i++) {
        v[i] += 10;
    }
}

int main() {
    // create a constant integer called SIZE that is of value 5
    const int SIZE = 5;
    // create a vector of integers called vec that can hold up to 5 elements
    vector<int> vec;
    vec.reserve(SIZE);
    //use a for loop to populate vec with the values 100 to 104
    for(int i = 0; i < SIZE; i++){
        vec.push_back(100 + i);
    }
    printf("Before Increment----------\n");
    //call printMemVec ( ... ) on vec
    printMemVec(vec);
    //call ncVecBy10( vec ) on vec
    ncVecBy10(vec);
    printf("After Increment----------\n");
    //call printMemVec( ... ) on vec again to view the changes
    printMemVec(vec);
    // remove last element of vec
    vec.pop_back();
    // (refer to docs https://cplusplus. com/reference/vector/vector/#google_vignette)

    printf("After Pop ------------ \n");
    //call printMemVec( ... ) on vec again to view the changes
    printMemVec(vec);
    // append 101 and 102 at the end of vec
    vec.push_back(101);
    vec.push_back(102);
    // (refer to docs https://cplusplus.com/reference/vector/vector/#google_vignette)

    printf("After Push------------\n");
    //call printMemVec( ... ) on vec again to view the changes
    
    printMemVec(vec);
    return 0;

}