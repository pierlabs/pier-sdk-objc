#import <Foundation/Foundation.h>
#import "PierStatusOportunidadeResponse.h"
#import "PierStatusOportunidade.h"
#import "PierOportunidadeUpdate.h"
#import "PierOportunidadeResponse.h"
#import "PierTipoOportunidadeResponse.h"
#import "PierTipoOportunidade.h"
#import "PierPageStatusOportunidadeAUDResponse.h"
#import "PierPageOportunidadeAUDResponse.h"
#import "PierPageTipoOportunidadeAUDResponse.h"
#import "PierPageStatusOportunidadeResponse.h"
#import "PierPageOportunidadeResponse.h"
#import "PierPageTipoOportunidadeResponse.h"
#import "PierOportunidadePersist.h"
#import "PierObject.h"
#import "PierApiClient.h"


/**
 * NOTE: This class is auto generated by the swagger code generator program. 
 * https://github.com/swagger-api/swagger-codegen 
 * Do not edit the class manually.
 */

@interface PierOportunidadeApi: NSObject

@property(nonatomic, assign)PierApiClient *apiClient;

-(instancetype) initWithApiClient:(PierApiClient *)apiClient;
-(void) addHeader:(NSString*)value forKey:(NSString*)key;
-(unsigned long) requestQueueSize;
+(PierOportunidadeApi*) apiWithHeader:(NSString*)headerValue key:(NSString*)key;
+(PierOportunidadeApi*) sharedAPI;
///
///
/// Altera o status do tipo oportunidade
/// Este m\u00C3\u00A9todo realiza a altera\u00C3\u00A7\u00C3\u00A3o do status do tipo oportunidade.
///
/// @param _id C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o do tipo oportunidade (id).
/// @param idStatus C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o do status do tipo oportunidade (id).
/// @param persist persist
/// 
///
/// @return PierStatusOportunidadeResponse*
-(NSNumber*) alterarStatusUsingPUTWithId: (NSNumber*) _id
    idStatus: (NSNumber*) idStatus
    persist: (PierStatusOportunidade*) persist
    completionHandler: (void (^)(PierStatusOportunidadeResponse* output, NSError* error)) handler;


///
///
/// Altera as oportunidades
/// Este m\u00C3\u00A9todo realiza a altera\u00C3\u00A7\u00C3\u00A3o das oportunidades.
///
/// @param _id C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o da oportunidade (id).
/// @param update update
/// 
///
/// @return PierOportunidadeResponse*
-(NSNumber*) alterarUsingPUT4WithId: (NSNumber*) _id
    update: (PierOportunidadeUpdate*) update
    completionHandler: (void (^)(PierOportunidadeResponse* output, NSError* error)) handler;


///
///
/// Altera os tipos oportunidades
/// Este m\u00C3\u00A9todo realiza a altera\u00C3\u00A7\u00C3\u00A3o dos tipos oportunidades.
///
/// @param _id C\u00C3\u00B3digo de Identifica\u00C3\u00A7\u00C3\u00A3o do tipo oportunidade (id).
/// @param persist persist
/// 
///
/// @return PierTipoOportunidadeResponse*
-(NSNumber*) alterarUsingPUT8WithId: (NSNumber*) _id
    persist: (PierTipoOportunidade*) persist
    completionHandler: (void (^)(PierTipoOportunidadeResponse* output, NSError* error)) handler;


///
///
/// Apresenta dados de um determinado status do tipo oportunidade
/// Este recurso permite consultar dados de um determinado status do tipo oportunidade a partir de seu codigo de identifica\u00C3\u00A7\u00C3\u00A3o (idStatus).
///
/// @param _id C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o do tipo oportunidade (id).
/// @param idStatus C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o do status (idStatus).
/// 
///
/// @return PierStatusOportunidadeResponse*
-(NSNumber*) consultarStatusUsingGETWithId: (NSNumber*) _id
    idStatus: (NSNumber*) idStatus
    completionHandler: (void (^)(PierStatusOportunidadeResponse* output, NSError* error)) handler;


