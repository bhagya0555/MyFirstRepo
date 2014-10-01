//
//  TestAPIConstants.h
//  ApiTest
//
//  Created by Kranthi Kumar on 15/09/14.
//  Copyright (c) 2014 unknown. All rights reserved.
//

#import <Foundation/Foundation.h>

#define BUG_SENSE_API_KEY @"be4a3e4a"

//#define SAKS_SERVER
#define IS_STAG @"Server"
#ifdef IS_STAG
#define API_KEY @"6yvup8rcsvrj4rsz7k39ytcs"
#else
#define API_KEY @"ywk5hydrnxmjbj372basqd4y"
#endif
// Dev URL
#define BaseUrlForGiftImage @"https://www.qa.saks.com"
#define BaseURL @"https://api.saks.com/"
#define MethodURL @"partner/v3/products/variant/%@?api_key="API_KEY
#define ProductDetailURL @"partner/v3/products/%@?api_key="API_KEY
#define MethodURLShopTheLook @"/partner/v3/products/%@?api_key="API_KEY
#define InventoryPreOderUrl @"partner/v3/inventory/product/%@?api_key="API_KEY
#define ProductPriceUrl @"partner/v3/prices/%@?api_key="API_KEY
#define VariantPriceUrl @"partner/v3/prices/variant/%@?api_key="API_KEY
#define CategoryUrl @"https://www.qa.saks.com/apps/leftNavArrayService.jsp?bmForm=saks_endeca_dimval&dimid=399545537&N=%@"
#define FindInStoreUrl @"https://www.saksfifthavenue.com/apps/findinstorelayer.jsp?bmForm=saks_find_in_store_quick_look_service&productCode=%@"
#define FindInStoreDetailUrl @"https://www.saksfifthavenue.com/apps/findinstore.jsp?bmForm=get_stores_with_inventory&productCode=%@&itemQuantity=1&upc_code=%@&zipCode=%@&radius=100&website=true"
#define PreorderVariantUrl @"https://api.saks.com/partner/v3/inventory/variant/%@?api_key="API_KEY
#define DesignersURL @"https://www.saksfifthavenue.com/apps/leftNavArrayService.jsp?bmForm=saks_endeca_dimval&dimId=399545538&website=true"
//modified
#define ProductArrayUrl @"https://www.qa.saks.com/apps/leftNavArrayService.jsp?bmForm=saks_endeca_products_search&dimId=399545537&N=%@&website=true"

#define ProductArrayImageURL @"https://image.s5a.com/is/image/saks/%@?wid=%@"

#define AddToBagUrl @"https://www.qa.saks.com/checkout/checkout.jsp?itemQuantity=%@&sku_id=%@&productCode=%@&bmForm=add_saks_suggests_item_service_product_array"
//https://www.qa.saks.com/checkout/checkout.jsp?bmForm=add_saks_suggests_item_service%20&itemQuantity=1&sku_id=1689949379080764&productCode=0475515521928&website=true

#define AddToBagCartItems   @"https://www.qa.saks.com/checkout/checkout.jsp?bmForm=add_saks_suggests_item_service&itemQuantity=%@&sku_id=%@&productCode=%@&website=true"

#define AddGiftCardUrl @"https://www.qa.saks.com/checkout/checkout.jsp?bmForm=add_gift_card_service&CREDIT_CARD<>cardBrand_cd=&CREDIT_CARD<>cardNum=&CREDIT_CARD<>cardholderName=&CREDIT_CARD<>cardMonth_cd=&CREDIT_CARD<>cardYear_cd=&card_cvNumber=&ACCOUNT<>accountNumber=%@&ACCOUNT<>notificationEmail=%@"

#define CheckGiftCardBalance @"https://api.saks.com/partner/v3/checkout/gift-card"

#define SaveCreditCardUrl @"https://www.qa.saks.com/checkout/checkout.jsp?bmForm=submit_payment_service&CREDIT_CARD<>cardBrand_cd=%@&CREDIT_CARD<>cardNum=%@&CREDIT_CARD<>cardholderName=%@&CREDIT_CARD<>cardMonth_cd=%@&CREDIT_CARD<>cardYear_cd=%@&card_cvNumber=%@&ACCOUNT<>accountNumber=&ACCOUNT<>notificationEmail=&promoCode=&USER_ACCOUNT<>password=&USER_ACCOUNT<>confirmPassword=&USER_ACCOUNT<>ATR_passwordHint="

