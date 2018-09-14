void read(){
  if(myDuino.available() >0){
    val = myDuino.readStringUntil('\n');
  }
}