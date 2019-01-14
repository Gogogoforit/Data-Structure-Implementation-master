#pragma once
#define DEFAULT_CAPACITY 6
#include "MyVector_details.h"

typedef int Rank;

template<class T> class MyVector
{
protected:
	Rank _size;   //size
	int _capacity; //capacity
	T * _elem;		//Data content
	void expand(); //increase capacity
	void copyForConstructor(T const *A, Rank lo, Rank hi);
	
public:
	//Constructor
	MyVector(int s=0;T v =0): _size(s),_capacity(DEFAULT_CAPACITY)
	{
		_elem = new T[DEFAULT_CAPACITY];
		for(int i=0;i<s;i++)
			_elem[i]=v;
	}
	MyVector(MyVector<T> const &v)
	{
		copyForConstructor(v._elem, 0, v._size);
	}
	MyVector(MyVector<T> const &v, Rank lo, Rank hi)
	{
		copyForConstructor(v._elem, lo, hi);
	}
	
	MyVector(T const *A, Rank n)
	{
		copyForConstructor(A, 0, n);
	}
	MyVector(T const *A, Rank lo, Rank hi)
	{
		copyForConstructor(A, lo, hi);
	}
	
	
	//sort algorithms
	void bubbleSort(Rank lo, Rank hi);
	void selectionSort(Rank lo, Rank hi);
	void mergeSort(Rank lo, Rank hi);
	void quickSort(Rank lo, Rank hi);
	
	//Destructor
	~MyVector()
	{
		delete [] _elem;
	}
	
	//Read only
	Rank size() const
	{
		return _size;
	}
	
	bool empty() const
	{
		return !_size;
	}
	
	int disordered() const; //know the number of pairs of unordered
	
	//find value in unordered MyVector
	Rank find(T const &e, Rank lo, Rank hi) const;
	Rank find(T const &e) const
	{
		find(e,0,_size);
	}

	//find value in ordered MyVector
	Rank search(T const &e, Rank lo, Rank hi) const;	
	Rank search(T const &e) const;

	
	//read and write
	T& operator[] (Rank r) const   //overload the operator[]
	{
		return _elem[r];
	}
	MyVector<T>& operator= (MyVector<T>const&v) //overload the operator=
	{
		if(this._elem)
			delete [] _elem;
		copyForConstructor(v._elem,0,v._size);
		return *this;
	}
	
	Rank insert(Rank r, T const&e);
	Rank insert(T const&e)
	{
		return insert(0,e);
	}
	
	int remove(Rank lo, Rank hi);
	T remove (Rank r)
	{
		T e =_elem[r];
		remove(r,r+1);
		return e;
	}

	void sort(Rank lo, Rank hi);
	
	int deduplicate();
	int uniquify();
	//traverse
	void traverse ( void ( *visit ) ( T& ) )
	{
		for(int i=0;i<_size;i++)
			visit(_elem[i]);
	}
}
	