///
///
/// Apresenta dados de uma determinada oportunidade
/// Este recurso permite consultar dados de uma determinada oportunidade a partir de seu codigo de identifica\u00C3\u00A7\u00C3\u00A3o (id).
///
/// @param _id C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o da oportunidade (id).
/// 
///
/// @return PierOportunidadeResponse*
-(NSNumber*) consultarUsingGET12WithId: (NSNumber*) _id
    completionHandler: (void (^)(PierOportunidadeResponse* output, NSError* error)) handler;


///
///
/// Apresenta dados de um determinado tipo oportunidade
/// Este recurso permite consultar dados de um determinado tipo oportunidade a partir de seu codigo de identifica\u00C3\u00A7\u00C3\u00A3o (id).
///
/// @param _id C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o do tipo oportunidade (id).
/// 
///
/// @return PierTipoOportunidadeResponse*
-(NSNumber*) consultarUsingGET25WithId: (NSNumber*) _id
    completionHandler: (void (^)(PierTipoOportunidadeResponse* output, NSError* error)) handler;


///
///
/// Lista as auditorias dos status oportunidades
/// Este recurso permite listar os status oportunidades.
///
/// @param sort Tipo de ordena\u00C3\u00A7\u00C3\u00A3o dos registros.
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 50, Max = 50)
/// @param revType C\u00C3\u00B3digo que representa o tipo de a\u00C3\u00A7\u00C3\u00A3o realizada no recurso de tipos oportunidades
/// @param revDate Data da a\u00C3\u00A7\u00C3\u00A3o realizada no recurso de tipos oportunidades
/// @param _id C\u00C3\u00B3digo identificador do status oportunidade
/// @param idTipoOportunidade C\u00C3\u00B3digo identificador do tipo oportunidade
/// @param nome Nome do status oportunidade
/// @param descricao Descri\u00C3\u00A7\u00C3\u00A3o do status oportunidade
/// @param flagAtivo Flag de verifica\u00C3\u00A7\u00C3\u00A3o se o status oportunidade est\u00C3\u00A1 ativo
/// @param revUser Usu\u00C3\u00A1rio da auditoria
/// 
///
/// @return PierPageStatusOportunidadeAUDResponse*
-(NSNumber*) listarAuditoriasStatusUsingGETWithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    revType: (NSNumber*) revType
    revDate: (NSString*) revDate
    _id: (NSNumber*) _id
    idTipoOportunidade: (NSNumber*) idTipoOportunidade
    nome: (NSString*) nome
    descricao: (NSString*) descricao
    flagAtivo: (NSNumber*) flagAtivo
    revUser: (NSString*) revUser
    completionHandler: (void (^)(PierPageStatusOportunidadeAUDResponse* output, NSError* error)) handler;


///
///
/// Lista as auditorias das oportunidades
/// Este recurso permite listar as auditorias das oportunidades.
///
/// @param sort Tipo de ordena\u00C3\u00A7\u00C3\u00A3o dos registros.
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 50, Max = 50)
/// @param idStatusOportunidade C\u00C3\u00B3digo identificador do status oportunidade
/// @param dataCadastro Data do cadastro da oportunidade
/// @param dataAtualizacao Data da atualiza\u00C3\u00A7\u00C3\u00A3o da oportunidade
/// @param numeroReceitaFederal N\u00C3\u00BAmero receita federal do cliente ao qual ser\u00C3\u00A1 ofertada a oportunidade
/// @param dataInicioVigencia In\u00C3\u00ADcio da vig\u00C3\u00AAncia da oportunidade
/// @param datatFimVigencia Fim da vig\u00C3\u00AAncia da oportunidade
/// @param flagAtivo Flag de verifica\u00C3\u00A7\u00C3\u00A3o se a oportunidade est\u00C3\u00A1 ativa
/// @param revDate Data da auditoria
/// @param revType Tipo da auditoria
/// @param revUser Usu\u00C3\u00A1rio da auditoria
/// 
///
/// @return PierPageOportunidadeAUDResponse*
-(NSNumber*) listarAuditoriasUsingGETWithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    idStatusOportunidade: (NSNumber*) idStatusOportunidade
    dataCadastro: (NSString*) dataCadastro
    dataAtualizacao: (NSString*) dataAtualizacao
    numeroReceitaFederal: (NSString*) numeroReceitaFederal
    dataInicioVigencia: (NSString*) dataInicioVigencia
    datatFimVigencia: (NSString*) datatFimVigencia
    flagAtivo: (NSNumber*) flagAtivo
    revDate: (NSString*) revDate
    revType: (NSString*) revType
    revUser: (NSString*) revUser
    completionHandler: (void (^)(PierPageOportunidadeAUDResponse* output, NSError* error)) handler;


