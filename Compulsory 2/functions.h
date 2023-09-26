#pragma once
#include <iostream>
using namespace std;


void menu();
void Basicmathematic();
void Factorial();
int fact(int n);
void Equations();
void Derivation();


/// <summary>
/// Gives a selection of options 
/// </summary>
void menu()
{
	int answer;
	cout << "What operation would you like to use? \n";
	cout << "Option 1: Basic mathematic. \n";
	cout << "Option 2: Factorial. \n";
	cout << "Option 3: Equations. \n";
	cout << "Option 4: Derivation. \n";
	cout << "Option 5: Exit. \n";
	cout << "Option: ";
	cin >> answer;

    
	switch (answer)
	{
    
    case 1: Basicmathematic() ; break;

	case 2:  Factorial() ; break;

	case 3: Equations() ; break;

	case 4:  Derivation() ; break;

	case 5: 'Exit' || 'exit'; break;
       
    default: cout << "Not  valid operation!\n"; break;
        
       

	}
    return menu();

}
/// <summary>
/// Basic calculation of two numbers
/// </summary>
void Basicmathematic()
{
	int num1, num2;
	char operation;

	cout << "Place the numbers ( EX: 12 23): ";
	cin >> num1 >> num2;
	cout << "enter which operation you would like to use: +, -, * or / : ";
	cin >> operation;


	switch (operation)
	{
	case '+': cout << num1 << operation << num2 << "=" << num1 + num2; break;

	case '-': cout << num1 << operation << num2 << "=" << num1 - num2; break;

	case '/': cout << num1 << operation << num2 << "=" << num1 / num2; break;

	case '*': cout << num1 << operation << num2 << "=" << num1 * num2; break;

    default: cout << "Not valid operation!"; break;
        
	}
    cout << endl;
}

/// <summary>
/// Calculate the factorial of a number
/// </summary>
void Factorial()
{
    int n;
    cout << "What the number?: ";
    cin >> n;
    cout << "Factorial of " << n << " is " << fact(n);

    cout << endl;
}



/// <summary>
/// the calculation required to find the factorial of a number
/// </summary>
/// <param name="n"></param>
/// <returns></returns>
int fact(int n)
{
    if ((n == 0) || (n == 1))

        return 1;

    else
        return n * fact(n - 1);


}
/// <summary>
/// basic calculation of two equation
/// </summary>
void Equations()
{
    char op;
    int A[4];
    int B[4];

    cout << "Enter first equation " << endl;

    for (int i = 0; i < 4; ++i) {
        cin >> A[i];
    }

    cout << "Enter second equation " << endl;
    for (int d = 0; d < 4; ++d) {
        cin >> B[d];
    }

    cout << " First equation: \n";
    for (int i = 3; i >= 0; --i)
    {

        cout << A[3 - i];
        if (i != 0)
            cout << "x^" << (i);
        if (i != 0)
            cout << "+";
    }
    cout << endl;
    cout << " Second equation: \n";
    for (int d = 3; d >= 0; --d)
    {

        cout << B[3 - d];
        if (d != 0)
            cout << "x^" << d;
        if (d != 0)
            cout << "+";
    }

    cout << endl;

    cout << "enter which operation you would like to use: +, - or *   : ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << "the answer is: \n";
        for (int d = 3; d >= 0; --d)
        {
            cout << (A[d] + B[d]);

            if (d != 0)
                cout << "x^" << d;
            if (d != 0)
                cout << "+";


        }
        break;

    case '-':
        cout << "the answer is: \n";
        for (int d = 3; d >= 0; --d)
        {
            cout << (A[d] - B[d]);

            if (d != 0)
                cout << "x^" << d;
            if (d != 0)
                cout << "+";


        }
        break;

    case '*':
        cout << "the answer is: \n";
        for (int d = 3; d >= 0; --d)
        {
            cout << (A[d] * B[d]);

            if (d != 0)
                cout << "x^" << d;
            if (d != 0)
                cout << "+";


        }
        break;

    default: cout << "Not valid operation!"; break;

    }

    cout << endl;


}


/// <summary>
/// Deriviation of one equation
/// </summary>
void Derivation()
{
	int A[4];

	cout << "Enter equation " << endl;

	for (int i = 0; i < 4; ++i) {
		cin >> A[i];
	}
	cout << " Equation: \n";
	for (int i = 3; i >= 0; --i)
	{

		cout << A[3 - i];
		if (i != 0)
			cout << "x^" << (i);
		if (i != 0)
			cout << "+";
	}

	cout << "\n The derivative of the function:\n";

	for (int d = 2; d >= 0; --d)
	{
		cout << A[2 - d] * (d + 1);
		if (d != 0)
			cout << "x^" << (d);
		if (d != 0)
			cout << "+";


	}
    cout << endl;
}