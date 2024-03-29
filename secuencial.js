
function main() {
    let arreglo = [4,2,1,3,5,7,9,6];
    let elemento = parseInt(prompt('Elemento a buscar:'));
    if (Number.isInteger(elemento)) {
        let posicion = buscarElemento (arreglo, elemento);
        if (posicion >= 0) {
            console.log('El elemento ' + elemento + ' se encuentra en la posición '+ (posicion + 1));
        } else {
            console.log('El elemento ' + elemento + 'no se encontró.');
        }
    } else {
        console.error('El elemento a buscar debe ser un número entero.');
    }
}

function buscarElemento (arreglo, elemento) {
    for (let i=0; i < arreglo.length; i++) {
        if (arreglo[i] === elemento) {
            return i;
        }
    }
    return -1;
}