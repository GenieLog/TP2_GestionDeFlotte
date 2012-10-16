
#ifndef CLIENT_H
#define CLIENT_H
#include "Personne.h"

#include <string>
#include vector

#include "Balade.h"
class Balade;
#include "undef.h"


/**
  * class Client
  * 
  */

class Client : virtual public Personne
{
public:

  // Constructors/Destructors
  //  


  /**
   * Empty Constructor
   */
  Client ( );

  /**
   * Empty Destructor
   */
  virtual ~Client ( );

  // Static Public attributes
  //  

  // Public attributes
  //  


  vector<Balade*> m_baladesascapitVector;

  vector<Balade*> m_baladesasaccompVector;

  vector<undef*> m_permisVector;

  // Public attribute accessor methods
  //  


  // Public attribute accessor methods
  //  


  /**
   * Add a BaladesAsCapit object to the m_baladesascapitVector List
   */
  void addBaladesAsCapit ( Balade * add_object );

  /**
   * Remove a BaladesAsCapit object from m_baladesascapitVector List
   */
  void removeBaladesAsCapit ( Balade * remove_object );

  /**
   * Get the list of BaladesAsCapit objects held by m_baladesascapitVector
   * @return vector<Balade *> list of BaladesAsCapit objects held by
   * m_baladesascapitVector
   */
  vector<Balade *> getBaladesAsCapitList ( );

  /**
   * Add a BaladesAsAccomp object to the m_baladesasaccompVector List
   */
  void addBaladesAsAccomp ( Balade * add_object );

  /**
   * Remove a BaladesAsAccomp object from m_baladesasaccompVector List
   */
  void removeBaladesAsAccomp ( Balade * remove_object );

  /**
   * Get the list of BaladesAsAccomp objects held by m_baladesasaccompVector
   * @return vector<Balade *> list of BaladesAsAccomp objects held by
   * m_baladesasaccompVector
   */
  vector<Balade *> getBaladesAsAccompList ( );

  /**
   * Add a Permis object to the m_permisVector List
   */
  void addPermis ( undef * add_object );

  /**
   * Remove a Permis object from m_permisVector List
   */
  void removePermis ( undef * remove_object );

  /**
   * Get the list of Permis objects held by m_permisVector
   * @return vector<undef *> list of Permis objects held by m_permisVector
   */
  vector<undef *> getPermisList ( );


  /**
   * @param  id_balade
   */
  void add_balade (int id_balade )
  {
  }

protected:

  // Static Protected attributes
  //  

  // Protected attributes
  //  

public:


  // Protected attribute accessor methods
  //  

protected:

public:


  // Protected attribute accessor methods
  //  

protected:


private:

  // Static Private attributes
  //  

  // Private attributes
  //  

  unsigned int id_client;
  string permis;
public:


  // Private attribute accessor methods
  //  

private:

public:


  // Private attribute accessor methods
  //  


  /**
   * Set the value of id_client
   * @param new_var the new value of id_client
   */
  void setId_client ( unsigned int new_var )   {
      id_client = new_var;
  }

  /**
   * Get the value of id_client
   * @return the value of id_client
   */
  unsigned int getId_client ( )   {
    return id_client;
  }

  /**
   * Set the value of permis
   * @param new_var the new value of permis
   */
  void setPermis ( string new_var )   {
      permis = new_var;
  }

  /**
   * Get the value of permis
   * @return the value of permis
   */
  string getPermis ( )   {
    return permis;
  }
private:


  void initAttributes ( ) ;

};

#endif // CLIENT_H
