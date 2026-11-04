// name: FUN_1002176b7
// address: 1002176b7

ulong FUN_1002176b7(undefined8 param_1,long param_2,long param_3,long param_4,undefined8 param_5,
                   undefined4 param_6,undefined4 *param_7)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  ulong local_80;
  undefined4 local_74;
  int *local_70;
  char *local_68;
  char local_59;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_59 = '\0';
  local_74 = param_6;
  if ((((param_3 != 0) != (param_2 != 0)) == (param_4 != 0)) ||
     (param_4 != 0 && (param_3 != 0 && param_2 != 0))) {
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = 
      "((handlerData != nullptr) ^ (recoveryDeviceRef != nullptr) ^ (dfuDeviceRef != nullptr)) && ((handlerData == nullptr) || (recoveryDeviceRef == nullptr) || (dfuDeviceRef == nullptr))"
      ;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    local_74._0_1_ = (char)param_6;
    if (param_2 == 0 && (char)local_74 == '\0') {
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "isModal || handlerData != nullptr";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else if (param_2 == 0) {
      if (param_3 == 0) {
        if (param_4 == 0) {
          local_80 = 0;
          goto LAB_100217752;
        }
        piVar8 = (int *)_AMDFUModeDeviceGetECID(param_4);
        if (piVar8 != (int *)0x0) goto LAB_100217a16;
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "ecid != 0";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        piVar8 = (int *)_AMRecoveryModeDeviceGetECID(param_3);
        if (piVar8 != (int *)0x0) {
LAB_100217a16:
          local_80 = 0;
LAB_100217a1e:
          local_70 = piVar8;
          piVar8 = operator_new(0x40,(nothrow_t *)PTR_nothrow_10082c970);
          if (piVar8 == (int *)0x0) {
            uVar7 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            if (cVar3 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "context != nullptr";
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            uVar10 = 0xffffff94;
            goto LAB_1002178e3;
          }
          local_68 = &local_59;
          if ((char)local_74 == '\0') {
            local_68 = (char *)0x0;
          }
          *piVar8 = (int)local_80;
          *(int **)(piVar8 + 2) = local_70;
          piVar8[4] = 0;
          piVar8[5] = 0;
          uVar7 = FUN_1001705fc(param_3);
          *(undefined8 *)(piVar8 + 6) = uVar7;
          uVar7 = FUN_1001705fc(param_4);
          *(undefined8 *)(piVar8 + 8) = uVar7;
          uVar7 = FUN_1001705fc(param_5);
          *(undefined8 *)(piVar8 + 10) = uVar7;
          *(undefined1 *)(piVar8 + 0xc) = 0;
          piVar8[0xd] = -1;
          *(char **)(piVar8 + 0xe) = local_68;
          if (*piVar8 != 0) {
            lVar5 = FUN_1004de449();
            if (lVar5 == 0) {
              uVar7 = FUN_1001cc310();
              cVar3 = _os_log_type_enabled(uVar7,0x10);
              if (cVar3 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure (expected to be not NULL)";
                local_4c = 0x822;
                local_4a = "handlerData";
                __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              cVar3 = FUN_1001782e9(0,0);
              if (cVar3 == '\0') goto LAB_100217aeb;
            }
            uVar7 = FUN_1001705fc(*(undefined8 *)(lVar5 + 0x7168));
            *(undefined8 *)(piVar8 + 4) = uVar7;
          }
LAB_100217aeb:
          local_70 = piVar8;
          uVar9 = FUN_1001ee6ff(FUN_100217e84,piVar8,0,0,0,"");
          iVar4 = (int)uVar9;
          uVar10 = uVar9 & 0xffffffff;
          if (iVar4 != -0x80) {
            if (iVar4 == 0) {
              local_68 = (char *)CONCAT71((int7)(uVar9 >> 8),1);
              if (param_2 != 0) {
                *(undefined1 *)(param_2 + 0x16677) = 1;
              }
              goto LAB_100217762;
            }
            uVar7 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar7,0x10);
            if (cVar3 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
              __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
          }
          local_68 = (char *)0x0;
LAB_100217ba9:
          piVar8 = local_70;
          if (((local_70 != (int *)0x0) && ((char)local_68 == '\0')) && ((int)uVar10 != 0)) {
            FUN_10021828c(local_70);
            operator_delete(piVar8);
          }
          goto LAB_1002178e3;
        }
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "ecid != 0";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
    }
    else {
      local_80 = (ulong)*(uint *)(param_2 + 0x28);
      if (*(char *)(param_2 + 0x16677) != '\0') {
LAB_100217752:
        local_68 = (char *)0x0;
        local_70 = (int *)0x0;
LAB_100217762:
        uVar10 = 0;
        if (((char)local_74 != '\0') && (local_59 == '\0')) {
          uVar7 = *(undefined8 *)PTR__kCFRunLoopDefaultMode_10082e118;
          do {
            if ((int)local_80 != 0) {
              lVar5 = FUN_1004de449(local_80);
              if (lVar5 == 0) {
                uVar6 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar6,0x10);
                if (cVar3 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure (expected to be not NULL)";
                  local_4c = 0x822;
                  local_4a = "tempHandlerData";
                  __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                cVar3 = FUN_1001782e9(0,0);
                if (cVar3 == '\0') {
                  uVar10 = 0x45f;
                  goto LAB_100217ba9;
                }
              }
              if (*(char *)(lVar5 + 0x16677) == '\0') {
                uVar10 = 0;
                break;
              }
            }
            FUN_1001727b4((int)DAT_10070e560,uVar7,0);
            local_98 = *param_7;
            uStack_94 = param_7[1];
            uStack_90 = param_7[2];
            uStack_8c = param_7[3];
            if (*(long *)(param_7 + 2) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)(param_7 + 2) + 8);
              *plVar1 = *plVar1 + 1;
              UNLOCK();
            }
            iVar4 = FUN_1001cebc4(&local_98,0,0xffffffffffffffff,0);
            piVar8 = local_70;
            plVar1 = (long *)CONCAT44(uStack_8c,uStack_90);
            if (plVar1 != (long *)0x0) {
              LOCK();
              plVar2 = plVar1 + 1;
              lVar5 = *plVar2;
              *plVar2 = *plVar2 + -1;
              UNLOCK();
              if (lVar5 == 0) {
                (**(code **)(*plVar1 + 0x10))(plVar1);
                std::__shared_weak_count::__release_weak();
              }
            }
            if (iVar4 != 0) {
              uVar10 = 0xffffff80;
              if (piVar8 != (int *)0x0 && local_59 == '\0') {
                *(undefined1 *)(piVar8 + 0xc) = 1;
              }
              goto LAB_100217ba9;
            }
            uVar10 = 0;
          } while (local_59 == '\0');
        }
        goto LAB_1002178e3;
      }
      piVar8 = *(int **)(param_2 + 0x61e8);
      if (piVar8 != (int *)0x0) goto LAB_100217a1e;
      uVar7 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar7,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "ecid != 0";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
  }
  uVar10 = 0xffffffce;
LAB_1002178e3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar10;
}

