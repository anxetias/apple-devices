// name: FUN_1002635a2
// address: 1002635a2

undefined8 FUN_1002635a2(long param_1,long param_2,long *param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (long *)0x0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "deviceRefPtr != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    *param_3 = 0;
    if (param_1 == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "uniqueID != 0";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else {
      if (param_2 != 0) {
        lVar2 = FUN_100263880(param_1);
        uVar3 = 0;
        if (lVar2 == 0) {
          lVar2 = FUN_1001c629e(0x6e20,&DAT_100711c6e);
          if (lVar2 == 0) {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "deviceRecord != nullptr";
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            uVar3 = 0xffffff94;
            lVar2 = 0;
          }
          else {
            *(undefined8 *)(lVar2 + 0x6d80) = 0;
            *(undefined8 *)(lVar2 + 0x6d88) = 0;
            *(undefined4 *)(lVar2 + 8) = 0x706f6464;
            *(long *)(lVar2 + 0x10) = param_1;
            *(long *)(lVar2 + 0x18) = param_2;
            *(undefined1 *)(lVar2 + 0x35) = *(undefined1 *)(DAT_1008a2e80 + 0x30);
            *(undefined1 *)(lVar2 + 0x34) = 1;
            *(undefined1 *)(lVar2 + 0x6d62) = 1;
            FUN_10026394e(lVar2);
            FUN_1001ea897(lVar2,DAT_1008a2e80);
          }
        }
        *param_3 = lVar2;
        goto LAB_100263715;
      }
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "serialNumber != 0";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  uVar3 = 0xffffffce;
LAB_100263715:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

