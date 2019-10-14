/**
 * @file     insertion_sort.hpp
 * @author   Student Name
 * @version  Feb 17, 2019
 * John Quan
 * @brief
 */

#ifndef INSERTION_SORT_HPP_
#define INSERTION_SORT_HPP_

#include <vector>
using std::vector;

 /**
  * Sort a vector of integers with insertion sort method
  * @param data vector of integers
  */
void insertionSort(vector<int>& data);

/**
 * Compare two int vectors for equality
 * @param v1 first vector to compare
 * @param v2 second vector to compare
 * @return True if vectors are equal
 */
bool isEqual(const vector<int>& v1, const vector<int>& v2);

/**
 * Print an integer vector
 * @param vec vector of integers
 */
void printVector(const vector<int>& vec);

#endif /* INSERTION_SORT_HPP_ */