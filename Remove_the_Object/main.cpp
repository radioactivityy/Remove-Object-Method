#pragma once

#include <iostream>
#include "KeyValue.h"
#include "KeyValues.h"
using namespace std;

int main() {
    int N = 5;
    KeyValues* myKeyValues = new KeyValues(N);
    KeyValue* myKeyValue = myKeyValues->createObject(0, 0.5);
    cout << myKeyValue->GetValue() << endl; // Should print 0.5

    for (int i = 1; i < N; i++) {
        myKeyValues->createObject(i, i + 0.5);
    }

    cout << myKeyValues->searchObject(4)->GetValue() << endl; // Should print 4.5

    delete myKeyValues;
    getchar(); // Waits for a key press to prevent the console window from closing immediately.
    return 0;
}

