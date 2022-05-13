//package br.senac.rj.empresa.modelo;
//
//public class Material {
//    int codMaterial;
//    String descMaterial;
//    int qtdMaterial;
//
//    public int getCodMaterial() {
//        return codMaterial;
//    }
//
//    public void setCodMaterial(int codMaterial) {
//        this.codMaterial = codMaterial;
//    }
//
//    public String getDescMaterial() {
//        return descMaterial;
//    }
//
//    public void setDescMaterial(String descMaterial) {
//        this.descMaterial = descMaterial;
//    }
//
//    public int getQtdMaterial() {
//        return qtdMaterial;
//    }
//
//    public void setQtdMaterial(int qtdMaterial) {
//        this.qtdMaterial = qtdMaterial;
//    }
//
//    @Override
//    public String toString() {
//        return "Material{" + "codMaterial=" + codMaterial + ", descMaterial=" + descMaterial + ", qtdMaterial="
//                + qtdMaterial + '}';
//    }
//}

package br.senac.rj.empresa.modelo;

import br.senac.rj.empresa.modelo.Material;

public class Material {
    private int codMaterial;
    private String descMaterial;
    private int qtdMaterial;

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

    public void entrarMaterial(int qtdeEntrada) {
        this.qtdMaterial += qtdeEntrada;
    }

    public void sairMaterial(int qtdeSaida) {
        this.qtdMaterial -= qtdeSaida;
    }
}