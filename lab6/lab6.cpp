#include <iostream>

using namespace std;

/*// ���� A - ����������� ����
class A {
public:
    int dataA;
};

// ���� B ������ ���� A
class B : public A {
public:
    int dataB;
};

// ���� C ������ ���� A �� B
class C : public A, public B {
public:
    int dataC;
};

// ���� D ������ ���� B
class D : public B {
public:
    int dataD;
};

// ���� E ������ ���� B �� C
class E : public B, public C {
public:
    int dataE;
};

// ���� F ������ ���� E
class F : public E {
public:
    int dataF;
};

// ���� G ������ ���� D �� E
class G : public D, public E {
public:
    int dataG;
};

int main() {
    // ��������� ��'���� ����� � ���������� �������������
    A aObject;
    B bObject;
    C cObject;
    D dObject;
    E eObject;
    F fObject;
    G gObject;

    // ��������� ������ ��'����
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
// ���� A - ����������� ����
class A {
public:
    int dataA;
};

// ���� B ������ ���� A � ���������� �������������
class B : virtual public A {
public:
    int dataB;
};

// ���� C ������ ���� A �� B � ���������� �������������
class C : virtual public A, public B {
public:
    int dataC;
};

// ���� D ������ ���� B � ���������� �������������
class D : virtual public B {
public:
    int dataD;
};

// ���� E ������ ���� B �� C � ���������� �������������
class E : public B, public C {
public:
    int dataE;
};

// ���� F ������ ���� E � ���������� �������������
class F : virtual public E {
public:
    int dataF;
};

// ���� G ������ ���� D �� E � ���������� �������������
class G : public D, public E {
public:
    int dataG;
};

int main() {
    // ��������� ��'���� ����� � ���������� �������������
    A aObject;
    B bObject;
    C cObject;
    D dObject;
    E eObject;
    F fObject;
    G gObject;

    // ��������� ������ ��'����
    cout << "Size of A object: " << sizeof(aObject) << " bytes" << endl;
    cout << "Size of B object: " << sizeof(bObject) << " bytes" << endl;
    cout << "Size of C object: " << sizeof(cObject) << " bytes" << endl;
    cout << "Size of D object: " << sizeof(dObject) << " bytes" << endl;
    cout << "Size of E object: " << sizeof(eObject) << " bytes" << endl;
    cout << "Size of F object: " << sizeof(fObject) << " bytes" << endl;
    cout << "Size of G object: " << sizeof(gObject) << " bytes" << endl;

    return 0;
}
