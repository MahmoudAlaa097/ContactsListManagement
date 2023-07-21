#ifndef CONTACTS_H
#define CONTACTS_H

#pragma once

#include <iostream>
#include <string>

class Contacts
{
private:
    std::string name;
    std::string phone;
    std::string addr;
    bool gender;
    int age;
    int id;
public:
    Contacts();
    void showContact(void);
    void editContact(std::string cp_name, std::string cp_phone, std::string addr, bool cp_gender, int cp_age);
};

#endif