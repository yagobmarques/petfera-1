#include <ave.h>

Ave::Ave(double tamanho_bico, double envergadura_asas){
	this->tamanho_bico = tamanho_bico;
	this->envergadura_asas = envergadura_asas;
};

void Ave::setTamanho_bico(double tamanho_bico){
	this->tamanho_bico = tamanho_bico;
};

double Ave::getTamanho_bico(){
	return this->tamanho_bico;
};

void Ave::setEnvergadura_asas(double envergadura_asas){
	this->envergadura_asas = envergadura_asas;
};

double Ave::getEnvergadura_asas(){
	return this->envergadura_asas = envergadura_asas;
};

Ave::~Ave(){
};