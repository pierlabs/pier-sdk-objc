#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol PierConvenioPersist
@end

@interface PierConvenioPersist : PierObject

/* Identifica\u00E7\u00E3o do banco. 
 */
@property(nonatomic) NSNumber* banco;
/* N\u00FAmero da ag\u00EAncia. 
 */
@property(nonatomic) NSNumber* agencia;
/* Conta corrente. 
 */
@property(nonatomic) NSString* contaCorrente;
/* C\u00F3digo do tipo de esp\u00E9cie do documento. [optional]
 */
@property(nonatomic) NSString* especie;
/* C\u00F3digo de identifica\u00E7\u00E3o do conv\u00EAnio. [optional]
 */
@property(nonatomic) NSNumber* numeroConvenio;
/* C\u00F3digo da carteira de cobran\u00E7a. [optional]
 */
@property(nonatomic) NSNumber* carteira;
/* C\u00F3digo do cedente. [optional]
 */
@property(nonatomic) NSString* codigoCedente;
/* Tipo de esp\u00E9cie de t\u00EDtulo de cr\u00E9dito. [optional]
 */
@property(nonatomic) NSString* especieTipo;
/* Esp\u00E9cie do documento. [optional]
 */
@property(nonatomic) NSString* especieDocumento;
/* Indica se o pagador assinou o documento de cobran\u00E7a que originou o boleto. O padr\u00E3o \u00E9 usar \"N\". [optional]
 */
@property(nonatomic) NSNumber* aceite;
/* Instru\u00E7\u00F5es para pagamento. [optional]
 */
@property(nonatomic) NSString* instrucoes;
/* Local preferencial onde pode ser efetuado o pagamento. [optional]
 */
@property(nonatomic) NSString* localPagamento1;
/* Local para pagamento (campo adicional). [optional]
 */
@property(nonatomic) NSString* localPagamento2;
/* Endere\u00E7o de cobran\u00E7a do emissor. [optional]
 */
@property(nonatomic) NSString* enderecoCobrancaEmissor;
/* Nome do benefici\u00E1rio/cedente da cobran\u00E7a. [optional]
 */
@property(nonatomic) NSString* nomeBeneficiario;
/* CNPJ do benefici\u00E1rio/cedente da cobran\u00E7a. [optional]
 */
@property(nonatomic) NSString* cnpjBeneficiario;

@end
