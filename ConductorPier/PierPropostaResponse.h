#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */



@protocol PierPropostaResponse
@end

@interface PierPropostaResponse : PierObject

/* {{{proposta_response_id_value}}} [optional]
 */
@property(nonatomic) NSNumber* _id;
/* {{{proposta_response_status_value}}} [optional]
 */
@property(nonatomic) NSNumber* status;
/* {{{proposta_response_data_cadastramento_value}}} [optional]
 */
@property(nonatomic) NSString* dataCadastramento;

@end