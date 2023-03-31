/*As we know Vectors are Dynamic arrays with the ability to  resize automatically when the element inserted
or deleted from the array,with their storage  being handled automatically by  the container.

VECTOR OF VECTORS----->
 vector of vectors  is a 2Dimentional vector with a variable number of rows where each row is a vector.
 Each index of vector stores a vector which can be triversed and accessed using iterators.

 It is similar to an array of vector but with the Dynamic properties.

 -------SYNTAX----
 vector<vector<data_type>> vec;


 For example--
 vector<vector<int>> vec{1,2,3},
                        {4,5,6},
                        {7,8,9,4 } };

                 ---Where 'vec' is the vector of vectors  with different number of elements in different rows.       


*/

/*Some operations on Vector of vectors


------FIRST OPERATION WILL BE ------

>>>>>>>>>>>>>>  INSERTION IN VECTOR OF VECTORS  <<<<<<<<<<<<<<<<<<<<<
Insertion  can be  inserted  into a vector using  the push_back() function  of C++ STL.


---SYNTEX----

vector_name.push_back(value)

where 'value' refers to the element
              to be added  in the back of the vector.



       For example

       V2={1,2,3}
       v1.Push_back(v2);

       This function push vector v2 into vector of  vector v1. Therefore v1 becomes {{1,2,3}}

       if again
       v2 = {5,6,7}
       v1.push_back(v2);

       At that time the function pushes the vector v2 into the existing vector v1. Therefor v1 becomes {{1,2,3},{5,6,7}}


*/

//>>>>>>>>>>>  Example insertion into  a vector of vectors.

#include<bits/stdc++.h>
using namespace std;

//firstly define the rows and columns of vector of vectors

# define row 4
# define col 5

int main(){

       //initialize the vector of vectors 
       vector<vector<int>> vec;

       //element to insert in column

       int num = 10;

       //inserting  elements into the vector
       for(int i =0;i< row;i++){
              //vector to store column  elements
              vector<int> v1;

              for(int j=0;j<col;j++){
                     v1.push_back(num);
                     num += 5;
              }

              //pushing back above 1d vector
              // to create the 2d vector

              vec.push_back(v1);
       }
       //Displaying a 2D vector
       for(int i=0;i<vec.size();i++){
              for(int j =0;j<vec[i].size();j++)
                     cout<<vec[i][j] << " ";
                     cout<<endl;
       
            

       }
         return 0;
}


              /*Output will be
              10 15 20 25 30
              35 40 45 50 55
              60 65 70 75 80
              85 90 95 100 105
              
              */

/*
.........................REMOVAL OR DELETION IN A VECTOR OF VECTORS..................

Elements can be removed  form a vector of vectors using the Pop_back() function in C++ STL.

>>>>>SYNTAX----
       vector_name[row_position].pop_back()


For example
       let the vectors of vector be vector v = {{1,2,3},{4,5,6},{7,8,9}}
       v[2].pop_back()

       This function removes  element 9 from the last row vector. Therefore v becomes{{1,2,3},{4,5,6},{7,8}}


       Lets write the code-----
*/

#include<bits/stdc++.h>
using namespace std;
//Ye hai Driver method
int main(){
       //Intializing  2D vector "vect" with simple values
       vector<vector<int>> vec {   { 1, 2, 3},
                                   { 4, 5 ,6},
                                   { 7, 8, 9}  };

       //Removing the element form last row of the vector

       vec[2].pop_back();
       vec[1].pop_back();


       //displaying the 2D vector

       for(int i=0;i<3;i++){
              for(
                     auto it = vec[i].begin();
                     it !=vec[i].end();it++)

                     cout<<*it <<" ";
                     cout<<endl;
       }                        
       return 0;    
                            
}

//the output will be

/*
1 2 3
4 5
7 8

*/
