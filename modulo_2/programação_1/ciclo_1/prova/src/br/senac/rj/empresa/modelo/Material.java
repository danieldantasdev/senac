package br.senac.rj.empresa.modelo;

public class Material {
    int codMaterial;
    String descMaterial;
    int qtdMaterial;

    public int getCodMaterial() {
        return codMaterial;
    }

    public void setCodMaterial(int codMaterial) {
        this.codMaterial = codMaterial;
    }

    public String getDescMaterial() {
        return descMaterial;
    }

    public void setDescMaterial(String descMaterial) {
        this.descMaterial = descMaterial;
    }

    public int getQtdMaterial() {
        return qtdMaterial;
    }

    public void setQtdMaterial(int qtdMaterial) {
        this.qtdMaterial = qtdMaterial;
    }

    public void cadastrarMaterial() {
        System.out.println("Cadastro de Material");
        System.out.println("Digite o código do material: ");
        int codMaterial = Integer.parseInt(System.console().readLine());
        System.out.println("Digite a descrição do material: ");
        String descMaterial = System.console().readLine();
        System.out.println("Digite a quantidade do material: ");
        int qtdMaterial = Integer.parseInt(System.console().readLine());
        this.setCodMaterial(codMaterial);
        this.setDescMaterial(descMaterial);
        this.setQtdMaterial(qtdMaterial);
    }

    public void listarMaterial() {
        System.out.println("Listagem de Material");
        System.out.println("Código: " + this.getCodMaterial());
        System.out.println("Descrição: " + this.getDescMaterial());
        System.out.println("Quantidade: " + this.getQtdMaterial());
    }

    public void excluirMaterial() {
        System.out.println("Exclusão de Material");
        System.out.println("Digite o código do material: ");
        int codMaterial = Integer.parseInt(System.console().readLine());
        this.setCodMaterial(codMaterial);
    }

    public void listarMaterial(int codMaterial) {
        System.out.println("Listagem de Material");
        System.out.println("Código: " + codMaterial);
        System.out.println("Descrição: " + this.getDescMaterial());
        System.out.println("Quantidade: " + this.getQtdMaterial());

    }
}
