def entero(n):
    print("Has introducido el numero", n,"gracias")
    return (n)
def years(year):
    edad= 2022 - year
    print("Ahora se que tienes ", edad," años, gracias")
    return(year)
def seg(s):
    ho=s/ 3600.0
    min=s/60.0
    print("Su equivalente en horas es: ", ho," horas \n")
    print("Su equivalente en minutos es: ", min," minutos")
    return(s)
def descuento(pre, des):
    total=pre - (pre * (des/ 100))
    print("El precio con descuento es: ", total)
    return (total)
def euros(usd):
    eur= usd/ 1.33250
    print("Su equivalente en euros es: ", eur," Euros")
    return (eur)
def cop(usd):
    pesos=usd * 3.87954
    print("Su equivalente en pesos colombianos es: ", pesos," cop")
    return (pesos)
def usd(pesos):
    dolar=pesos / 3.87954
    print("su en equivalente en usd es: ", dolar, " Dolares")
    return(dolar)
def dias_seg(d, h, m):
    dt= d * 86400
    ht=h * 3600
    mt= m * 60
    total= dt + ht + mt
    print("el total de dias son ", dt, " segundos \n")
    print("el total de horas son ", ht, " segundos\n")
    print("el total de minutos son ", mt, " segundos\n")
    print("el total de estos valores es de ", total, " segundos\n")
    return(d, h, m)
def resistencias(r1, r2):
    req=(r1 * r2)/ (r1 + r2)
    print("La resistencia equivalente en paralelo es: ", req)
    return (req)
def ciclos (num):
    n=1
    while n<=num:
        print("Ciclo while", n)
        n= n+ 1
    for n in range(num):
        print("Ciclos for: ", n)    

op=int(input("Que función quiere: 1.num 2.edad 3.seg a h/min 4.descuento 5.Euro 6.USD - COP 7.COP -USD 8.Dias a seg 9.Resistencias 10. ciclos 11.may y mer 12.letras 13.Notas 14.Habitantes 15.array 16.Kelvin a Celsius 17.Voltajes 18.H colombia a H España 29.H Colombia a H Arabia Saudita 20. H Colombia a H Beijing "))
if op == 1:
    n=int(input("Ingrese un numero:"))
    entero(n)
elif op ==2:
    year=int(input("Ingrese el año de nacimiento"))
    years(year)
elif op == 3:
    s=float(input("Ingrese la cantidad de segundos: "))
    seg(s)
elif op== 4:
    pre=float(input("Ingrese el precio: \n"))
    des=float(input("Ingrese el descuento: \n"))
    descuento(pre, des)
elif op ==5:
    usd=float(input("ingrese un valor en dolares: "))
    euros(usd)
elif op== 6:
    usd=float(input("ingrese un valor en dolares: "))
    cop(usd)
elif op == 7:
    pesos=int(input("Ingrese su valor en pesos: "))
    usd(pesos)
elif op == 8:
    d=int(input("Ingrese el numero de dias: "))
    h=int(input("Ingrese el numero de horas: "))
    m=int(input("ingrese el numero se minutos"))
    dias_seg(d, h, m)
elif op == 9:
    r1=float(input("Ingrese la primera resistencia: "))
    r2=float(input("Ingrese la segunda resistencia: "))
    resistencias(r1, r2)
elif op== 10:
    num= int(input("Ingrese un numero "))
    ciclos(num)
     