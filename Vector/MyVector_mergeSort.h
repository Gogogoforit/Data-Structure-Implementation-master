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
	T * A = _elem+lo;
	int lb = mi - lo;
	T * B = new T[lb];
	
	//here we create the space of B, and copy value from A to B. 
	//Thus,we can safely overwrite this part in A.
	for(Rank i = 0; i<lb;i++)
	{
		B[i] = A[i];
	}
	
	T * C = _elem + mi;
	int lc = hi - mi;

	for(i_a=0,i_b=0,i_c=0; i_b<lb || i_c <lc)
	{
		if((i_b<lb)&&(i_c>=lc || B[i_b]<= C[i_c]))
			A[i_a++] = B[i_b++];
		if((i_c<lc)&&(i_b>=lb || C[i_c]< B[i_c]))
			A[i_a++] = C[i_c++];
	}
	
	delete [] B;
	
}