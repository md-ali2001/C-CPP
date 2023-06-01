#include <iostream>

using namespace std;

// this is the main class called shop
// first make the subclasses, then write the main class because its procedural

class staionary
{
    public:
        int numpencils;
        int numnotebooks;
        
        staionary(int numpencils, int numnotebooks)
        {
            this->numpencils = numpencils;
            this->numnotebooks = numnotebooks;
        }
        
        staionary()
        {
            numpencils = 0;
            numnotebooks = 0;
        }
        
        void showData()
        {
            cout << "Pencils: " << numpencils << " Number of notebooks: " << numnotebooks << endl;
        }
};

class electricalItems
{
    private:
        int numDCMotors;
        int numOfSewingMachines;
        
    
    public:
        int numWires;
        int numSensors;
        int numCircuitBoards;
        
    electricalItems(int numWires, int numSensors, int numCircuitBoards, int numDCMotors, int numOfSewingMachines)
    {
        this->numWires = numWires;
        this->numSensors = numSensors;
        this->numCircuitBoards = numCircuitBoards;
        this->numDCMotors = numDCMotors;
        this->numOfSewingMachines = numOfSewingMachines;
    }
    
    electricalItems()
    {
        numWires = 0;
        numSensors = 0;
        numCircuitBoards = 0;
        numDCMotors = 0;
        numOfSewingMachines = 0;
    }
    
    void showData()
    {
        cout << "Number of Wires: " << numWires << "Number of Sensors: " << numSensors 
        << "Number of Circuit Boards: " << numCircuitBoards << " NUmber of DC Motors: " << numDCMotors 
        << " Number of sewing machines: " << numOfSewingMachines << endl;
    }
        
        
    
};

// in aggregation, we make pointers of those objects
class shop
{
    public:
        staionary *s1;
        electricalItems *e1;
        string nameOfShop;
        string location;
        
    
  shop(staionary *s1, electricalItems *e1, string nameOfShop, string location)
  {
      this->s1 = s1;
      this->e1=e1;
      this->nameOfShop = nameOfShop;
      this->location = location;
  }
  
  void showData()
  {
      cout << "Name of Shop: " << nameOfShop << "Location: " << location << endl;
      // now reference the function to call. 
      e1->showData();
      s1->showData();
      
      
  }
    
};

int main()
{
    staionary s12(5, 8);
    electricalItems b12(5, 7, 8, 10, 11);
    shop shop1(&s12, &b12, "Boba Place", " Brent Avenue");
    shop1.showData();
    return 0;
}