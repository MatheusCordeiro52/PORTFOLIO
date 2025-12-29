// 1.Classes
class Carro {
        constructor(marca, nome, ano, potencia, imagem) {
                this.marca = marca;
                this.nome = nome;
                this.ano = ano;
                this.potencia = potencia;
                this.imagem = imagem;
        }

        exibir(container){
                container.innerHTML = '';
                
                const img = document.createElement('img');
                img.src = this.imagem;
                img.alt = `${this.marca} ${this.nome} ${this.ano}`;
                
                const info = document.createElement('div');
                info.innerHTML = `
                        <strong> ${this.marca} ${this.nome}</strong><br>
                        Ano: ${this.ano}<br>
                        Potência: ${this.potencia}
                        `;

                container.appendChild(img);
                container.appendChild(info);
        }

        static criarLista(select, carros) {
                carros.forEach((carro, index) => {
                        const option = document.createElement('option');
                        option.value = index;
                        option.textContent = `${carro.marca} ${carro.nome}`;
                        select.appendChild(option);
        });
}
}
// 2. Estado (arrays, dados)
const carros = [
        new Carro('Ford', 'Fusion', 2013, '250cv', 'imagem/ford-fusion-2013.webp'),
        new Carro('Audi', 'A5', 2018, '220cv', 'imagem/audi-a5.jpg'),
        new Carro('Volkswagen', 'Jetta', 2016, '180cv', 'imagem/jetta.webp')
];
// 3. funções de controle
function adicionarCarro(){
        const marca = document.getElementById('marca').value;
        const nome = document.getElementById('nome').value;
        const ano = document.getElementById('ano').value;
        const potencia = document.getElementById('potencia').value;
        const imagem = document.getElementById('imagem').value;
        
        if(!marca || !nome || !ano){
                dispararAlerta('alertaObrigatorio');
        return;
}
        const novoCarro = new Carro(marca,nome,ano,potencia,imagem);

        carros.push(novoCarro);

        const select = document.getElementById('escolhaCarro');
        select.innerHTML = '<option value="">Selecione um carro</option>';
        Carro.criarLista(select, carros);

        dispararAlerta('alerta');
}


function apresentacaoCarro(){
        const index = document.getElementById('escolhaCarro').value;
        const container = document.getElementById('mostrarCarro');

        if (index === ''){
                container.innerHTML = '';
                return;
        }
        carros[index].exibir(container);
}


let timer;

function dispararAlerta(idAlerta, duracao = 2000) {
    const alerta = document.getElementById(idAlerta);
    const barra = document.getElementById('minhaBarra');

    if (!alerta || !barra) return;

    alerta.classList.remove('ativo');
    barra.style.transition = 'none';
    barra.style.width = '100%';
    clearTimeout(timer);

    setTimeout(() => {
        alerta.classList.add('ativo');
        barra.style.transition = `width ${duracao}ms linear`;
        barra.style.width = '0%';

        timer = setTimeout(() => {
            alerta.classList.remove('ativo');
        }, duracao);
    }, 50);
}

// 4. eventos globais
document.addEventListener('DOMContentLoaded', () => {
        const select = document.getElementById('escolhaCarro');
        Carro.criarLista(select, carros);
});