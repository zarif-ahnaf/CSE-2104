#include <bits/stdc++.h>
using namespace std;

// Base class Fruit
class Fruit
{
protected:
    int totalFruits;

public:
    Fruit()
    {
        totalFruits = 0;
    }

    // Function to get total number of fruits
    int getTotalFruits()
    {
        return totalFruits;
    }

    // Function to add fruits to the basket
    void addFruits(int count)
    {
        totalFruits += count;
    }
};

// Derived class Apples from Fruit
class Apples : public Fruit
{
private:
    int appleCount;

public:
    Apples(int count)
    {
        this->appleCount = count;
        addFruits(appleCount); // Add apples to total fruits
    }

    void displayApples()
    {
        cout << "Number of apples: " << appleCount << endl;
    }
};

// Derived class Mangoes from Fruit
class Mangoes : public Fruit
{
private:
    int mangoCount;

public:
    Mangoes(int count)
    {
        this->mangoCount = count;
        addFruits(mangoCount); // Add mangoes to total fruits
    }

    void displayMangoes()
    {
        cout << "Number of mangoes: " << mangoCount << endl;
    }
};

int main()
{
    // Create objects for Apples and Mangoes
    Apples apples(10);  // 10 apples in the basket
    Mangoes mangoes(5); // 5 mangoes in the basket

    // Display the number of each fruit
    apples.displayApples();
    mangoes.displayMangoes();

    // Display total number of fruits in the basket
    cout << "Total number of fruits: " << apples.getTotalFruits() + mangoes.getTotalFruits() << endl;

    return 0;
}
