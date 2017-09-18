#import <Foundation/Foundation.h>
#import <ISO8601/ISO8601.h>
#import <AFNetworking/AFHTTPRequestOperationManager.h>
#import "PierJSONResponseSerializer.h"
#import "PierJSONRequestSerializer.h"
#import "PierQueryParamCollection.h"
#import "PierConfiguration.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "PierAdicionalDetalheResponse.h"
#import "PierAdicionalPersist.h"
#import "PierAdicionalResponse.h"
#import "PierAdicionalUpdate.h"
#import "PierAjusteResponse.h"
#import "PierAlterarProdutoRequest.h"
#import "PierAntecipacaoResponse.h"
#import "PierAntecipacaoSimuladaDetalhesResponse.h"
#import "PierAntecipacaoSimuladaResponse.h"
#import "PierAnuidadeResponse.h"
#import "PierAplicacaoMobilePersist.h"
#import "PierAplicacaoMobileResponse.h"
#import "PierAplicacaoMobileUpdate.h"
#import "PierArquivoDetalhesPersist.h"
#import "PierArquivoParametroResponse.h"
#import "PierArquivoPersist.h"
#import "PierArquivoResponse.h"
#import "PierAtendimentoClienteResponse.h"
#import "PierAtribuirAssinaturaClientePersist.h"
#import "PierAuthToken.h"
#import "PierAutorizacaoOnUsRequest.h"
#import "PierBancoResponse.h"
#import "PierBaseResponse.h"
#import "PierBodyAccessToken.h"
#import "PierBoletoResponse.h"
#import "PierCampoCodificadoDescricaoResponse.h"
#import "PierCancelamentoTransacaoOnUsRequest.h"
#import "PierCancelamentoTransacaoPorIdCartaoRequest.h"
#import "PierCartaoDetalheResponse.h"
#import "PierCartaoEmbossingRequest.h"
#import "PierCartaoEmbossingResponse.h"
#import "PierCartaoImpressaoProvisorioResponse.h"
#import "PierCartaoImpressaoResponse.h"
#import "PierCartaoResponse.h"
#import "PierCdtDetalheOportunidadeAUD.h"
#import "PierCodigoSegurancaSMSPersist.h"
#import "PierCodigoSegurancaSMSRequest.h"
#import "PierCompraResponse.h"
#import "PierConfiguracaoEmailPersist.h"
#import "PierConfiguracaoEmailResponse.h"
#import "PierContaDetalheResponse.h"
#import "PierContaHistoricoPagamentoResponse.h"
#import "PierContaResponse.h"
#import "PierControleVencimentoResponse.h"
#import "PierDadosCartaoResponse.h"
#import "PierDesfazimentoTransacaoOnUsRequest.h"
#import "PierDetalheOportunidadePersist.h"
#import "PierDetalheOportunidadeResponse.h"
#import "PierDetalheOportunidadeUpdate.h"
#import "PierDetalhesFaturaConsignadaResponse.h"
#import "PierDetalhesFaturaResponse.h"
#import "PierDispositivoPersist.h"
#import "PierDispositivoResponse.h"
#import "PierDividaClienteResponse.h"
#import "PierEmprestimoPessoalRequest.h"
#import "PierEmprestimoPessoalResponse.h"
#import "PierEnderecoAprovadoPersist.h"
#import "PierEnderecoAprovadoResponse.h"
#import "PierEnderecoResponse.h"
#import "PierEstabelecimentoResponse.h"
#import "PierEstagioCartaoResponse.h"
#import "PierExtraInfo.h"
#import "PierFantasiaBasicaResponse.h"
#import "PierFaqResponse.h"
#import "PierFaturaConsignadaDetalheResponse.h"
#import "PierFaturaConsignadaResponse.h"
#import "PierFaturaResponse.h"
#import "PierHistoricoAssessoriaResponse.h"
#import "PierHistoricoAtrasoFaturaResponse.h"
#import "PierHistoricoEventosResponse.h"
#import "PierHistoricoImpressaoCartaoResponse.h"
#import "PierHistoricoTelefoneResponse.h"
#import "PierIntegracaoEmissorPersist.h"
#import "PierIntegracaoEmissorResponse.h"
#import "PierJobResponse.h"
#import "PierLimiteDisponibilidadeResponse.h"
#import "PierLoteCartoesPrePagosResponse.h"
#import "PierMapOfstringAndstring.h"
#import "PierNotificacaoPushResponse.h"
#import "PierNotificacaoResponse.h"
#import "PierNotificacaoSMSBody.h"
#import "PierNotificacaoSMSResponse.h"
#import "PierOperadoraResponse.h"
#import "PierOportunidadeAUDResponse.h"
#import "PierOportunidadePersist.h"
#import "PierOportunidadeResponse.h"
#import "PierOportunidadeUpdate.h"
#import "PierOrigemComercialResponse.h"
#import "PierPageAnuidadeResponse.h"
#import "PierPageAplicacaoMobileResponse.h"
#import "PierPageAtendimentoClienteResponse.h"
#import "PierPageBancoResponse.h"
#import "PierPageBaseResponse.h"
#import "PierPageCampoCodificadoDescricaoResponse.h"
#import "PierPageCartaoResponse.h"
#import "PierPageCompraResponse.h"
#import "PierPageConfiguracaoEmailResponse.h"
#import "PierPageContaDetalheResponse.h"
#import "PierPageContaHistoricoPagamentoResponse.h"
#import "PierPageContaResponse.h"
#import "PierPageControleVencimentoResponse.h"
#import "PierPageDispositivoResponse.h"
#import "PierPageEnderecoResponse.h"
#import "PierPageEstabelecimentoResponse.h"
#import "PierPageEstagioCartaoResponse.h"
#import "PierPageFantasiaBasicaResponse.h"
#import "PierPageFaqResponse.h"
#import "PierPageFaturaConsignadaResponse.h"
#import "PierPageFaturaResponse.h"
#import "PierPageHistoricoAssessoriaResponse.h"
#import "PierPageHistoricoAtrasoFaturaResponse.h"
#import "PierPageHistoricoEventosResponse.h"
#import "PierPageJobResponse.h"
#import "PierPageLoteCartoesPrePagosResponse.h"
#import "PierPageOperadoraResponse.h"
#import "PierPageOportunidadeAUDResponse.h"
#import "PierPageOportunidadeResponse.h"
#import "PierPageOrigemComercialResponse.h"
#import "PierPagePaisResponse.h"
#import "PierPagePessoaDetalheResponse.h"
#import "PierPagePessoaResponse.h"
#import "PierPagePlanoParcelamentoResponse.h"
#import "PierPagePlataformaMobileResponse.h"
#import "PierPagePortadorResponse.h"
#import "PierPageProdutoResponse.h"
#import "PierPagePromotorResponse.h"
#import "PierPagePushResponse.h"
#import "PierPageRiscoFraudeResponse.h"
#import "PierPageSMSResponse.h"
#import "PierPageStatusCartaoResponse.h"
#import "PierPageStatusContaResponse.h"
#import "PierPageStatusImpressaoResponse.h"
#import "PierPageStatusOportunidadeAUDResponse.h"
#import "PierPageStatusOportunidadeResponse.h"
#import "PierPageTaxasRefinanciamentoResponse.h"
#import "PierPageTelefoneResponse.h"
#import "PierPageTemplateNotificacaoResponse.h"
#import "PierPageTerminalResponse.h"
#import "PierPageTipoAjusteResponse.h"
#import "PierPageTipoBoletoResponse.h"
#import "PierPageTipoEnderecoResponse.h"
#import "PierPageTipoOportunidadeAUDResponse.h"
#import "PierPageTipoOportunidadeResponse.h"
#import "PierPageTipoTelefoneResponse.h"
#import "PierPageTransacaoNaoProcessadaResponse.h"
#import "PierPageTransacaoResponse.h"
#import "PierPageTransacoesCorrentesResponse.h"
#import "PierPageTransferenciaBancariaResponse.h"
#import "PierPageTransferenciaResponse.h"
#import "PierPageUsuarioResponse.h"
#import "PierPageWebHookResponse.h"
#import "PierPaisResponse.h"
#import "PierParametroProdutoResponse.h"
#import "PierPessoaDetalheResponse.h"
#import "PierPessoaFisicaAprovadaPersist.h"
#import "PierPessoaFisicaAprovadaResponse.h"
#import "PierPessoaJuridicaAprovadaPersist.h"
#import "PierPessoaJuridicaAprovadaResponse.h"
#import "PierPessoaPersist.h"
#import "PierPessoaResponse.h"
#import "PierPlanoParcelamentoEmprestimoResponse.h"
#import "PierPlanoParcelamentoResponse.h"
#import "PierPlataformaMobilePersist.h"
#import "PierPlataformaMobileResponse.h"
#import "PierPlataformaMobileUpdate.h"
#import "PierPortadorResponse.h"
#import "PierProdutoDetalhesResponse.h"
#import "PierProdutoOrigemResponse.h"
#import "PierProdutoResponse.h"
#import "PierPromotorResponse.h"
#import "PierPushAPNS.h"
#import "PierPushFCMEGCM.h"
#import "PierRiscoFraudeDetalhadoResponse.h"
#import "PierRiscoFraudeResponse.h"
#import "PierSocioAprovadoResponse.h"
#import "PierStatusCartaoResponse.h"
#import "PierStatusContaResponse.h"
#import "PierStatusImpressaoResponse.h"
#import "PierStatusOportunidade.h"
#import "PierStatusOportunidadeAUDResponse.h"
#import "PierStatusOportunidadeResponse.h"
#import "PierTaxaAntecipacaoRequest.h"
#import "PierTaxasRefinanciamentoResponse.h"
#import "PierTelefoneAdicionalPersist.h"
#import "PierTelefoneAdicionalUpdate.h"
#import "PierTelefonePessoaAprovadaPersist.h"
#import "PierTelefonePessoaAprovadaResponse.h"
#import "PierTelefoneResponse.h"
#import "PierTemplateNotificacaoResponse.h"
#import "PierTerminalResponse.h"
#import "PierTipoAjusteResponse.h"
#import "PierTipoBoletoResponse.h"
#import "PierTipoEnderecoResponse.h"
#import "PierTipoOportunidade.h"
#import "PierTipoOportunidadeAUDResponse.h"
#import "PierTipoOportunidadeResponse.h"
#import "PierTipoResolucaoResponse.h"
#import "PierTipoTelefoneResponse.h"
#import "PierTokenResponse.h"
#import "PierTransacaoCorrenteResponse.h"
#import "PierTransacaoNaoProcessadaResponse.h"
#import "PierTransacaoOnUsPorIdCartaoRequest.h"
#import "PierTransacaoOnUsRequest.h"
#import "PierTransacaoOnUsResponse.h"
#import "PierTransacoesCorrentesResponse.h"
#import "PierTransferenciaBancariaPersist.h"
#import "PierTransferenciaBancariaResponse.h"
#import "PierTransferenciaResponse.h"
#import "PierUsuarioPersist.h"
#import "PierUsuarioResponse.h"
#import "PierUsuarioUpdate.h"
#import "PierValidaCartaoResponse.h"
#import "PierValidaSenhaCartaoResponse.h"
#import "PierWebHookResponse.h"


