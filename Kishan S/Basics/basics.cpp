#include <iostream>
using namespace std;

// int main(){
//     std::cout << "Hello, World!" << std::endl; // Hello, World!
// }


// int main(){
//     int x;
//     cout << "Enter value of x: "; // Enter value of x:
//     cin >> x;
//     cout << "Value of x is: " << x << endl; // Value of x is: 10
// }

// int main() {
//     int a, b;
//     cout << "Enter two numbers: "; // Enter two numbers: 10 20
//     cin >> a >> b;
//     cout << "Sum: " << a + b << endl; // Sum: 30
//     return 0;
// }

// *************************************************************************************************

// if_else

// int main(){
//     int x=10;
//     if(x>5){
//         cout << "x is greater than 5" << endl; // x is greater than 5
//     }else{
//         cout << "x is less than or equal to 5" << endl;
//     }
// }

// int main(){
//     int x;
//     cout << "Enter value of x: ";
//     cin >> x;
//     if(x>5){
//         cout << "x is greater than 5" << endl; // x is greater than 5
//     }else if(x<5){
//         cout << "x is less than 5" << endl;
//     }else{
//         cout << "x is equal to 5" << endl;
//     }
// }

// int main(){
//     int marks;
//     cout << "Enter marks: ";
//     cin >> marks;

//     if(marks>=80 && marks<=100){
//         cout << "Grade A" << endl;
//     }else if(marks>=60 && marks<=79){
//         cout << "Grade B" << endl;
//     }else if(marks>=40 && marks<=59){
//         cout << "Grade C" << endl;
//     }else if(marks>=20 && marks<=39){
//         cout << "Grade D" << endl;
//     }else{
//         cout << "Grade F" << endl;
//     }
// }

// *************************************************************************************************

// Switch Case

// int main(){
//     int choice;
//     cout << "Enter choice(1-4): ";
//     cin >> choice;

//     switch (choice)
//     {
//     case 1:
//         cout << "You chose 1" << endl;
//         break;
    
//     case 2:
//         cout << "You chose 2" << endl;
//         break;
    
//     case 3:
//         cout << "You chose 3" << endl;
//         break;
    
//     case 4:
//         cout << "You chose 4" << endl;
//         break;

//     default:
//         cout << "Invalid choice" << endl;
//         break;
//     }
// }

// int main(){
//     int day;
//     cout << "Enter day number(1-7): ";
//     cin >> day;

//     switch (day)
//     {
//     case 1:
//         cout << "Monday" << endl;
//         break;
//     case 2:
//         cout << "Tuesday" << endl;
//         break;
//     case 3:
//         cout << "Wednesday" << endl;
//         break;
//     case 4:
//         cout << "Thursday" << endl;
//         break;
//     case 5:
//         cout << "Friday" << endl;
//         break;
//     case 6:
//         cout << "Saturday" << endl;
//         break;
//     case 7:
//         cout << "Sunday" << endl;
//         break;
//     default:
//         cout << "Invalid day" << endl;
//         break;
//     }
// }

// *************************************************************************************************

// Arrays

// 1D Array

// int main(){
//     int arr[5];
//     cout << "Enter 5 numbers to store in an array: ";
//     cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
//     cout << "Entered numbers are: ";
//     cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << endl;
//     cout << "Array at index 0: " << arr[0] << endl;
//     cout << "Array at index 1: " << arr[1] << endl;
//     cout << "Array at index 2: " << arr[2] << endl;
//     cout << "Array at index 3: " << arr[3] << endl;
//     cout << "Array at index 4: " << arr[4] << endl;
//     return 0;
// }

// 2D Array

int main(){
    int arr[3][4];

    arr[3][4] = 74;
    cout << arr[3][4];
    return 0;
}

