package br.com.senac.relational.controller;

import br.com.senac.relational.entity.Devedor;
import br.com.senac.relational.service.DevedorService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;

import java.util.List;

@RestController
@RequestMapping("/devedor")
public class DevedorController {
    private final DevedorService devedorService;

    @Autowired
    public DevedorController(DevedorService devedorService) {
        this.devedorService = devedorService;
    }

    @PostMapping
    public ResponseEntity<Devedor> criarDevedor(@RequestBody Devedor devedor) {
        Devedor novaDevedor = devedorService.salvarDevedor(devedor);
        return ResponseEntity.status(HttpStatus.CREATED).body(novaDevedor);
    }

    @GetMapping
    public ResponseEntity<List<Devedor>> buscarTodasDevedors() {
        List<Devedor> devedores = devedorService.buscarTodosDevedores();
        return ResponseEntity.ok(devedores);
    }

    @GetMapping("/{id}")
    public ResponseEntity<Devedor> buscarDevedorPorId(@PathVariable Long id) {
        Devedor devedor = devedorService.buscarDevedorPorId(id);
        return ResponseEntity.ok(devedor);
    }

    @DeleteMapping("/{id}")
    public ResponseEntity<Void> excluirDevedorPorId(@PathVariable Long id) {
        devedorService.excluirDevedorPorId(id);
        return ResponseEntity.noContent().build();
    }
}