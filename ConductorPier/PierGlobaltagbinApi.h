#import <Foundation/Foundation.h>
#import "PierPageBinResponse.h"
#import "PierObject.h"
#import "PierApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface PierGlobaltagbinApi: NSObject

@property(nonatomic, assign)PierApiClient *apiClient;

-(instancetype) initWithApiClient:(PierApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(PierGlobaltagbinApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(PierGlobaltagbinApi*) sharedAPI;
///
///
/// {{{Bin_resource_listar_bins}}}
/// {{{Bin_resource_listar_Bin_notes}}}
///
/// @param sort {{{global_menssagem_sort_sort}}}
/// @param page {{{global_menssagem_sort_page_value}}}
/// @param limit {{{global_menssagem_sort_limit}}}
/// @param _id {{{bin_request_id_value}}}
/// @param proximaConta {{{bin_request_proximaconta_value}}}
/// @param flagCartaoVirtual {{{bin_request_flagcartaocirtual_value}}}
/// @param flagProvisorio {{{bin_request_flagprovisorio_value}}}
/// @param serviceCode {{{bin_request_servicecode_value}}}
/// 
///
/// @return PierPageBinResponse*
-(NSNumber*) listarBinUsingGETWithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    _id: (NSNumber*) _id
    proximaConta: (NSNumber*) proximaConta
    flagCartaoVirtual: (NSNumber*) flagCartaoVirtual
    flagProvisorio: (NSNumber*) flagProvisorio
    serviceCode: (NSNumber*) serviceCode
    completionHandler: (void (^)(PierPageBinResponse* output, NSError* error)) handler;



@end