@class PierConfiguration;

/**
 * A key for `NSError` user info dictionaries.
 *
 * The corresponding value is the parsed response body for an HTTP error.
 */
extern NSString *const PierResponseObjectErrorKey;

/**
 * Log debug message macro
 */
#define PierDebugLog(format, ...) [PierApiClient debugLog:[NSString stringWithFormat:@"%s", __PRETTY_FUNCTION__] message: format, ##__VA_ARGS__];

@interface PierApiClient : AFHTTPRequestOperationManager

@property(nonatomic, assign) NSURLRequestCachePolicy cachePolicy;
@property(nonatomic, assign) NSTimeInterval timeoutInterval;
@property(nonatomic, readonly) NSOperationQueue* queue;

/// In order to ensure the HTTPResponseHeaders are correct, it is recommended to initialize one PierApiClient instance per thread.
@property(nonatomic, readonly) NSDictionary* HTTPResponseHeaders;

/**
 * Clears Cache
 */
+(void)clearCache;

/**
 * Turns on cache
 *
 * @param enabled If the cached is enable, must be `YES` or `NO`
 */
+(void)setCacheEnabled:(BOOL) enabled;

/**
 * Gets the request queue size
 *
 * @return The size of `queuedRequests` static variable.
 */
+(unsigned long)requestQueueSize;

