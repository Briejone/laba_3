import help_function

def Q7(a, b, c):
    res = help_function.pow_mod_10(a, b)
    res = help_function.pow_mod_10(res, c)
    return res