package br.com.senac.relational.service;

import br.com.senac.relational.entity.Devedor;
import br.com.senac.relational.exception.RecursoNaoEncontradoException;
import br.com.senac.relational.repository.DevedorRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
public class DevedorService {
    private final DevedorRepository devedorRepository;

    @Autowired
    public DevedorService(DevedorRepository devedorRepository) {
        this.devedorRepository = devedorRepository;
    }

    public Devedor salvarDevedor(Devedor devedor) {
        return devedorRepository.save(devedor);
    }

    public List<Devedor> buscarTodosDevedores() {
        return devedorRepository.findAll();
    }

    public Devedor buscarDevedorPorId(Long id) {
        return devedorRepository.findById(id).orElseThrow(() -> new RecursoNaoEncontradoException("Devedor não encontrado com o id " + id));
    }

    public void excluirDevedorPorId(Long id) {
        devedorRepository.deleteById(id);
    }
}
