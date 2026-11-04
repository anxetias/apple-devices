// name: FUN_10035f30f
// address: 10035f30f

undefined4
FUN_10035f30f(undefined4 param_1,void *param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
             undefined4 param_9,undefined1 param_10,undefined1 param_11)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined1 local_b48 [568];
  undefined8 local_910;
  undefined8 local_908;
  undefined4 local_900;
  undefined4 local_8fc;
  undefined1 local_8f8 [44];
  undefined1 local_8cc [1076];
  undefined4 local_498;
  char *local_494;
  undefined2 local_48c;
  int local_48a;
  undefined1 local_46c [1076];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_910 = param_5;
  local_908 = param_4;
  local_900 = param_1;
  local_8fc = param_6;
  FUN_1001c62d9(local_8f8,0x460);
  _memcpy(local_8cc,param_2,0x420);
  FUN_1001c62d9(&local_498,0x460);
  _memcpy(local_46c,param_2,0x420);
  iVar2 = FUN_1003c307c(0x46494c45,&local_498,local_b48);
  uVar3 = 0xe;
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      FUN_10017d520(&local_498,param_2);
      uVar4 = FUN_1001b83ae(&local_498);
      uVar3 = FUN_10035e308(local_900,param_3,local_b48,uVar4,local_908,local_910,
                            (undefined2)local_8fc,param_10,param_11,param_7,param_8,param_9);
      FUN_1001b7a50(&local_498);
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_498 = 0x8220202;
        local_494 = "Assertion failure";
        local_48c = 0x400;
        local_48a = iVar2;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_498,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

