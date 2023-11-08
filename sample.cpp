// C++ implementation to reverse
// the substrings of the given String
// according to the given Array of indices

#include <bits/stdc++.h>
using namespace std;

// Function to reverse a string
void reverseStr(string& str,
				int l, int h)
{
	int n = h - l;

	// Swap character starting
	// from two corners
	for (int i = 0; i < n / 2; i++) {
		swap(str[i + l], str[n - i - 1 + l]);
	}
}

// Function to reverse the string
// with the given array of indices
void reverseString(string& s, int A[], int n)
{

	// Reverse the string from 0 to A[0]
	reverseStr(s, 0, A[0]);

	// Reverse the string for A[i] to A[i+1]
	for (int i = 1; i < n; i++)
		reverseStr(s, A[i - 1], A[i]);

	// Reverse String for A[n-1] to length
	reverseStr(s, A[n - 1], s.length());
}

// Driver Code
int main()
{
	string s = "abcdefgh";
	int A[] = { 2, 4, 6 };
	int n = sizeof(A) / sizeof(A[0]);

	reverseString(s, A, n);
	cout << s;

	return 0;
}
