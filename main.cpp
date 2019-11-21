//Ryan Phadnis
//CSC 112 Project 8

#include <iostream>
#include <fstream>
#include <stack>
#include <queue>
#include <string>
#include "Data.h"
using namespace std;

int main()
{
    ifstream inFile;
    ofstream outStack;
    ofstream outQueue;
    ofstream outPriority;
    stack <Data> newStack;
    queue <Data> newQueue;
    priority_queue <Data> newPriority;

    inFile.open("data.csv");

    outStack.open("Stack.txt");
    outQueue.open("Queue.txt");
    outPriority.open("Sorted.txt");

    if(!inFile.is_open())
    {
        cout << "The input file didn't open" << endl;
    }
    if(!outStack.is_open())
    {
        cout << "The stack file didn't open" << endl;
    }
    if(!outQueue.is_open())
    {
        cout << "The queue file didn't open" << endl;
    }
    if(!outPriority.is_open())
    {
        cout << "The sorted file didn't open" << endl;
    }
    cout << "Files are open" << endl;

    while(!inFile.eof())
    {
        string name;
        string age;
        string country;
        string overall;

        //reads in lines
        getline(inFile, name, ',');
        getline(inFile, age, ',');
        getline(inFile, country, ',');
        getline(inFile, overall);

        int intage;
        intage = stoi(age);

        int intoverall;
        intoverall = stoi(overall);

        Data info = Data(name, intage, country, intoverall);

        newStack.push(info);
        newQueue.push(info);
        newPriority.push(info);
    }
    while(!newStack.empty())
    {
        outStack << newStack.top() << endl;
        newStack.pop();
    }
    while(!newQueue.empty())
    {
        outQueue << newQueue.front() << endl;
        newQueue.pop();
    }
    while(!newPriority.empty())
    {
        outPriority << newPriority.top() << endl;
        newPriority.pop();
    }

    inFile.close();
    outStack.close();
    outQueue.close();
    outPriority.close();
    cout << "All files are closed" << endl;

    return 0;
}