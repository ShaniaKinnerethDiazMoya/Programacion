function shellSort(datos){
    let incremento = datos.length /2;
    while (incremento > 0) {
        for(let i = 0; i < datos.length; i++) {
            let j = i;
            let dato = datos[i];
            while (j >= incremento && datos[j - incremento] > dato) {
                datos[j] = datos[j - incremento];
                j -= incremento;
            }
            datos[j] = dato;
        }

        if (incremento == 2) {
            incremento =-1;
        } else {
        incremento = parseInt(incremento * 5 / 11);
        }
    }    
    return datos;
}
let primos= [4,2,1,3,5,7,9,6]; 
console.log(primos);

console.log();

let resultado = shellSort(primos);
console.log(resultado);