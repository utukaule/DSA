let arr = [1, 3, 2, 4]
let stack = [];

let ans = [];

//there conditions that we have to check while doing stack..
// -> stack empty => -1
// -> stack.top > arr[i]  => s.top()
// -> stack.top() = arr[i] => top[]

for (let i = arr.length - 1; i >= 0; i--) {

    //if stack is empty
    if ((stack.length) == 0) {
        ans.push(-1)
    }

    //if stack is not empty and top element is greter then arr[i]
    else if (stack.length > 0 && stack[stack.length - 1] > arr[i]) {
        ans.push(stack[stack.length - 1])
    }

    //if stack is not empty and and multiple element init so we have 
    //to itterate till we get next greter element till that time we have to pop()
    //and if we dont get any element add -1 in ans as we did above.
    else if (stack.length > 0 && stack[stack.length - 1] <= arr[i]) {

        while (stack.length > 0 && stack[stack.length - 1] <= arr[i]) {
            stack.pop()
        }
        if (stack.length == 0) {
            ans.push(-1)
        }
        else {
            ans.push(stack[stack.length - 1])
        }

    }

    stack.push(arr[i])

}

console.log(ans)
