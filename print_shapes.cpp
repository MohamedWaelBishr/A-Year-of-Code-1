#include <iostream>
using namespace std;

int main() { 
    
    int x;
    char choice;
    
    do{
        
    cout << "Choose a shape :" << endl;
    cin >> x;
    
    //SQUARE
    if(x == 1){
        
     int side, i, j;
    
    cout << "Enter side of square\n";
    cin >> side;
    
    /* Row iterator for loop */
    for(i = 0; i < side; i++){
     /* Column iterator for loop */
        for(j = 0; j < side; j++){
            /* Check if currely position is a boundary position */
            if(i==0 || i==side-1 || j==0 || j==side-1)
                cout << "*";
            else 
                cout << " ";
        }
        cout << "\n";
    }
    
    }
    
    //RECTANGLE
    if(x == 2){
        
            int rows, cols , i, j;
    
    cout << "Enter rows and columns of rectangle\n";
    cin >> rows >> cols;
    
    /* Row iterator for loop */
    for(i = 0; i < rows; i++){
     /* Column iterator for loop */
        for(j = 0; j < cols; j++){
            /* Check if currely position is a boundary position */
            if(i==0 || i==rows-1 || j==0 || j==cols-1)
                cout << "*";
            else 
                cout << " ";
        }
        cout << "\n";
    }
        
        
    }
    
    if(x == 3){
        
         int i, space, rows=7, star=0;
    
    /* Printing upper triangle */
    for(i = 1; i <= rows; i++) {
        /* Printing spaces */
        for(space = 1; space <= rows-i; space++) {
                cout << " ";
        }
        /* Printing stars */
        while(star != (2*i - 1)) {
         if(star == 0 or star==2*i-2)
            cout << "*";
            else 
                cout << " ";
            star++;
        }
        star=0;
        /* move to next row */
       cout << "\n";
    }
    rows--;
    /* Printing lower triangle */
    for(i = rows;i >= 1; i--) {
        /* Printing spaces */
        for(space = 0; space <= rows-i; space++) {
                cout << " ";
        }
        /* Printing stars */
        star = 0;
        while(star != (2*i - 1)) {
         if(star == 0 or star==2*i-2)
               cout << "*";
            else 
                cout << " ";
            star++;
        }
        cout << "\n";
    }
        
    }
    
    
    if(x == 4){
        
            int i,j,rows;
    cout << "Enter the number of rows\n" ;
    cin >> rows ;
     
    for(i = 1; i <= rows; i++) {
        /* Prints one row of triangle */
        for(j = 1; j <= i; ++j) {
           cout << "* ";
        }
        /* move to next row */
        cout << "\n" ;
    }
        
    }
    
    } while(choice == 'y' || choice == 'Y');
    
	return 0;
}
