//
//  TestApiTVC.m
//  ApiTest
//
//  Created by Kranthi Kumar on 15/09/14.
//  Copyright (c) 2014 unknown. All rights reserved.
//

#import "TestApiTVC.h"
#import "TextViewController.h"
#import "TestAPIConstants.h"
#import <Foundation/Foundation.h>

@interface TestApiTVC ()
@property(strong,nonatomic)NSURL* URL;

@end

@implementation TestApiTVC

-(void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender{
    NSURL* apiURL=nil;
    NSIndexPath* indexPath=[self.tableView indexPathForCell:sender];
    TextViewController* childVC=(TextViewController*)segue.destinationViewController;
    NSString* contentString=[[NSString alloc]init];
    NSString* categoryId=@"306418049";
    NSString* productID=@"0473935680317";
    NSString* searchString=@"shoes";
    NSData* data;
    switch (indexPath.row) {
        case 0:{
            apiURL=[NSURL URLWithString:[NSString stringWithFormat:CategoryUrl,categoryId]];
        }
            break;
        case 1:
            apiURL=[NSURL URLWithString:[NSString stringWithFormat:ProductArrayUrl,categoryId]];
            break;
        case 2:{
            NSString* local=[NSString stringWithFormat:ProductDetailURL,productID];
            apiURL=[NSURL URLWithString:[NSString stringWithFormat:@"%@%@",BaseURL,local]];
        }
            break;
        case 3:
            apiURL=[NSURL URLWithString:DesignersURL];
            break;
        case 4:{
            NSString* local=[NSString stringWithFormat:InventoryPreOderUrl,productID];
            apiURL=[NSURL URLWithString:[NSString stringWithFormat:@"%@%@",BaseURL,local]];
        }
            break;
        case 5:
            apiURL=[NSURL URLWithString:[NSString stringWithFormat:PredictiveSearchURL,searchString]];
            break;
        case 6:
            apiURL=[NSURL URLWithString:[NSString stringWithFormat:SearchByKeywordURL,searchString]];//hardcoded
            break;
        case 7:
            apiURL=[NSURL URLWithString:[NSString stringWithFormat:WaitlistableUPCUrl,productID]];//hardcoded
            break;
        case 8:{
            NSString* categoryId=@"306556885";//hardcoded
            NSString* sortParameter=@"saleprice";//hardcoded
            NSString* refineParamenter=@"+399545787+1536";//hardcoded
            apiURL=[NSURL URLWithString:[NSString stringWithFormat:@"%@&Ns=P_%@&N=%@%@",SortRefineUrl,sortParameter,categoryId,refineParamenter]];//hardcoded
        }
            break;
        case 9:
            apiURL = [NSURL URLWithString:GiftOptions];//hardcoded
            break;
        case 10:
            apiURL =[NSURL URLWithString:@"https://www.qa.saks.com/checkout/checkout.jsp?bmForm=validate_bill_address_service&BILL_TO_ADDRESS%3C%3EindGift=0&BILL_TO_ADDRESS%3C%3EfirstName=jeeva&BILL_TO_ADDRESS%3C%3EmiddleName=&BILL_TO_ADDRESS%3C%3ElastName=kalyan&BILL_TO_ADDRESS%3C%3Eaddress3=&BILL_TO_ADDRESS%3C%3Eaddress1=123%20main%20street&BILL_TO_ADDRESS%3C%3Eaddress2=&BILL_TO_ADDRESS%3C%3Ecity=jersey%20city&BILL_TO_ADDRESS%3C%3Estate_cd=NJ&BILL_TO_ADDRESS%3C%3Epostal=07305&BILL_TO_ADDRESS%3C%3EstateName=&BILL_TO_ADDRESS%3C%3Ecountry_cd=US&BILL_TO_ADDRESS%3C%3Ephone=3126196959&BILL_TO_ADDRESS%3C%3EindDefaultBillTo=true&setAsShipAddress=false&count=1&BILL_TO_ADDRESS%3C%3Euad_id=56297194367909504"];
            //fully hardcoded
            break;
        case 11:
             apiURL = [NSURL URLWithString:@"https://www.qa.saks.com/account/forgotpassword.jsp?bmForm=email_reset_password&bmFormID=ku8sMU5&bmUID=ku8sMU6&bmIsForm=true&bmPrevTemplate=%2Faccount%2Fforgotpassword.jsp&bmText=LOGIN%3C%3Euserid&LOGIN%3C%3Euseßrid=monendra80%40gmail.com"];//fullyhardcoded
            break;
        default:
            break;
    }
    data=[NSData dataWithContentsOfURL:apiURL];//hardcoded
    NSError *error=nil;
    NSDictionary *json = [NSJSONSerialization JSONObjectWithData:data options: NSJSONReadingMutableContainers error: &error];
    contentString=[NSString stringWithFormat:@"%@",json];
    childVC.content=contentString;
}
//https://api.saks.com/partner/v3/inventory/variant/401880406317?api_key=6yvup8rcsvrj4rsz7k39ytcs
@end

