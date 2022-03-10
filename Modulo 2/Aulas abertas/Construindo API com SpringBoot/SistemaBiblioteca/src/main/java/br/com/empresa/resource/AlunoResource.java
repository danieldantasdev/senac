package br.com.empresa.resource;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.http.ResponseEntity;
import org.springframework.web.bind.annotation.RequestMapping;
import org.springframework.web.bind.annotation.RequestMethod;
import org.springframework.web.bind.annotation.RestController;

import br.com.empresa.entity.Aluno;
import br.com.empresa.service.AlunoService;

@RestController
@RequestMapping("/aluno")
public class AlunoResource {

	@Autowired
	private AlunoService alunoService;
	
	@RequestMapping(method = RequestMethod.GET)
	public ResponseEntity<List<Aluno>> listarAluno(){
		List<Aluno> alunos = alunoService.listaTodosAlunos();
		return ResponseEntity.ok(alunos).body(alunos);
	}
}
