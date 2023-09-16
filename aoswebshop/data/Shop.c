Shop()
{

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	lr_think_time(35);

	web_url("959169513_3", 
		"URL=http://{host_nimbusserver_aos_com_8002}/order/api/v1/carts/959169513", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_url("shoppingCart.html", 
		"URL=http://{host_nimbusserver_aos_com_8000}/app/views/shoppingCart.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("GetAccountByIdRequest", 
		"URL=http://{host_nimbusserver_aos_com_7001}/accountservice/ws/GetAccountByIdRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("GetAccountByIdRequest_2", 
		"URL=http://{host_nimbusserver_aos_com_7001}/accountservice/ws/GetAccountByIdRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>959169513</accountId><base64Token>Basic dXNlcjU6UGFzc3dvcmQx</base64Token></GetAccountByIdRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_custom_request("GetAccountByIdNewRequest", 
		"URL=http://{host_nimbusserver_aos_com_7001}/accountservice/ws/GetAccountByIdNewRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("GetAccountByIdNewRequest_2", 
		"URL=http://{host_nimbusserver_aos_com_7001}/accountservice/ws/GetAccountByIdNewRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountByIdNewRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>959169513</accountId><base64Token>Basic dXNlcjU6UGFzc3dvcmQx</base64Token></GetAccountByIdNewRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_url("959169513_4", 
		"URL=http://{host_nimbusserver_aos_com_8002}/order/api/v1/carts/959169513", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("shippingcost", 
		"URL=http://{host_nimbusserver_aos_com_8002}/order/api/v1/shippingcost/", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("shippingcost_2", 
		"URL=http://{host_nimbusserver_aos_com_8002}/order/api/v1/shippingcost/", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=UTF-8", 
		"Body={\"seaddress\":{\"addressLine1\":\"somewhere\",\"addressLine2\":\"\",\"city\":\"Paris\",\"country\":\"au\",\"postalCode\":75000,\"state\":\"state\"},\"secustomerName\":\"User One\",\"secustomerPhone\":123456,\"senumberOfProducts\":1,\"setransactionType\":\"SHIPPING_COST\",\"sessionId\":\"23FCF5096BBD7B33A0986E31811F066A\"}", 
		LAST);

	web_custom_request("GetAccountPaymentPreferencesRequest", 
		"URL=http://{host_nimbusserver_aos_com_7001}/accountservice/ws/GetAccountPaymentPreferencesRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("GetAccountPaymentPreferencesRequest_2", 
		"URL=http://{host_nimbusserver_aos_com_7001}/accountservice/ws/GetAccountPaymentPreferencesRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountPaymentPreferencesRequest xmlns=\"com.advantage.online.store.accountservice\"><accountId>959169513</accountId><base64Token>Basic dXNlcjU6UGFzc3dvcmQx</base64Token></GetAccountPaymentPreferencesRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_url("orderPayment-page.html", 
		"URL=http://{host_nimbusserver_aos_com_8000}/app/order/views/orderPayment-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/css/images/Bell.png", "Referer=http://{host_nimbusserver_aos_com_8000}/css/main.min.css", ENDITEM, 
		LAST);

	web_custom_request("GetCountriesRequest", 
		"URL=http://{host_nimbusserver_aos_com_7001}/accountservice/ws/GetCountriesRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=http://{host_nimbusserver_aos_com_8000}/css/images/User.jpg", "Referer=http://{host_nimbusserver_aos_com_8000}/", ENDITEM, 
		"Url=http://{host_nimbusserver_aos_com_8000}/css/images/Check.png", "Referer=http://{host_nimbusserver_aos_com_8000}/css/main.min.css", ENDITEM, 
		"Url=http://{host_nimbusserver_aos_com_8000}/css/images/Shipex.png", "Referer=http://{host_nimbusserver_aos_com_8000}/", ENDITEM, 
		LAST);

	web_custom_request("GetCountriesRequest_2", 
		"URL=http://{host_nimbusserver_aos_com_7001}/accountservice/ws/GetCountriesRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetCountriesRequest xmlns=\"com.advantage.online.store.accountservice\"></GetCountriesRequest></soap:Body></soap:Envelope>", 
		LAST);

	lr_think_time(5);

	web_custom_request("UpdateSafePayMethodRequest", 
		"URL=http://{host_nimbusserver_aos_com_7001}/accountservice/ws/UpdateSafePayMethodRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("959169513_5", 
		"URL=http://{host_nimbusserver_aos_com_8002}/order/api/v1/orders/users/959169513", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("UpdateSafePayMethodRequest_2", 
		"URL=http://{host_nimbusserver_aos_com_7001}/accountservice/ws/UpdateSafePayMethodRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t39.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><UpdateSafePayMethodRequest xmlns=\"com.advantage.online.store.accountservice\"><userId>959169513</userId><safePayUsername>admin</safePayUsername><safePayPassword>399a69dfc502</safePayPassword><referenceId>1234567890</referenceId><base64Token>Basic dXNlcjU6UGFzc3dvcmQx"
		"</base64Token></UpdateSafePayMethodRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_custom_request("959169513_6", 
		"URL=http://{host_nimbusserver_aos_com_8002}/order/api/v1/orders/users/959169513", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t40.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"orderPaymentInformation\":{\"Transaction_AccountNumber\":\"843200971\",\"Transaction_Currency\":\"USD\",\"Transaction_CustomerPhone\":123456,\"Transaction_MasterCredit_CVVNumber\":\"\",\"Transaction_MasterCredit_CardNumber\":\"4886\",\"Transaction_MasterCredit_CustomerName\":\"\",\"Transaction_MasterCredit_ExpirationDate\":\"122027\",\"Transaction_PaymentMethod\":\"SafePay\",\"Transaction_ReferenceNumber\":0,\"Transaction_SafePay_Password\":\"399a69dfc5021af66674f0016bb47ac351294745\",\""
		"Transaction_SafePay_UserName\":\"admin\",\"Transaction_TransactionDate\":\"16092023\",\"Transaction_Type\":\"PAYMENT\"},\"orderShippingInformation\":{\"Shipping_Address_Address\":\"somewhere\",\"Shipping_Address_City\":\"Paris\",\"Shipping_Address_CountryCode\":4,\"Shipping_Address_CustomerName\":\"User One\",\"Shipping_Address_CustomerPhone\":123456,\"Shipping_Address_PostalCode\":75000,\"Shipping_Address_State\":\"state\",\"Shipping_Cost\":129,\"Shipping_NumberOfProducts\":1,\""
		"Shipping_TrackingNumber\":0},\"purchasedProducts\":[{\"hexColor\":\"55CDD5\",\"productId\":25,\"quantity\":1,\"hasWarranty\":false}]}", 
		LAST);

	web_custom_request("959169513_7", 
		"URL=http://{host_nimbusserver_aos_com_8002}/order/api/v1/carts/959169513", 
		"Method=DELETE", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t41.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
