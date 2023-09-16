Browse()
{

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	lr_think_time(19);

	web_url("products", 
		"URL=http://{host_nimbusserver_aos_com_8002}/catalog/api/v1/categories/4/products", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_url("attributes", 
		"URL=http://{host_nimbusserver_aos_com_8002}/catalog/api/v1/categories/attributes", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_url("category-page.html", 
		"URL=http://{host_nimbusserver_aos_com_8000}/app/views/category-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/css/images/category_banner_4.png", "Referer=http://{host_nimbusserver_aos_com_8000}/", ENDITEM, 
		"Url=/css/images/Filter.png", "Referer=http://{host_nimbusserver_aos_com_8000}/", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4200", "Referer=http://{host_nimbusserver_aos_com_8000}/", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4700", "Referer=http://{host_nimbusserver_aos_com_8000}/", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4600", "Referer=http://{host_nimbusserver_aos_com_8000}/", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4300", "Referer=http://{host_nimbusserver_aos_com_8000}/", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4400", "Referer=http://{host_nimbusserver_aos_com_8000}/", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4100", "Referer=http://{host_nimbusserver_aos_com_8000}/", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=4500", "Referer=http://{host_nimbusserver_aos_com_8000}/", ENDITEM, 
		LAST);

	web_url("all_data", 
		"URL=http://{host_nimbusserver_aos_com_8002}/catalog/api/v1/categories/all_data", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_url("25", 
		"URL=http://{host_nimbusserver_aos_com_8002}/catalog/api/v1/products/25", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_url("product-page.html", 
		"URL=http://{host_nimbusserver_aos_com_8000}/app/views/product-page.html", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("55CDD5", 
		"URL=http://{host_nimbusserver_aos_com_8002}/order/api/v1/carts/959169513/product/25/color/55CDD5?quantity=1", 
		"Method=OPTIONS", 
		"Resource=0", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		LAST);

	web_submit_data("55CDD5_2", 
		"Action=http://{host_nimbusserver_aos_com_8002}/order/api/v1/carts/959169513/product/25/color/55CDD5?quantity=1", 
		"Method=POST", 
		"RecContentType=application/json", 
		"Referer=http://{host_nimbusserver_aos_com_8000}/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=sessionId", "Value=23FCF5096BBD7B33A0986E31811F066A", ENDITEM, 
		LAST);

	return 0;
}
