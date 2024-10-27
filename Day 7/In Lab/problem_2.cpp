#include <bits/stdc++.h>
using namespace std;

class Pizza{
    string _size;
    int number_of_cheese_toppings;
    int number_of_pepperoni_toppings;
    int number_of_chicken_toppings;

public:
    Pizza(){
        this->_size = "UNSET";
    }
    Pizza(string _size){
        this->_size = _size;
    }
    int get_number_of_cheese_toppings(){
        return this->number_of_cheese_toppings;
    }
    void set_number_of_cheese_toppings(int number_of_cheese_toppings){
        this->number_of_cheese_toppings = number_of_cheese_toppings;
    }
    int get_number_of_pepperoni_toppings(){
        return this->number_of_pepperoni_toppings;
    }
    void set_number_of_pepperoni_toppings(int number_of_pepperoni_toppings){
        this->number_of_pepperoni_toppings = number_of_pepperoni_toppings;
    }
    int get_number_of_chicken_toppings(){
        return this->number_of_chicken_toppings;
    }
    void set_number_of_chicken_toppings(int number_of_chicken_toppings){
        this->number_of_chicken_toppings = number_of_chicken_toppings;
    }

    double calcCost(){
        double cost=0;
        if(this->_size == "Small"){
            cost+=10;
        }else if(this->_size=="Medium"){
            cost+= 12;
        }
        else if(this->_size =="Large"){
            cost += 14;
        }else{
            cout<<"Pizza not in index" << endl;
        }

        int total_topping = this->number_of_cheese_toppings+this->number_of_chicken_toppings+this->number_of_pepperoni_toppings;
        cost+= total_topping*2;
        return cost;
    }

    string getDescription(){
        stringstream str;

        str << "Pizza Size: " << this->_size << endl;
        str << "Number of cheese toppings: "<<this->number_of_cheese_toppings << endl;
        str << "Number of pepperoni toppings: " << this->number_of_pepperoni_toppings << endl;
        str << "Number of chicken toppings: " << this->number_of_chicken_toppings << endl;

        return str.str();
    }
};

class PizzaOrder{
private:
    Pizza pizza_arr[3];
public:

    PizzaOrder(Pizza p1,Pizza p2, Pizza p3){
        this->pizza_arr[0]=p1;
        this->pizza_arr[1] = p2;
        this->pizza_arr[2] = p3;
    }

    double calcTotal(){
        double cost=0;
        for(auto p:this->pizza_arr){
            cost+= p.calcCost();
        }
        return cost;
    }


};

int main(){
    Pizza large("Large");
    large.set_number_of_cheese_toppings(1);
    large.set_number_of_chicken_toppings(2);
    large.set_number_of_pepperoni_toppings(1);
    cout << "Cost of large pizza: "<<large.calcCost()<< "$"<<endl;


    PizzaOrder p_o_1(large,large,large);
    cout << "Total Cost:" << p_o_1.calcTotal()<< "$"<<endl;
}
