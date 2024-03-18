#pragma once
#include "KeyValue.h" 

class KeyValues {

	//private class properties
private:
	KeyValue** keyValues;
	int count;

	//public class properties, methods, constructors and destructors
public:

	KeyValues(int n);  //Constructor with two parameters
	~KeyValues();				//Destructor

	KeyValue* createObject(int k, double v);
	KeyValue* searchObject(int key);
	KeyValue* removeObject(int k);
	int Count();
};