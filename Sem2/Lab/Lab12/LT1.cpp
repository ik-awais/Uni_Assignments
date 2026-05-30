#include <iostream>
class PaymentSystem{
protected:
    double payment, service_fee, refund_fee;
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
    service_fee = payment*0.02;
    std::cout << "===Rs." << payment - service_fee << " transferred with Rs." << service_fee << " as service fee===\nThankyou for using EasyPaisa!\n"; 
}
void EasyPaisa::refund(){
    refund_fee = payment - service_fee;
    std::cout << "Amount is successfully refunded!\nAmount of " << refund_fee
    << " is returned into your account.\n2% Service fee of Rs." << service_fee << 
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
    service_fee = payment*0.05;
    std::cout << "===Rs." << payment - service_fee << " transferred with"
    << "Rs." << service_fee << " as service fee===\nThankyou for using JazzCash\n"; 
}
void JazzCash::refund(){
    refund_fee = payment - service_fee;
    std::cout << "Amount is successfully refunded!\nAmount of " << refund_fee
    << "is returned into your account.\n5% Service fee of " << service_fee << 
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