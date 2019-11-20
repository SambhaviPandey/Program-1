/*
 * VendingBank.h
 * HW1: CSS342
 * Last modified by Sambhavi Pandey on 4/21/2019
 *
 * This file is a interface (.h file) for a coin-operated
 * bank part of a vending machine that sells snacks.
 */

//Header guards to prevent duplicate definitions
#ifndef VendingBank_h
#define VendingBank_h

#pragma once
#include <string>
#include <iostream>
using namespace std;

class VendingBank
{
public:
    //Constructors
    VendingBank();
    VendingBank(int id);
    VendingBank(int id, double totalBankMoney);
    VendingBank(int id, double totalBankMoney, double pennies,
                double nickels, double dimes, double quarters,
                double halfDollar, double dollar);
    
    //Destructor
    ~VendingBank();
    
    //Getter functions
    double getPenny();
    double getNickel();
    double getDime();
    double getQuarter();
    double getHalfDollar();
    double getDollar();
    
    //Gets the vending selection
    bool getSelection();
    //Gets the vending bank ID
    int getVendingBankID() const;
    
    //Setter functions
    //Sets the total coins
    void setTotalCoins(double totalCoins)const;
    //Sets the vending selection
    void setSelection(int product) const;
    
    //Public functions
    //Dispenses vending product
    bool dispenseProduct();
    //Determines if vending machine has sufficient change
    bool insufficientChange();
    //Sends back coins if the coins the user entered are not equal
    //to the price or greater than the price
    bool removeCoins();
    double checkPrice();//Checks price of product
    double checkStock();//Checks if product is in stock
    //To determine if the order is canceled
    bool cancelTransaction();
    //Timer to cancel the order
    void cancellationTimer();
    //To determine if the user wants to make a change in their order
    bool makeChange();
    //To determine if the coins the user entered are valid
    bool isCoinValid();
    //Function to add coins recieved by user
    double addCoins(double pennies, double nickels, double dimes,
                    double quarters, double halfDollars, double dollars);
    

    //Setter function that sets the vending bank id
    void setVendingBankID(int id);
    
    //Operator overloading
    
    //For subtracting coins and determining change
    VendingBank& operator -= (const VendingBank &bank);
    //For adding the coins
    VendingBank& operator += (const VendingBank &bank);
    //For adding coins
    VendingBank operator + (const VendingBank &bank) const;
    //For subtracting coins and determining change
    VendingBank operator - (const VendinBank &bank) const;
    
    bool operator == (const VendingBank &bank) const;
    bool operator != (const VendingBank &bank) const;
    
private:
    //Variables for money
    
    //Const because it prevents modification of the variable
    const double PENNY = 0.01;
    const double NICKEL = 0.05;
    const double DIME = 0.10;
    const double QUARTER = 0.25;
    const double HALF_DOLLAR = 0.50;
    const double DOLLAR = 1.00;
    
    //Variables to keep track of the number of each type of coin
    int pennyCount;
    int nickelCount;
    int dimeCount;
    int quarterCount;
    int halfDollarCount;
    int dollarCount;
    
    //Variable for product ID
    int productID;
    //Variable for total money in the vending bank
    double totalBankMoney;
};
#endif
