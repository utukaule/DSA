// let arr = [1, 6, 2, 7, 0, 4, 2];
// let s = []; // stack
// let result = [] //result

// //

// for (let i = arr.length - 1; i >= 0; i--) {
//     //check stack
//     if (s.length == 0) {
//         result.push(-1);
//     }
//     else if (s.length > 0 && s[s.length - 1] > arr[i]) {
//         result.push(s[s.length - 1])
//     }
//     if (s.length > 0 && s[s.length - 1] <= arr[i]) {
//         while (s.length > 0 && s[s.length - 1] <= arr[i]) {
//             s.pop()
//         }
//         if (s.length == 0) {
//             result.push(-1)
//         }
//         else {
//             result.push(s[s.length - 1])
//         }
//     }
//     s.push(arr[i])
// }
// console.log(result)

// const a = 2+2;
// const b = "2" + 2;
// const c = "HI" + 2
// console.log(a,b,c)

// let item = true;
// console.log(typeof item);
// item = String(item);
// console.log(typeof item)

// console.log(typeof 2.14)
// console.log(typeof NaN)
// console.log(typeof [1,2,3,4])
// console.log(typeof function(){})
// console.log(typeof null)

for(var i = 1 ; i <= 2 ;i++){
    setTimeout(function(){console.log(i)},1000)
}