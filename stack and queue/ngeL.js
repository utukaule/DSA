// Nearest greter element Left
let arr = [1, 3, 2, 4];
let stack = [];
let result = [];

for (let i = 0; i < arr.length; i++) {

    //have to check 3 conditions 
    // 1. check stack is empty or not
    // 2. check top element of stack is greter > arr[i] or not.
    // 3. check top element of stack > arr[i] or not. if stack element is <= arr[i] then pop the it from stack till you get stack > arr[i]
    // 4. after 3rd step if you dont get any stack > arr[i] then stack will be empty and push -1.

    // 1st step
    if (stack.length == 0) {
        result.push(-1);
    }

    // 2nd step
    else if (stack.length > 0 && stack[stack.length - 1] > arr[i]) {
        result.push(stack[stack.length - 1]);
    }

    // 3rd step

    else if (stack.length > 0 && stack[stack.length - 1] <= arr[i]) {
        while (stack.length > 0 && stack[stack.length - 1] <= arr[i]) {
            stack.pop();
        }
        if (stack.length == 0) {
            result.push(-1)
        }
        else {
            result.push(stack[stack.length - 1]);
        }
    }

    stack.push(arr[i])

}
console.log(result);