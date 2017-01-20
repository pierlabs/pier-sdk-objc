#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol PierLoteCartoesPrePagos
@end

@interface PierLoteCartoesPrePagos : PierObject

/* C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o do lote de cart\u00C3\u00B5es pr\u00C3\u00A9-pagos (id). 
 */
@property(nonatomic) NSNumber* _id;
/* C\u00C3\u00B3digo identificador da origem comercial. 
 */
@property(nonatomic) NSNumber* idOrigemComercial;
/* C\u00C3\u00B3digo identificador do Produto. 
 */
@property(nonatomic) NSNumber* idProduto;
/* C\u00C3\u00B3digo identificador do tipo do cart\u00C3\u00A3o. 
 */
@property(nonatomic) NSNumber* idTipoCartao;
/* C\u00C3\u00B3digo identificador da Imagem do cart\u00C3\u00A3o. 
 */
@property(nonatomic) NSNumber* idImagem;
/* C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do Endere\u00C3\u00A7o. 
 */
@property(nonatomic) NSNumber* idEndereco;
/* N\u00C3\u00BAmero de cart\u00C3\u00B5es existentes no Lote. 
 */
@property(nonatomic) NSNumber* quantidadeCartoes;
/* Data de cadastro do lote de cart\u00C3\u00B5es pr\u00C3\u00A9-pagos. 
 */
@property(nonatomic) NSDate* dataCadastro;
/* Nome do usu\u00C3\u00A1rio que criou o lote. 
 */
@property(nonatomic) NSString* usuarioCadastro;
/* Indica o status de processamento do lote. 
 */
@property(nonatomic) NSNumber* statusProcessamento;

@end