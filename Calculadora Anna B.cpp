#include <iostream>
#include <cmath>
#include <string>


	int main(){
	int numeroA, numeroB, numeroC;
	int cod;
    std::cout << "Digite a operação: 1 (soma), 2 (mult), 3 (div), 4 (sub), 5 (pow), 6(exp)" << std::endl;
    std::cin >> cod; 
    switch (cod){
    	case 1:{
    	std::cout << "Digite o primeiro número:";
    	std::cin >> numeroA; 
    	std::cout << "Digite o segundo número:";
    	std::cin >> numeroB;
    	std::cout << "O resultado é:"  << numeroA + numeroB;
    	break;
    }
    	case 2:{	
    	std::cout << "Digite o primeiro número:";
    	std::cin >> numeroA; 
    	std::cout << "Digite o segundo número:";
    	std::cin >> numeroB; 
    	std::cout << "O resultado é:" << numeroA * numeroB;
    	break;
}
    	case 3:{
    	std::cout << "Digite o primeiro número:";
    	std::cin >> numeroA; 
    	std::cout << "Digite o segundo número:";
    	std::cin >> numeroB;
		std::cout << "O resultado é:" << numeroA / numeroB;
		break;
	}
		case 4:{
		std::cout << "Digite o primeiro número:";
    	std::cin >> numeroA; 
    	std::cout << "Digite o segundo número:";
    	std::cin >> numeroB; 
    	std::cout << "O resultado é:"  << numeroA - numeroB;
		break;
	}
		case 5:{
		std::cout << "Digite o primeiro número:";
    	std::cin >> numeroA;
    	std::cout << "Digite o segundo número:";
    	std::cin >> numeroB;
		std::cout <<pow(numeroA, numeroB);
		break;
	}
		case 6: {
    	std::cout << "Digite o número que vai elevar e:";
    	std::cin >> numeroC;
    	std::cout <<exp(numeroC);
    	break;
    }
    	default: {
    	std::cout << "Operação inválida!" <<std::endl;
    	break;
    	}
    }
}

