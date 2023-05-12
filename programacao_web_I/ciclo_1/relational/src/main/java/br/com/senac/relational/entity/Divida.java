package br.com.senac.relational.entity;

import jakarta.persistence.*;

@Entity
@Table(name = "divida")
public class Divida {
    @Id
    @GeneratedValue(strategy = GenerationType.IDENTITY)
    @Column(name = "id")
    private Long id;

    @Column(name = "valor")
    private Double valor;

    @ManyToOne
    @JoinColumn(name = "id_empresa")
    private Empresa empresa;

    @ManyToOne
    @JoinColumn(name = "id_devedor")
    private Devedor devedor;

    // getters e setters

    public Long getId() {
        return id;
    }

    public void setId(Long id) {
        this.id = id;
    }

    public Double getValor() {
        return valor;
    }

    public void setValor(Double valor) {
        this.valor = valor;
    }

    public Empresa getEmpresa() {
        return empresa;
    }

    public void setEmpresa(Empresa empresa) {
        this.empresa = empresa;
    }

    public Devedor getDevedor() {
        return devedor;
    }

    public void setDevedor(Devedor devedor) {
        this.devedor = devedor;
    }

    @Override
    public String toString() {
        return "Divida{" +
                "idDivida=" + id +
                ", valor=" + valor +
                ", empresa=" + empresa +
                ", devedor=" + devedor +
                '}';
    }
}
