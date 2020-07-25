#include <bits/stdc++.h>
#include <iostream>
#include <vector>


/*
 * main code begins
 */
int main()
{
    /* store integers in a vector from standard input */
    std::vector<int> myarr;    // our container
    int token;             // our container content variable
    float average = 0;
    std::cout<<"Enter some integers, followed by <CTRL><D>:"<< std::endl;
    while (std::cin >> token) // loop exits when user enters <CTRL><D>
    {
        average = average + token;
        myarr.push_back(token);
    }
    std::cout << std::endl << std::endl;

    /* print integers from vector */
    std::cout << "Your integers are:" << std::endl;
    for (std::vector<int>::size_type j = 0; j != myarr.size(); ++j)
    {
        std::cout << myarr[j] << std::endl;
    }
    std::cout << std::endl;

    //printing maximum number
    std::cout<<"maximum number is : "<<*max_element(myarr.begin(), 
    myarr.end())<<std::endl<<std::endl;

    //printing minimum number
    std::cout<<"minimum number is : "<<*min_element(myarr.begin(), 
    myarr.end())<<std::endl<<std::endl;

    //printing average of vector
    std::cout<<"average of vector is : "<< (average/myarr.size()) <<     
    std::endl<<std::endl;

    //printing median of vector
    std::cout<<"median of vector is : " << (myarr.at(myarr.size()/2))<<        
    std::endl<<std::endl;

    std::cout<<"vector in descending order is : "<< std::endl;
    //sort array in descending order
    sort(myarr.rbegin(), myarr.rend());
    //printing descending sorted vector
    for (std::vector<int>::size_type j = 0; j != myarr.size(); ++j)
        {
            std::cout << myarr[j]<<std::endl;
        }
    std::cout << std::endl;

    return0;
}
