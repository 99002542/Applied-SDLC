#include <bits/stdc++.h> 
#define max 20 
using namespace std; 
struct employee { 
    int EmpId;
    string name; 
    string Address;
    int Salary;
}; 
  
int num; 
void showMenu(); 
 
employee emp[max], tempemp[max], 
    sortemp[max], sortemp1[max]; 
  


  

void insert() 
{ 
    if (num < max) { 
        int i = num; 
        num++; 
  
        cout << "Enter the information "
             << "of the Employee\n"; 
             cout << "Employee ID "; 
        cin >> emp[i].EmpId; 
        cout << "Name "; 
        cin >> emp[i].name; 
  
        
  
        cout << "Address "; 
        cin >> emp[i].Address; 
  
        cout << "Salary"; 
        cin >> emp[i].Salary; 
  
       cout<<"The details of the employee added successfully.";
    } 
    else { 
        cout << "Employee Table Full\n"; 
    } 
  
    showMenu(); 
} 
  
// Function to delete record at index i 
void deleteIndex(int i) 
{ 
    for (int j = i; j < num - 1; j++) { 
          emp[j].EmpId = emp[j + 1].EmpId; 
        emp[j].name = emp[j + 1].name; 
      
        emp[j].Address 
            = emp[j + 1].Address; 
        emp[j].Salary = emp[j + 1].Salary; 
       
    } 
    return; 
} 
  
// Function to delete record 
void deleteRecord() 
{ 
    cout << "Enter the Employee ID "
         << "to Delete Record"; 
  
    int EmpId; 
  
    cin >> EmpId; 
    for (int i = 0; i < num; i++) { 
        if (emp[i].EmpId == EmpId) { 
            deleteIndex(i); 
            num--; 
            break; 
        } 
    } 
    showMenu(); 
} 
  
void searchRecord() 
{ 
    cout << "Enter the Employee"
         << " ID to Search Record"; 
  
    int EmpId; 
    cin >> EmpId; 
  
    for (int i = 0; i < num; i++) { 
  
        // If the data is found 
        if (emp[i].EmpId == EmpId) { 
              cout << "Employee ID "
                 << emp[i].EmpId << "\n"; 
            cout << "Name "
                 << emp[i].name << "\n"; 
  
          
  
            cout << "Address "
                 << emp[i].Address << "\n"; 
  
            cout << "Salary"
                 << emp[i].Salary << "\n"; 
  
            
            break; 
        } 
    } 
  
    showMenu(); 
} 
  
// Function to show menu 
void showMenu() 
{ 
  
 cout << "-------------"
         << "Employee"
         << " Management System"
         << "-------------------------\n\n";
  
    cout << "Availiable Options:\n\n"; 
   
    cout << "Add New Employee   (1)\n"; 
    cout << "Delete Employee    (2)\n"; 
    cout << "Search Employee    (3)\n"; 
    cout << "Exit               (4)\n"; 
  
    int option; 
  
    // Input Options 
    cin >> option; 
  
    // Call function on the bases of the 
    // above option 
   
     if (option == 1) { 
        insert(); 
    } 
    else if (option == 2) { 
        deleteRecord(); 
    } 
    else if (option == 3) { 
        searchRecord(); 
    } 
    else if (option == 4) { 
        return; 
    } 
    else { 
        cout << "Expected Options"
             << " are 1/2/3/4"; 
        showMenu(); 
    } 
} 
  
// Driver Code 
int main() 
{ 
  
    showMenu(); 
    return 0; 
} 