//Tacuma Solomon
//Computer Science 3
/*Write a computer program that sums the first N elements of the following array using a recursive function.
Your program must first prompt the user to enter a value between 1 and 10. 
Then your program must use this integer as a parameter to a recursive function that computes the sum of the N integers in the array. 
Finally, your program must display the results.
int myarray[10] = {23, 45, 12, 67, 34, 90, 1, 75, 3, 6}; */

#include<iostream>
using namespace std;

int sum(int,int[]);
void Footer();

int main(){
	int n;
	int myarray[10] = {23, 45, 12, 67, 34, 90, 1, 75, 3, 6};
	cout << "This program sums up the first N elements of an array (N<=10)." << endl;
	cout << "Array = [23, 45, 12, 67, 34, 90, 1, 75, 3, 6]" << endl;
	do{
		cout << endl << "Enter an integer between  1 and 10: ";
		cin >> n;
		if ((n>10)||(n<1))
			cout << "Error. Integer is out of range." << endl;
	} while((n>10)||(n<1));
	int total  = sum(n,myarray);
	cout << endl << "Total of first " << n << " elements: " << total << endl;
	Footer();
	system("pause");
	return 0;
}

int sum(int n, int myarray[]){
	if (n == 1)
		return myarray[n-1];
	else
		return myarray[n-1] + sum(n-1,myarray);
}

void Footer()
{
	cout << endl << endl;
	cout << "() Code by Tacuma Solomon " << endl;
	cout << "() Not for Redistribution or Reuse." << endl << endl;
}

/*
This program sums up the first N elements of an array (N<=10).
Array = [23, 45, 12, 67, 34, 90, 1, 75, 3, 6]

Enter an integer between  1 and 10: 25
Error. Integer is out of range.

Enter an integer between  1 and 10: -1
Error. Integer is out of range.

Enter an integer between  1 and 10: 5

Total of first 5 elements: 181


() Code by Tacuma Solomon
() Not for Redistribution or Reuse.

Press any key to continue . . .
*/