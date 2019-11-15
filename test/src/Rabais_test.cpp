#include "Rabais_test.h"


void RabaisTest::setUp() {
		this->objet_a_tester = new Rabais();



}

void RabaisTest::tearDown() {
		delete this->objet_a_tester;
}


void RabaisTest::test_branch1() {
	
	Facture une_facture;
	une_facture.ajouterItem(15);
    tm date;
    date.tm_year = 2016;
    date.tm_mday = 05;
    date.tm_mon= 02;
	Client* client = new Client(26000 ,"Lebdiri", "Nassim", 56, "XX", date);
    this->objet_a_tester->ajouterClient(client);
    float rabais =this->objet_a_tester->getRabais(une_facture,26000);
    CPPUNIT_ASSERT_EQUAL((float)0.15, rabais);
    
    

}


void RabaisTest::test_branch2() {
	
	Facture une_facture;
	une_facture.ajouterItem(00);
    tm date;
    date.tm_year = 2019;
    date.tm_mday = 05;
    date.tm_mon= 02;
	Client* client = new Client(20000 ,"Lebdiri", "Nassim", 56, "XX", date);
    this->objet_a_tester->ajouterClient(client);
    float rabais =this->objet_a_tester->getRabais(une_facture,20000);
    CPPUNIT_ASSERT_EQUAL((float)0.1, rabais);
    
    

}

void RabaisTest::test_branch3_1() {
	
	Facture une_facture;
	une_facture.ajouterItem(12);
    tm date;
    date.tm_year = 2019;
    date.tm_mday = 05;
    date.tm_mon= 02;
	Client* client = new Client(20000 ,"Lebdiri", "Nassim", 54, "H1C", date);
    this->objet_a_tester->ajouterClient(client);
    float rabais =this->objet_a_tester->getRabais(une_facture,20000);
    CPPUNIT_ASSERT_EQUAL((float)0.04, rabais);
    
    

}

void RabaisTest::test_branch3_2() {
	
	Facture une_facture;
	une_facture.ajouterItem(0);
    tm date;
    date.tm_year = 2019;
    date.tm_mday = 05;
    date.tm_mon= 02;
	Client* client = new Client(20000 ,"Lebdiri", "Nassim", 54, "H3P", date);
    this->objet_a_tester->ajouterClient(client);
    float rabais =this->objet_a_tester->getRabais(une_facture,20000);
    CPPUNIT_ASSERT_EQUAL((float)0.03, rabais);
    
    

}
void RabaisTest::test_branch3_3() {
	
	Facture une_facture;
	une_facture.ajouterItem(0);
    tm date;
    date.tm_year = 2019;
    date.tm_mday = 05;
    date.tm_mon= 02;
	Client* client = new Client(20000 ,"Lebdiri", "Nassim", 54, "J4O", date);
    this->objet_a_tester->ajouterClient(client);
    float rabais =this->objet_a_tester->getRabais(une_facture,20000);
    CPPUNIT_ASSERT_EQUAL((float)0.02, rabais);
    
    

}

void RabaisTest::test_branch4_1() {
	
	Facture une_facture;
	une_facture.ajouterItem(0);
    
    tm date;
    date.tm_year = 2009;
    date.tm_mday = 05;
    date.tm_mon= 02;
	Client* client = new Client(20000 ,"Lebdiri", "Nassim", 54, "XX", date);
    this->objet_a_tester->ajouterClient(client);
    float rabais =this->objet_a_tester->getRabais(une_facture,20000);
    CPPUNIT_ASSERT_EQUAL((float)0.06, rabais);
    
    

}
void RabaisTest::test_branch4_2() {
	
	Facture une_facture;
	une_facture.ajouterItem(40);
    une_facture.ajouterItem(700);
    
    tm date;
    date.tm_year = 1989;
    date.tm_mday = 05;
    date.tm_mon= 02;
	Client* client = new Client(20000 ,"Lebdiri", "Nassim", 54, "XX", date);
    this->objet_a_tester->ajouterClient(client);
    float rabais =this->objet_a_tester->getRabais(une_facture,20000);
    CPPUNIT_ASSERT_EQUAL((float)0.1, rabais);
    
    

}
void RabaisTest::test_branch5_1() {
	
	Facture une_facture;
	une_facture.ajouterItem(220);
    une_facture.ajouterItem(180);
    
    tm date;
    date.tm_year = 2019;
    date.tm_mday = 05;
    date.tm_mon= 02;
	Client* client = new Client(20000 ,"Lebdiri", "Nassim", 54, "XX", date);
    this->objet_a_tester->ajouterClient(client);
    float rabais =this->objet_a_tester->getRabais(une_facture,20000);
    CPPUNIT_ASSERT_EQUAL((float)0.03, rabais);
    
    

}
void RabaisTest::test_branch5_2() {
	
	Facture une_facture;
	une_facture.ajouterItem(800);
    
    tm date;
    date.tm_year = 2019;
    date.tm_mday = 05;
    date.tm_mon= 02;
	Client* client = new Client(20000 ,"Lebdiri", "Nassim", 54, "XX", date);
    this->objet_a_tester->ajouterClient(client);
    float rabais =this->objet_a_tester->getRabais(une_facture,20000);
    CPPUNIT_ASSERT_EQUAL((float)0.06, rabais);
    
    

}
