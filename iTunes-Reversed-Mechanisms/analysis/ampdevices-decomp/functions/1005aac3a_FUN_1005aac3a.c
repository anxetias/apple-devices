// name: FUN_1005aac3a
// address: 1005aac3a

long FUN_1005aac3a(long param_1,ulong param_2,long param_3,long param_4)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_58 [2];
  long local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "ustrText != nullptr";
LAB_1005aad7f:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
LAB_1005aacb0:
    lVar2 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    if (param_3 != 0) {
      local_58[0] = (undefined4)param_2;
      local_50 = param_3;
      lVar2 = FUN_1005b0928(param_1 + 0x1690,param_2,param_3);
      if (lVar2 == param_1 + 0x1698) {
        FUN_1005b0a7c(param_1 + 0x1690,param_2 & 0xffffffff,param_3,local_58);
        lVar2 = FUN_1005b0928(param_1 + 0x1678,param_2 & 0xffffffff,param_3);
        if (lVar2 != param_1 + 0x1680) {
          lVar2 = *(long *)(lVar2 + 0x30);
          if (lVar2 != 0) goto LAB_1005aacbb;
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_3a = "fileSize != 0";
            goto LAB_1005aad7f;
          }
          goto LAB_1005aacb0;
        }
      }
    }
    lVar2 = 0;
  }
LAB_1005aacbb:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return lVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

