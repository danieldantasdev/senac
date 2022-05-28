package br.com.empresa.inicializacao;

import java.util.Arrays;

import org.springframework.beans.factory.annotation.Autowired;
import org.springframework.context.ApplicationListener;
import org.springframework.context.event.ContextRefreshedEvent;
import org.springframework.stereotype.Component;

import br.com.empresa.entity.Aluno;
import br.com.repository.AlunoRepository;

@Component
public class init implements ApplicationListener<ContextRefreshedEvent> {
	
	@Autowired
	AlunoRepository alunoRepo;
	
	public void onApplicationEvent(ContextRefreshedEvent event) {
		Aluno aluno1 = new Aluno();
		aluno1.setNome("Daniel");
		
		Aluno aluno2 = new Aluno();
		aluno2.setNome("Fernando");
		
		Aluno aluno3 = new Aluno();
		aluno3.setNome("Marcelo");
		
		//Salvando aluno por aluno
		alunoRepo.save(aluno1);
		
		//Salvando auto
		alunoRepo.saveAll(Arrays.asList(aluno1,aluno2,aluno3));
		
		
	}
	
}
