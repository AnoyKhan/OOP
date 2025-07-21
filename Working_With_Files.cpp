#include <iostream>
#include <fstream>
/*
A file must be opened before you can read from it or write to it.
Either the ofstream or fstream object may be used to open a file
for writing.
*/
using namespace std;
int main() {
    ofstream MyFile;
    MyFile.open("test.txt");//Running this code will cause a "test.txt" file to be created in the directory of your project with "Some text!" written in it.

    MyFile<<"some text! \n";
    MyFile.close();//When you've finished working with a file, close it using the member function close().

//----------------------------More on Files------------------------------

    //we can also provide the path to our file using the ofstream object's constructor, instead of calling the open function.
    ofstream MyFile2("test2.text");
    MyFile2<<"This is awesome! \n";
    MyFile2.close();


    /*
    Under certain circumstances, such as when we don't have
    file permissions, the open function can fail.
    The is_open() member function checks whether the file is open and ready to be accessed.
    */
    ofstream MyFile3("test3.text");
    if (MyFile3.is_open()) {  //The is_open() member function checks whether the file is open and ready to be accessed.
        MyFile3<<"I Can work with files!\n";
    }
    else {
        cout<<"File not opened!"<<endl;
    }
    MyFile3.close();

/*
    ------------------------File Opening Modes------------------------
    Mode Parameter   |    Meaning
    ------------------------------------------------------------------
    ios::app         | append to end of file
    ------------------------------------------------------------------
    ios::ate         | go to end of file on opening
    ------------------------------------------------------------------
    ios::binary      | file open in binary mode
    ------------------------------------------------------------------
    ios::in          | open file for reading only
    ------------------------------------------------------------------
    ios::out         | open file for writing only
    ------------------------------------------------------------------
    ios::trunc       | delete the contents of the file if it exists
    ------------------------------------------------------------------

    All these flags can be combined using the bitwise operator OR (|).
    For example, to open a file in write mode and truncate it, in case it already exists, use the following syntax:

    ofstream outfile;
    outfile.open("file.dat", ios::out | ios::trunc );
*/
//----------------Reading from a File------------------------
    ofstream MyFile4("test4.text");
    MyFile4<<"This is a test text4!\n";
    MyFile4.close();

    string line;
    ifstream Myfile("test.txt");//We can read information from a file using an ifstream or fstream object.
    while (getline(Myfile, line)) {//The getline function reads characters from an input stream and places them into a string. Our while loop uses the getline function to read the file line by line.
        cout << line <<'\n';
    }
    Myfile.close();
}