#define updatePaymentUrl @"https://www.qa.saks.com/checkout/checkout.jsp?bmForm=save_credit_card_service&CREDIT_CARD<>ccd_id=%@&CREDIT_CARD<>cardBrand_cd=&CREDIT_CARD<>cardNum=&CREDIT_CARD<>cardholderName=%@&CREDIT_CARD<>cardMonth_cd=%@&CREDIT_CARD<>cardYear_cd=%@&CREDIT_CARD<>indDefaultCredit=true"

#define RemoveGiftCard @"https://www.qa.saks.com/checkout/checkout.jsp?bmForm=remove_gift_card_service&giftCardId=%@"

#define PromoCodeUrl @"https://www.qa.saks.com/checkout/checkout.jsp?bmForm=add_promo_code_service&CREDIT_CARD<>cardBrand_cd=%@&CREDIT_CARD<>cardNum=%@&CREDIT_CARD<>cardholderName=%@&CREDIT_CARD<>cardMonth_cd=%@&CREDIT_CARD<>cardYear_cd=%@&card_cvNumber=%@&promoCode=%@"

#define ViewItemsInBagUrl @"https://www.qa.saks.com/checkout/SaksBag.jsp?bmForm=initialize_saks_bag_service&website=true"

#define RemoveItemFromBagUrl @"https://www.qa.saks.com/checkout/checkout.jsp?bmForm=remove_cart_item_service&cartItemId=%@&website=true"

#define SaveForLaterUrl @"https://www.qa.saks.com/checkout/checkout.jsp?bmForm=save_for_later_service&cartItemId=%@&website=true"

#define MoveFromSavedToSaksBag @"https://www.qa.saks.com/checkout/checkout.jsp?bmForm=save_for_later_add_to_bag_service&sku_id=%@&productCode=%@&itemQuantity=%@&website=true"

#define RemoveFromSaveForLater @"https://www.qa.saks.com/checkout/checkout.jsp?bmForm=save_for_later_remove_service&sku_id=%@&website=true"

#define EditItemsInSaksBagUrl @"https://www.qa.saks.com/checkout/checkout.jsp?bmForm=update_cart_item_quantity_service&cartItemId=%@&itemQuantity=%@&website=true"

//SEARCH
#define SearchByKeywordURL @"https://www.qa.saks.com/apps/leftNavArrayService.jsp?bmForm=saks_endeca_products_search&Ntt=%@"
#define PredictiveSearchURL @"https://www.qa.saks.com/search/lookahead_json.jsp?website=true&term=%@"//modified

//waitlistable upc
#define WaitlistableUPCUrl @"https://www.qa.saks.com/apps/waitlistable.jsp?bmForm=get_waitlistable_upcs_service&productCode=%@"

//Add to Waitlist service url
#define AddToWaitListURL @"https://www.qa.saks.com/main/ProductDetail.jsp?bmForm=waitlist_add_to_service&WAITLIST_EMAIL=%@&SELECTED_SKUS=%@"

#define SortRefineUrl @"https://www.qa.saks.com/apps/leftNavArrayService.jsp?bmForm=saks_endeca_products_search"

#define GiftOptions @"https://www.qa.saks.com/checkout/checkout.jsp?bmForm=get_option_list_service&listName=giftWrapTypes"

#define GiftOptionCaptured @"https://www.saksfifthavenue.com/checkout/checkout.jsp?bmForm=update_order_item_gifting_service&orderItemId=%@&giftingName=%@&giftingType=%@&giftingMsg1=%@&giftingMsg2=%@&giftingMsg3=%@&giftingMsg4=%@&appliedOrNew=%@&appliedGifting=%@"

#define GiftOptionApplyForFirstTym @"https://www.qa.saks.com/checkout/checkout.jsp?bmForm=update_order_item_gifting_service&giftingName=%@&giftingMsg1=%@&giftingMsg2=%@&giftingMsg3=%@&giftingMsg4=%@&giftingType=%@&orderItemId=%@"

#define PromoCode @"https://www.qa.saks.com/checkout/checkout.jsp?bmForm=add_promo_code_service&CREDIT_CARD%3C%3EcardBrand_cd=VISA&CREDIT_CARD%3C%3EcardNum=4111111111111111&CREDIT_CARD%3C%3EcardholderName=Jeevan&CREDIT_CARD%3C%3EcardMonth_cd=5&CREDIT_CARD%3C%3EcardYear_cd=2017&card_cvNumber=123&promoCode=HOLIDAY7"

