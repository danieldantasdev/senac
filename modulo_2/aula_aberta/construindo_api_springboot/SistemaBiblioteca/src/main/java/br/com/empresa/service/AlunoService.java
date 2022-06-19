package br.com.empresa.service;

import java.util.List;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.stereotype.Service;

import br.com.empresa.entity.Aluno;
import br.com.repository.AlunoRepository;

@Service
public class AlunoService {
	
	//Injeção de dependecias
	Aluno mateus = new Aluno();
	
	@Autowired
	private AlunoRepository alunoRepo;

	public List<Aluno> listaTodosAlunos(){
		return alunoRepo.findAll();
		// mesma coisa que select * from
	}
}
