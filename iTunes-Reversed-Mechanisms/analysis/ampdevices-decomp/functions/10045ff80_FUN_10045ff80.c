// name: FUN_10045ff80
// address: 10045ff80

int FUN_10045ff80(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 local_68 [16];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  int local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001b7a44(local_68);
  iVar2 = FUN_10017dca4(param_2,local_68);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      FUN_100238ca8(&local_58,param_1 + 0x428);
      lVar3 = FUN_1004606e6(param_1 + 0x470,local_68);
      *(undefined8 *)(lVar3 + 0x20) = param_3;
      *(undefined8 *)(lVar3 + 0x28) = param_4;
      FUN_10015a142(&local_58);
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = iVar2;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
  FUN_1001b7a50(local_68);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

