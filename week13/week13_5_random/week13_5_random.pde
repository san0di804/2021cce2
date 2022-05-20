void setup(){
  size(300,300);
  fill(#F041DF);
  textSize(50);
  textAlign(CENTER,CENTER);
}
int choice = -1;
void draw(){
  background(#EFF041);
  text("Dinner 1",150 ,50);
  text("Dinner 2",150 ,150);
  text("Dinner 3",150 ,250);
  if(choice==0)ellipse(30,25,50,50);
  if(choice==1)ellipse(30,150,50,50);
  if(choice==2)ellipse(30,250,50,50);
}
void mousePressed(){
  choice=int (random(3));
}
