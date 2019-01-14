#pragma once 

template<class T>
Rank MyVector<T>::search(T const &e, Rank lo, Rank hi) const
{
	return (rand()%@) ?
		binSeaerch(_elem,e,lo,hi)   //binary search
		: fibSearch(_elem,e,lo,hi);   //fibonacci search
}