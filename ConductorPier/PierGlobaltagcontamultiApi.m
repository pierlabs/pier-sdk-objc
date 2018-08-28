#import "PierGlobaltagcontamultiApi.h"
#import "PierQueryParamCollection.h"
#import "PierCartaoMultiAppPersistValue_.h"
#import "PierVinculoCartoesResponse.h"
#import "PierContaMultiAppPersistValue_.h"
#import "PierContaMultiAppResponse.h"


@interface PierGlobaltagcontamultiApi ()
    @property (readwrite, nonatomic, strong) NSMutableDictionary *defaultHeaders;
@end

@implementation PierGlobaltagcontamultiApi

static PierGlobaltagcontamultiApi* singletonAPI = nil;

#pragma mark - Initialize methods

- (id) init {
    self = [super init];
    if (self) {
        PierConfiguration *config = [PierConfiguration sharedConfig];
        if (config.apiClient == nil) {
            config.apiClient = [[PierApiClient alloc] init];
        }
        self.apiClient = config.apiClient;
        self.defaultHeaders = [NSMutableDictionary dictionary];
    }
    return self;
}

- (id) initWithApiClient:(PierApiClient *)apiClient {
    self = [super init];
    if (self) {
        self.apiClient = apiClient;
        self.defaultHeaders = [NSMutableDictionary dictionary];
    }
    return self;
}

#pragma mark -

+(PierGlobaltagcontamultiApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key {

    if (singletonAPI == nil) {
        singletonAPI = [[PierGlobaltagcontamultiApi alloc] init];
        [singletonAPI addHeader:headerValue forKey:key];
    }
    return singletonAPI;
}

+(PierGlobaltagcontamultiApi*) sharedAPI {

    if (singletonAPI == nil) {
        singletonAPI = [[PierGlobaltagcontamultiApi alloc] init];
    }
    return singletonAPI;
}

-(void) addHeader:(NSString*)value forKey:(NSString*)key {
    [self.defaultHeaders setValue:value forKey:key];
}

-(void) setHeaderValue:(NSString*) value
           forKey:(NSString*)key {
    [self.defaultHeaders setValue:value forKey:key];
}

-(unsigned long) requestQueueSize {
    return [PierApiClient requestQueueSize];
}

#pragma mark - Api Methods

///
/// {{{conta_resource_cadastrar_cartao_multiapp}}}
/// {{{conta_resource_cadastrar_cartao_multiapp_notes}}}
///  @param cartaoMultiAppPersist cartaoMultiAppPersist 
///
///  @returns PierVinculoCartoesResponse*
///
-(NSNumber*) criarCartoesMultiAppUsingPOSTWithCartaoMultiAppPersist: (PierCartaoMultiAppPersistValue_*) cartaoMultiAppPersist
    completionHandler: (void (^)(PierVinculoCartoesResponse* output, NSError* error)) handler {

    
    // verify the required parameter 'cartaoMultiAppPersist' is set
    if (cartaoMultiAppPersist == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `cartaoMultiAppPersist` when calling `criarCartoesMultiAppUsingPOST`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/api/cartoes/gerar-cartoes-multiapp"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.defaultHeaders];

    

    // HTTP header `Accept`
    headerParams[@"Accept"] = [PierApiClient selectHeaderAccept:@[@"application/json"]];
    if ([headerParams[@"Accept"] length] == 0) {
        [headerParams removeObjectForKey:@"Accept"];
    }

    // response content type
    NSString *responseContentType;
    if ([headerParams objectForKey:@"Accept"]) {
        responseContentType = [headerParams[@"Accept"] componentsSeparatedByString:@", "][0];
    }
    else {
        responseContentType = @"";
    }

    // request content type
    NSString *requestContentType = [PierApiClient selectHeaderContentType:@[@"application/json"]];

    // Authentication setting
    NSArray *authSettings = @[];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];
    
    bodyParam = cartaoMultiAppPersist;
    

    
    return [self.apiClient requestWithPath: resourcePath
                                    method: @"POST"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"PierVinculoCartoesResponse*"
                           completionBlock: ^(id data, NSError *error) {
                               handler((PierVinculoCartoesResponse*)data, error);
                           }
          ];
}

///
/// {{{conta_resource_cadastrar_conta_multiapp}}}
/// {{{conta_resource_cadastrar_conta_multiapp_notes}}}
///  @param contaMultiAppPersist contaMultiAppPersist 
///
///  @returns PierContaMultiAppResponse*
///
-(NSNumber*) criarContasMultiAppUsingPOSTWithContaMultiAppPersist: (PierContaMultiAppPersistValue_*) contaMultiAppPersist
    completionHandler: (void (^)(PierContaMultiAppResponse* output, NSError* error)) handler {

    
    // verify the required parameter 'contaMultiAppPersist' is set
    if (contaMultiAppPersist == nil) {
        [NSException raise:@"Invalid parameter" format:@"Missing the required parameter `contaMultiAppPersist` when calling `criarContasMultiAppUsingPOST`"];
    }
    

    NSMutableString* resourcePath = [NSMutableString stringWithFormat:@"/api/contas/cadastrar-conta-multiapp"];

    // remove format in URL if needed
    if ([resourcePath rangeOfString:@".{format}"].location != NSNotFound) {
        [resourcePath replaceCharactersInRange: [resourcePath rangeOfString:@".{format}"] withString:@".json"];
    }

    NSMutableDictionary *pathParams = [[NSMutableDictionary alloc] init];
    

    NSMutableDictionary* queryParams = [[NSMutableDictionary alloc] init];
    
    NSMutableDictionary* headerParams = [NSMutableDictionary dictionaryWithDictionary:self.defaultHeaders];

    

    // HTTP header `Accept`
    headerParams[@"Accept"] = [PierApiClient selectHeaderAccept:@[@"application/json"]];
    if ([headerParams[@"Accept"] length] == 0) {
        [headerParams removeObjectForKey:@"Accept"];
    }

    // response content type
    NSString *responseContentType;
    if ([headerParams objectForKey:@"Accept"]) {
        responseContentType = [headerParams[@"Accept"] componentsSeparatedByString:@", "][0];
    }
    else {
        responseContentType = @"";
    }

    // request content type
    NSString *requestContentType = [PierApiClient selectHeaderContentType:@[@"application/json"]];

    // Authentication setting
    NSArray *authSettings = @[];

    id bodyParam = nil;
    NSMutableDictionary *formParams = [[NSMutableDictionary alloc] init];
    NSMutableDictionary *localVarFiles = [[NSMutableDictionary alloc] init];
    
    bodyParam = contaMultiAppPersist;
    

    
    return [self.apiClient requestWithPath: resourcePath
                                    method: @"POST"
                                pathParams: pathParams
                               queryParams: queryParams
                                formParams: formParams
                                     files: localVarFiles
                                      body: bodyParam
                              headerParams: headerParams
                              authSettings: authSettings
                        requestContentType: requestContentType
                       responseContentType: responseContentType
                              responseType: @"PierContaMultiAppResponse*"
                           completionBlock: ^(id data, NSError *error) {
                               handler((PierContaMultiAppResponse*)data, error);
                           }
          ];
}



@end
