# Asa Branca Daughtership code
Este é o repositório para o módulo daughtership do projeto Asa Branca Rocket Design

Para compilá-lo, primeiro instale o ESP-FreeRTOS e seu ambiente de desenvolvimento seguindo os passos delineados nesta [página](https://docs.espressif.com/projects/esp-idf/en/latest/get-started/).

Assumindo que este ambiente foi instalado em `~/esp`, rode os seguintes comandos:

        cd ~/esp
        git clone https://github.com/betegelse/asa_branca_daughtership.git

Isto criará uma pasta dentro de `~/esp` com o nome asa\_branca\_daughtership.  Este será o projeto.  Em seguida, dentro deste diretório, crie uma pasta components.  Dentro desta subpasta, rode os comandos

        git clone https://github.com/betegelse/hydra_daughtership.git
        git clone https://github.com/betegelse/hydra_daughtership_esp.git
        git clone PYXIS

Para compilar o código, volte para o diretório asa\_branca\_daughtership e rode `. ../esp-idf/export.sh`. Depois, rode `idf.py build` (ou qualquer outra variante) para compilar o código. Parabéns, você tem um ambiente para começar a programar o Asa Branca.

Observe que há três repositórios coexistindo, um do código do projeto principal e os outros dois, dentro da subpasta `components`, referentes aos grupos do Hydra e da Pyxis.  As atualizações do Git de cada um são feitas separadamente.  Para as instruções sobre o Git abaixo, você precisará antes entrar no diretório apropriado.

Depois de modificar o código em sua máquina, você provavelmente vai querer disponibilizá-lo para os outros fazendo o upload para o GitHub.  Rode então o seguinte comando:

        git push origin

Você também pode baixar para a sua máquina as atualizações no código que outras pessoas fizeram rodando o comando

        git pull

