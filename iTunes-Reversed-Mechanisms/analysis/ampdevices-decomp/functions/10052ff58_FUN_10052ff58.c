// name: FUN_10052ff58
// address: 10052ff58

int FUN_10052ff58(undefined8 *param_1,ulong param_2,long param_3,ulong param_4,code *param_5,
                 undefined8 param_6)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  float fVar9;
  undefined1 auVar10 [16];
  ulong local_98;
  long local_90;
  ulong local_88;
  ulong local_80;
  ulong local_78;
  code *local_70;
  ulong local_68;
  float local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 == 0) {
    iVar2 = 0;
    goto LAB_1005306a5;
  }
  local_90 = param_3;
  local_78 = param_2;
  iVar2 = (**(code **)(*(long *)*param_1 + 0x100))((long *)*param_1,&local_98);
  if (iVar2 == -0x80) goto LAB_1005306a5;
  if (iVar2 != 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
    goto LAB_1005306a5;
  }
  iVar2 = -0x27;
  if (local_98 < local_78) goto LAB_1005306a5;
  lVar3 = FUN_1001c63e1(1000000);
  if (lVar3 == 0) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "buffer != nullptr";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = -0x6c;
    goto LAB_1005306a5;
  }
  iVar2 = (**(code **)(*(long *)*param_1 + 0x108))((long *)*param_1,local_98 + param_4);
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      uVar7 = local_98 - local_78;
      uVar5 = param_4;
      if (local_90 == 0) {
        uVar5 = 0;
      }
      uVar5 = uVar5 + uVar7;
      local_70 = param_5;
      if (uVar7 == 0) {
        uVar6 = 0;
      }
      else {
        local_5c = (float)uVar5;
        local_88 = 0;
        do {
          uVar6 = 1000000;
          if (uVar7 < 1000000) {
            uVar6 = uVar7;
          }
          local_88 = local_88 + uVar6;
          lVar8 = local_98 - local_88;
          local_80 = uVar7;
          local_68 = uVar6;
          iVar2 = (**(code **)(*(long *)*param_1 + 0x90))
                            ((long *)*param_1,lVar8,lVar3,uVar6,1,&local_68);
          if (iVar2 != 0) {
            if (iVar2 == -0x80) {
              iVar2 = -0x80;
            }
            else {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x400;
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
            }
            goto LAB_100530699;
          }
          if (local_68 != uVar6) goto LAB_10053054c;
          iVar2 = (**(code **)(*(long *)*param_1 + 0x98))
                            ((long *)*param_1,lVar8 + param_4,lVar3,uVar6,1,&local_68);
          if (iVar2 != 0) {
            if (iVar2 != -0x80) {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
LAB_100530792:
                local_4c = 0x400;
                local_54 = "Assertion failure";
                local_58 = 0x8220202;
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12)
                ;
              }
            }
            goto LAB_100530699;
          }
          if (local_68 != uVar6) goto LAB_10053054c;
          if (local_70 != (code *)0x0) {
            auVar10 = ZEXT416((uint)(((float)local_88 * DAT_10070bcf0) / local_5c));
            auVar10 = roundss(auVar10,auVar10,9);
            if (DAT_10070bcf0 < auVar10._0_4_) {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "pctComplete <= 100.0f";
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
            }
            iVar2 = (*local_70)((int)auVar10._0_4_ & 0xffff,param_6);
            if (iVar2 != 0) {
              if (iVar2 != -0x80) {
                uVar4 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar4,0x10);
                if (cVar1 != '\0') {
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                  goto LAB_100530792;
                }
              }
              goto LAB_100530699;
            }
          }
          uVar7 = local_80 - uVar6;
          uVar6 = local_88;
        } while (uVar7 != 0);
      }
      iVar2 = 0;
      if (local_90 != 0) {
        local_80 = CONCAT44(local_80._4_4_,(float)uVar5);
        lVar8 = local_90;
        uVar5 = local_78;
        do {
          uVar7 = 0x7fffffff;
          if (param_4 < 0x7fffffff) {
            uVar7 = param_4;
          }
          local_90 = lVar8;
          local_78 = uVar5;
          local_68 = uVar7;
          iVar2 = (**(code **)(*(long *)*param_1 + 0x98))();
          if (iVar2 != 0) {
            if (iVar2 != -0x80) {
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                goto LAB_100530158;
              }
            }
            break;
          }
          if (local_68 != uVar7) goto LAB_10053054c;
          uVar6 = uVar6 + uVar7;
          if (local_70 != (code *)0x0) {
            auVar10 = ZEXT416((uint)(((float)uVar6 * DAT_10070bcf0) / (float)local_80));
            auVar10 = roundss(auVar10,auVar10,9);
            fVar9 = auVar10._0_4_;
            local_88 = uVar6;
            if (DAT_10070bcf0 < fVar9) {
              local_5c = fVar9;
              uVar4 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar4,0x10);
              if (cVar1 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "pctComplete <= 100.0f";
                __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              FUN_1001782e9(0,0);
              fVar9 = local_5c;
            }
            iVar2 = (*local_70)((int)fVar9 & 0xffff,param_6);
            uVar6 = local_88;
            if (iVar2 != 0) {
              if (iVar2 != -0x80) {
                uVar4 = FUN_1001cc310();
                cVar1 = _os_log_type_enabled(uVar4,0x10);
                if (cVar1 != '\0') {
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
                  goto LAB_100530158;
                }
              }
              break;
            }
          }
          param_4 = param_4 - uVar7;
          uVar5 = local_78 + uVar7;
          lVar8 = local_90 + uVar7;
          iVar2 = 0;
        } while (param_4 != 0);
      }
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
LAB_100530158:
        local_4c = 0x400;
        local_54 = "Assertion failure";
        local_58 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
  goto LAB_100530699;
LAB_10053054c:
  uVar4 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar4,0x10);
  if (cVar1 != '\0') {
    local_58 = 0x8220202;
    local_54 = "Assertion failure";
    local_4c = 0x822;
    local_4a = "count == bytesToCopy";
    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
  }
  FUN_1001782e9(0,0);
  iVar2 = -0x24;
LAB_100530699:
  FUN_1001c64c1(lVar3);
LAB_1005306a5:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

