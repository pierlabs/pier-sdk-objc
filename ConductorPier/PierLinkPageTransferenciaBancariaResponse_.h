#import <Foundation/Foundation.h>
#import "PierObject.h"

/**
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen
 * Do not edit the class manually.
 */

#import "PierLinkTransferenciaBancariaResponse_.h"


@protocol PierLinkPageTransferenciaBancariaResponse_
@end

@interface PierLinkPageTransferenciaBancariaResponse_ : PierObject


@property(nonatomic) NSArray<PierLinkTransferenciaBancariaResponse_>* content;

@property(nonatomic) NSNumber* first;

@property(nonatomic) NSNumber* firstPage;

@property(nonatomic) NSNumber* hasContent;

@property(nonatomic) NSNumber* hasNextPage;

@property(nonatomic) NSNumber* hasPreviousPage;

@property(nonatomic) NSNumber* last;

@property(nonatomic) NSNumber* nextPage;

@property(nonatomic) NSNumber* number;

@property(nonatomic) NSNumber* numberOfElements;

@property(nonatomic) NSNumber* previousPage;

@property(nonatomic) NSNumber* size;

@property(nonatomic) NSNumber* totalElements;

@property(nonatomic) NSNumber* totalPages;

@end
