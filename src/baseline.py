def max_area(height):
    max_area = 0
    n = len(height)

    for i in range(n):
        for j in range(i + 1, n):
            h1 = height[i]
            h2 = height[j]
            width = j - i
            current_area = min(h1, h2) * width
            max_area = max(max_area, current_area)

    return max_area