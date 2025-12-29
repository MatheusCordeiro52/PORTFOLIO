function imc(){
    // DECLARAÇÃO DE VARIAVEIS
    let nome = document.getElementById('nome').value;
    let peso = parseInt(document.getElementById('peso').value);
    let altura = parseInt(document.getElementById('altura').value);
    // CALCULO DAS VARIAVEIS
    let m = peso / (altura * altura);
    let resultado = "";
    // CONDICIONAL PARA A SELEÇÃO DE UMA CONDIÇÃO
    if (m < 18.5){
        resultado = "Abaixo do peso";
    } else if (m >= 18.5 && m <= 24.9){
        resultado = "Peso normal";
    } else if (m >= 25.0 && m <= 29.9){
        resultado = "Excesso de peso";
    } else if (m >= 30.0 && m <= 34.9){
        resultado = "Obesidade classe I";        
    }else if (m >= 35.0 && m <= 39.9){
        resultado = "Obesidade classe II";
    }else if(m >= 40){
        resultado = "Obesidade classe III";
    }
    // IMPRIME O RESULTADO NA TELA (SEMPRE DEPOIS DO inner.HTML deve ser CRASE não aspas simples)
    document.getElementById('impresso').innerHTML = `${nome}, você possui um IMC igual a: ${m.toFixed(2)}. Sendo considerado: ${resultado}.`;
}