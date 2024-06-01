var reduce = function(nums, fn, init) {
    if (!nums)
    {
        return init;
    }
    else
    {
        let val = init;
        for (let i = 0; i < nums.length; i++)
        {
            val = fn(val, nums[i]);
        }
        return val;
    }
};