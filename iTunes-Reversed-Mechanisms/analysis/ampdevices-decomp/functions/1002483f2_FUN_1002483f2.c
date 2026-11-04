// name: FUN_1002483f2
// address: 1002483f2

bool FUN_1002483f2(undefined8 param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = FUN_100170633(param_1,&cf_com_apple_PurpleRestore);
  bVar2 = true;
  if (cVar1 == '\0') {
    cVar1 = FUN_100170633(param_1,&cf_com_apple_PurpleRestore4);
    if (cVar1 == '\0') {
      cVar1 = FUN_100170633(param_1,&cf_com_apple_configurator);
      if (cVar1 == '\0') {
        cVar1 = FUN_100170633(param_1,&cf_com_apple_configurationutility);
        if (cVar1 == '\0') {
          cVar1 = FUN_100170633(param_1,&cf_com_apple_configurator_ui);
          if (cVar1 == '\0') {
            cVar1 = FUN_100170633(param_1,&cf_com_apple_configurationutility_xpc_DeviceService);
            if (cVar1 == '\0') {
              cVar1 = FUN_100173f7c(param_1,&cf_com_apple_configurator_xpc_);
              bVar2 = cVar1 != '\0';
            }
          }
        }
      }
    }
  }
  return bVar2;
}

