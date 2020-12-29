#include<opencv2/opencv.hpp>        // Header file to include aal the nescessaey functions of openCV.
#include <iostream>
#include<string>

using namespace cv;             // namespace to use cv objects.
using namespace std;

Mat rotate(Mat original, double angle)   // function to rotate image and return it, taking arguements as original image and angle.   
{
    Mat new_image;      //Mat object for output image file.
    Point2f pt(original.cols / 2., original.rows / 2.);          //point from where to rotate    
    Mat r = getRotationMatrix2D(pt, angle,-0.4);      //Mat object for storing after rotation
    warpAffine(original, new_image, r, Size(original.cols, original.rows));  ///applie an affine transforation to image.
    return new_image;         //returning Mat object for output image file
}

int main()
{
    string img_name;
    cout << "Enter the name of image : ";
    cin >> img_name;       // Enter the address of your image.
    getchar();
    Mat original = imread(img_name);           //reading image file in mat object
 
    cout << "Enter the Angle : ";
    int angle;
    cin >> angle; // Enter the angle

   // cout << "Inputted image -> " << endl;
    imshow("original", original);          //displaying input image file
    Mat new_image;      //Mat object for output image file
    new_image = rotate(original, angle);       //calling the function to rotate image with n degree angle

   // cout << "Outputted image -> " << endl;
    imshow("new_image", new_image);         //displaying output image file
    waitKey(0);                     //to exit press escape
    return 0;
}
