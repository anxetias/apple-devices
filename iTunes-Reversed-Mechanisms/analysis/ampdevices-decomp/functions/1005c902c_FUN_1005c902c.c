// name: FUN_1005c902c
// address: 1005c902c

undefined8 FUN_1005c902c(undefined8 param_1,undefined4 param_2,int param_3,long param_4)

{
  int iVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 local_478 [16];
  undefined1 local_468 [16];
  undefined1 local_458 [16];
  undefined1 local_448 [16];
  undefined4 local_438;
  char *local_434;
  undefined2 local_42c;
  char *local_42a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 != 0) {
    FUN_1001b7a44(&local_438);
    FUN_1001b80b2(param_4,&local_438);
    FUN_1001b7a50(&local_438);
  }
  if ((param_3 + 0x80U & 0xffffff7f) == 0) {
    FUN_1001b7a44(param_1);
    goto LAB_1005c924c;
  }
  FUN_1001b7a44(local_468);
  FUN_1001b7a44(local_458);
  FUN_1001b7a44(local_448);
  lVar3 = FUN_1004de449(param_2);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_42a = "handlerData != nullptr";
LAB_1005c9296:
      local_42c = 0x822;
      local_434 = "Assertion failure";
      local_438 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_438,0x16);
    }
LAB_1005c9173:
    FUN_1001782e9(0,0);
    FUN_1001b7a44(param_1);
  }
  else {
    iVar1 = *(int *)(lVar3 + 0x66b0);
    if (iVar1 < 0x69506f64) {
      if (iVar1 == 0x69506164) {
        uVar4 = 0x10ce;
      }
      else {
        if (iVar1 != 0x6950686e) goto LAB_1005c9156;
        uVar4 = 0x10cd;
      }
    }
    else {
      uVar4 = 0x10cc;
      if ((iVar1 != 0x69506f64) && (iVar1 != 0x69506f74)) {
LAB_1005c9156:
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_42a = "errorReportID != 0";
          goto LAB_1005c9296;
        }
        goto LAB_1005c9173;
      }
    }
    FUN_1004f0e83(lVar3,&local_438);
    FUN_1001b8dfc(local_478,&local_438);
    FUN_1001b80b2(local_468,local_478);
    FUN_1001b7a50(local_478);
    FUN_1001bb41a(local_468,&local_438);
    FUN_1004c69e6(uVar4,param_3,&local_438,0,local_458,local_448);
    if (param_4 != 0) {
      FUN_1001b8172(param_4,local_448);
    }
    FUN_1001b7a88(param_1,local_458);
  }
  FUN_1001b7a50(local_448);
  FUN_1001b7a50(local_458);
  FUN_1001b7a50(local_468);
LAB_1005c924c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

