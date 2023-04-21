def APowXModP(base, degree, module_value):
    temp = degree // (module_value - 1)
    temp = degree - ((module_value - 1) * temp)

    res = pow(base, temp)
    res = res % module_value

    return res