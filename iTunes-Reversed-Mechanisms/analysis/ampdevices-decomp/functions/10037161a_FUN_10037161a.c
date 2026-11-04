// name: FUN_10037161a
// address: 10037161a

int FUN_10037161a(int *param_1,int *param_2,long param_3,int param_4,undefined4 *param_5)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  size_t sVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 local_ac;
  undefined4 local_a8;
  char *local_a4;
  undefined2 local_9c;
  char *local_9a;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  cVar1 = FUN_10017cbd0(param_1);
  if ((cVar1 == '\0') || (*param_1 != 0x41464350)) {
    uVar7 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar7,0x10);
    if (cVar1 != '\0') {
      local_9a = "JRFileSpecIsAFCPath(target)";
LAB_100371851:
      local_9c = 0x822;
      local_a4 = "Assertion failure";
      local_a8 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
    }
  }
  else if ((param_2 == (int *)0x0) ||
          ((cVar1 = FUN_10017cbd0(param_2), cVar1 != '\0' && (*param_2 == 0x41464350)))) {
    if (param_3 == 0) {
      uVar7 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar7,0x10);
      if (cVar1 != '\0') {
        local_9a = "path != nullptr";
        goto LAB_100371851;
      }
    }
    else {
      if (param_4 != 0) {
        lVar4 = FUN_10036f8fa(param_1[6]);
        if (lVar4 == 0) {
          uVar7 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar7,0x10);
          if (cVar1 != '\0') {
            local_a8 = 0x8220202;
            local_a4 = "Assertion failure";
            local_9c = 0x822;
            local_9a = "afcVolumeInfo != nullptr";
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
          }
          FUN_1001782e9(0,0);
          iVar2 = -0x23;
          goto LAB_100371730;
        }
        local_ac = 0;
        iVar2 = FUN_10036dfdc(param_1,0,0);
        if (iVar2 == 0) {
          param_1 = param_1 + 7;
          uVar5 = _strlen((char *)param_1);
          if (param_2 == (int *)0x0) {
LAB_100371a3f:
            iVar2 = FUN_1001e7237(param_1,uVar5 & 0xffffffff,param_3,param_4,&local_ac);
            if ((iVar2 != -0x80) && (iVar2 != 0)) {
              uVar7 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar7,0x10);
              if (cVar1 != '\0') {
                puVar8 = &local_a8;
                local_a8 = 0x8220202;
                local_a4 = "Assertion failure";
                local_9c = 0x400;
                local_9a = (char *)CONCAT44(local_9a._4_4_,iVar2);
LAB_100371abd:
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",puVar8,0x12);
              }
            }
          }
          else {
            iVar2 = FUN_10036dfdc(param_2,&local_a8,0);
            if (iVar2 != -0x80) {
              if (iVar2 == 0) {
                if ((char)local_a8 != '\0') {
                  param_2 = param_2 + 7;
                  sVar6 = _strlen((char *)param_2);
                  iVar2 = (int)sVar6;
                  uVar9 = (uint)uVar5;
                  if (iVar2 != 0) {
                    uVar3 = iVar2 - (uint)(*(char *)((long)param_2 + (ulong)(iVar2 - 1)) == '/');
                    if (uVar3 <= uVar9 && uVar9 - uVar3 != 0) {
                      uVar5 = (ulong)uVar3;
                      cVar1 = FUN_1001df8db(param_2,uVar5,param_1,uVar5,1);
                      if (cVar1 != '\0') {
                        param_1 = (int *)((long)param_1 + uVar5);
                        uVar9 = uVar9 - uVar3;
                      }
                    }
                  }
                  uVar5 = (ulong)uVar9;
                  goto LAB_100371a3f;
                }
                uVar7 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar7,0x10);
                if (cVar1 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = "specInfo.isDirectory";
                  __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                FUN_1001782e9(0,0);
                iVar2 = -0x57f;
              }
              else {
                uVar7 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar7,0x10);
                if (cVar1 != '\0') {
                  puVar8 = &local_58;
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                  goto LAB_100371abd;
                }
              }
            }
          }
        }
        FUN_10036d4d2(lVar4);
        if (param_5 != (undefined4 *)0x0) {
          *param_5 = local_ac;
        }
        goto LAB_100371730;
      }
      uVar7 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar7,0x10);
      if (cVar1 != '\0') {
        local_9a = "maxPathLength > 0";
        goto LAB_100371851;
      }
    }
  }
  else {
    uVar7 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar7,0x10);
    if (cVar1 != '\0') {
      local_9a = "relativeTo == nullptr || JRFileSpecIsAFCPath(relativeTo)";
      goto LAB_100371851;
    }
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x32;
LAB_100371730:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

