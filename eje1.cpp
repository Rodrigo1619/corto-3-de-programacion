#include "iostream"
using namespace std;

float salarioT (float hn, float he)  //hn=horas normales, he= horas extras
{
    float sT;
    sT= (hn*1.75)+(he*2.50);
    return sT;
}
float salarioR (float hn, float he)
{
    float sR, sT;    //sR= salario real, sT= salario total
sT= (hn*1.75)+(he*2.50);
 if (sT>500){
     sR= sT-(sT*(0.04+0.0625+0.10)); //el 0.04, 0.625 y el 0.10 son los descuentos que se le hacen al empleado
     return sR;
 }
 else {
     sR= sT-(sT*(0.04+0.025));
     return sR;
 }
}

int main (){
    int i,num;
    float hn, he;
    cout<<"Digite el numero de empleados: "<<endl;
    cin>> num;
    for (i = 1; i <= num; i++) //ese i++ lleva el contador de cuantos empleados se indico de primero para conocer solo de esos empleados
                                 
    {
        cout<<"Digite las horas trabajadas del empleado: "<<endl; cin>>hn;
        cout<<"Digite las horas extras trabajadas por el empleado: "<<endl; cin>>he;
        cout<<"El salario total es: "<<salarioT(hn, he)<<endl;
        cout<<"El salario real es: "<<salarioR(hn, he)<<endl;
    }
    return 0;
}
