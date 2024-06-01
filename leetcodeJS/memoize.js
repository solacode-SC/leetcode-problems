function memoize(fn) {
    let cache = {};

    return function(...args) {
        let key = JSON.stringify(args);
        if (!(key in cache))
        {
            cache[key] = fn(...args);
        }
        return(cache[key]);
    }
}