///
///
/// Lista as auditorias dos tipos oportunidades
/// Este recurso permite listar os tipos oportunidades.
///
/// @param sort Tipo de ordena\u00C3\u00A7\u00C3\u00A3o dos registros.
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 50, Max = 50)
/// @param revType C\u00C3\u00B3digo que representa o tipo de a\u00C3\u00A7\u00C3\u00A3o realizada no recurso de tipos oportunidades
/// @param revDate Data da a\u00C3\u00A7\u00C3\u00A3o realizada no recurso de tipos oportunidades
/// @param _id C\u00C3\u00B3digo identificador do tipo oportunidade no qual foi realizado a a\u00C3\u00A7\u00C3\u00A3o
/// @param descricao Descri\u00C3\u00A7\u00C3\u00A3o do tipo oportunidade no qual foi realizado a a\u00C3\u00A7\u00C3\u00A3o
/// @param flagAtivo Atributo que representa se o tipo oportunidade est\u00C3\u00A1 ativo
/// @param revUser Usu\u00C3\u00A1rio da auditoria
/// 
///
/// @return PierPageTipoOportunidadeAUDResponse*
-(NSNumber*) listarAuditoriasUsingGET1WithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    revType: (NSNumber*) revType
    revDate: (NSString*) revDate
    _id: (NSNumber*) _id
    descricao: (NSString*) descricao
    flagAtivo: (NSNumber*) flagAtivo
    revUser: (NSString*) revUser
    completionHandler: (void (^)(PierPageTipoOportunidadeAUDResponse* output, NSError* error)) handler;


///
///
/// Lista os status do tipo oportunidades
/// Este recurso permite listar os status do tipo oportunidades.
///
/// @param _id C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o do tipo oportunidade (id).
/// @param sort Tipo de ordena\u00C3\u00A7\u00C3\u00A3o dos registros.
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 50, Max = 50)
/// @param nome Nome do status oportunidade
/// @param descricao Descri\u00C3\u00A7\u00C3\u00A3o do status oportunidade
/// @param flagAtivo Flag de verifica\u00C3\u00A7\u00C3\u00A3o se o status oportunidade est\u00C3\u00A1 ativo
/// 
///
/// @return PierPageStatusOportunidadeResponse*
-(NSNumber*) listarStatusUsingGETWithId: (NSNumber*) _id
    sort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    nome: (NSString*) nome
    descricao: (NSString*) descricao
    flagAtivo: (NSNumber*) flagAtivo
    completionHandler: (void (^)(PierPageStatusOportunidadeResponse* output, NSError* error)) handler;


