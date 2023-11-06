#include<iostream>
#include<vector>
#include<exception>
using namespace std;
class Stack {
    private:
    vector<int> entier;
    int max;
    public:
    Stack(vector<int> nbr , int m=20):entier(nbr),max(m){}
    void operator<<(int &nbr){    //ajouter un element a la pile 
        try{  //cas d'eureur
         if(entier.size()<max){
            entier.push_back(nbr);
         }else
         throw "tu ne peux pas ajouter (max size )";
          }
          catch(const char*chaine){
            cerr<<chaine<<endl;
          }
    } 
    void operator>>(int &nbr){//supprimer un element
        try{ 
        if(entier.size()>0){
            nbr=entier.back();
            entier.pop_back();
                    }
    else {
        throw "pile est vide";
    }
 } 
 catch(const char*e){
    cerr<<e<<endl;
 }
 }
   int operator++(){  //condition de PIle pleine 
    if(entier.size()==max){
      return 1;
    }
     else
     return 0;
   }
   int operator --(){
    if(entier.empty()){  
        return 1 ;
    }
    else {
        return 0;
    }
   }
   };