#pragma once 

template<class T>
Rank MyVector<T>::find(T const &e, Rank lo, Rank hi) const;
{
		while((lo<hi--) && (e !=_elem[hi]));
		return hi; //if hi<lo, then we fail
					//Otherwise hi is the Rank for the found element.
}