#import <Foundation/Foundation.h>
#import "PierBodyAccessToken.h"
#import "PierObject.h"
#import "PierApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface PierBaseApi: NSObject

@property(nonatomic, assign)PierApiClient *apiClient;

-(instancetype) initWithApiClient:(PierApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(PierBaseApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(PierBaseApi*) sharedAPI;
///
///
/// Limpar mapa de bases
/// 
///
/// 
///
/// @return PierBodyAccessToken*
-(NSNumber*) limparUsingPOSTWithCompletionHandler: 
    (void (^)(PierBodyAccessToken* output, NSError* error)) handler;



@end
