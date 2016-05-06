lemon le1(1.4), le2(1.5),le3(1.234);
Orange  or1(0.4), or2(0.3), or3(0.5);
CitrusFruit * cfruits[]={&le1,&le2, &le3, &or1, &or2,  &or3};
for (int i=0; i<6; i++)
cout <<cfruits[i]->getName()<<"has a ph"
<<cfruits[i]->getPh()<< endl;