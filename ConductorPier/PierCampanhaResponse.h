#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "PierPlanoCampanhaResponse.h"


@protocol PierCampanhaResponse
@end

@interface PierCampanhaResponse : PierObject

/* {{{campanha_response_id_value}}} [optional]
 */
@property(nonatomic) NSNumber* _id;
/* {{{campanha_response_nome_value}}} [optional]
 */
@property(nonatomic) NSString* nome;
/* {{{campanha_response_id_tipo_campanha_value}}} [optional]
 */
@property(nonatomic) NSNumber* idTipoCampanha;
/* {{{campanha_response_planos_campanhas_value}}} 
 */
@property(nonatomic) NSArray<PierPlanoCampanhaResponse>* planosCampanhas;

@end
