#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol PierEndereco
@end

@interface PierEndereco : PierObject

/* Apresenta nome do bairro [optional]
 */
@property(nonatomic) NSString* bairro;
/* Apresenta o C\u00C3\u00B3digo de Endere\u00C3\u00A7amento Postal (CEP) [optional]
 */
@property(nonatomic) NSString* cep;
/* Apresenta nome da cidade [optional]
 */
@property(nonatomic) NSString* cidade;
/* Apresenta descri\u00C3\u00A7oes complementares referente ao endere\u00C3\u00A7o [optional]
 */
@property(nonatomic) NSString* complemento;
/* Apresenta a data em que fora cadastrado o Endere\u00C3\u00A7o [optional]
 */
@property(nonatomic) NSDate* dataInclusao;
/* Data em que fora realizada a \u00C3\u00BAltima mudan\u00C3\u00A7a neste registro de endere\u00C3\u00A7o. Quando n\u00C3\u00A3o tiver ocorrido mudan\u00C3\u00A7a, conter\u00C3\u00A1 a mesma informa\u00C3\u00A7\u00C3\u00A3o que o campo dataInclusao [optional]
 */
@property(nonatomic) NSDate* dataUltimaAtualizacao;
/* C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Endere\u00C3\u00A7o (id). [optional]
 */
@property(nonatomic) NSNumber* _id;
/* C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o da Pessoa a qual o endere\u00C3\u00A7o pertence (id) [optional]
 */
@property(nonatomic) NSNumber* idPessoa;
/* C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o da Tipo Endere\u00C3\u00A7o (id) [optional]
 */
@property(nonatomic) NSNumber* idTipoEndereco;
/* Apresenta o nome do Logradouro [optional]
 */
@property(nonatomic) NSString* logradouro;
/* Apresenta o n\u00C3\u00BAmero do endere\u00C3\u00A7o [optional]
 */
@property(nonatomic) NSString* numero;
/* Apresenta nome do Pais [optional]
 */
@property(nonatomic) NSString* pais;
/* Apresenta a descri\u00C3\u00A7\u00C3\u00A3o de ponto de refer\u00C3\u00AAncia do endere\u00C3\u00A7o [optional]
 */
@property(nonatomic) NSString* pontoReferencia;
/* Apresenta sigla da Unidade Federativa [optional]
 */
@property(nonatomic) NSString* uf;

@end
