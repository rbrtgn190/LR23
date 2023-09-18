Login()
{

	lr_start_transaction("2_Login");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	//lr_think_time(5);

	web_url("FacebookLogo.png", 
		"URL=http://{host_nimbusserver_aos_com_8000}/css/images/FacebookLogo.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/css/main.min.css", 
		"Snapshot=t10.inf", 
		LAST);

	//lr_think_time(7);

	web_custom_request("AccountLoginRequest", 
		"URL=http://{host_nimbusserver_aos_com_7001}/accountservice/ws/AccountLoginRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_reg_find("Fail=Found",
		"Search=Body",
		"Text=ns2:reason>Incorrect user name or password.",
		LAST);

/*Correlation comment - Do not change!  Original value='959169513' Name ='userId' Type ='Manual'*/
	web_reg_save_param_xpath(
		"ParamName=userId",
		"QueryString=/SOAP-ENV:Envelope/SOAP-ENV:Body/ns2:AccountLoginResponse/ns2:StatusMessage/ns2:userId/text()",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);

	web_custom_request("AccountLoginRequest_2", 
		"URL=http://{host_nimbusserver_aos_com_7001}/accountservice/ws/AccountLoginRequest", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email></email><loginPassword>Password1</loginPassword><loginUser>{userName}</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_custom_request("959169513",
		"URL=http://{host_nimbusserver_aos_com_8002}/order/api/v1/carts/{userId}",
		"Method=OPTIONS",
		"Resource=0",
		"Referer=http://{host_nimbusserver_aos_com_8000}/",
		"Snapshot=t13.inf",
		"Mode=HTML",
		LAST);

	web_set_sockets_option("INITIAL_AUTH", "BASIC");

/*Correlation comment: Automatic rules - Do not change!  
Original value='23FCF5096BBD7B33A0986E31811F066A' 
Name ='sessionId' 
Type ='Rule' 
AppName ='AOS' 
RuleName ='jsessionID'*/
	web_reg_save_param_regexp(
		"ParamName=sessionId",
		"RegExp=JSESSIONID=(.*?);",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Cookies",
		LAST);

	web_url("959169513_2",
		"URL=http://{host_nimbusserver_aos_com_8002}/order/api/v1/carts/{userId}",
		"Resource=0",
		"RecContentType=application/json",
		"Referer=http://{host_nimbusserver_aos_com_8000}/",
		"Snapshot=t14.inf",
		"Mode=HTML",
		LAST);

//	lr_output_message("Login : sessionId = %s", lr_eval_string("{sessionId}"));

	lr_end_transaction("2_Login", LR_AUTO);

	lr_think_time(10);
	
	return 0;
}
