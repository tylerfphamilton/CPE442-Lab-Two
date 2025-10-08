/*********************************************************
* File: display_img.cpp
*
* Description: This file reads a command line argument, the file and an image, and 
* uses openCV lib functions to open the image and display it
*
* Author: Tyler Hamilton
*
* Revisions: none
*
**********************************************************/

#include <opencv2/opencv.hpp>
#include <iostream>

/*-----------------------------------------------------
* Function: main
*
* Description: this function (main) opens an image 
*
* param argc: int: number of command line arguments
* param argv[]: char*: array of string based on command line arguments
*
* return: int
*--------------------------------------------------------*/ 

int main (int argc, char *argv[]){

    // if there are not exactly two arguments throw an error
    if (argc != 2){
        perror("There was an error opening the file");
    }

    // need to open the file
    cv::Mat img = cv::imread(argv[1], cv::IMREAD_COLOR);

    // if there is an error opening the image
    if (img.empty()){
        std::cerr << "The image could not be opened" << std::endl;
        return -1;
    }

    // Display the image in the terminal
    cv::imshow("Display Image", img);

    // wait for a key press
    cv::waitKey(0);

    // Destroy the windows
    cv::destroyAllWindows();
    
}