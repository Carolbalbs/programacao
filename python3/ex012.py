preco = float(input('Digite o preço do produto que voce quer comprar: '))

desconto = preco * 0.05
descontofinal = preco - desconto

print(f'Seu desconto apos a compra do produto foi de 5% portanto agora seu produto passara a custar R$ {descontofinal:.2f} reais')