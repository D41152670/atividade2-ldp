strcpy(str, test.c_str());
    // Realiza um split da string digita quebrando a em varias palavras isoladas
    pch = strtok ( str, " ,.-" );
    // Laço de repetição que irá quebrando a frase em palavras
    while (pch != NULL)
    {
        // string recebe o valor quebrado do pch
        groupString = pch;
        // printa a quebra da frase
        // printf("%s\n", pch);
        // irá adicionar null ao PCH quando não houver mais palavras
        pch = strtok (NULL, " ,.-");
        // realiza o somatorio de cada tamanho de palavra capturando o total da frase
        resultString = resultString + groupString.length();
    }
    // printa o total de letras na frase
    printf("A frase contem %d letras \n\n", resultString);
    // irá armazenar o número de vezes que a letra apareceu
    int mx;
    // inicia a variavel modes recebendo o resultado da função letra frequente
    string modes = letraFrequente( test, mx );
    cout << "A letra mais comum foi: " << modes << " ( " << mx << " vezes ) \n\n";