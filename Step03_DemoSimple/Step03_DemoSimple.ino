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
  // SI VOS MOTEUR ONT ETE CALIBRES A L ARRET...
  
  // --- Test de la "Marche avant" ---
  // Si le mobile recule.... c'est que les deux servo sont montés
  // dans le "mauvais sens". Le plus simple c'est encore d'inverser
  // les raccordements des servos sur les broches 9 et 10.
  servoDroit.write( 0 );   // avant 
  servoGauche.write( 180 );// avant
  
  // attendre 5 secondes
  delay( 5000 );
  
  // Tourner à gauche
  servoDroit.write( 0 );  // avant
  servoGauche.write( 0 ); // arriere
  delay( 2000 );
  
  // Marche Avant
  servoDroit.write( 0 );
  servoGauche.write( 180 );
  
  // attendre 5 secondes
  delay( 5000 );
  
  // Tourner à droite
  servoDroit.write( 180 ); // arriere
  servoGauche.write( 180 );// avant 
  delay( 3000 );
  
  // Marche Arrière
  servoDroit.write( 180 ); // arriere 
  servoGauche.write( 0 );  // arriere
  
  delay( 5000 );
  
  // Arret
  servoDroit.write( 90 );
  servoGauche.write( 90 );
  
  // arreter le programme
  while( true );
} 
