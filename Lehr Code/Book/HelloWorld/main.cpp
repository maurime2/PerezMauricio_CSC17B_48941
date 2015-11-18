/*
 * Dr Mark E. Lehr
 * September 9th, 2015
 * Template for all Windowed Creations
*/

//System Libraries
#include <QApplication>
#include <QLabel>

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char *argv[]){
    //Start the Windowed Applications
    QApplication app(argc, argv);
    //Add a label
    QLabel *label=new QLabel("HelloWorld");
    //Show the label
    label->show();
    //Send to the controller
    return app.exec();
}
