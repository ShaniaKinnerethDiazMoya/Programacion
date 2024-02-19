function quicksort(datos) {

    if(datos.length <= 1){
        return datos;
    }

    let izquierdo = [];
    let derecha = [];
    let auxiliar = [];
    let pivote = datos.pop();
    let n = datos.length;
    for (let i = 0; i < n; i++) {
        if (datos[i] <= pivote) {
            izquierdo.push(datos[i]);
        } else {
            derecha.push(datos[i]);
        }
    }
    return auxiliar.concat(quicksort(izquierdo), pivote, quicksort(derecha));
}
let prim = [4,2,1,3,5,7,9,6];
console.log(prim);

console.log();

let resultadosss = quicksort(prim);
console.log(resultadosss);