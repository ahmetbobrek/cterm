
/*// C++ program to show Arrow operator
// used in structure
#include <iostream>
using namespace std;

// Creating the structure
struct student {
	char name[80];
	int age;
	float percentage;
};

// Creating the structure object
struct student* emp = NULL;

// Driver code
int main()
{

	// Assigning memory to struct variable emp
	emp = (struct student*)
		malloc(sizeof(struct student));

	// Assigning value to age variable
	// of emp using arrow operator
	emp->age = 18;

	// Printing the assigned value to the variable
	cout <<" "<< emp->age;

	return 0;
}


// This code is contributed by shivanisinghss2110*/

#include<iostream>
using namespace std;

struct student {
	char name[80];
	int age;
	float percentage;
};

struct student* emp=NULL;
/*int main()
{

	// Assigning memory to struct variable emp
	emp = (struct student*)
		malloc(sizeof(struct student));

	// Assigning value to age variable
	// of emp using arrow operator
	emp->age = 18;

	// Printing the assigned value to the variable
	cout <<" "<< emp->age;

	return 0;
}*/
int main()
{
	emp=(struct student*)malloc(sizeof(struct student));
	emp->age=18;
	cout<<""<<emp->age;
	return 0;
}