/**
 * Sets the client unreachable
 *
 * @param state off line state, must be `YES` or `NO`
 */
+(void) setOfflineState:(BOOL) state;

/**
 * Gets if the client is unreachable
 *
 * @return The client offline state
 */
+(bool) getOfflineState;

/**
 * Sets the client reachability, this may be overridden by the reachability manager if reachability changes
 *
 * @param The client reachability.
 */
+(void) setReachabilityStatus:(AFNetworkReachabilityStatus) status;

/**
 * Gets the client reachability
 *
 * @return The client reachability.
 */
+(AFNetworkReachabilityStatus) getReachabilityStatus;

/**
 * Gets the next request id
 *
 * @return The next executed request id.
 */
+(NSNumber*) nextRequestId;

/**
 * Generates request id and add it to the queue
 *
 * @return The next executed request id.
 */
+(NSNumber*) queueRequest;

/**
 * Removes request id from the queue
 *
 * @param requestId The request which will be removed.
 */
+(void) cancelRequest:(NSNumber*)requestId;

/**
 * Gets URL encoded NSString
 *
 * @param unescaped The string which will be escaped.
 *
 * @return The escaped string.
 */
+(NSString*) escape:(id)unescaped;

/**
 * Customizes the behavior when the reachability changed
 *
 * @param changeBlock The block will be executed when the reachability changed.
 */
