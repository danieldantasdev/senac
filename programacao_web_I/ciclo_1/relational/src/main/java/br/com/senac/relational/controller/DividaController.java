package br.com.senac.relational.controller;

import br.com.senac.relational.entity.Divida;
import br.com.senac.relational.service.DividaService;
import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.HttpStatus;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.*;

import java.util.List;

@RestController
@RequestMapping("/dividas")
public class DividaController {
    private final DividaService dividaService;

    @Autowired
    public DividaController(DividaService dividaService) {
        this.dividaService = dividaService;
    }

    @PostMapping
    public ResponseEntity<Divida> criarDivida(@RequestBody Divida divida) {
        Divida novaDivida = dividaService.salvarDivida(divida);
        return ResponseEntity.status(HttpStatus.CREATED).body(novaDivida);
    }

    @GetMapping
    public ResponseEntity<List<Divida>> buscarTodasDividas() {
        List<Divida> dividas = dividaService.buscarTodasDividas();
        return ResponseEntity.ok(dividas);
    }

    @GetMapping("/{id}")
    public ResponseEntity<Divida> buscarDividaPorId(@PathVariable Long id) {
        Divida divida = dividaService.buscarDividaPorId(id);
        return ResponseEntity.ok(divida);
    }

    @DeleteMapping("/{id}")
    public ResponseEntity<Void> excluirDividaPorId(@PathVariable Long id) {
        dividaService.excluirDividaPorId(id);
        return ResponseEntity.noContent().build();
    }
}
