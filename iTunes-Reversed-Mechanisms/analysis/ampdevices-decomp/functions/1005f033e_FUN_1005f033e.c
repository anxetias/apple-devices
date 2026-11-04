// name: FUN_1005f033e
// address: 1005f033e

/* WARNING: Removing unreachable block (ram,0x0001005f0421) */
/* WARNING: Removing unreachable block (ram,0x0001005f0433) */

void FUN_1005f033e(int param_1)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1005e9a2c();
  lVar4 = DAT_1008c7bc0;
  if (DAT_1008c7bc0 != 0 && param_1 != 0) {
    do {
      if (*(int *)(lVar4 + 0x6884) == param_1) {
        if ((*(int *)(lVar4 + 0x68b8) != 8) || (*(int *)(lVar4 + 0x68bc) != 2)) {
          uVar3 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar3,0x10);
          if (cVar1 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x822;
            local_3a = 
            "(device->recoveryPhase == RawIPodDevice::kSendingDFUFirmware) && (device->recoverySubState == RawIPodDevice::kWaitingForOperationCompletion)"
            ;
            __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
          goto LAB_1005f049e;
        }
        iVar2 = FUN_100425478(param_1,0,0,&local_50);
        if (iVar2 != -0x80) {
          if (iVar2 == 0) {
            iVar2 = (**(code **)(*local_50 + 0x38))(local_50,*(char *)(lVar4 + 0x68c4) == '\0');
            if ((iVar2 != -0x80) && (iVar2 != 0)) {
              uVar3 = FUN_1001cc310();
              cVar1 = _os_log_type_enabled(uVar3,0x10);
              if (cVar1 != '\0') {
                local_48 = 0x8220202;
                local_44 = "Assertion failure";
                local_3c = 0x400;
                local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
                __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12)
                ;
              }
            }
            FUN_1001ceee0(local_50);
          }
          else {
            uVar3 = FUN_1001cc310();
            cVar1 = _os_log_type_enabled(uVar3,0x10);
            if (cVar1 != '\0') {
              local_48 = 0x8220202;
              local_44 = "Assertion failure";
              local_3c = 0x400;
              local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
              __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x12);
            }
          }
          if (iVar2 == 0) goto LAB_1005f049e;
        }
        *(undefined4 *)(lVar4 + 0x68bc) = 3;
        goto LAB_1005f049e;
      }
      lVar4 = *(long *)(lVar4 + 0x6878);
    } while (lVar4 != 0);
  }
  uVar3 = FUN_1001cc310();
  cVar1 = _os_log_type_enabled(uVar3,0x10);
  if (cVar1 != '\0') {
    local_48 = 0x8220202;
    local_44 = "Assertion failure";
    local_3c = 0x822;
    local_3a = "device != nullptr";
    __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
  }
  FUN_1001782e9(0,0);
LAB_1005f049e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

