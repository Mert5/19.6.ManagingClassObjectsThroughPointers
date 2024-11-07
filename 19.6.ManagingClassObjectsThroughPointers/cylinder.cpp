#include "cylinder.h"

Cylinder::Cylinder (double rad_param, double height_param){
    base_radius = rad_param;
    height = height_param;
}

// "Cylinder::" is scope resolution operator

double Cylinder::volume(){  // this tells compiler that the volume function leaves in the scope of Cylinder class
    return Pi * base_radius * base_radius * height;
}

double Cylinder::get_base_radius(){
    return base_radius;
}

double Cylinder::get_height(){
    return height;
}

void Cylinder::set_base_radius(double rad_param){
    base_radius = rad_param;
}

void Cylinder::set_height(double height_param){
    height = height_param;
}