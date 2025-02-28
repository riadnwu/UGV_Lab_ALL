import cmath


def ej_omega(omega):
    """
    Compute e^(j*omega), where j is the imaginary unit and omega is a real number.

    Arguments:
    omega : float
        Real number representing the angular frequency in radians.

    Returns:
    e_j_omega : complex
        Result of e^(j*omega)
    """
    e_j_omega = 1j
    return e_j_omega


# Example usage:
omega = 0.5  # Example angular frequency in radians
result = ej_omega(omega)
print("e^(j*omega) =", result)
print("Real part =", result.real)
print("Imaginary part =", result.imag)
