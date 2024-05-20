#include <iostream>

using namespace std;

/*// Клас A - батьківський клас
class A {
public:
    int dataA;
};

// Клас B наслідує клас A
class B : public A {
public:
    int dataB;
};

// Клас C наслідує клас A та B
class C : public A, public B {
public:
    int dataC;
};

// Клас D наслідує клас B
class D : public B {
public:
    int dataD;
};

// Клас E наслідує клас B та C
class E : public B, public C {
public:
    int dataE;
};

// Клас F наслідує клас E
class F : public E {
public:
    int dataF;
};

// Клас G наслідує клас D та E
class G : public D, public E {
public:
    int dataG;
};

int main() {
    // Створення об'єктів класів з віртуальним успадкуванням
    A aObject;
    B bObject;
    C cObject;
    D dObject;
    E eObject;
    F fObject;
    G gObject;

    // Виведення розмірів об'єктів
    cout << "Size of A object: " << sizeof(aObject) << " bytes" << endl;
    cout << "Size of B object: " << sizeof(bObject) << " bytes" << endl;
    cout << "Size of C object: " << sizeof(cObject) << " bytes" << endl;
    cout << "Size of D object: " << sizeof(dObject) << " bytes" << endl;
    cout << "Size of E object: " << sizeof(eObject) << " bytes" << endl;
    cout << "Size of F object: " << sizeof(fObject) << " bytes" << endl;
    cout << "Size of G object: " << sizeof(gObject) << " bytes" << endl;

    return 0;
}

*/
// Клас A - батьківський клас
class A {
public:
    int dataA;
};

// Клас B наслідує клас A з віртуальним успадкуванням
class B : virtual public A {
public:
    int dataB;
};

// Клас C наслідує клас A та B з віртуальним успадкуванням
class C : virtual public A, public B {
public:
    int dataC;
};

// Клас D наслідує клас B з віртуальним успадкуванням
class D : virtual public B {
public:
    int dataD;
};

// Клас E наслідує клас B та C з віртуальним успадкуванням
class E : public B, public C {
public:
    int dataE;
};

// Клас F наслідує клас E з віртуальним успадкуванням
class F : virtual public E {
public:
    int dataF;
};

// Клас G наслідує клас D та E з віртуальним успадкуванням
class G : public D, public E {
public:
    int dataG;
};

int main() {
    // Створення об'єктів класів з віртуальним успадкуванням
    A aObject;
    B bObject;
    C cObject;
    D dObject;
    E eObject;
    F fObject;
    G gObject;

    // Виведення розмірів об'єктів
    cout << "Size of A object: " << sizeof(aObject) << " bytes" << endl;
    cout << "Size of B object: " << sizeof(bObject) << " bytes" << endl;
    cout << "Size of C object: " << sizeof(cObject) << " bytes" << endl;
    cout << "Size of D object: " << sizeof(dObject) << " bytes" << endl;
    cout << "Size of E object: " << sizeof(eObject) << " bytes" << endl;
    cout << "Size of F object: " << sizeof(fObject) << " bytes" << endl;
    cout << "Size of G object: " << sizeof(gObject) << " bytes" << endl;

    return 0;
}
