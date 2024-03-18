#pragma once

using namespace std;

//Class KeyValue declaration

class KeyValue {

	//private class properties
private:
	int key;
	double value;

	//public class properties, methods, constructors and destructors
public:

	KeyValue(int k, double v);  //Constructor with two parameters

	int GetKey();        //Return the next pointer
	double GetValue();
};