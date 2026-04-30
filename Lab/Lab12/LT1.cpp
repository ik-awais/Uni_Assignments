#include <iostream>
class PaymentSystem{
protected:
    double payment;
public:
    virtual void pay() = 0;
    virtual void refund() = 0;
};  
class EasyPaisa: public PaymentSystem{
public:
    void pay()override;
    void refund()override;
};
void EasyPaisa::pay(){
    std::cout << "===EasyPaisa at your Service===\nEnter the amount to pay: ";
    std::cin >> payment;
    std::cout << "Service fee of 2% will be deducted!\n";
    std::cout << "===Rs." << payment - (payment*0.02) << "transferred with Rs." << payment*0.02 << " as service fee===\nThankyou for using EasyPaisa!\n"; 
}
void EasyPaisa::refund(){
    std::cout << "Amount is successfully refunded!\nAmount of " << payment - (payment*0.02)
    << " is returned into your account.\n2% Service fee of Rs." << payment*0.02 << 
    " is deducted.\n===Keep using EasyPaisa and enjoy our services===\n";
}
class JazzCash:public PaymentSystem{
public:
    void pay()override;
    void refund()override;
};
void JazzCash::pay(){
    std::cout << "===JazzCash at your Service===\nEnter the amount to pay: ";
    std::cin >> payment;
    std::cout << "Service fee of 5% will be deducted!\n";
    std::cout << "===Rs." << payment - (payment*0.05) << " transferred with"
    << "Rs." << payment*0.05 << "as service fee===Thankyou for using JazzCash\n"; 
}
void JazzCash::refund(){
    std::cout << "Amount is successfully refunded!\nAmount of " << payment - (payment*0.05)
    << "is returned into your account.\n5% Service fee of " << payment*0.05 << 
    " is deducted.\n===Keep using JazzCash and enjoy our services===\n";
}
int main(){
    PaymentSystem *ptr;
    int choice;
    EasyPaisa ep;
    JazzCash jc;
    do
    {   
        std::cout << "Enter your choice of Payment System\n" << "Choose any invalid option to quit program\n"
        << "1. EasyPaisa\t\t2.JazzCash\n";
        std::cin >> choice;
        if(choice == 1)
        {
            ptr = &ep;
            ptr->pay();
            ptr->refund();
        }
        else if(choice == 2)
        {
            ptr = &jc;
            ptr->pay();
            ptr->refund();
        }
        else
            break;
    } while (true);
    return 0;
}