-   [acessar o aws instructure](https://awsacademy.instructure.com/courses/27192/modules/items/2256037)

-   [acessar o manangement aws](https://us-east-1.console.aws.amazon.com/ec2/v2/home?region=us-east-1#Instances:)

```

```

-   ID de instância
    i-0e99cd579f8aee1f9 (meu_linux)

        - Abra um cliente SSH.

        - Localize o arquivo de chave privada. A chave usada para executar esta instância é vockey.pem

        - Execute este comando, se necessário, para garantir que sua chave não fique visível publicamente.

```
chmod 400 vockey.pem
```

-   Conecte-se à sua instância usando sua DNS pública:

` ec2-3-82-106-144.compute-1.amazonaws.com`

Exemplo:

```
ssh -i "vockey.pem" ec2-user@ec2-3-82-106-144.compute-1.amazonaws.com
```

```
ssh -i "labsuser.pem" ec2-user@ec2-3-85-86-84.compute-1.amazonaws.com
```
