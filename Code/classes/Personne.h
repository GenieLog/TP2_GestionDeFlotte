
#ifndef PERSONNE_H
#define PERSONNE_H
#include "Skipper.h"
#include "Client.h"
#include "Employe.h"

#include <string>

/**
  * class Personne
  * 
  */

/******************************* Abstract Class ****************************
Personne does not have any pure virtual methods, but its author
  defined it as an abstract class, so you should not use it directly.
  Inherit from it instead and create only objects from the derived classes
*****************************************************************************/

class Personne : public Skipper, public Client, public Employe
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Personne ( );

  /**
   * Empty Destructor
   */
  virtual ~Personne ( );

  // Static Public attributes
  //  

  // Public attributes
  //  


  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

  string nom;
  string prenom;
  string sexe;
  string nationalite;
  Date naissance;
public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  


  /**
   * Set the value of nom
   * @param new_var the new value of nom
   */
  void setNom ( string new_var )   {
      nom = new_var;
  }

  /**
   * Get the value of nom
   * @return the value of nom
   */
  string getNom ( )   {
    return nom;
  }

  /**
   * Set the value of prenom
   * @param new_var the new value of prenom
   */
  void setPrenom ( string new_var )   {
      prenom = new_var;
  }

  /**
   * Get the value of prenom
   * @return the value of prenom
   */
  string getPrenom ( )   {
    return prenom;
  }

  /**
   * Set the value of sexe
   * @param new_var the new value of sexe
   */
  void setSexe ( string new_var )   {
      sexe = new_var;
  }

  /**
   * Get the value of sexe
   * @return the value of sexe
   */
  string getSexe ( )   {
    return sexe;
  }

  /**
   * Set the value of nationalite
   * @param new_var the new value of nationalite
   */
  void setNationalite ( string new_var )   {
      nationalite = new_var;
  }

  /**
   * Get the value of nationalite
   * @return the value of nationalite
   */
  string getNationalite ( )   {
    return nationalite;
  }

  /**
   * Set the value of naissance
   * @param new_var the new value of naissance
   */
  void setNaissance ( Date new_var )   {
      naissance = new_var;
  }

  /**
   * Get the value of naissance
   * @return the value of naissance
   */
  Date getNaissance ( )   {
    return naissance;
  }
protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  

private:


  void initAttributes ( ) ;

};

#endif // PERSONNE_H
