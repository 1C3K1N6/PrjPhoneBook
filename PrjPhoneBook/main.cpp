#include <iostream>
#include <string.h>
#include <fstream>
#include <conio.h>

using namespace std;

class Start {
public:


    char* line = new char[n];

    int n;
    int counX = 0;
    int counY = 0;
    const char *SEPARATORS = " ";       //Разделители
    char *ptr = 0;       //Указатель
    string heck[4];
    string buff;


    Start(){
        ifstream inFile("inFile.txt"); //открываем файл

    if (inFile.is_open()){
        cout << "file opened" << endl; // проверяем открытие файла
        }

     while(inFile.getline(line,n)){ //узнаем кол-во строк
                    counY++;
                }
                cout<< "кол-во строк - "<< counY<< endl;
                inFile.clear();
                inFile.seekg(0);  //перемещем указатель в начало файла
                heck[counY];



    while (inFile.getline(line,n ,'\n')){
       heck [counX] = line;
       counX++;

      }
      cout << "элементы в списке : "<<endl;

         for (int x = 0; x < counY; x++){

            cout << heck[x] << "  "<< endl;
            cout << "-----------"<<endl;

        }
    //inFile << "\n";





    }


        void nameSort(){
            for(int i=0;i<counY;i++){
                for(int j=0;j<counY;j++){
                    if(heck[j]>heck[j+1]){
                        //swap(heck[j],heck[j+1]);
                        buff=heck[j++];
                        heck[j+1] = heck[j];// доделать буффе
                        heck[j] = buff;
                    }
                }
            }


         for (int x = 0; x < counY; x++){

            cout << heck[x] << "  "<< endl;
            cout << "-----------"<<endl;

        }
    }
};

int main()
{
    setlocale(LC_ALL,"Rus");
    Start start;
    start.nameSort();
    return 0;
}
