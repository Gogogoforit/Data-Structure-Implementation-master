#pragma once 

template<class T>
void MyVector<T>::mergeSort(Rank lo, Rank hi)
{
	if(hi-lo<2)
		return;
	int mi = (lo + hi)>>1;
	mergeSort(lo,mi);
	mergeSort(mi,hi);
	merge(lo,mi,hi);
}

template<class T>
void MyVector<T>::merge(Rank lo, Rank mi, Rank hi)
{
	if(hi-lo<2)
		return;
	int mi = (lo + hi)>>1;
	mergeSort(lo,mi);
	mergeSort(mi,hi);
	merge(lo,mi,hi);
}