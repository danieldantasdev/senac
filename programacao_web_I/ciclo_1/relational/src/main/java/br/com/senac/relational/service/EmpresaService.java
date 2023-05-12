package br.com.senac.relational.service;

import br.com.senac.relational.entity.Empresa;
import br.com.senac.relational.exception.RecursoNaoEncontradoException;
import br.com.senac.relational.repository.EmpresaRepository;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import java.util.List;

@Service
public class EmpresaService {
    private final EmpresaRepository empresaRepository;

    @Autowired
    public EmpresaService(EmpresaRepository empresaRepository) {
        this.empresaRepository = empresaRepository;
    }

    public Empresa salvarEmpresa(Empresa empresa) {
        return empresaRepository.save(empresa);
    }

    public List<Empresa> buscarTodasEmpresas() {
        return empresaRepository.findAll();
    }

    public Empresa buscarEmpresaPorId(Long id) {
        return empresaRepository.findById(id).orElseThrow(() -> new RecursoNaoEncontradoException("Empresa não encontrada com o id " + id));
    }

    public void excluirEmpresaPorId(Long id) {
        empresaRepository.deleteById(id);
    }
}

