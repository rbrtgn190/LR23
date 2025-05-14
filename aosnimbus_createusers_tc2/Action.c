//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	truclient_step("1", "Navigate to http://nimbusserver.aos.com:8000/", "snapshot=Action_1.inf");
	truclient_step("2", "Click on USER JavascriptLink", "snapshot=Action_2.inf");
	truclient_step("3", "Click on CREATE NEW ACCOUNT JavascriptLink", "snapshot=Action_3.inf");
	truclient_step("4", "Click on Username Label", "snapshot=Action_4.inf");
	truclient_step("5", "Type Username in *UsernameUsername TextBox", "snapshot=Action_5.inf");
	truclient_step("6", "Click on Email Label", "snapshot=Action_6.inf");
	truclient_step("7", "Type Username in *EmailEmail TextBox", "snapshot=Action_7.inf");
	truclient_step("8", "Click on Password Label", "snapshot=Action_8.inf");
	truclient_step("9", "Type ****** in *PasswordPassword PasswordBox", "snapshot=Action_9.inf");
	truclient_step("10", "Click on Confirm password Label", "snapshot=Action_10.inf");
	truclient_step("11", "Type ****** in *Confirm passwordConfirm... PasswordBox", "snapshot=Action_11.inf");
	truclient_step("12", "Click on First Name Label", "snapshot=Action_12.inf");
	truclient_step("13", "Type user in First NameFirst Name TextBox", "snapshot=Action_13.inf");
	truclient_step("14", "Click on Last Name Label", "snapshot=Action_14.inf");
	truclient_step("15", "Type 5user in Last NameLast Name TextBox", "snapshot=Action_15.inf");
	truclient_step("16", "Click on I agree to the www.AdvantageOnlineShopping.com... Checkbox", "snapshot=Action_16.inf");
	truclient_step("17", "Click on REGISTER Button", "snapshot=Action_17.inf");
	truclient_step("19", "Click on USER JavascriptLink", "snapshot=Action_19.inf");
	truclient_step("21", "Click on Sign out Label", "snapshot=Action_21.inf");
	return 0;
}
