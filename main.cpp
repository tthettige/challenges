/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/






// Example program
#include <iostream>
#include <string>
using namespace std;
int main()
{
  
       
 std::string stream;
        std::cout << "What is your stream? bio=1/maths=0 ";     
        getline (std::cin, stream);
        
        int z = stoi(stream);
         //std::cout << "St : " << stream << "\n";

if(z == 1){
    
    std::string name; 
          std::cout << "Enter your Name ";
          getline (std::cin, name);
          
           std::string bio; 
              std::cout << "Biology marks ";     
              getline (std::cin, bio);           
              float b1 = std::stof(bio);

      std::string c; 
              std::cout << "Chemistry marks ";     
              getline (std::cin, c);
             float c1 = std::stof(c);

  
        std::string p; 
              std::cout << "physics marks ";     
              getline (std::cin, p);
              float p1 = std::stof(p);
  
  float t=b1+c1+p1;
  float av=t/3;
  std::cout << "----------------------------------Results----------------------------------------------------------  " << "\n";
    std::cout << "Student name : " << name << "\n";
    //std::cout << "Stream of the subjects " << stream << "\n";
    std::cout << "Biology : " << b1 << "\n";
    std::cout << "Chemistry : " << c1 << "\n";
    std::cout << "Physics : " << p1 << "\n";
    std::cout << "Total Marks :" << t << "\n";
    std::cout << "Average of the Marks : " << av<< "\n";
    
          if (av > 75) {
            std::cout << " Grade is A";
        } else if (av > 65) {
           std::cout << "Grade is B";
        } 
        else if (av > 55) {
           std::cout << "Grade is C";
        }
        else if (av > 35) {
           std::cout << "Grade is S";
        }
        else {
           std::cout << "Fail.";
        }  

    
    }else if (z == 0) {
  std::string name; 
          std::cout << "Enter your Name ";
          getline (std::cin, name);
          
           std::string cb; 
              std::cout << "Combined Maths marks ";     
              getline (std::cin, cb);           
              float cb1 = std::stof(cb);

      std::string c; 
              std::cout << "Chemistry marks ";     
              getline (std::cin, c);
             float c1 = std::stof(c);

  
        std::string p; 
              std::cout << "physics marks ";     
              getline (std::cin, p);
              float p1 = std::stof(p);
  
  float t=cb1+c1+p1;
  float av=t/3;
   std::cout << "----------------------------------Results----------------------------------------------------------  " << "\n";
    std::cout << "Student name : " << name << "\n";
    //std::cout << "Stream of the subjects " << stream << "\n";
    std::cout << "Combined Maths : " << cb1 << "\n";
    std::cout << "Chemistry : " << c1 << "\n";
    std::cout << "Physics : " << p1 << "\n";
    std::cout << "Total Marks : " << t << "\n";
    std::cout << "Average of the Marks : " << av<< "\n";
    
          if (av > 75) {
            std::cout << " Grade is A";
        } else if (av > 65) {
           std::cout << "Grade is B";
        } 
        else if (av > 55) {
           std::cout << "Grade is C";
        }
        else if (av > 35) {
           std::cout << "Grade is S";
        }
        else {
           std::cout << "Fail.";
        }   

}
    
 else {
  std::cout << "Invalid input! " << "\n";

}   
    
 
  
}
