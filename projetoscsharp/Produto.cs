
namespace projetoscsharp
{
    class Produto
    {
        public string Nome;

        public double Preco;

        public int Quantidade;

        public double ValorTotalEmEstoque()
        {
            return Preco * Quantidade;
        }

        public void AdicionarAoEstoque(int Adicional)
        {
            Quantidade += Adicional;
        }

        public void RetirarDoEstoque(int Retirar)
        {
            Quantidade -= Retirar;
        }

        public override string ToString()
        {
            return Nome +
            ", $" +
            Preco.ToString("F2") +
            ", " +
            Quantidade +
            " unidades, Total: $" +
            ValorTotalEmEstoque().ToString("F2");
        }
    }
}
