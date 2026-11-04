// name: FUN_1003c3df8
// address: 1003c3df8

int FUN_1003c3df8(undefined8 *param_1,ulong param_2,ulong param_3,long *param_4,ulong *param_5,
                 undefined1 param_6,long param_7)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long local_80;
  undefined8 *local_78;
  ulong local_70;
  undefined8 local_68;
  ulong local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 != (long *)0x0) {
    *param_4 = 0;
  }
  if (param_5 != (ulong *)0x0) {
    *param_5 = 0;
  }
  if (param_7 == 0) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "hash != nullptr";
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x32;
    goto LAB_1003c3fe4;
  }
  local_78 = param_1;
  iVar2 = FUN_100179732(param_6,&local_68);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      iVar2 = (**(code **)(*(long *)*local_78 + 0x100))((long *)*local_78,&local_70);
      if (iVar2 != -0x80) {
        if (iVar2 == 0) {
          if (local_70 < param_2) {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "startFileOffset <= eof";
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            param_2 = local_70;
          }
          if (param_3 == 0xffffffffffffffff) {
            param_3 = local_70;
          }
          if (local_70 < param_3) {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "endFileOffset <= eof";
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            param_3 = local_70;
          }
          uVar7 = param_3 - param_2;
          if (param_3 < param_2) {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "startFileOffset <= endFileOffset";
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            iVar2 = -0x32;
          }
          else {
            uVar6 = 0x200000;
            if (param_4 != (long *)0x0) {
              uVar6 = uVar7;
            }
            lVar4 = FUN_1001c63e1();
            uVar5 = uVar7;
            if (lVar4 != 0) {
              for (; local_60 = uVar5, uVar7 != 0; uVar7 = uVar7 - local_80) {
                uVar5 = uVar7;
                if (uVar6 < uVar7) {
                  uVar5 = uVar6;
                }
                iVar2 = (**(code **)(*(long *)*local_78 + 0x90))
                                  ((long *)*local_78,param_2,lVar4,uVar5 & 0xffffffff,1,&local_80);
                if (iVar2 != 0) {
                  uVar7 = local_60;
                  if (iVar2 != -0x80) {
                    uVar3 = FUN_1001cc310();
                    cVar1 = _os_log_type_enabled(uVar3,0x10);
                    uVar7 = local_60;
                    if (cVar1 != '\0') {
                      local_58 = 0x8220202;
                      local_54 = "Assertion failure";
                      local_4c = 0x400;
                      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58
                                          ,0x12);
                    }
                  }
                  goto LAB_1003c415f;
                }
                param_2 = param_2 + local_80;
                FUN_10017983e(local_68,lVar4);
                uVar5 = local_60;
              }
              FUN_1001799f1(local_68,param_7);
              iVar2 = 0;
              uVar7 = local_60;
LAB_1003c415f:
              FUN_100179a7b(local_68);
              if (param_4 == (long *)0x0) {
                FUN_1001c64c1(lVar4);
              }
              else {
                *param_4 = lVar4;
                if (param_5 != (ulong *)0x0) {
                  *param_5 = uVar7;
                }
              }
              goto LAB_1003c3fe4;
            }
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "buffer != nullptr";
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            iVar2 = -0x6c;
          }
        }
        else {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
            goto LAB_1003c41c1;
          }
        }
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
LAB_1003c41c1:
        local_4c = 0x400;
        local_54 = "Assertion failure";
        local_58 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
  FUN_100179a7b(local_68);
LAB_1003c3fe4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

