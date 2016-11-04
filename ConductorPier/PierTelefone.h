#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol PierTelefone
@end

@interface PierTelefone : PierObject

/* C\u00C3\u00B3digo DDD do telefone (id). [optional]
 */
@property(nonatomic) NSString* ddd;
/* C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Telefone (id). [optional]
 */
@property(nonatomic) NSNumber* _id;
/* C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o da Pessoa (id) a qual o telefone pertence. [optional]
 */
@property(nonatomic) NSNumber* idPessoa;
/* C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Tipo do Telefone (id). [optional]
 */
@property(nonatomic) NSNumber* idTipoTelefone;
/* N\u00C3\u00BAmero do ramal. [optional]
 */
@property(nonatomic) NSString* ramal;
/* Apresenta o Status do Telefone, onde: '0': Inativo e '1': Ativo [optional]
 */
@property(nonatomic) NSNumber* status;
/* N\u00C3\u00BAmero do telefone. [optional]
 */
@property(nonatomic) NSString* telefone;

@end
