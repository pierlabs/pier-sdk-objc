#import <Foundation/Foundation.h>
#import "PierBinChaveUpdate.h"
#import "PierBinChavePersist.h"
#import "PierObject.h"
#import "PierApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface PierBinchaveresourceApi: NSObject

@property(nonatomic, assign)PierApiClient *apiClient;

-(instancetype) initWithApiClient:(PierApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(PierBinchaveresourceApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(PierBinchaveresourceApi*) sharedAPI;
///
///
/// alterarBinChave
/// 
///
/// @param _id id
/// @param request request
/// @param login login
/// 
///
/// @return NSObject*
-(NSNumber*) alterarBinChaveUsingPUTWithId: (NSNumber*) _id
    request: (PierBinChaveUpdate*) request
    login: (NSString*) login
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


///
///
/// consultar
/// 
///
/// @param _id id
/// 
///
/// @return NSObject*
-(NSNumber*) consultarUsingGET10WithId: (NSNumber*) _id
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


///
///
/// listarBinChave
/// 
///
/// @param sort {{{global_menssagem_sort_sort}}}
/// @param page {{{global_menssagem_sort_page_value}}}
/// @param limit {{{global_menssagem_sort_limit}}}
/// @param _id 
/// @param idTipoChave 
/// @param idBin 
/// @param chave 
/// @param checkValue 
/// @param validade 
/// @param flagDescriptografado 
/// @param label 
/// 
///
/// @return NSObject*
-(NSNumber*) listarBinChaveUsingGETWithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    _id: (NSNumber*) _id
    idTipoChave: (NSNumber*) idTipoChave
    idBin: (NSNumber*) idBin
    chave: (NSString*) chave
    checkValue: (NSString*) checkValue
    validade: (NSString*) validade
    flagDescriptografado: (NSNumber*) flagDescriptografado
    label: (NSString*) label
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;


///
///
/// salvar
/// 
///
/// @param binChavePersist binChavePersist
/// @param login login
/// 
///
/// @return NSObject*
-(NSNumber*) salvarUsingPOST4WithBinChavePersist: (PierBinChavePersist*) binChavePersist
    login: (NSString*) login
    completionHandler: (void (^)(NSObject* output, NSError* error)) handler;



@end
