let user = {
    firstName: 'Daniel',
    lastName: 'Dantas',
    city: 'Rio de Janeiro'
}

console.log(
    `Olá, meu nome ${user.firstName} ${user.lastName}. Sou de ${user.city}`
)

let table = document.createElement('table')
table.border = 1
table.innerHTML = `<thead>
                      <tr>                                                               
                        <th>Nome</th>
                        <th>Sobremenome</th>
                        <th>Cidade</th>                        
                      </tr>   
                    </thead>  
                    
                    <tbody>
                        <tr>
                          <td>${user.firstName} </td> 
                          <td>${user.lastName} </td>
                          <td>${user.city}</td></tr>
                    </tbody>`
document.querySelector('body').append(table)
