function Swap(array: Array<number>, i: number, j: number) {
  let temp = array[i];
  array[i] = array[j];
  array[j] = temp;
}

function SelectionSort(array: Array<number>): void {
  for (let i = 0; i < array.length; i++) {
    let indexMIN = i;
    for (let j = i; j < array.length; j++) {
      if (array[indexMIN] > array[j]) {
        indexMIN = j;
      }
    }
    Swap(array, i, indexMIN);
  }
}
let a: Array<number> = [1, 4, 2, 5, 3, 10, 9, 7];
console.log(a);
SelectionSort(a);
console.log(a);
