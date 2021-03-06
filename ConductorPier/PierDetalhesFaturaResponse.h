#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "PierFaturaFechadaResponse.h"
#import "PierTransacoesCorrentesResponse.h"


@protocol PierDetalhesFaturaResponse
@end

@interface PierDetalhesFaturaResponse : PierObject

/* {{{detalhes_fatura_response_fatura_value}}} [optional]
 */
@property(nonatomic) PierFaturaFechadaResponse* fatura;
/* {{{detalhes_fatura_response_transacoes_value}}} [optional]
 */
@property(nonatomic) NSArray<PierTransacoesCorrentesResponse>* transacoes;

@end
