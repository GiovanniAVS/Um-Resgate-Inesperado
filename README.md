# Um-Resgate-Inesperado

# Introdução

O problema apresentado foi uma continuação do enunciado dos primeiros trabalhos práticos “Extração Z” e “Retornando Para Casa”; neste temos o objetivo de construir um programa para nossas naves que, a partir de diversos métodos, codifica e decodifica mensagens enviadas e recebidas pela central de comando a fim de impedir que nossas comunicações sejam lidas por piratas mercenários.

Para lidar com essa problemática foi feito o Programa “Um Resgate Inesperado”, este é um software criado com base na linguagem C/C++ que realiza a leitura de um arquivos.txt predefinido que contém informações sobre a base usada para as codificações e as mensagens que devem ser  codificadas/decodificadas pelas naves,  em seguida ele realiza a tarefa que foi pedida por meio de um algorítimo recursivo de uma árvore binária, e plota os resultados na interface.

Para tal programa ser desenvolvido, foi necessário a separação de responsabilidades. O main teve a atribuição de ler os arquivos passados como parâmetro de entrada, criar objetos de alto nível de complexidade e selecionar o que deve ser feito com a linha de comando lida. Já o código secundário arvore faz a manipulação desses objetos complexos de acordo a necessidade imposta, buscando utilizar as estruturas de dados, sempre que possível, aprendidas até o momento na disciplina Estruturas de Dados, sem a principal delas a Árvore Binária de Pesquisa. O código terciário no é o mais simples dos três, sendo utilizado apenas para atribuição de valores.

# Implementação

O código atual está subdivido em quatro pastas.

• Bin: Contém os arquivos .txt que serão utilizados como entrada do programa e o executável.
    
• Include: Contém o cabeçalho do código com as classes implementadas.
    
• Obj: Contém todos arquivos objetos advindos do processo da compilação Makefile.
    
• Src: Contém as outras implementações utilizadas no código, além do arquivo “main.cpp”, sendo este o arquivo base do programa.
    
As configurações de hardware e software usados para o desenvolvimento do programa são os seguintes:

    • Sistema Operacional: Windows 10 Home Single Language 
    • Processador: Intel® Core™ i7-7700HQ CPU @ 2.80GHz 2.81GHz
    • Placa de Vídeo: NVIDIA GTX 1050ti 4GB VRAM
    • Memória: 16GB RAM DDR4
    • Memória física: SSD M.2 240GB Leituras: 1.500MB/s e Gravações: 800MB/s 
    • Linguagem: C/C++
    • Compilador: Visual Studio Code + MinGW
    
Para esse programa as principais estruturas de dados utilizada foram as Classes e Árvore Binária de Pesquisa, elas estão contidas nos arquivos “no.h” e “arvore.h”. As funções foram implementadas dentro de três cpps, que são “no.cpp”, “arvore.cpp”, “main.cpp”. O funcionamento delas será explicado abaixo.

**NO.H:**

• Class No: É responsável por armazenar as variáveis de cada nó da árvore binária, que no caso são o seu caractere e o valor associado a esse caractere. Os seus métodos são simples, e são divididos entre mudar o valor/estado de suas variáveis e obter seu valor/estado.

**ARVORE.H:**

• Class Ordencao: É a principal TAD utilizada para a criação do programa, ela é responsável por implementar todos os métodos de inserção, codificação e decodificação durante o programa, não possuindo como variáveis um string que será lida e a raiz da árvore binária.
    
• Arvore(  ): Apenas inicia a raiz com um valor nulo.
    
• ~Arvore(  ), Limpa( ): Chama a função Limpa( ) que desaloca toda a memória utilizada para a criação das árvores binárias utilizadas durante a execução do programa.
    
• Codifica(  ), Decodifica(  ), Insere(  ): São as funções responsáveis por fazer cada tipo de comando pedido pelo arquivo lido, cada uma delas, chamará uma função própria que funciona recursivamente.
    
• InsereRecursico(  ): Responsável por criar recursivamente uma árvore binária a partir dos dados fornecidos pelo arquivo externo.
    
• DecodificaRecursivo(  ): Vai percorrer recursivamente a árvore binária até que a frase do arquivo externo tenha sido decodificada 
    
• CodificaRecursivo( ): Diferente da decodificação que percorre a frase inteira, a codificação vai de letra em letra, tendo no main um nó while para que ocorra a mudança da letra a ser codificada
    
• ApagaRecursivo(  ): Vai percorrer recursivamente a árvore binária apagando todos os elementos nela contidos.
      

**MAIN.CPP:**

 • Ela é responsável pela verificação da integridade dos arquivos .txt de entrada, ademais é por meio dela que é decidido o que fazer com arquivo externo.

      

# Instruções de compilação e execução

OBS1: As instruções dadas a seguir são para compilar o programa no sistema operacional Windows 10.

OBS2: O programa atual lerá o arquivo de entrada por completo, mas caso deseje ver somente as linhas iniciais é só cometar o while da linha 21 do arquivo main.cpp , descomentar o for da linha 22 e modificar o seu i a vontade.

Para a execução do processo de compilação é necessário que navegue para a pasta em que o projeto está localizado. Primeiramente, caso seja feita alguma modificação dos arquivos .cpp ou .h é necessário refazer o Makefile do projeto, para isso é só executar no terminal o comando “make”. 

O executável do programa já estará pronto dentro da pasta “bin”, então para utilizá-lo é necessário saber o diretório do arquivo, após obtido um endereço que se parece com <C:\Users\Desktop\tp3\bin> copie toda a parte depois de “Users”, chame o seu prompt de comando, digite “cd” e em seguida cole o endereço copiado, por último é só digitar “run.out” “nome do arquivo que deseja ler.txt” que o programa rodará. 

Exemplo: run.out entrada_corrigida.txt 
