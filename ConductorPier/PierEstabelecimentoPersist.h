#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "PierConsultaCadastroEstabelecimentoDTO.h"


@protocol PierEstabelecimentoPersist
@end

@interface PierEstabelecimentoPersist : PierObject

/* Indica se \u00C3\u00A9 matriz ou filial. [optional]
 */
@property(nonatomic) NSNumber* flagMatriz;
/* Apresenta o n\u00C3\u00BAmero de identifica\u00C3\u00A7\u00C3\u00A3o do Credor. [optional]
 */
@property(nonatomic) NSNumber* idCredor;
/* Apresenta o n\u00C3\u00BAmero de identifica\u00C3\u00A7\u00C3\u00A3o do Estabelecimento na Receita Federal. [optional]
 */
@property(nonatomic) NSString* numeroReceitaFederal;
/* Nome do Estabelecimento. [optional]
 */
@property(nonatomic) NSString* nome;
/* Raz\u00C3\u00A3o Social do Estabelecimento. [optional]
 */
@property(nonatomic) NSString* descricao;
/* T\u00C3\u00ADtulo Comercial do Estabelecimento. [optional]
 */
@property(nonatomic) NSString* nomeFantasia;
/* C\u00C3\u00B3digo de Endere\u00C3\u00A7amento Postal (CEP). [optional]
 */
@property(nonatomic) NSString* cep;
/* Nome do Logradouro. [optional]
 */
@property(nonatomic) NSString* nomeLogradouro;
/* N\u00C3\u00BAmero do endere\u00C3\u00A7o. [optional]
 */
@property(nonatomic) NSNumber* numeroEndereco;
/* Nome do bairro do endere\u00C3\u00A7o. [optional]
 */
@property(nonatomic) NSString* bairro;
/* Nome da cidade do endere\u00C3\u00A7o. [optional]
 */
@property(nonatomic) NSString* cidade;
/* Descri\u00C3\u00A7\u00C3\u00B5es complementares referente ao endere\u00C3\u00A7o. [optional]
 */
@property(nonatomic) NSString* complemento;
/* Sigla de identifica\u00C3\u00A7\u00C3\u00A3o da Unidade Federativa do endere\u00C3\u00A7o. [optional]
 */
@property(nonatomic) NSString* uf;
/* C\u00C3\u00B3digo de Endere\u00C3\u00A7amento Postal (CEP). [optional]
 */
@property(nonatomic) NSString* cep2;
/* Nome do Logradouro . [optional]
 */
@property(nonatomic) NSString* nomeLogradouro2;
/* N\u00C3\u00BAmero do endere\u00C3\u00A7o. [optional]
 */
@property(nonatomic) NSNumber* numeroEndereco2;
/* Nome do bairro do endere\u00C3\u00A7o. [optional]
 */
@property(nonatomic) NSString* bairro2;
/* Nome da cidade do endere\u00C3\u00A7o. [optional]
 */
@property(nonatomic) NSString* cidade2;
/* Descri\u00C3\u00A7\u00C3\u00B5es complementares referente ao endere\u00C3\u00A7o. [optional]
 */
@property(nonatomic) NSString* complemento2;
/* Sigla de identifica\u00C3\u00A7\u00C3\u00A3o da Unidade Federativa do endere\u00C3\u00A7o. [optional]
 */
@property(nonatomic) NSString* uf2;
/* Detalhes espec\u00C3\u00ADficos quanto ao Cadastro do Estabelecimento. [optional]
 */
@property(nonatomic) NSString* obs;
/* Nome da pessoa para contato com o Estabelecimento. [optional]
 */
@property(nonatomic) NSString* contato;
/* E-mail da pessoa para contato com o Estabelecimento. [optional]
 */
@property(nonatomic) NSString* email;
/* Indica se o estabelecimento ser\u00C3\u00A1 inclu\u00C3\u00ADdo no arquivo de registro para a Secretaria da Fazenda Estadual. [optional]
 */
@property(nonatomic) NSNumber* flagArquivoSecrFazenda;
/* Indica se o estabelecimento poder\u00C3\u00A1 originar transa\u00C3\u00A7\u00C3\u00B5es sem a leitura da tarja ou do chip do cart\u00C3\u00A3o. [optional]
 */
@property(nonatomic) NSNumber* flagCartaoDigitado;
/* Indica se o estabelecimento est\u00C3\u00A1 inativo. [optional]
 */
@property(nonatomic) NSNumber* inativo;
/* C\u00C3\u00B3digo identificador da moeda. [optional]
 */
@property(nonatomic) NSNumber* idMoeda;
/* Identificador de Pa\u00C3\u00ADs. [optional]
 */
@property(nonatomic) NSNumber* idPais;
/* N\u00C3\u00BAmero do associado ao SPCBrasil. [optional]
 */
@property(nonatomic) NSNumber* associadoSPCBrasil;
/* C\u00C3\u00B3digo de Categoria de Mercado. [optional]
 */
@property(nonatomic) NSNumber* mcc;
/* C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o do Estabelecimento. [optional]
 */
@property(nonatomic) NSNumber* idTipoEstabelecimento;
/* Indicador para qual endere\u00C3\u00A7o as correspond\u00C3\u00AAncias ser\u00C3\u00A3o enviadas, onde 1 \u00C3\u00A9 ORIGEM e 2 ENDERE\u00C3\u0087O DE CORRESPOND\u00C3\u008ANCIA. [optional]
 */
@property(nonatomic) NSNumber* correspondencia;
/* Cargo do contato do estabelecimento. [optional]
 */
@property(nonatomic) NSString* cargoContato;
/* Tipo do regime de pagamento do estabelecimento. [optional]
 */
@property(nonatomic) NSString* tipoPagamento;
/* Consulta de cadastro n\u00C3\u00BAmero um. [optional]
 */
@property(nonatomic) PierConsultaCadastroEstabelecimentoDTO* consulta;
/* Consulta de cadastro n\u00C3\u00BAmero um. [optional]
 */
@property(nonatomic) PierConsultaCadastroEstabelecimentoDTO* consulta2;
/* Consulta de cadastro n\u00C3\u00BAmero um. [optional]
 */
@property(nonatomic) PierConsultaCadastroEstabelecimentoDTO* consulta3;
/* Flag indicando se o terminal \u00C3\u00A9 f\u00C3\u00ADsico ou virtual, sendo: (true: Sim), (false: N\u00C3\u00A3o)). 
 */
@property(nonatomic) NSNumber* flagTerminalVirtual;
/* Flag indicando se o terminal permite consultar extrato, sendo: (true: Sim), (false: N\u00C3\u00A3o)). 
 */
@property(nonatomic) NSNumber* flagConsultaExtrato;

@end
