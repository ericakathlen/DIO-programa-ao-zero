public class Heroi{
    String nome;
    int idade;
    String tipo;


    public void atacar(){
        if(this.tipo == "Mago" || this.tipo == "mago"){
            System.out.println("O " + this.tipo + " atacou usando magia");
        }
        else if(this.tipo == "Guerreiro" || this.tipo == "guerreiro"){
            System.out.println("O " + this.tipo + " atacou usando espada");
        }
        else if(this.tipo == "Monge" || this.tipo == "monge"){
            System.out.println("O " + this.tipo + " atacou usando artes marciais");
        }
        else if(this.tipo == "Ninja" || this.tipo == "ninja"){
            System.out.println("O " + this.tipo + " atacou usando shuriken");
        }
    }
}