// name: FUN_10018a4fc
// address: 10018a4fc

undefined8 FUN_10018a4fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *pcVar5;
  long *plVar6;
  undefined1 local_58 [16];
  long local_48;
  long *local_40;
  
  cVar1 = FUN_1001b8428(param_2);
  if (cVar1 == '\0') {
    pcVar4 = "\\";
    if (param_3 == 1) {
      pcVar4 = ":";
    }
    pcVar5 = "/";
    if (param_3 != 0) {
      pcVar5 = pcVar4;
    }
    iVar2 = FUN_1001ba026(param_2,pcVar5);
    if (iVar2 != 0) {
      FUN_1001b7b04(local_58,pcVar5);
      plVar6 = &local_48;
      FUN_1001bb2c2(plVar6,param_2,local_58);
      FUN_1001b7a50(local_58);
      FUN_1001b7a44(param_1);
      do {
        if (plVar6 == local_40) goto LAB_10018a5bf;
        cVar1 = FUN_1001b8428(*plVar6 + 0x10);
        plVar6 = (long *)*plVar6;
      } while (cVar1 != '\0');
      FUN_1001b8172(param_1,plVar6 + 2);
LAB_10018a5bf:
      FUN_1001bd4fc(&local_48);
      return param_1;
    }
    if (param_3 == 1) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        FUN_10068fead(uVar3);
      }
      FUN_1001782e9(0,0);
    }
  }
  FUN_1001b7a5c(param_1,param_2);
  return param_1;
}

