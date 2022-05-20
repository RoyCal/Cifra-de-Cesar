# Cifra-de-Cesar
Tradutor e encriptador para Cifra de César

Em criptografia, a Cifra de César, também conhecida como cifra de troca, código de César ou troca de César, é uma das mais simples e conhecidas técnicas de criptografia.
É um tipo de cifra de substituição na qual cada letra do texto é substituída por outra, que se apresenta no alfabeto abaixo dela um número fixo de vezes.
Por exemplo, com uma troca de três posições, A seria substituído por D, B se tornaria E, e assim por diante. O nome do método é em homenagem a Júlio César (patrício, líder 
militar e político romano), que o usou para se comunicar com os seus generais.

<br>

# O código

O programa foi feito com o intuito de funcionar tanto como um tradutor, como um encriptador para Cifra de César.
O código foi feito na linguagem C++. Possui uma classe chamada CifraDeCesar que possui os métodos encrypt e decrypt que servem 
respectivamente para encriptar e descriptografar um texto. Na função main foi criado um objeto crypto da classe CifraDeCesar e 
através de um switch case com escolhas o usuário pode escolher qual dos métodos o objeto irá chamar.

<br>

# A chave

O valor da chave de criptografia é um numero inteiro que informa a defasagem do alfabeto com relação ao outro alfabeto de base.
No caso em que a chave vale 3, temos, por exemplo:

<br>

<div align="center"> 
  <img height="280em" src="https://upload.wikimedia.org/wikipedia/commons/2/2b/Caesar3.svg"/>
</div>
