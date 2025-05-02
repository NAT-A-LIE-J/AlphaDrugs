#include <iostream>
#include <string>
#include "./HeaderFiles/header.h"
#include "./HeaderFiles/weed.h"
#include "./HeaderFiles/alcohol.h"
#include "./HeaderFiles/cocaine.h"
#include "./HeaderFiles/adderall.h"


/*Main: 
Input to of what substance and how much*/

int main()
{

std::cout << "Welcome to Alpha." << std::endl;
Substance * x = nullptr; // how to set any thing of subtance?

while(true){

std::cout << "Type your your drug: cocaine, weed, adderall, alcohol" << std::endl;
std::string desired;
std::cin >> desired;
if(desired == "weed")
{
    x = new Weed();
}
else if(desired == "adderall")
 {
    x = new Adderall();
 }
else if(desired == "alcohol")
{
    x = new Alcohol();
}
else if(desired == "cocaine")
{
       x = new Cocaine();
 }
else{ 
    std::cout<< "Not Found.  Try again."<< std::endl;
    continue; 
}

std::cout << "Input quanitity in " << x->get_unit() << std::endl;
int qInput;
std::cin >> qInput;
x->set_quantity(qInput);

    // end only if overdosed
    if(x->didoverdose()){
        std::cout << "You overdosed."<<std::endl;
        std::cout << "Goodbye."<<std::endl;
        x->print_info();
        return 0;
    }
    std::cout<< "You feel " << x->get_effects() << std::endl;
}
    return 0;
}
