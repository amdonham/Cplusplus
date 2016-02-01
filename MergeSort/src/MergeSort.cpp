//============================================================================
// Name        : MergeSort.cpp
// Author      : Alan Donham
// Version     : 1
// Description : Merge Sort
//============================================================================

#include <iostream>
#include <list>

using namespace std;

list<int> mergeSort(list<int> values){
	//Base case to end our recursion
	if(values.size() == 1){return values;}

	/////////////Split the list into 2 lists of size n/2///////////////
	list<int> firstHalf;
	list<int> secondHalf;
	list<int>::iterator it = firstHalf.begin();
	list<int>::iterator vals = values.begin();
	int size;
	if(values.size()%2 == 0){size = values.size()/2;}
	else{
		size = (values.size()+1)/2;
	}
	for(int i = 0; i < size; i++){
		firstHalf.insert(it,*vals);
		++it;
		++vals;
	}
	it = secondHalf.begin();
	for(int i = size; i < values.size();i++){
		secondHalf.insert(it,*vals);
		++it;
		++vals;
	}

	//Recursive call on the lists we split in half
	firstHalf = mergeSort(firstHalf);
	secondHalf = mergeSort(secondHalf);

	//Merge the result of the recursive calls and sort while we merge
	list<int> returnArray;
	list<int>::iterator itF = firstHalf.begin();
	list<int>::iterator itS = secondHalf.begin();
	while(returnArray.size() < (firstHalf.size() + secondHalf.size())){
		if(*itF <= *itS){
			returnArray.push_back(*itF); ++itF;
		}
		else{returnArray.push_back(*itS); ++itS;}
	}

	return returnArray;
}

int main() {
	cout << "Starting merge sort...." << endl;
	list<int> array;
	array.push_back(7);
	array.push_back(1);
	array.push_back(2);
	array.push_back(3);
	array.push_back(0);
	array = mergeSort(array);
	list<int>::iterator it = array.begin();
	for(int i = 0; i < array.size(); i++){
		cout<<*it<<endl;
		++it;
	}
	return 0;
}


