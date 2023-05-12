package br.com.senac.relational.repository;

import br.com.senac.relational.entity.Devedor;
import org.springframework.data.jpa.repository.JpaRepository;

public interface DevedorRepository extends JpaRepository<Devedor, Long> {
}
