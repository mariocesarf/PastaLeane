using System;
using System.Globalization;

namespace projetoscsharp
{
    class Program
    {
        static void Main(string[] args)
        {
            Produto p = new Produto();

            Console.WriteLine("Digite os dados do produto:");
            Console.Write("Nome: ");
            p.Nome = Console.ReadLine();

            Console.Write("Preco: ");
            p.Preco = double.Parse(Console.ReadLine());

            Console.Write("Quantidade: ");
            p.Quantidade = int.Parse(Console.ReadLine());

            Console.WriteLine("Dados do produto:" + p);
            Console.WriteLine("");

            Console.Write("Digite o número de produtos a ser adicionado ao estoque:");
            int qtd_adicional = int.Parse(Console.ReadLine());
            p.AdicionarAoEstoque(qtd_adicional);

            Console.WriteLine("Dados atualizados do produto: " + p);
            Console.WriteLine("");

            Console.Write("Digite o número de produtos a ser retirados do estoque:");
            int qtd_removida = int.Parse(Console.ReadLine());
            p.RetirarDoEstoque(qtd_removida);

            Console.WriteLine("Dados atualizados do produto: " + p);
            Console.WriteLine("");
        

        }
    }
}
