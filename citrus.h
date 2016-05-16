#indef CITRUS_H
#define CITRUS_H
#include<string>

 class CitrusFruit{

 protected:

 float ph;

 public:

 CitrusFruit(float ph) : ph(ph){}

 const char * getName(){ return "Citrus Fruit";}

 float getPh(){ return ph; }
 };
#endif