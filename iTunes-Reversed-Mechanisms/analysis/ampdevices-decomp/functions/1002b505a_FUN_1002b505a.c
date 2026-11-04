// name: FUN_1002b505a
// address: 1002b505a

undefined8 FUN_1002b505a(long param_1,long param_2,uint param_3)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) ||
     (*(long *)(*(long *)(param_1 + 8) + 0x10) == 0)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_4a = "TrackInstanceIsValid(trackInstance)";
LAB_1002b524a:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else {
    if (param_3 < 0x401) {
      if (*(int *)(param_1 + 0x3c) == 0x48545450) {
        if (*(long *)(param_1 + 0x98) != 0) {
          FUN_1001c64c1();
          *(undefined8 *)(param_1 + 0x98) = 0;
        }
        if (*(int *)(param_1 + 0xa0) != 0) {
          *(undefined4 *)(param_1 + 0xa0) = 0;
        }
        uVar4 = 0;
        if (param_2 != 0) {
          lVar2 = FUN_1001c63e1(param_3);
          *(long *)(param_1 + 0x98) = lVar2;
          if (lVar2 == 0) {
            uVar4 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar4,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "trackInstance->permLocation.http.externalURL != nullptr";
              __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            uVar4 = 0xffffff94;
          }
          else {
            FUN_1001c631b(param_2,lVar2,param_3);
            *(uint *)(param_1 + 0xa0) = param_3;
          }
        }
      }
      else {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        uVar4 = 0xffffffce;
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,0xffffffce);
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
      goto LAB_1002b5152;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_4a = "urlLength <= 1024";
      goto LAB_1002b524a;
    }
  }
  FUN_1001782e9(0,0);
  uVar4 = 0xffffffce;
LAB_1002b5152:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

