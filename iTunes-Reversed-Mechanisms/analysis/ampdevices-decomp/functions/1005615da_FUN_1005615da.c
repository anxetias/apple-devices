// name: FUN_1005615da
// address: 1005615da

undefined8 FUN_1005615da(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_c48;
  char *local_c44;
  undefined2 local_c3c;
  int local_c3a;
  undefined1 local_c28 [3072];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44();
  iVar2 = FUN_1001823de(param_2,local_c28,0xbfe);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      FUN_1001b7b04(&local_c48,local_c28);
      FUN_1001b80b2(param_1,&local_c48);
      FUN_1001b7a50(&local_c48);
      FUN_1001b7b04(&local_c48,"/");
      cVar1 = FUN_1001ba432(param_1,&local_c48,0x1b1);
      FUN_1001b7a50(&local_c48);
      if (cVar1 == '\0') {
        FUN_1001b7b04(&local_c48,"/");
        FUN_1001bbcfe(param_1,&local_c48);
        FUN_1001b7a50(&local_c48);
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_c48 = 0x8220202;
        local_c44 = "Assertion failure";
        local_c3c = 0x400;
        local_c3a = iVar2;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_c48,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

