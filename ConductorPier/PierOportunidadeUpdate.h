#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "PierDetalheOportunidadeUpdate.h"


@protocol PierOportunidadeUpdate
@end

@interface PierOportunidadeUpdate : PierObject

/* C\u00C3\u00B3digo identificador do tipo oportunidade 
 */
@property(nonatomic) NSNumber* idTipoOportunidade;
/* C\u00C3\u00B3digo identificador do status oportunidade 
 */
@property(nonatomic) NSNumber* idStatusOportunidade;
/* N\u00C3\u00BAmero receita federal do cliente 
 */
@property(nonatomic) NSString* numeroReceitaFederal;
/* In\u00C3\u00ADcio da vig\u00C3\u00AAncia da oportunidade 
 */
@property(nonatomic) NSString* dataInicioVigencia;
/* Fim da vig\u00C3\u00AAncia da oportunidade 
 */
@property(nonatomic) NSString* dataFimVigencia;
/* Atributo que indica se a oportunidade est\u00C3\u00A1 ativa 
 */
@property(nonatomic) NSNumber* flagAtivo;
/* Lista de detalhes 
 */
@property(nonatomic) NSArray<PierDetalheOportunidadeUpdate>* detalhes;

@end