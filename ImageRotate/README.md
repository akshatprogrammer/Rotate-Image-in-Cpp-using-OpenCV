# C++ program to rotate an image using OpenCV
## Requirements 
* Visual Studio 2019
* OpenCV
* Atleast 4 GB RAM
* i3 or higher
* 40 GB space
* Windows, Mac, Linux
* Desire to learn new.
## How to add openCV to compiler?
[Click this link to see tutorial](https://github.com/akshatprogrammer/Rotate-Image-in-Cpp-using-OpenCV/blob/main/Videos/www_screencapture_com_2020-12-20_17_01.webm)
## Functions to keep in mind :)
1. imread() -> Read an image from file (using cv::imread)
2. imshow() -> Display an image in an OpenCV window (using cv::imshow)
3. imwrite() -> Write an image to a file (using cv::imwrite) 
4. waitKey() -> waitKey() is a keyboard binding function. Its argument is the time in milliseconds. The function waits for specified milliseconds for any keyboard event. If you press any key in that time, the program continues. If 0 is passed, it waits indefinitely for a key stroke. </br>
[Sample Program](https://pastebin.pl/view/9011e60d)

5. getRotationMatrix2D() -> Use the OpenCV function cv::getRotationMatrix2D to obtain a 2×3 rotation matrix
6. warpAffine() -> Use the OpenCV function cv::warpAffine to implement simple remapping routines.</br>
[Learn More](https://docs.opencv.org/3.4/d4/d61/tutorial_warp_affine.html)

## Algorithm
1. Take input of the image add.
2. read the image from imread() function.
3. Take input of the angle.
4. Call the **rotate** function by passing inputted image and angle as parameter. </br>
  4.1. Using Point2f structure, mark the points from where to rotate the image.</br>
  4.2. Using getRotationMatrix2D() to store the rotated image matrix.</br>
  4.3. Using warpAffine() to apply an affine transforation to image.</br>
  4.4. Return the rotated image.</br>
5. Output the image using imshow() function. 
## How this program works?
Follow these steps to run the program without any errors.
1. After adding openCV to compiler environment.
2. Open Visual Studio 2019.
3. Write down the program with the help of Algorithm provided and [Original Documentation](https://opencv.org/)
4. Debug the Project settings.