#define Bag_Count @"bag_count"
#define RemoveGiftOption @"https://www.qa.saks.com/checkout/checkout.jsp?bmForm=remove_order_item_gifting_service&orderItemId=%@"




//shipping address url
#define ShippingAddAddressUrl @"https://www.qa.saks.com/checkout/checkout.jsp?bmForm=add_address_and_continue_service&shiptomult=%d&SHIP_TO_ADDRESS<>indGift=0&SHIP_TO_ADDRESS<>firstName=%@&SHIP_TO_ADDRESS<>middleName=&SHIP_TO_ADDRESS<>lastName=%@&SHIP_TO_ADDRESS<>address3=&SHIP_TO_ADDRESS<>address1=%@&SHIP_TO_ADDRESS<>address2=%@&SHIP_TO_ADDRESS<>city=%@&SHIP_TO_ADDRESS<>state_cd=%@&SHIP_TO_ADDRESS<>postal=%@&SHIP_TO_ADDRESS<>phone=%@&setAsBillAddress=%d&count=1&SHIP_TO_ADDRESS<>uad_id=%@"

#define ShippingAddressValidationURL @"https://www.qa.saks.com/checkout/checkout.jsp?bmForm=validate_ship_address_service&shiptomult=%d&SHIP_TO_ADDRESS<>indGift=0&SHIP_TO_ADDRESS<>firstName=%@&SHIP_TO_ADDRESS<>middleName=&SHIP_TO_ADDRESS<>lastName=%@&SHIP_TO_ADDRESS<>address3=%@&SHIP_TO_ADDRESS<>address1=%@&SHIP_TO_ADDRESS<>address2=%@&SHIP_TO_ADDRESS<>city=%@&SHIP_TO_ADDRESS<>state_cd=%@&SHIP_TO_ADDRESS<>postal=%@&SHIP_TO_ADDRESS<>phone=%@&setAsBillAddress=%d&count=1&SHIP_TO_ADDRESS<>uad_id=%@"

#define SignatureRequiredUrl @"https://www.qa.saks.com/checkout/checkout.jsp?bmForm=update_order_item_service&order ItemId=%@&signatureRequired=%d&website=true"

#define SetShippingMethodUrl @"https://www.saksfifthavenue.com/checkout/checkout.jsp?bmForm=update_cart_summary_service&zipCode=%@&selectedMethodId=%@"

#define EditShippingAddressUrl @"https://www.qa.saks.com/checkout/checkout.jsp?bmForm=change_shipping_address_service&SHIP_TO_ADDRESS<>indGift=3&SHIP_TO_ADDRESS<>firstName=%@&SHIP_TO_ADDRESS<>middleName=&SHIP_TO_ADDRESS<>lastName=%@&SHIP_TO_ADDRESS<>address3=%@&SHIP_TO_ADDRESS<>address1=%@&SHIP_TO_ADDRESS<>address2=&SHIP_TO_ADDRESS<>city=%@&SHIP_TO_ADDRESS<>state_cd=%@&SHIP_TO_ADDRESS<>postal=%@&SHIP_TO_ADDRESS<>phone=%@&SHIP_TO_ADDRESS<>indDefaultShipTo=true&setAsBillAddress=%d&originalAddressId=%@&count=1&SHIP_TO_ADDRESS<>uad_id=%@"

//shipping segue
#define SHIPPING_SEGUE @"ShippingSegue"
#define ITEM_OVERVIEW_SEGUE @"ItemOverview"

//billing address url
#define BillingAddressUrl @"https://www.qa.saks.com/checkout/checkout.jsp?bmForm=save_billing_address_service&BILL_TO_ADDRESS<>uad_id=%@&BILL_TO_ADDRESS<>firstName=%@&BILL_TO_ADDRESS<>middleName=%@&BILL_TO_ADDRESS<>lastName=%@&BILL_TO_ADDRESS<>address3=%@&BILL_TO_ADDRESS<>address1=%@&BILL_TO_ADDRESS<>address2=%@&BILL_TO_ADDRESS<>city=%@&BILL_TO_ADDRESS<>state_cd=%@&BILL_TO_ADDRESS<>stateName=%@&BILL_TO_ADDRESS<>postal=%@&BILL_TO_ADDRESS<>country_cd=%@&BILL_TO_ADDRESS<>phone=%@&BILL_TO_ADDRESS<>indDefaultBillTo=true&setAsShipAddress=%d&website=true"


