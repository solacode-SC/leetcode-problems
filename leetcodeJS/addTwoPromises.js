

var addTwoPromises = async function(promise1, promise2) {
    let pro1 = await promise1;
    let pro2 = await promise2;

    return (pro1 + pro2);
};