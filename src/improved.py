def max_area(height):
    max_area = 0
    n = len(height)
    l = 0
    r = n-1
    while l < r:
        max_area = max((r-l) * min(height[l], height[r]), max_area)
        if height[r] > height[l]:
            l+=1
        else:
            r-=1
    return max_area