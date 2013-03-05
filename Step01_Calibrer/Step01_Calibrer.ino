// --- Ma planche a pain mobile --------------------------------
//
// Un servo normal se positionne sur un angle donné en fonction.
// Un servo a rotation continue est modifié pour tourner plus ou moins vite 
//   en fonction de l'instruction envoyée.
// Un servo à rotation continue permet de créer facilement de petits robot mobiles
//
// Un projet www.mchobby.be (vente de kit et composant)
// Meurisse D. - Licence CC-SA-BY
//
// http://mchobby.be/wiki/index.php?title=Plateforme-PAPM
//
#include <Servo.h> 
 
// creer des objets Servo pour le controle de Servo à Rotation 
// continue
Servo servoGauche; // sur broche 9
Servo servoDroit;  // sur broche 10
  
void setup() 
{ 
  servoGauche.attach(9);  // attacher le servo gauche sur la pin 9 
  servoDroit.attach(10);  // attacher le servo droit sur la pin 10
  // arret
  servoGauche.write(90);
  servoDroit.write(90); 
} 
 
void loop() 
{ 
  // Calibrez vos servos moteurs pour qu'ils restent à l'arret
} 
