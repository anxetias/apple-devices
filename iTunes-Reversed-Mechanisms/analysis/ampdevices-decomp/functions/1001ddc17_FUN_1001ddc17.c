// name: FUN_1001ddc17
// address: 1001ddc17

undefined8 FUN_1001ddc17(undefined8 param_1,int *param_2,uint param_3,undefined4 *param_4)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  
  FUN_1001b7a44(local_40);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0xffffffce;
  }
  if ((param_2 == (int *)0x0) || (*param_2 != 0x73747263)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b8f99(uVar2);
    }
  }
  else {
    if (param_3 == 0) {
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = 0;
      }
      FUN_1001b7a44(param_1);
      goto LAB_1001ddcc0;
    }
    if ((0 < (int)param_3) && ((int)param_3 <= param_2[0xb])) {
      FUN_1001dccc7(param_2);
      lVar3 = **(long **)(param_2 + 4);
      cVar1 = FUN_1001dd16c((ulong)param_3 * 8 + -8 + lVar3);
      if (cVar1 == '\0') {
        uVar2 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar2,0x10);
        if (cVar1 != '\0') {
          FUN_1006b8ead(uVar2);
        }
        uVar4 = 0xffffffce;
        FUN_1001782e9(0,0);
      }
      else {
        lVar3 = (ulong)param_3 * 8 + lVar3;
        FUN_1001b7e14(local_50,(long)*(int *)(lVar3 + -8) + **(long **)(param_2 + 8),
                      (ulong)(long)*(int *)(lVar3 + -4) >> 1);
        FUN_1001b80b2(local_40,local_50);
        FUN_1001b7a50(local_50);
        uVar4 = 0;
      }
      FUN_1001dcd18(param_2);
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = uVar4;
      }
      FUN_1001b7a88(param_1,local_40);
      goto LAB_1001ddcc0;
    }
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      FUN_1006b8f23(uVar2);
    }
  }
  FUN_1001782e9(0,0);
  FUN_1001b7b04(param_1,"");
LAB_1001ddcc0:
  FUN_1001b7a50(local_40);
  return param_1;
}

