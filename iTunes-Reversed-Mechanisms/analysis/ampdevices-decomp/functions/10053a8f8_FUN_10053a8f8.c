// name: FUN_10053a8f8
// address: 10053a8f8

undefined8 FUN_10053a8f8(undefined8 param_1,undefined4 param_2,int param_3,long param_4)

{
  int iVar1;
  char cVar2;
  long lVar3;
  undefined8 uVar4;
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
  if (param_3 == 0) {
    FUN_1001b7a44(param_1);
    goto LAB_10053aa8a;
  }
  FUN_1001b7a44(local_458);
  FUN_1001b7a44(local_448);
  lVar3 = FUN_1004de449(param_2);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_438 = 0x8220202;
      local_434 = "Assertion failure";
      local_42c = 0x822;
      local_42a = "handlerData != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_438,0x16);
    }
    FUN_1001782e9(0,0);
LAB_10053a9d2:
    FUN_1001b7a44(param_1);
  }
  else {
    iVar1 = *(int *)(lVar3 + 0x66b0);
    if (iVar1 == 0x69506164) {
      uVar4 = 0x112b;
    }
    else if (iVar1 == 0x69506f74) {
      uVar4 = 0x1129;
    }
    else {
      if (iVar1 != 0x6950686e) goto LAB_10053a9d2;
      uVar4 = 0x112a;
    }
    FUN_1004f0e83(lVar3,&local_438);
    FUN_1001b8dfc(local_468,&local_438);
    FUN_1001bb41a(local_468,&local_438);
    FUN_1004c69e6(uVar4,param_3,&local_438,0,local_458,local_448);
    FUN_1001b7a50(local_468);
    if (param_4 != 0) {
      FUN_1001b8172(param_4,local_448);
    }
    FUN_1001b7a88(param_1,local_458);
  }
  FUN_1001b7a50(local_448);
  FUN_1001b7a50(local_458);
LAB_10053aa8a:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

