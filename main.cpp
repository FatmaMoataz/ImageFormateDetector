#include <iostream>
#include <fstream>

using namespace std;

int main()
{
string fileName;
cout<<"Enter your image file: ";
getline(cin,fileName);
ifstream file(fileName,ios::binary);
if(!file)
    cout<<"The file is not supported";
char num[8];
file.read(num,8);
if(num[0]==static_cast<char>(0xFF) && num[1]==static_cast<char>(0xD8) && num[2]==static_cast<char>(0xFF))
    cout<<"This file is a JPEG image";
else {
    file.seekg(0,ios::beg);
    file.read(num,4);
    if(num[0]==static_cast<char>(0x49) && num[1]==static_cast<char>(0x49) && num[2]==static_cast<char>(0x2A) && num[3]==static_cast<char>(0x00))
        cout<<"This file is a TIFF image";
        else {
    file.seekg(0,ios::beg);
    file.read(num,3);
    if(num[0]=='R' && num[1]=='A' && num[2]=='W')
        cout<<"This file is a RAW image";
        else {
            file.seekg(0,ios::beg);
            file.read(num,8);
            if(num[0]==static_cast<char>(0x89) && num[1]==static_cast<char>(0x50) && num[2]==static_cast<char>(0x4E) && num[3]==static_cast<char>(0x47) && num[4]==static_cast<char>(0x0D) && num[5]==static_cast<char>(0x0A) && num[6]==static_cast<char>(0x1A) && num[7]==static_cast<char>(0x0A))
                cout<<"This file is a PNG image";
                else {
                    file.seekg(0,ios::beg);
                    file.read(num,3);
                    if(num[0]=='G' && num[1]=='I' && num[2]=='F')
                        cout<<"This file is a GIF image";
                    else {
                        file.seekg(0,ios::beg);
                        file.read(num,2);
                        if(num[0]=='B' && num[1]=='M')
                            cout<<"This file is a BMP image";
                    }
                }
        }
   }
}
   return 0;
}
