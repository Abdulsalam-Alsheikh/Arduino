int kp = 12.11;
int ki =0.51 ;
int kd =0.11 ,input1;

unsigned long currentTime;
unsigned long previousTime = 0;
float dt;
float error,error1;
float lastError;
float input, volt,deg,x=0,f=1;
double output;
float cumError, rateError;
int setPoint;
char var;

void setup(){
  pinMode(9,OUTPUT);//تهيئة المخارج وتشغيل منفذ السيريال
    pinMode(10,OUTPUT);
  Serial.begin(9600);
   setPoint = 90;
  input = analogRead(A0)-(125);
   deg =input*180/857;
  error1=setPoint-deg;
}
void loop(){ 
    while( Serial.available()){
		var = Serial.read();
    }
    switch (var) {
		case 'a':
		   setPoint = 0;
			break ;
		case 'b':
		   setPoint = 30;
			break ;
		case 'c':
		   setPoint = 60;
			break ;
		case 'd':
		   setPoint = 90;
			break ;
		case 'e':
		   setPoint = 120;
			break ;
		case 'f':
		   setPoint = 150;
			break ;
		case 'g':
		   setPoint = 180;
			break ;
		default :
		break ;
}
	input = analogRead(A0)-(125);
	deg =input*180/857;
	output = computePID(deg); 
	delay(1);
	error1=setPoint-deg;
    output=min(255,output);
    output=max(0,output);
    if(error1>0){
		analogWrite(9, 0);           //مع عقارب الساعة it is in1
		analogWrite(10, output);    // it is in2
    } 
    if(error1<0){
		analogWrite(9, output);   //بعكس عقارب الساعة it is in1
		analogWrite(10, 0);         //it is in2
    }
    
}
double computePID(double inp){ //PID function
	currentTime = millis(); 
	dt = (double)(currentTime - previousTime); 
	error = setPoint - inp; 
	if(error<0){error*=-1;}
	cumError += error * dt; 
	rateError = (error - lastError)/dt;
	double out = kp*error + ki*cumError + kd*rateError; 
	lastError = error; 
	previousTime = currentTime; 
	return out; 
}
