#pragma once 

template<class T>
void MyVector<T>::sort(Rank lo, Rank hi)
{
	switch(rand()%5){
		case 1: bubbleSort(lo, hi);
				break;
		case 2: selectionSort(lo, hi);
				break;		
		case 3: mergeSort(lo, hi);
				break;
		case 4: quickSort(lo, hi);
				break;					
		case 0: heapSort(lo, hi);
				break;			
	}
}