///
///
/// Lista as oportunidades
/// Este recurso permite listar as oportunidades.
///
/// @param sort Tipo de ordena\u00C3\u00A7\u00C3\u00A3o dos registros.
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 50, Max = 50)
/// @param idStatusOportunidade C\u00C3\u00B3digo identificador do status oportunidade
/// @param dataCadastro Data do cadastro da oportunidade
/// @param dataAtualizacao Data da atualiza\u00C3\u00A7\u00C3\u00A3o da oportunidade
/// @param numeroReceitaFederal N\u00C3\u00BAmero receita federal do cliente ao qual ser\u00C3\u00A1 ofertada a oportunidade
/// @param dataInicioVigencia Data de in\u00C3\u00ADcio da vig\u00C3\u00AAncia da oportunidade
/// @param dataFimVigencia Data do fim da vig\u00C3\u00AAncia da oportunidade
/// @param flagAtivo Flag de verifica\u00C3\u00A7\u00C3\u00A3o se a oportunidade est\u00C3\u00A1 ativa
/// 
///
/// @return PierPageOportunidadeResponse*
-(NSNumber*) listarUsingGET16WithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    idStatusOportunidade: (NSNumber*) idStatusOportunidade
    dataCadastro: (NSString*) dataCadastro
    dataAtualizacao: (NSString*) dataAtualizacao
    numeroReceitaFederal: (NSString*) numeroReceitaFederal
    dataInicioVigencia: (NSString*) dataInicioVigencia
    dataFimVigencia: (NSString*) dataFimVigencia
    flagAtivo: (NSNumber*) flagAtivo
    completionHandler: (void (^)(PierPageOportunidadeResponse* output, NSError* error)) handler;


///
///
/// Lista os tipos oportunidades
/// Este recurso permite listar os tipos oportunidades.
///
/// @param sort Tipo de ordena\u00C3\u00A7\u00C3\u00A3o dos registros.
/// @param page P\u00C3\u00A1gina solicitada (Default = 0)
/// @param limit Limite de elementos por solicita\u00C3\u00A7\u00C3\u00A3o (Default = 50, Max = 50)
/// @param descricao Descri\u00C3\u00A7\u00C3\u00A3o do tipo oportunidade
/// @param flagAtivo Flag de verifica\u00C3\u00A7\u00C3\u00A3o se o tipo oportunidade est\u00C3\u00A1 ativo
/// 
///
/// @return PierPageTipoOportunidadeResponse*
-(NSNumber*) listarUsingGET29WithSort: (NSArray* /* NSString */) sort
    page: (NSNumber*) page
    limit: (NSNumber*) limit
    descricao: (NSString*) descricao
    flagAtivo: (NSNumber*) flagAtivo
    completionHandler: (void (^)(PierPageTipoOportunidadeResponse* output, NSError* error)) handler;


///
///
/// Cadastra status para o tipo oportunidade
/// Esse recurso permite cadastrar status para o tipo oportunidade.
///
/// @param _id C\u00C3\u00B3digo de identifica\u00C3\u00A7\u00C3\u00A3o do tipo oportunidade (id).
/// @param persist persist
/// 
///
/// @return PierStatusOportunidadeResponse*
-(NSNumber*) salvarStatusUsingPOSTWithId: (NSNumber*) _id
    persist: (PierStatusOportunidade*) persist
    completionHandler: (void (^)(PierStatusOportunidadeResponse* output, NSError* error)) handler;


///
///
/// Cadastra as oportunidades
/// Esse recurso permite cadastrar oportunidades.
///
/// @param persist persist
/// 
///
/// @return PierOportunidadeResponse*
-(NSNumber*) salvarUsingPOST11WithPersist: (PierOportunidadePersist*) persist
    completionHandler: (void (^)(PierOportunidadeResponse* output, NSError* error)) handler;


///
///
/// Cadastra tipos oportunidades
/// Esse recurso permite cadastrar tipos oportunidades.
///
/// @param persist persist
/// 
///
/// @return PierTipoOportunidadeResponse*
-(NSNumber*) salvarUsingPOST16WithPersist: (PierTipoOportunidade*) persist
    completionHandler: (void (^)(PierTipoOportunidadeResponse* output, NSError* error)) handler;



@end
