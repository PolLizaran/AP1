"""aquesta funció és doblement recursiva"""

from easyinput import read

def hanoi(n, ori, dst, aux):
    if n > 0:
    hanoi(n-1, ori, aux, dst)
    """equival a dir moure n-1 discos de l'origen fins a l'auxiliar passant pel destí"""
    print(ori, '->', dst)
    hanoi(n-1, aux, dst, ori)

n=read(int)
hanoi (n, 'a', 'b', 'c')
