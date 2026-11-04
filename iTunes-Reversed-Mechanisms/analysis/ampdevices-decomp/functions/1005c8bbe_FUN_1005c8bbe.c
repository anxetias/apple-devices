// name: FUN_1005c8bbe
// address: 1005c8bbe

undefined8
FUN_1005c8bbe(undefined8 param_1,undefined4 param_2,int param_3,long param_4,long param_5)

{
  int iVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
  undefined2 uVar5;
  undefined1 local_470 [16];
  undefined1 local_460 [16];
  undefined1 local_450 [16];
  undefined8 local_440;
  undefined4 local_438;
  char *local_434;
  undefined2 local_42c;
  char *local_42a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_440 = param_1;
  if (param_4 != 0) {
    FUN_1001b7a44(&local_438);
    FUN_1001b80b2(param_4,&local_438);
    FUN_1001b7a50(&local_438);
  }
  if (param_5 != 0) {
    FUN_1001b7a44(&local_438);
    FUN_1001b80b2(param_5,&local_438);
    FUN_1001b7a50(&local_438);
  }
  if (param_3 == 0) {
    FUN_1001b7a44(local_440);
    goto LAB_1005c8e33;
  }
  FUN_1001b7a44(local_460);
  FUN_1001b7a44(local_450);
  lVar3 = FUN_1004de449(param_2);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_42a = "handlerData != nullptr";
LAB_1005c8e83:
      local_42c = 0x822;
      local_434 = "Assertion failure";
      local_438 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_438,0x16);
    }
LAB_1005c8e06:
    FUN_1001782e9(0,0);
    FUN_1001b7a44(local_440);
  }
  else {
    iVar1 = *(int *)(lVar3 + 0x66b0);
    if (iVar1 == 0x69506164) {
      uVar5 = 0x1100;
    }
    else if (iVar1 == 0x69506f74) {
      uVar5 = 0x10fe;
    }
    else {
      if (iVar1 != 0x6950686e) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_42a = "errorReportID != 0";
          goto LAB_1005c8e83;
        }
        goto LAB_1005c8e06;
      }
      uVar5 = 0x10ff;
    }
    FUN_1004f0e83(lVar3,&local_438);
    FUN_1001b8dfc(local_470,&local_438);
    FUN_1001bb41a(local_470,&local_438);
    FUN_1004c69e6(uVar5,param_3,&local_438,0,local_460,local_450);
    FUN_1001b7a50(local_470);
    if ((param_3 == -0x2b) && (*(char *)(lVar3 + 0x14cd8) == '\0')) {
      uVar4 = FUN_100416f20(*(undefined4 *)(lVar3 + 0x66b0),0x10cc020f);
      FUN_1001b81f2(local_450,uVar4);
    }
    if (param_4 != 0) {
      FUN_1001b8172(param_4,local_450);
    }
    if (param_5 != 0) {
      FUN_1005c8b89(&local_438,param_3);
      FUN_1001b80b2(param_5,&local_438);
      FUN_1001b7a50(&local_438);
    }
    FUN_1001b7a88(local_440,local_460);
  }
  FUN_1001b7a50(local_450);
  FUN_1001b7a50(local_460);
LAB_1005c8e33:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return local_440;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

