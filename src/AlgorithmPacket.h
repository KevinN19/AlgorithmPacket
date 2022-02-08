/*
 * AlgorithmPacket.h
 *
 *  Created on: Feb 7, 2022
 *      Author: kngo
 */

#ifndef ALGORITHMPACKET_H_
#define ALGORITHMPACKET_H_

#include <vector>

class AlgorithmPacket {
public:

	enum SortType {
		SORT_TYPE_ASCENDING,
		SORT_TYPE_DESCENDING
	};

	// SelectionSort
	// Implementation of the SelectionSort sorting algorithm.
	// This method will sort the referenced array.
	static void SelectionSort(std::vector<int> &inputArray, SortType sortType);

private:


};


#endif /* ALGORITHMPACKET_H_ */
