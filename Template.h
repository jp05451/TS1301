#pragma once
#include<iostream>
#include<string>

using namespace std;

/*template<class T>
void ItrBinarySearch(const T a[], int first, int last, T key, bool& found, int& location);

template<class T>
void RecBinarySearch(const T a[], int first, int last, T key, bool& found, int& location);*/

template<class T>
void ItrBinarySearch(const T a[], int first, int last, T key, bool& found, int& location)
{
				int mid;
				while (first<=last)
				{
								mid = (first + last) / 2;
								if (a[mid] == key)
								{
												location = mid;
												found = 1;
												return;
								}
								else if (key < a[mid])
								{
												last = mid-1;
								}
								else if (key > a[mid])
								{
												first = mid+1;
								}
				}
				location = mid;
				found = 0;
}

template<class T>
void RecBinarySearch(const T a[], int first, int last, T key, bool& found, int& location)
{
				int mid;
				mid = (first + last) / 2;
				if (a[mid] == key)
				{
								location = mid;
								found = 1;
								return;
				}
				else if (last<first)
				{
								location = 0;
								found = 0;
								return;
				}
				else if (key < a[mid])
				{
								RecBinarySearch(a, first, mid-1, key, found, location);
				}
				else if (key > a[mid])
				{
								RecBinarySearch(a, mid+1, last, key, found, location);
				}
}