// name: FUN_1001b61c8
// address: 1001b61c8

undefined8 FUN_1001b61c8(undefined8 param_1,long param_2)

{
  char cVar1;
  undefined1 local_30 [16];
  
  cVar1 = FUN_1001b8428(param_2 + 0x18);
  if (cVar1 == '\0') {
    FUN_1001b7b04(local_30,"ITNotificationCenter.");
    FUN_1001b7a5c(param_1,local_30);
    FUN_1001bbcfe(param_1,param_2 + 0x18);
    FUN_1001b7a50(local_30);
  }
  else {
    FUN_1001b79ce(param_1,param_2);
  }
  return param_1;
}

