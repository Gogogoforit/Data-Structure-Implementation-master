#pragma once

template <typename T> 
void Vector<T>::selectionSort ( Rank lo, Rank hi ) { //assert: 0 < lo <= hi <= size
   while ( lo < --hi )
   {
	   Rank res_index = hi;
	   while(lo < hi--)
	   {
		   if(_elem[hi] > _elem[res_index])
			   res_index = hi;
	   }
	   
	   Rank temp = _elem[res_index];
	   _elem[res_index] = _elem[hi];
	   _elem[hi] = temp;
   }
      
}
