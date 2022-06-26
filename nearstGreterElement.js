let arr = [1, 6, 2, 7, 0, 4, 2];
let s = []; // stack
let result = [] //result

//

for (let i = arr.length - 1; i >= 0; i--) {
    //check stack
    if (s.length == 0) {
        result.push(-1);
    }
    else if (s.length > 0 && s[s.length - 1] > arr[i]) {
        result.push(s[s.length - 1])
    }
    if (s.length > 0 && s[s.length - 1] <= arr[i]) {
        while (s.length > 0 && s[s.length - 1] <= arr[i]) {
            s.pop()
        }
        if (s.length == 0) {
            result.push(-1)
        }
        else {
            result.push(s[s.length - 1])
        }
    }
    s.push(arr[i])
}
console.log(result)