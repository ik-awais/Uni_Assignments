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
    string getmelaName(){ return melaName; }
    string getlocation(){ return location; }
    int gettotalStalls(){ return totalStalls; }
    double getentryFee(){ return entryFee; }
    bool getisOpen(){ return isOpen; }
    // Getter Functions for Static data members
    static int gettotalMelasHeld(){ return totalMelasHeld; }
    static int gettotalSTallsAcrossAllMelas(){ return totalStallsAcrossAllMelas; }
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
    this->melaName = melaName;
    this->location = location;
    this->totalStalls = totalStalls;
    this->entryFee = entryFee;
    isOpen = true;
    totalStallsAcrossAllMelas += totalStalls;
    totalMelasHeld++;
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
    // Setter Functions
    void setItemCount();
    void setSweetItems(int sizeofPassedArray, string items[]);
    // Getters for Static Data Variables
    static int gettotalSweetStalls(){ return totalSweetStalls; }
    static double gettotalReveneueAllStalls(){ return totalRevenueAllStalls; }
    static int getIDCounter(){ return IDCounter; }
    // Getter Functions for Data Variables
    string getstallName(){ return stallName; }
    void getsweetItems(int itemCount);
    int getitemCount(){ return itemCount; }
    int getmaxItems(){ return maxItems; }
    double getpricePerKg(){ return pricePerKg; }
    double gettotalKgSold(){ return totalKgSold; }
    int getstallID(){ return stallID; }
};
SweetStall::SweetStall(){
    stallName = "Unknown Stall";
    stallID = IDCounter++;
    maxItems = 3;
    sweetItems = new string[maxItems];
    itemCount = 0;
    pricePerKg = 0;
    totalKgSold = 0;
    totalSweetStalls++;
}
SweetStall::SweetStall(string stallName, int maxItems, double pricePerKg){
    this->stallName = stallName;
    this->maxItems = maxItems;
    this->pricePerKg = pricePerKg;
    stallID = IDCounter++;
    sweetItems = new string[maxItems];
    totalSweetStalls++;
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
    for(int i = 0; i < itemCount; i++)
        sweetItems[i] = sCopy.sweetItems[i];
    stallID = IDCounter++;
    totalSweetStalls++;
}
SweetStall::~SweetStall(){
    delete[] sweetItems;
    totalSweetStalls--;
    cout << "[Stall Closed] " << stallName << " (ID: " << stallID << ") has packed up. Ma'assalam!" << endl;
}
void SweetStall::getsweetItems(int itemCount){
    cout  << "Sweet Items\n";        
    for(int i = 0; i < itemCount; i++)
        cout << "Item " << i+1 << ": " << sweetItems[i] << " \n";
}
int SweetStall::totalSweetStalls = 0;
double SweetStall::totalRevenueAllStalls = 0;
int SweetStall::IDCounter = 101;
class Visitor{
    static int totalVisitors;
    static int IDVisitors;
    string name;
    int visitorID;
    int age;
    string *purchasedItems;
    int purchaseCount;
    int maxPurchases;
public:
    static double totalEidDistributed;
    double eidiReceived;
    double budget;
    // Constructors & Destructors
    Visitor();
    Visitor(string name, int age, double budget, int maxPurchases);
    Visitor(const Visitor &vCopy);
    ~Visitor();
    // Setter Function for user input variables
    void setPurchaseCount();
    void setPurchasedItems(int purchaseCount);
    // Gettter Functions for Static Data Variables
    static int gettotalVisitors(){ return totalVisitors; }
    static int getIDVisitors(){ return IDVisitors; }
    // Getter Functions for Non-Static Data Variables
    string getname(){ return name; }
    int getvisitorID(){ return visitorID; }
    int getage(){ return age; }
    double geteidiReceived(){ return eidiReceived; }
    double getbudget(){ return budget; }
    int getpurchaseCount(){ return purchaseCount; }
    int getmaxPurchases(){ return maxPurchases; }
    void getpurchasedItems(int purchaseCount);
};
Visitor::Visitor(){
    name = "Guest";
    visitorID = IDVisitors++;
    age = 0;
    eidiReceived = 0;
    purchaseCount = 0;
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
    visitorID = IDVisitors++;
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
    visitorID = IDVisitors++;
    totalVisitors++;
}
Visitor::~Visitor(){
    delete[] purchasedItems;
    totalVisitors--;
    cout << "[Visitor Left] " << name << " has left the mela. Eid Mubarak!" << endl; 
}
void Visitor::setPurchaseCount(){
    cout << "Enter the number of Items purchased: ";
    cin >> purchaseCount;
}
void Visitor::setPurchasedItems(int purchaseCount){
    if(purchaseCount > maxPurchases)
    {
        cout << "Purchase count exceeds max limit of " << maxPurchases << ". Select your Purchase Count again\n";
        setPurchaseCount(); 
        setPurchasedItems(this->purchaseCount);
        return;
    }
    this->purchaseCount = purchaseCount;
    cout << "Enter the Purchased Items: ";
    for(int i = 0; i < purchaseCount; i++)
        cin >> purchasedItems[i];
};
void Visitor::getpurchasedItems(int count){
    if(count == 0)
    {
        cout << "No items purchased.\n";
        return;
    } 
    cout << "Purchased Items\n";
    for(int i = 0; i < count; i++)
        cout << "Item " << i+1 << ": " << purchasedItems[i] << " \n";
}
int Visitor::totalVisitors = 0;
double Visitor::totalEidDistributed = 0;
int Visitor::IDVisitors = 5001;
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
    cout << "Total Melas Held: " << EidMela::gettotalMelasHeld() << endl;
    SweetStall sweet1, sweet2("Rasgulla shop", 4, 900.89), sweet3(sweet2);
    // Verify Copy Constructor Assigning a Unique ID to copied object
    cout << "===Sweet Stall Statistics===\n";
    cout << "Name of Stall: " << sweet2.getstallName() << "\n" << "ID: " << sweet2.getstallID() << endl;
    cout << "Name of Stall(Copied): " << sweet3.getstallName() << "\n" 
    << "ID(new ID): " << sweet3.getstallID() << endl;
    Visitor v1, v2("Awais", 19, 5000.87, 5), v3("Zulqarnain", 31, 5100, 2);
    v1.eidiReceived = 300.50;
    v1.budget += v1.eidiReceived;
    v2.eidiReceived = 1000.33;
    v2.budget += v2.eidiReceived;
    v3.eidiReceived = 200.32;
    v3.budget += v3.eidiReceived;
    // Verify Deep Copy works for the copied object 
    v3.setPurchaseCount();
    v3.setPurchasedItems(v3.getpurchaseCount()); 
    Visitor v4(v3);  
    v4.eidiReceived = 500.22;
    v4.budget = v4.eidiReceived;
    Visitor::totalEidDistributed += v1.eidiReceived+v2.eidiReceived+v3.eidiReceived+v4.eidiReceived;
    cout << "Visitor 3 items: "<< endl;
    v3.getpurchasedItems(v3.getpurchaseCount());
    cout << "Visitor 4 items(deep copy): " << endl;
    v4.getpurchasedItems(v4.getpurchaseCount()); 
    // Changing v4 to verify Deep Copy
    cout << "Modifying copied object to verify Deep Copy\n";
    v4.setPurchaseCount();
    v4.setPurchasedItems(v4.getpurchaseCount());
    cout << "Visitor 3 items: "<< endl;
    v3.getpurchasedItems(v3.getpurchaseCount());
    cout << "Visitor 4 items(after modification): " << endl;
    v4.getpurchasedItems(v4.getpurchaseCount());
    // Verify the NSB Work
    cout << "===Nested Scope Block Test===\n";
    cout << "Number of Stalls Before the NSB: " << SweetStall::gettotalSweetStalls() << endl;
    cout << "Number of Visitors Before the NSB: " << Visitor::gettotalVisitors() << endl; 
    {
        SweetStall myStall("AwaisSweets", 3, 1100.76);
        Visitor myVisitor("X", 27, 10988.99, 5);
        cout << "===Inside the Nested Scope Block===\n";
        cout << "Number of Stalls inside the NSB: " << SweetStall::gettotalSweetStalls() << endl;
        cout << "Number of Visitors inside the NSB: " << Visitor::gettotalVisitors() << endl; 
    }
    cout << "===After the Nested Scope Block===\n";
    cout << "Number of Stalls after the NSB: " << SweetStall::gettotalSweetStalls() << endl;
    cout << "Number of Visitors after the NSB: " << Visitor::gettotalVisitors() << endl; 
    // City-Wide Statistics
    cout << "===City-wide Statistics===\n";
    cout << "Total Melas Held: " << EidMela::gettotalMelasHeld() << endl; 
    cout << "Total Stalls Across All Melas: " << EidMela::gettotalSTallsAcrossAllMelas() << endl;
    cout << "Total Visitors: " << Visitor::gettotalVisitors() << endl;
    cout << "Total Eidi Distributed: " << Visitor::totalEidDistributed << endl;   
}