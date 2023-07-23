int led[5]={13,12,11,10,9};
int sens[3]={0,511,341};
void setup(){pinMode(A0, INPUT);
  for(int i=0;i<=4;i++){pinMode(led[i], OUTPUT);}
             Serial.begin(9600);
             

            }
void loop()
{Serial.println(analogRead(A0));
 switch(analogRead(A0)){
  
case 0 :digitalWrite(led[0],HIGH);break;
  
case 512 :digitalWrite(led[1],HIGH);break;
case 682 :digitalWrite(led[2],HIGH);break;
default : for(int i=0;i<=sizeof(led);i++){digitalWrite(led[i],LOW);}}
}
