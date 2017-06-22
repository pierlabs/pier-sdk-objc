#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "PierEnderecoAprovadoResponse.h"
#import "PierTelefonePessoaAprovadaResponse.h"


@protocol PierPessoaFisicaAprovadaResponse
@end

@interface PierPessoaFisicaAprovadaResponse : PierObject

/* C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Endere\u00C3\u00A7o (id) [optional]
 */
@property(nonatomic) NSNumber* _id;
/* Apresenta o nome completo da pessoa fisica. 
 */
@property(nonatomic) NSString* nome;
/* Apresenta o nome da m\u00C3\u00A3e da pessoa fisica [optional]
 */
@property(nonatomic) NSString* nomeMae;
/* Data de Nascimento da Pessoa. Essa data deve ser informada no formato aaaa-MM-dd. [optional]
 */
@property(nonatomic) NSString* dataNascimento;
/* C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o do sexo da Pessoa, quando PF, sendo: (\"M\": Masculino), (\"F\": Feminino). [optional]
 */
@property(nonatomic) NSString* sexo;
/* N\u00C3\u00BAmero do Cadastro de Pessoa Fisica (CPF) 
 */
@property(nonatomic) NSString* cpf;
/* N\u00C3\u00BAmero da identidade. [optional]
 */
@property(nonatomic) NSString* numeroIdentidade;
/* Org\u00C3\u00A3o expedidor da Identidade. [optional]
 */
@property(nonatomic) NSString* orgaoExpedidorIdentidade;
/* Sigla da Unidade Federativa de onde foi expedido a Identidade [optional]
 */
@property(nonatomic) NSString* unidadeFederativaIdentidade;
/* Data emiss\u00C3\u00A3o da Identidade no formato aaaa-MM-dd [optional]
 */
@property(nonatomic) NSString* dataEmissaoIdentidade;
/* Id Estado civil da pessoa fisica [optional]
 */
@property(nonatomic) NSNumber* idEstadoCivil;
/* Profiss\u00C3\u00A3o da pessoa fisica [optional]
 */
@property(nonatomic) NSString* profissao;
/* Id Natureza Ocupa\u00C3\u00A7\u00C3\u00A3o da pessoa fisica [optional]
 */
@property(nonatomic) NSNumber* idNaturezaOcupacao;
/* Id Nacionalidade da pessoa fisica [optional]
 */
@property(nonatomic) NSNumber* idNacionalidade;
/* Id da origem comercial 
 */
@property(nonatomic) NSNumber* idOrigemComercial;
/* Id do produto 
 */
@property(nonatomic) NSNumber* idProduto;
/* N\u00C3\u00BAmero da ag\u00C3\u00AAncia. [optional]
 */
@property(nonatomic) NSNumber* numeroAgencia;
/* N\u00C3\u00BAmero da conta corrente. [optional]
 */
@property(nonatomic) NSString* numeroContaCorrente;
/* Email da pessoa fisica [optional]
 */
@property(nonatomic) NSString* email;
/* Dia vencimento 
 */
@property(nonatomic) NSNumber* diaVencimento;
/* Nome que deve ser impresso no cart\u00C3\u00A3o [optional]
 */
@property(nonatomic) NSString* nomeImpresso;
/* Nome que deve ser impresso no cart\u00C3\u00A3o [optional]
 */
@property(nonatomic) NSString* nomeEmpresa;
/* Apresenta os telefones da empresa [optional]
 */
@property(nonatomic) NSArray<PierTelefonePessoaAprovadaResponse>* telefones;
/* Pode ser informado os seguintes tipos de endere\u00C3\u00A7o: Residencial, Comercial, e Outros 
 */
@property(nonatomic) NSArray<PierEnderecoAprovadoResponse>* enderecos;

@end