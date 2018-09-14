import cc.arduino.*;
import org.firmata.*;
import processing.serial.*;

Serial myDuino;
String val;

void setup() {  
  String port = Serial.list()[0];
  myDuino = new Serial(this, port, 9600);  
}

void draw() {
  if(mousePressed == true){
    myDuino.write('1');

  } else {
    myDuino.write('0');
  }
}