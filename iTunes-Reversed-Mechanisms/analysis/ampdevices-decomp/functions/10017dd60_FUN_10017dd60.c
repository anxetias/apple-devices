// name: FUN_10017dd60
// address: 10017dd60

undefined8 FUN_10017dd60(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  FUN_1001b7a44();
  iVar2 = FUN_10017dca4(param_2,param_1);
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      FUN_100685ede(iVar2,uVar3);
    }
  }
  return param_1;
}

