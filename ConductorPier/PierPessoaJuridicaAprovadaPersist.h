#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "PierEnderecoAprovadoPersistValue_.h"
#import "PierReferenciaComercialAprovadoPersistValue_.h"
#import "PierSocioAprovadoPersistValue_.h"
#import "PierTelefonePessoaAprovadaPersistValue_.h"


@protocol PierPessoaJuridicaAprovadaPersist
@end

@interface PierPessoaJuridicaAprovadaPersist : PierObject

/* {{{pessoa_juridica_aprovada_persist_razao_social_value}}} 
 */
@property(nonatomic) NSString* razaoSocial;
/* {{{pessoa_juridica_aprovada_persist_nome_fantasia_value}}} [optional]
 */
@property(nonatomic) NSString* nomeFantasia;
/* {{{pessoa_juridica_aprovada_persist_cnpj_value}}} 
 */
@property(nonatomic) NSString* cnpj;
/* {{{pessoa_juridica_aprovada_persist_inscricao_estadual_value}}} [optional]
 */
@property(nonatomic) NSString* inscricaoEstadual;
/* {{{pessoa_juridica_aprovada_persist_data_abertura_empresa_value}}} 
 */
@property(nonatomic) NSString* dataAberturaEmpresa;
/* {{{pessoa_juridica_aprovada_persist_id_origem_comercial_value}}} 
 */
@property(nonatomic) NSNumber* idOrigemComercial;
/* {{{pessoa_juridica_aprovada_persist_id_produto_value}}} 
 */
@property(nonatomic) NSNumber* idProduto;
/* {{{pessoa_juridica_aprovada_persist_numero_banco_value}}} [optional]
 */
@property(nonatomic) NSNumber* numeroBanco;
/* {{{pessoa_juridica_aprovada_persist_numero_agencia_value}}} [optional]
 */
@property(nonatomic) NSNumber* numeroAgencia;
/* {{{pessoa_juridica_aprovada_persist_numero_conta_corrente_value}}} [optional]
 */
@property(nonatomic) NSString* numeroContaCorrente;
/* {{{pessoa_juridica_aprovada_persist_email_value}}} [optional]
 */
@property(nonatomic) NSString* email;
/* {{{pessoa_juridica_aprovada_persist_dia_vencimento_value}}} 
 */
@property(nonatomic) NSNumber* diaVencimento;
/* {{{pessoa_juridica_aprovada_persist_nome_impresso_value}}} [optional]
 */
@property(nonatomic) NSString* nomeImpresso;
/* {{{pessoa_juridica_aprovada_persist_valor_renda_value}}} [optional]
 */
@property(nonatomic) NSNumber* valorRenda;
/* {{{pessoa_juridica_aprovada_persist_canal_entrada_value}}} [optional]
 */
@property(nonatomic) NSString* canalEntrada;
/* {{{pessoa_juridica_aprovada_persist_valor_pontuacao_value}}} [optional]
 */
@property(nonatomic) NSNumber* valorPontuacao;
/* {{{pessoa_juridica_aprovada_persist_telefones_value}}} [optional]
 */
@property(nonatomic) NSArray<PierTelefonePessoaAprovadaPersistValue_>* telefones;
/* {{{pessoa_juridica_aprovada_persist_enderecos_value}}} 
 */
@property(nonatomic) NSArray<PierEnderecoAprovadoPersistValue_>* enderecos;
/* {{{pessoa_juridica_aprovada_persist_socios_value}}} [optional]
 */
@property(nonatomic) NSArray<PierSocioAprovadoPersistValue_>* socios;
/* {{{pessoa_juridica_aprovada_persist_referencias_comerciais_value}}} [optional]
 */
@property(nonatomic) NSArray<PierReferenciaComercialAprovadoPersistValue_>* referenciasComerciais;
/* {{{pessoa_juridica_aprovada_persist_limite_global_value}}} 
 */
@property(nonatomic) NSNumber* limiteGlobal;
/* {{{pessoa_juridica_aprovada_persist_limite_maximo_value}}} 
 */
@property(nonatomic) NSNumber* limiteMaximo;
/* {{{pessoa_juridica_aprovada_persist_limite_parcelas_value}}} 
 */
@property(nonatomic) NSNumber* limiteParcelas;

@end
