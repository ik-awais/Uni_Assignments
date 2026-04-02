#include <iostream>
#include <iomanip>
using namespace std;
class EidMela{
    static int totalMelasHeld;
    static int totalStallsAcrossAllMelas;
    string melaName;
    string location;
    int totalStalls;
    double entryFee;
    bool isOpen;
public:
    // Constructors & Destructor
    EidMela();
    EidMela(string melaName, string location, int totalStalls, double entryFee);
    ~EidMela();
    // Getter Functions for Data Members
    string getmelaName(){
        return melaName;
    }
    string getlocation(){
        return location;
    }
    int gettotalStalls(){
        return totalStalls;
    }
    double getentryFee(){
        return entryFee;
    }
    bool getisOpen(){
        return isOpen;
    }
    // Getter Functions for Static data members
    static int gettotalMelasHeld(){
        return totalMelasHeld;
    }
    static int gettotalSTallsAcrossAllMelas(){
        return totalStallsAcrossAllMelas;
    }
};
EidMela::EidMela(){
    melaName = "Unnamed Mela";
    location = "TBD";
    totalStalls = 0;
    entryFee = 0.0;
    isOpen = false;
    totalMelasHeld++;    
}
EidMela::EidMela(string melaName, string location, int totalStalls, double entryFee){
    isOpen = true;
    totalStallsAcrossAllMelas += totalStalls;
    totalMelasHeld++;
    this->melaName = melaName;
    this->location = location;
    this->totalStalls = totalStalls;
    this->entryFee = entryFee;
}
EidMela::~EidMela(){
    isOpen = false;
    cout << "[Mela Closed] " << melaName << " has ended. Khuda Hafiz!" << endl;
}
int EidMela::totalMelasHeld = 0;
int EidMela::totalStallsAcrossAllMelas = 0;
class SweetStall{
    static int totalSweetStalls;
    static double totalRevenueAllStalls;
    static int IDCounter;
    string stallName;
    string *sweetItems;
    int itemCount;
    int maxItems;
    double pricePerKg;
    double totalKgSold;
    int stallID;
public:
    // Constructors & Destructors
    SweetStall();
    SweetStall(string stallName, int maxItems, double pricePerKg);
    SweetStall(const SweetStall &sCopy);
    ~SweetStall();
    // Getter Functions for Data Variables
    string getstallName(){
        return stallName;
    }
    void getsweetItems(int itemCount){
        cout  << "Sweet Items\n";        
        for(int i = 0; i < itemCount; i++)
            cout << "Item " << i+1 << ": " << sweetItems[i] << " \n";
    }
    int getitemCount(){
        return itemCount; 
    }
    int getmaxItems(){
        return maxItems;
    }
    double getpricePerKg(){
        return pricePerKg;
    }
    double gettotalKgSold(){
        return totalKgSold;
    }
    int getstallID(){
        return stallID;
    }
    // GEtters for Static Data Variables
    static int gettotalSweetStalls(){
        return totalSweetStalls;
    }
    static double gettotalReveneueAllStalls(){
        return totalRevenueAllStalls;
    }
    static int getIDCounter(){
        return IDCounter;
    }
};
SweetStall::SweetStall(){
    stallName = "Unknown Stall";
    stallID = ++IDCounter;
    maxItems = 3;
    sweetItems = new string[maxItems];
    pricePerKg = 0;
    totalKgSold = 0;
    totalSweetStalls++;
}
SweetStall::SweetStall(string stallName, int maxItems, double pricePerKg){
    stallID = ++IDCounter;
    sweetItems = new string[maxItems];
    totalSweetStalls++;
    this->stallName = stallName;
    this->maxItems = maxItems;
    this->pricePerKg = pricePerKg;
    totalKgSold = 0;
    itemCount = 0;
}
SweetStall::SweetStall(const SweetStall &sCopy){
    this->stallName = sCopy.stallName;
    this->pricePerKg = sCopy.pricePerKg;
    this->itemCount = sCopy.itemCount;
    this->totalKgSold = sCopy.totalKgSold;
    this->maxItems = sCopy.maxItems;
    sweetItems = new string[maxItems];
    for(int i = 0; i < maxItems; i++)
        sweetItems[i] = sCopy.sweetItems[i];
    stallID = ++IDCounter;
    totalSweetStalls++;
}
SweetStall::~SweetStall(){
    delete[] sweetItems;
    totalSweetStalls--;
    cout << "[Stall Closed] " << stallName << " (ID: " << stallID << ") has packed up. Ma’assalam!" << endl;
}
int SweetStall::totalSweetStalls = 0;
double SweetStall::totalRevenueAllStalls = 0;
int SweetStall::IDCounter = 100;
class Visitor{
    static int totalVisitors;
    static double totalEidDistributed;
    static int IDVistors;
    string name;
    int visitorID;
    int age;
    double eidiReceived;
    double budget;
    string *purchasedItems;
    int purchaseCount;
    int maxPurchases;
public:
    // Constructors & Destructors
    Visitor();
    Visitor(string name, int age, double budget, int maxPurchases);
    Visitor(const Visitor &vCopy);
    ~Visitor();
    // Setter Fucntion
    void setData(double eidiReceived);
    // Gettter Functions for Static Data Variables
    static int gettotalVisitors(){
        return totalVisitors;
    }
    static double gettotaalEidDistributed(){
        return totalEidDistributed;
    }
    static int getIDVisitors(){
        return IDVistors;
    }
    // Getter Functions for Non-Static Data Variables
    string getname(){
        return name;
    }
    int getvisitorID(){
        return visitorID;
    }
    int getage(){
        return age;
    }
    double geteidiReceived(){
        return eidiReceived;
    }
    double getbudget(){
        return budget;
    }
    void getpurchasedItems(){
        cout << "Purchased Items\n";
        for(int i = 0; i < purchaseCount; i++)
            cout << "Item " << i+1 << ": " << purchasedItems[i] << " \n";
    }
    int getpurchaseCount(){
        return purchaseCount;
    }
    int getmaxPurchases(){
        return maxPurchases;
    }
};
Visitor::Visitor(){
    name = "Guest";
    visitorID = ++IDVistors;
    age = 0;
    eidiReceived = 0;
    budget = 500;
    maxPurchases = 5;
    purchasedItems = new string[maxPurchases];
    totalVisitors++;
}
Visitor::Visitor(string name, int age, double budget, int maxPurchases){
    this->name = name;
    this->age = age;
    this->budget = budget;
    this->maxPurchases = maxPurchases;
    purchasedItems = new string[maxPurchases];
    visitorID = ++IDVistors;
    eidiReceived = 0;
    purchaseCount = 0;
    totalVisitors++;
}
Visitor::Visitor(const Visitor &vCopy){
    this->name = vCopy.name;
    this->age = vCopy.age;
    this->budget = vCopy.budget;
    this->eidiReceived = vCopy.eidiReceived;
    this->purchaseCount = vCopy.purchaseCount;
    this->maxPurchases = vCopy.maxPurchases;
    purchasedItems = new string[maxPurchases];
    for(int i = 0; i < purchaseCount; i++)
        purchasedItems[i] = vCopy.purchasedItems[i];
    visitorID = ++IDVistors;
    totalVisitors++;
}
Visitor::~Visitor(){
    delete[] purchasedItems;
    totalVisitors--;
    cout << "[Visitor Left] " << name << " has left the mela. Eid Mubarak!" << endl; 
}
void Visitor::setData(double eidiReceived){
    this->eidiReceived = eidiReceived;
    this->budget += eidiReceived;
    totalEidDistributed += eidiReceived;
}
int Visitor::totalVisitors = 0;
double Visitor::totalEidDistributed = 0;
int Visitor::IDVistors = 5000;
int main(){
    EidMela obj1, obj2("Bachgana Mela", "Cantt Road", 2, 200);
    // Display info of 2 EidMela Objects
    cout << "===Eid Mela Statistics===\n";
    cout << "Mela 1\n";
    cout << "Name of Mela: " << obj1.getmelaName() << "\n" << "Location: " << obj1.getlocation() 
    << "\n" << "Total Stalls: " << obj1.gettotalStalls() << "\n" 
    << "Entry Fee: " << obj1.getentryFee() << "\n" << "Status: " << (obj1.getisOpen() ? "Open\n" : "Closed\n");
    cout << "Mela 2\n";
    cout << "Name of Mela: " << obj2.getmelaName() << "\n" << "Location: " << obj2.getlocation() 
    << "\n" << "Total Stalls: " << obj2.gettotalStalls() << "\n" 
    << "Entry Fee: " << obj2.getentryFee() << "\n" << "Status: " << (obj2.getisOpen() ? "Open\n" : "Closed\n");
    SweetStall sweet1, sweet2("Rasgulla shop", 4, 900.89), sweet3(sweet2);
    // Verify Copy Constructor Assigning a Unique ID to copied object
    cout << "===Sweet Stall Statistics===\n";
    cout << "Name of Stall: " << sweet2.getstallName() << "\n" << "ID: " << sweet2.getstallID() << endl;
    cout << "Name of Stall(Copied): " << sweet3.getstallName() << "\n" 
    << "ID(new ID): " << sweet3.getstallID() << endl;
    Visitor v1, v2("Awais", 19, 5000.87, 5), v3("Zulqarnain", 31, 5100, 2), v4(v3);
    v1.setData(300.50);
    v2.setData(1000.33);
    v3.setData(200.32);
    v4.setData(500.22);
    // Verify Deep Copy works for the copied object
    cout << "Visitor 3 items: "<< endl;
    v3.getpurchasedItems();
    cout << "Visitor 4 items(deep copy): " << endl;
    v4.getpurchasedItems(); 
    {
        SweetStall myStall("AwaisSweets", 3, 1100.76);
        Visitor myVisitor("X", 27, 10988.99, 5);
    }
    cout << "Total Melas Held: " << EidMela::gettotalMelasHeld() << endl; 
    cout << "Total Stalls Across All Melas: " << EidMela::gettotalSTallsAcrossAllMelas() << endl;
    cout << "Total Visitors: " << Visitor::gettotalVisitors() << endl;
    cout << "Total Eidi Distributed: " << Visitor::gettotaalEidDistributed() << endl;   
}