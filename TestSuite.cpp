//Aris Vinsant
//TestSuite.cpp
//EECS 448 Lab 07

#include "TestSuite.h"
#include <iostream>
#include <vector>
using namespace std;

void TestSuite::run(){
  test1();
  test2();
  test3();
  test4();
  test5();
  test6();
  test7();
  test8();
  test9();
  test10();
  test11();
  test12();
  test13();
  test14();
  test15();
}

void TestSuite::test1(){
  cout << "Test 1: Checking empty list: ";
  LinkedListOfInts* testList = new LinkedListOfInts();

  if (testList->isEmpty())
    cout << "PASSED\n";
  else
    cout << "***FAILED***\n";
  delete testList;
}

void TestSuite::test2(){
  cout << "Test 2: List with items not empty: ";
  LinkedListOfInts* testList = new LinkedListOfInts();
  for (int i = 1; i <= 5; i++){
    testList->addBack(i);
  }

  if (testList->isEmpty())
    cout << "***FAILED***\n";
  else
    cout << "PASSED\n";
  delete testList;
}

void TestSuite::test3(){
  cout << "Test 3: Correctly tell size 5 list: ";

  LinkedListOfInts* testList = new LinkedListOfInts();
  for (int i = 1; i <= 5; i++){
    testList->addBack(i);
  }

  if (testList->size() == 5)
    cout << "PASSED\n";
  else
    cout << "***FAILED***\n";
  delete testList;
}

void TestSuite::test4(){
  cout << "Test 4: Correctly tell size 0 list: ";

  LinkedListOfInts* testList = new LinkedListOfInts();

  if (testList->size() == 0)
    cout << "PASSED\n";
  else
    cout << "***FAILED***\n";

  delete testList;
}

void TestSuite::test5(){
  cout << "Test 5: Size adjusts with addBack(): ";
  LinkedListOfInts* testList = new LinkedListOfInts();
  for (int i = 1; i <= 5; i++){
    testList->addBack(i);
  }
  testList->addBack(6);

  if (testList->size() == 6)
    cout << "PASSED\n";
  else
    cout << "***FAILED***\n";

  delete testList;
}

void TestSuite::test6(){
  cout << "Test 6: Size adjusts with addFront(): ";
  LinkedListOfInts* testList = new LinkedListOfInts();
  for (int i = 1; i <= 5; i++){
    testList->addBack(i);
  }
  testList->addFront(0);
  if (testList->size() == 6)
    cout << "PASSED\n";
  else
    cout << "***FAILED***\n";

  delete testList;
}

void TestSuite::test7(){
  cout << "Test 7: Size adjusts with removeBack(): ";
  LinkedListOfInts* testList = new LinkedListOfInts();
  for (int i = 1; i <= 5; i++){
    testList->addBack(i);
  }
  testList->removeBack();

  if (testList->size() == 4)
    cout << "PASSED\n";
  else
    cout << "***FAILED***\n";

  delete testList;
}

void TestSuite::test8(){
    cout << "Test 8: Size adjusts with removeFront(): ";
    LinkedListOfInts* testList = new LinkedListOfInts();
    for (int i = 1; i <= 5; i++){
      testList->addBack(i);
    }
    testList->removeFront();

    if (testList->size() == 4)
      cout << "PASSED\n";
    else
      cout << "***FAILED***\n";

    delete testList;
}

void TestSuite::test9(){
  cout << "Test 9: Empty returns True removeFront() on empty list: ";

  LinkedListOfInts* testList = new LinkedListOfInts();

  if (testList->size() == 0)
    cout << "PASSED\n";
  else
    cout << "***FAILED***\n";

  delete testList;
}

void TestSuite::test10(){
  cout << "Test 10: Empty returns False removeFront() on full list: ";

  LinkedListOfInts* testList = new LinkedListOfInts();
  for (int i = 1; i <= 5; i++){
    testList->addBack(i);
  }
  while (testList->removeFront()){}

  if (testList->size() == 0)
    cout << "PASSED\n";
  else
    cout << "***FAILED***\n";

  delete testList;
}

void TestSuite::test11(){
  cout << "Test 11: addBack() puts value at the back: ";

  LinkedListOfInts* testList = new LinkedListOfInts();
  vector<int> v1;
  for (int i = 1; i <= 5; i++){
    testList->addBack(i);
    v1.push_back(i);
  }

  if (testList->toVector() == v1)
    cout << "PASSED\n";
  else
    cout << "***FAILED***\n";

  delete testList;
}

void TestSuite::test12(){
  cout << "Test 12: addFront() puts value in the front: ";

  LinkedListOfInts* testList = new LinkedListOfInts();
  vector<int> v1;
  for (int i = 1; i <= 5; i++){
    testList->addFront(i);
    v1.insert(v1.begin(), i);
  }

  if (testList->toVector() == v1)
    cout << "PASSED\n";
  else
    cout << "***FAILED***\n";

  delete testList;
}

void TestSuite::test13(){
  cout << "Test 13: Search finds front value: ";
  LinkedListOfInts* testList = new LinkedListOfInts();
  for (int i = 1; i <= 5; i++){
    testList->addBack(i);
  }
  testList->addFront(0);

  if (testList->search(0))
    cout << "PASSED\n";
  else
    cout << "***FAILED***\n";

  delete testList;
}

void TestSuite::test14(){
  cout << "Test 14: Search finds back value: ";
  LinkedListOfInts* testList = new LinkedListOfInts();
  for (int i = 1; i <= 5; i++){
    testList->addBack(i);
  }

  if (testList->search(5))
    cout << "PASSED\n";
  else
    cout << "***FAILED***\n";

  delete testList;
}

void TestSuite::test15(){
  cout << "Test 15: Search does not find nonexistent value: ";
  LinkedListOfInts* testList = new LinkedListOfInts();
  for (int i = 1; i <= 5; i++){
    testList->addBack(i);
  }

  if (testList->search(6))
    cout << "***FAILED***\n";
  else
    cout << "PASSED\n";

  delete testList;
}


void TestSuite::printVector(vector<int> v){
  cout << "[";
  for (unsigned int i = 0; i < v.size(); i++){
    cout << v[i] << ", ";
  }
  cout << "]";
}
