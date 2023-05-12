package br.com.senac.relational.repository;

import br.com.senac.relational.entity.Divida;
import org.springframework.data.jpa.repository.JpaRepository;

public interface DividaRepository extends JpaRepository<Divida, Long> {
}
