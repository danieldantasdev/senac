package br.com.senac.relational.service;

import br.com.senac.relational.entity.Divida;
import br.com.senac.relational.exception.RecursoNaoEncontradoException;
import br.com.senac.relational.repository.DividaRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
public class DividaService {
    private final DividaRepository dividaRepository;

    @Autowired
    public DividaService(DividaRepository dividaRepository) {
        this.dividaRepository = dividaRepository;
    }

    public Divida salvarDivida(Divida divida) {
        return dividaRepository.save(divida);
    }

    public List<Divida> buscarTodasDividas() {
        return dividaRepository.findAll();
    }

    public Divida buscarDividaPorId(Long id) {
        return dividaRepository.findById(id).orElseThrow(() -> new RecursoNaoEncontradoException("Dívida não encontrada com o id " + id));
    }

    public void excluirDividaPorId(Long id) {
        dividaRepository.deleteById(id);
    }
}
