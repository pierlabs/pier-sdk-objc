#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol PierCartaoImpressaoResponse
@end

@interface PierCartaoImpressaoResponse : PierObject

/* Apresenta o C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o da Conta (id) a qual o cart\u00C3\u00A3o gerado pertence. [optional]
 */
@property(nonatomic) NSNumber* idConta;
/* Apresenta o C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o da Pessoa (id) portadora do cart\u00C3\u00A3o gerado. [optional]
 */
@property(nonatomic) NSNumber* idPessoa;
/* Apresenta o C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Cart\u00C3\u00A3o (id) que foi gerado. [optional]
 */
@property(nonatomic) NSNumber* idCartao;
/* Apresenta o C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o da Bandeira (id) a qual o Cart\u00C3\u00A3o pertence, quando bandeirado. [optional]
 */
@property(nonatomic) NSNumber* idBandeira;
/* Apresenta o C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Tipo do Cart\u00C3\u00A3o (id) atribu\u00C3\u00ADdo ao Cart\u00C3\u00A3o. [optional]
 */
@property(nonatomic) NSNumber* idTipoCartao;
/* Apresenta o n\u00C3\u00BAmero do cart\u00C3\u00A3o. [optional]
 */
@property(nonatomic) NSString* numeroCartao;
/* Apresenta o nome do Portador do Cart\u00C3\u00A3o. [optional]
 */
@property(nonatomic) NSString* nomePlastico;
/* Apresenta o n\u00C3\u00BAmero do CVV a ser impresso no Cart\u00C3\u00A3o [optional]
 */
@property(nonatomic) NSString* cvv2;
/* Apresenta a data de emiss\u00C3\u00A3o do Cart\u00C3\u00A3o. [optional]
 */
@property(nonatomic) NSString* dataGeracao;
/* Apresenta a data de Validade do Cart\u00C3\u00A3o. [optional]
 */
@property(nonatomic) NSString* dataValidade;
/* Apresenta o nome da Origem Comercial que realizou o cadastro do Titular da Conta a qual o Cart\u00C3\u00A3o pertence. [optional]
 */
@property(nonatomic) NSString* nomeOrigemComercial;
/* Apresenta o nome da Empresa (Pessoa Jur\u00C3\u00ADdica) titular do Cart\u00C3\u00A3o, quando aplic\u00C3\u00A1vel. [optional]
 */
@property(nonatomic) NSString* nomeEmpresa;
/* Apresenta o n\u00C3\u00BAmero da Ag\u00C3\u00AAncia a ser impresso no Cart\u00C3\u00A3o, quando aplic\u00C3\u00A1vel. [optional]
 */
@property(nonatomic) NSNumber* numeroAgencia;
/* Apresenta o n\u00C3\u00BAmero da Conta Corrente a ser impresso no Cart\u00C3\u00A3o, quando aplic\u00C3\u00A1vel. [optional]
 */
@property(nonatomic) NSString* numeroContaCorente;
/* Apresenta o nome da Pessoa F\u00C3\u00ADsica ou Jur\u00C3\u00ADdica que contratou servi\u00C3\u00A7os de benef\u00C3\u00ADcio para o portador do cart\u00C3\u00A3o, quando aplic\u00C3\u00A1vel. [optional]
 */
@property(nonatomic) NSString* nomeEmpresaBeneficio;
/* Apresenta o CPF do Portador do Cart\u00C3\u00A3o. [optional]
 */
@property(nonatomic) NSString* cpf;
/* Apresenta o tipo do Portador do cart\u00C3\u00A3o, sendo: ('T': Titular, 'A': Adicional). [optional]
 */
@property(nonatomic) NSString* tipoPortador;
/* Apresenta o nome da Pessoa F\u00C3\u00ADsica ou Jur\u00C3\u00ADdica a ser impresso no cart\u00C3\u00A3o, quando aplic\u00C3\u00A1vel. [optional]
 */
@property(nonatomic) NSString* nomeEmpregador;
/* Apresenta os dados da Trilha1, seguindo as regras de trilha do emissor. [optional]
 */
@property(nonatomic) NSString* trilha1;
/* Apresenta os dados da Trilha2, seguindo as regras de trilha do emissor. [optional]
 */
@property(nonatomic) NSString* trilha2;
/* Apresenta os dados da TrilhaCVV01, seguindo as regras de trilha do emissor. [optional]
 */
@property(nonatomic) NSString* trilhaCVV1;
/* Apresenta os dados da TrilhaCVV02, seguindo as regras de trilha do emissor. [optional]
 */
@property(nonatomic) NSString* trilhaCVV2;
/* Apresenta o status que informa se o cart\u00C3\u00A3o \u00C3\u00A9 virtual  [optional]
 */
@property(nonatomic) NSNumber* flagVirtual;
/* Apresenta o numero da hash do cart\u00C3\u00A3o  [optional]
 */
@property(nonatomic) NSNumber* numeroCartaoHash;

@end
