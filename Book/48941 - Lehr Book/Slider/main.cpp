/*
 * Dr Mark E. Lehr
 * September 9th, 2015
 * Template for all Windowed Creations
*/

//System Libraries
#include <QApplication>
#include <QHBoxLayout>
#include <QSpinBox>
#include <QSlider>

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char *argv[]){
    //Start the Windowed Applications
    QApplication app(argc, argv);
    //Set the Window
    QWidget *window = new QWidget;
    window->setWindowTitle("Enter Your Age");
    //Setup the components
    QSpinBox *spinBox = new QSpinBox;
    QSlider *slider = new QSlider(Qt::Horizontal);
    spinBox->setRange(0, 130);
    slider->setRange(0, 130);
    //Connect the dots
    QObject::connect(spinBox, SIGNAL(valueChanged(int)), slider, SLOT(setValue(int)));
    QObject::connect(slider, SIGNAL(valueChanged(int)), spinBox, SLOT(setValue(int)));
    spinBox->setValue(35);
    //Lay it all out
    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(spinBox);
    layout->addWidget(slider);
    window->setLayout(layout);
    //Watch it work
    window->show();
    //Send to the controller
    return app.exec();
}
