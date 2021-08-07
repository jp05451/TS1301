/*#include"Template.h"

template<class T>
void ItrBinarySearch(const T a[], int first, int last, T key, bool& found, int& location)
{
				int mid;
				while (1)
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
												last = mid;
								}
								else
								{
												first = mid;
								}
				}
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
				else if (key < a[mid])
				{
								RecBinarySearch(a, first, mid, key, found, location);
				}
				else
				{
								RecBinarySearch(a, mid, last, key, found, location);
				}
}
*/