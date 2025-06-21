def solution(nums: list[int], target: int)-> list[int]:
    numMap = {}
    for i, num in enumerate(nums):
        if num not in numMap:
            numMap[num] = i 

    sorted_nums = sorted(nums)

    start = 0
    end = len(sorted_nums) - 1

    while start < end:
        sum_ = sorted_nums[start] + sorted_nums[end]
        if sum_ == target:
            return [numMap[sorted_nums[start]], numMap[sorted_nums[end]]]
        elif sum_ < target:
            start += 1
        else:
            end -= 1

    return [] 

if __name__ == "__main__":
    nums = [1, 3, 4, 2, 6]
    target = 3
    arr = solution(nums, target)
    if arr:
        print(f"{arr[0]} {arr[1]}")
    else:
        print("No valid pair found.")