#define BillingAddressValidationURL @"https://www.qa.saks.com/checkout/checkout.jsp?bmForm=validate_bill_address_service&BILL_TO_ADDRESS<>indGift=0&BILL_TO_ADDRESS<>firstName=%@&BILL_TO_ADDRESS<>middleName=&BILL_TO_ADDRESS<>lastName=%@kalyan&BILL_TO_ADDRESS<>address3=%@&BILL_TO_ADDRESS<>address1=%@&BILL_TO_ADDRESS<>address2=%@&BILL_TO_ADDRESS<>city=%@&BILL_TO_ADDRESS<>state_cd=%@&BILL_TO_ADDRESS<>postal=%@&BILL_TO_ADDRESS<>stateName=%@&BILL_TO_ADDRESS<>country_cd=%@&BILL_TO_ADDRESS<>phone=%@&BILL_TO_ADDRESS<>indDefaultBillTo=true&setAsShipAddress=%d&count=1&BILL_TO_ADDRESS<>uad_id=%@"

#define EditBillingAddressUrl @"https://www.saksfifthavenue.com/checkout/checkout.jsp?bmForm=save_billing_address_service&BIL L_TO_ADDRESS<>uad_id=&BILL_TO_ADDRESS<>firstName=&BILL_T O_ADDRESS<>middleName=&BILL_TO_ADDRESS<>lastName=&BILL _TO_ADDRESS<>address3=&BILL_TO_ADDRESS<>address1=&BILL_TO _ADDRESS<>address2=&BILL_TO_ADDRESS<>city=&BILL_TO_ADDRESS<>state_cd=&BILL_TO_ADDRESS<>stateName=&BILL_TO_ADDRESS<>postal={ZIP}&BILL_TO_ ADDRESS<>country_cd=&BILL_TO_ADDRESS<>phone=&BILL_TO_ADDRESS <>indDefaultBillTo=true&setAsShipAddress=false&website=true"

//countries list url
#define CountriesListUrl @"https://www.qa.saks.com/checkout/checkout.jsp?bmForm=get_option_list_service&listName=countries"


//checkout as guest URL
#define CheckoutAsGuestUrl @"https://www.qa.saks.com/checkout/checkout.jsp?bmForm=login_as_guest_user&LOGIN<>userid=%@&website=true"
//view order Summary

#define OrderSummary @"https://api.saks.com/partner/v3/orders/:order-num=%@?api_key="API_KEY

//create Account
#define CreateAccount @"https://www.qa.saks.com/checkout/checkout.jsp?bmForm=submit_payment_service&CREDIT_CARD<>ccd_id=%@&CREDIT_CARD<>cardholderName=%@&CREDIT_CARD<>cardMonth_cd=%d&CREDIT_CARD<>cardYear_cd=%d&CREDIT_CARD<>indDefaultCredit=true&ACCOUNT<>accountNumber=&ACCOUNT<>notificationEmail=&promoCode=&USER_ACCOUNT<>password=%@&USER_ACCOUNT<>confirmPassword=%@&USER_ACCOUNT<>ATR_passwordHint="

//
//Production URL
/*
 #define BaseURL @"https://api.saks.com/"
 #define MethodURL @"products/variant/%@?api_key="API_KEY
 #define MethodURLShopTheLook @"products/%@?api_key="API_KEY
 #define InventoryPreOderUrl @"inventory/product/%@?api_key="API_KEY
 #define ProductPriceUrl @"prices/%@?api_key="API_KEY
 #define VariantPriceUrl @"prices/variant/%@?api_key="API_KEY
 #define CategoryUrl @"https://www.saksfifthavenue.com/apps/leftNavArrayService.jsp?bmForm=saks_endeca_dimval&dimid=399545537&N=%@"
 #define FindInStoreUrl @"https://www.saksfifthavenue.com/apps/findinstorelayer.jsp?bmForm=saks_find_in_store_quick_look_service&productCode=%@"
 #define FindInStoreDetailUrl @"https://www.saksfifthavenue.com/apps/findinstore.jsp?bmForm=get_stores_with_inventory&productCode=%@&itemQuantity=1&upc_code=%@&zipCode=%@&radius=100&website=false"
 #define PreorderVariantUrl @"https://api.saks.com/v3/inventory/variant/%@?api_key="API_KEY
 #define ProductArrayUrl @"https://www.saksfifthavenue.com/apps/leftNavArrayService.jsp?bmForm=saks_endeca_products&dimId=399545537&N=%@&website=true"*/

