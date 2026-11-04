// name: FUN_100169334
// address: 100169334

undefined8 FUN_100169334(undefined8 param_1,char *param_2,long param_3)

{
  char cVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  if (param_3 == 0 || param_2 != (char *)0x0) {
    pcVar2 = "";
    if (param_2 != (char *)0x0) {
      pcVar2 = param_2;
    }
    uVar3 = FUN_100173ab4(param_1,pcVar2,param_3,0x8000100,0);
    return uVar3;
  }
  uVar3 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar3,0x10);
  if (cVar1 != '\0') {
    FUN_100676d7e(uVar3);
  }
  FUN_1001782e9(0,0);
  return 0;
}

