package br.com.senac.relational.controller;

import br.com.senac.relational.entity.Empresa;
import br.com.senac.relational.service.EmpresaService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;

import java.util.List;

@RestController
@RequestMapping("/empresas")
public class EmpresaController {
    private final EmpresaService empresaService;

    @Autowired
    public EmpresaController(EmpresaService empresaService) {
        this.empresaService = empresaService;
    }

    @PostMapping
    public ResponseEntity<Empresa> criarEmpresa(@RequestBody Empresa empresa) {
        Empresa novaEmpresa = empresaService.salvarEmpresa(empresa);
        return ResponseEntity.status(HttpStatus.CREATED).body(novaEmpresa);
    }

    @GetMapping
    public ResponseEntity<List<Empresa>> buscarTodasEmpresas() {
        List<Empresa> empresas = empresaService.buscarTodasEmpresas();
        return ResponseEntity.ok(empresas);
    }

    @GetMapping("/{id}")
    public ResponseEntity<Empresa> buscarEmpresaPorId(@PathVariable Long id) {
        Empresa empresa = empresaService.buscarEmpresaPorId(id);
        return ResponseEntity.ok(empresa);
    }

    @DeleteMapping("/{id}")
    public ResponseEntity<Void> excluirEmpresaPorId(@PathVariable Long id) {
        empresaService.excluirEmpresaPorId(id);
        return ResponseEntity.noContent().build();
    }
}
