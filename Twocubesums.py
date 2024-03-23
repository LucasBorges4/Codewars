def has_two_cube_sums(n):
    # Cria um dicionário para armazenar todas as somas de cubos
    sums = {}
    # Itera sobre todos os pares possíveis (a, b)
    for a in range(1, n+1):
        for b in range(a, n+1):
            # Calcula a soma dos cubos
            sum_of_cubes = a**3 + b**3
            # Se a soma já está no dicionário, então encontramos uma solução
            if sum_of_cubes in sums:
                c, d = sums[sum_of_cubes]
                return True
            else:
                # Caso contrário, adiciona a soma ao dicionário
                sums[sum_of_cubes] = (a, b)
    return False # Retorna False se não encontrar nenhum par de soma de cubos

n = 20  # limite superior para a, b, c e d
found = has_two_cube_sums(n)
