Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_cookie("_redmine_session=UmhPUkNLa283N3FmS1FZNU83dkk2M290TlNoT3ZwaFc4aWhJVzZEWXVaMUVJbVdMQkFCY3pNU3lYMHpIdExISmNOWUJ2SEZoQXJINXE5QkNoYW8zWFptMUJjaEV4U1Rnd015UStQVDJKWU43TlBpNnB4UldWVFNwNVJPdXhTWXdLYjF1VmFjczQrMkp0b1AyWGQwMnJzaWlxMGwvdDc3WStuS0pjVUtweTZjT1VnTzQ2ZUs0VVdWQUh0clNEYWdkLS1XK3VhclVDN1VQcGtWcWE1by9VcHRnPT0%3D--421e282a291955ee68a5580240f41f5ae5a49727; DOMAIN=www.redmine.org");

	web_add_cookie("_redmine_session=Q1JBZHFuT0I2WnJPWUFlZVBhZ2NsRzFDM0xKN2cvbnNKYUNHNTJPYnZGOGt5cTViclpCWDlnS3JqZy9aQnZCY0tsUUNjeXVXOUFDUXEvL1haaHVzTDJ0M1c2Wk1PeWJOMCtwUzlkdm1OUnRnaDM4Ulk1UE1aM2VTaEpzbktPb2dJUlJuZGNQZ0RHZ0FXZkFZWDhnY0lIKzZNSDRQTFZVT3FJWmZPT0pmemVzZWRvWDRXVW9MMTMrM213VDVySm1GLS1PSWY5QWdoNCtEQXZuSWlIaklmbmJ3PT0%3D--27b96f963128f64a13a621f695bc8ab001e762e5; DOMAIN=www.redmine.org");

	web_add_auto_header("Accept-Language", 
		"en-US,en;q=0.9");

	web_url("www.redmine.org", 
		"URL=https://www.redmine.org/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/images/3_bullets.png", "Referer=https://www.redmine.org/stylesheets/application.css?1679302129", ENDITEM, 
		"Url=/images/arrow_left.png", "Referer=https://www.redmine.org/stylesheets/application.css?1679302129", ENDITEM, 
		"Url=/images/arrow_down.png", "Referer=https://www.redmine.org/stylesheets/application.css?1679302129", ENDITEM, 
		"Url=/images/arrow_right.png", "Referer=https://www.redmine.org/stylesheets/application.css?1679302129", ENDITEM, 
		"Url=/images/external.png", "Referer=https://www.redmine.org/stylesheets/application.css?1679302129", ENDITEM, 
		LAST);

	web_add_cookie("__gads=ID=dbbe48d5bd38c2dd:T=1721240301:RT=1721240301:S=ALNI_MbjlpK9EkBi7_OiPvMDIMMWDWpAYw; DOMAIN=www.redmine.org");

	web_add_cookie("__gpi=UID=00000e864e9e19f6:T=1721240301:RT=1721240301:S=ALNI_MZlOu_foQcsZrx7c8Hc6eLFjpWJQQ; DOMAIN=www.redmine.org");

	web_add_cookie("__eoi=ID=88210d99b3fccaaf:T=1721240301:RT=1721240301:S=AA-AfjY0OTFy-_Q_Hlw6062k3oX0; DOMAIN=www.redmine.org");

	web_set_sockets_option("TLS_SNI", "0");

	web_link("Sign in", 
		"Text=Sign in", 
		"Snapshot=t2.inf", 
		LAST);

	web_submit_data("login", 
		"Action=https://www.redmine.org/login", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://www.redmine.org/login", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=utf8", "Value=✓", ENDITEM, 
		"Name=authenticity_token", "Value=z6KfGECW1a03kQFldocbJ4u0Xog8UBMRzwU5VDZRiDbRKNGJKUaOzZfqdUqjjn2S7ioeYeNMNpK7tsaFLYoejg==", ENDITEM, 
		"Name=back_url", "Value=/", ENDITEM, 
		"Name=username", "Value=vani12", ENDITEM, 
		"Name=password", "Value=Shivani@12101991", ENDITEM, 
		"Name=login", "Value=Login", ENDITEM, 
		LAST);

	web_submit_data("logout", 
		"Action=https://www.redmine.org/logout", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=https://www.redmine.org/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=_method", "Value=post", ENDITEM, 
		"Name=authenticity_token", "Value=rhKnuowPgdfH2ukW9yiLRpnHHPMMSBXGr52vB/sTbgiHlVIdZXT4yhjq/V6YHMXqxfo1KXPzVAef3GpWiz97wQ==", ENDITEM, 
		LAST);

	return 0;
}