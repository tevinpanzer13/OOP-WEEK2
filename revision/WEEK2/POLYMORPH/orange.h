Class Orange : public CitrusFruit{
public:
Orange (float ph):Citrus(ph){}
const char *getName (){return "Orange Fruit" ;}
float getPh(){return ph * 0.5}
};

