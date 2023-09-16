Login()
{

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	lr_think_time(25);

	web_url("FacebookLogo.png", 
		"URL=http://{host_nimbusserver_aos_com_8000}/css/images/FacebookLogo.png", 
		"Resource=1", 
		"RecContentType=image/png", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/css/main.min.css", 
		"Snapshot=t10.inf", 
		LAST);

	lr_think_time(7);

	web_custom_request("AccountLoginRequest", 
		"URL=http://{host_nimbusserver_aos_com_7001}/accountservice/ws/AccountLoginRequest", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
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
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><AccountLoginRequest xmlns=\"com.advantage.online.store.accountservice\"><email></email><loginPassword>Password1</loginPassword><loginUser>user5</loginUser></AccountLoginRequest></soap:Body></soap:Envelope>", 
		LAST);

	web_custom_request("959169513", 
		"URL=http://{host_nimbusserver_aos_com_8002}/order/api/v1/carts/959169513", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		LAST);

	web_set_sockets_option("INITIAL_AUTH", "BASIC");

	web_url("959169513_2", 
		"URL=http://{host_nimbusserver_aos_com_8002}/order/api/v1/carts/959169513", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	return 0;
}
