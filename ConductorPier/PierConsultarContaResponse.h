#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "PierContaCartaoResponse.h"


@protocol PierConsultarContaResponse
@end

@interface PierConsultarContaResponse : PierObject


@property(nonatomic) NSNumber* codRetorno;

@property(nonatomic) NSNumber* codigoRetorno;

@property(nonatomic) NSArray<PierContaCartaoResponse>* contas;

@property(nonatomic) NSString* descricaoRetorno;

@end