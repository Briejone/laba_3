def coordinates():
  print("x\ty")
  y = 0
  for x in range(-9, 8):
    if x >= -9 and x <= -7:
      y = 0

    if x > -7 and x <= -3:
      y = 7 + x

    if x > -3 and x <= -2:
      y = 4

    if x > -2 and x <= 2:
      y = x * x

    if x > 2 and x <= 4:
      y = 4 - ((x - 2) * 2)

    if x > 4 and x <= 7:
      y = 0

    print(x, "\t", y)