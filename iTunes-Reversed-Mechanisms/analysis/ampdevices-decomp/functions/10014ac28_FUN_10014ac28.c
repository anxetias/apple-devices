// name: FUN_10014ac28
// address: 10014ac28

undefined8 FUN_10014ac28(undefined8 param_1,long param_2)

{
  char cVar1;
  long lVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 local_28 [16];
  
  if (*(long *)(param_2 + 8) != 0) {
    FUN_1001a9fd0(local_28,param_2 + 8);
    lVar2 = FUN_1001a8610(local_28);
    if ((lVar2 == 0) || (pcVar3 = (char *)FUN_1001a8626(local_28), *pcVar3 != '{')) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        FUN_10014c485(uVar4);
      }
      FUN_1001782e9(0,1);
      FUN_10032f0f2(param_1);
    }
    else {
      FUN_1001a7abe(param_1,local_28);
    }
    FUN_1001a85d4(local_28);
    return param_1;
  }
  FUN_10032f0f2(param_1);
  return param_1;
}