+(void) setReachabilityChangeBlock:(void(^)(int))changeBlock;

/**
 * Sets the api client reachability strategy
 */
- (void)configureCacheReachibility;

/**
 * Detects Accept header from accepts NSArray
 *
 * @param accepts NSArray of header
 *
 * @return The Accept header
 */
+(NSString *) selectHeaderAccept:(NSArray *)accepts;

/**
 * Detects Content-Type header from contentTypes NSArray
 *
 * @param contentTypes NSArray of header
 *
 * @return The Content-Type header
 */
+(NSString *) selectHeaderContentType:(NSArray *)contentTypes;

/**
 * Sets header for request
 *
 * @param value The header value
 * @param forKey The header key
 */
-(void)setHeaderValue:(NSString*) value
               forKey:(NSString*) forKey;

/**
 * Updates header parameters and query parameters for authentication
 *
 * @param headers The header parameter will be udpated, passed by pointer to pointer.
 * @param querys The query parameters will be updated, passed by pointer to pointer.
 * @param authSettings The authentication names NSArray.
 */
- (void) updateHeaderParams:(NSDictionary **)headers
                queryParams:(NSDictionary **)querys
           WithAuthSettings:(NSArray *)authSettings;

/**
 * Deserializes the given data to Objective-C object.
 *
 * @param data The data will be deserialized.
 * @param class The type of objective-c object.
 */
- (id) deserialize:(id) data class:(NSString *) class;

/**
 * Logs request and response
 *
 * @param operation AFHTTPRequestOperation for the HTTP request.
 * @param request   The HTTP request.
 * @param error     The error of the HTTP request.
 */
- (void)logResponse:(AFHTTPRequestOperation *)operation
         forRequest:(NSURLRequest *)request
              error:(NSError *)error;

/**
 * Performs request
 *
 * @param path Request url.
 * @param method Request method.
 * @param pathParams Request path parameters.
 * @param queryParams Request query parameters.
 * @param body Request body.
 * @param headerParams Request header parameters.
 * @param authSettings Request authentication names.
 * @param requestContentType Request content-type.
 * @param responseContentType Response content-type.
 * @param completionBlock The block will be executed when the request completed.
 *
 * @return The request id.
 */
-(NSNumber*) requestWithPath:(NSString*) path
                      method:(NSString*) method
                  pathParams:(NSDictionary *) pathParams
                 queryParams:(NSDictionary*) queryParams
                  formParams:(NSDictionary *) formParams
                       files:(NSDictionary *) files
                        body:(id) body
                headerParams:(NSDictionary*) headerParams
                authSettings:(NSArray *) authSettings
          requestContentType:(NSString*) requestContentType
         responseContentType:(NSString*) responseContentType
                responseType:(NSString *) responseType
             completionBlock:(void (^)(id, NSError *))completionBlock;

/**
 * Sanitize object for request
 *
 * @param object The query/path/header/form/body param to be sanitized.
 */
- (id) sanitizeForSerialization:(id) object;

/**
 * Custom security policy
 *
 * @return AFSecurityPolicy
 */
- (AFSecurityPolicy *) customSecurityPolicy;

/**
 * Convert parameter to NSString
 */
- (NSString *) parameterToString: (id) param;

/**
 * Log debug message
 */
+(void)debugLog:(NSString *)method message:(NSString *)format, ...;

@end
