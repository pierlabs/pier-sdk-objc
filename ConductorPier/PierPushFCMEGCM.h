#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol PierPushFCMEGCM
@end

@interface PierPushFCMEGCM : PierObject

/* C\u00C3\u00B3digo identificado da pessoa 
 */
@property(nonatomic) NSNumber* idPessoa;
/* C\u00C3\u00B3digo identificador da conta 
 */
@property(nonatomic) NSNumber* idConta;
/* Apresenta o token do dispositivo que dever\u00C3\u00A1 receber o push. 
 */
@property(nonatomic) NSString* tokenDispositivo;
/* Apresenta o token da sua aplica\u00C3\u00A7\u00C3\u00A3o Android gerada pela Google. 
 */
@property(nonatomic) NSString* tokenServidor;
/* Apresenta o t\u00C3\u00ADtulo da notifica\u00C3\u00A7\u00C3\u00A3o. 
 */
@property(nonatomic) NSString* titulo;
/* Apresenta o texto da notifica\u00C3\u00A7\u00C3\u00A3o a ser enviado. 
 */
@property(nonatomic) NSString* conteudo;
/* Apresenta o tipoEvento a qual pertence a notifica\u00C3\u00A7\u00C3\u00A3o 
 */
@property(nonatomic) NSString* tipoEvento;
/* Apresenta o nome do icone a ser apresentado no push. [optional]
 */
@property(nonatomic) NSString* icone;
/* Apresenta o cor do icone a ser apresentado no push [optional]
 */
@property(nonatomic) NSString* som;
/* Apresenta a cor do icone da notifica\u00C3\u00A7\u00C3\u00A3o. Essa cor dever\u00C3\u00A1 ser informada no formato RGB Ex. #000000. [optional]
 */
@property(nonatomic) NSString* cor;

@end
