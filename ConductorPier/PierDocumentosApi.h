#import <Foundation/Foundation.h>
#import "PierDocumentoResponse.h"
#import "PierDocumentoParametrosRequest.h"
#import "PierDocumentoTemplateRequest.h"
#import "PierDocumentoTemplateResponse.h"
#import "PierDocumentoTipoResponse.h"
#import "PierDocumentoTipoRequest.h"
#import "PierObject.h"
#import "PierApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface PierDocumentosApi: NSObject

@property(nonatomic, assign)PierApiClient *apiClient;

-(instancetype) initWithApiClient:(PierApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(PierDocumentosApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(PierDocumentosApi*) sharedAPI;
///
///
/// Cadastra documentos
/// Esse recurso permite cadastrar documentos.
///
/// @param persist persist
/// 
///
/// @return PierDocumentoResponse*
-(NSNumber*) salvarUsingPOST5WithPersist: (PierDocumentoParametrosRequest*) persist
    completionHandler: (void (^)(PierDocumentoResponse* output, NSError* error)) handler;


///
///
/// Cadastra os templates dos documentos
/// Esse recurso permite cadastrar templates dos documentos.
///
/// @param persist persist
/// 
///
/// @return PierDocumentoTemplateResponse*
-(NSNumber*) salvarUsingPOST6WithPersist: (PierDocumentoTemplateRequest*) persist
    completionHandler: (void (^)(PierDocumentoTemplateResponse* output, NSError* error)) handler;


///
///
/// Cadastra os tipos de documentos
/// Esse recurso permite cadastrar tipos de documentos.
///
/// @param persist persist
/// 
///
/// @return PierDocumentoTipoResponse*
-(NSNumber*) salvarUsingPOST7WithPersist: (PierDocumentoTipoRequest*) persist
    completionHandler: (void (^)(PierDocumentoTipoResponse* output, NSError* error)) handler;



@end
