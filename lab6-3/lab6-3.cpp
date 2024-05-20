#include <iostream>
#include <string>

using namespace std;

// Base class "Software"
class Software {
public:
    Software(const string& name) : name(name) {}
    virtual ~Software() {}

    virtual void displayInfo() const {
        cout << "Software: " << name << endl;
    }

private:
    string name;
};

// Похідний class "Application Software"
class ApplicationSoftware : public Software {
public:
    ApplicationSoftware(const string& name, const string& category)
        : Software(name), category(category) {}

    virtual void displayInfo() const override {
        Software::displayInfo();
        cout << "Category: " << category << endl;
    }

private:
    string category;
};

// Похідний class "System Software"
class SystemSoftware : public Software {
public:
    SystemSoftware(const string& name, const string& version)
        : Software(name), version(version) {}

    virtual void displayInfo() const override {
        Software::displayInfo();
        cout << "Version: " << version << endl;
    }

private:
    string version;
};

// Похідний class "Operating System" with multiple inheritance
class OperatingSystem : public ApplicationSoftware, public SystemSoftware {
public:
    OperatingSystem(const string& name, const string& category, const string& version)
        : ApplicationSoftware(name, category), SystemSoftware(name, version) {}

    virtual void displayInfo() const override {
        ApplicationSoftware::displayInfo();
        SystemSoftware::displayInfo();
    }
};

int main() {
    ApplicationSoftware appSoftware("Microsoft Office", "Office Applications");
    SystemSoftware sysSoftware("Windows", "Windows 10");
    OperatingSystem os("Ubuntu", "Linux", "Ubuntu 20.04");

    cout << "Information about Application Software:" << endl;
    appSoftware.displayInfo();
    cout << "\nInformation about System Software:" << endl;
    sysSoftware.displayInfo();
    cout << "\nInformation about Operating System:" << endl;
    os.displayInfo();

    return 0;
}
