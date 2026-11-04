// name: FUN_10047be5d
// address: 10047be5d

/* WARNING: Type propagation algorithm not settling */

int FUN_10047be5d(long param_1,undefined2 *param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_58;
  int local_4c [2];
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (undefined2 *)0x0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_3a = "outString != nullptr";
LAB_10047c01b:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_4c[1] = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",local_4c + 1,0x16);
    }
  }
  else {
    *param_2 = 0;
    if ((param_1 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
      if (*(int *)(*(long *)(param_1 + 0x78) + 0x24) == 0) {
        iVar2 = 0;
        goto LAB_10047bfa9;
      }
      lVar6 = *(long *)(param_1 + 0x10) + 0x2200;
      FUN_1001dccc7(lVar6);
      iVar2 = FUN_10047d582(param_1,&local_58,local_4c);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          if (local_4c[0] != 0) {
            lVar3 = FUN_10016a81f(DAT_1008c4d90,local_58,local_4c[0],0,0);
            if (lVar3 == 0) {
              uVar5 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar5,0x10);
              if (cVar1 != '\0') {
                local_4c[1] = 0x8220202;
                local_44 = "Assertion failure";
                local_3c = 0x822;
                local_3a = "details != nullptr";
                __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",local_4c + 1,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              iVar2 = -0x32;
              goto LAB_10047bfed;
            }
            lVar4 = FUN_100166c1b(lVar3,&cf_studio);
            if (lVar4 != 0) {
              FUN_1001e115f(lVar4,param_2);
            }
            FUN_10017060f(lVar3);
          }
          iVar2 = 0;
        }
        else {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_4c[1] = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x400;
            local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",local_4c + 1,0x12);
          }
        }
      }
LAB_10047bfed:
      FUN_1001dcd18(lVar6);
      goto LAB_10047bfa9;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_3a = "TrackInfoIsValid(trackInfo)";
      goto LAB_10047c01b;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_10047bfa9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

