// name: FUN_1005ef378
// address: 1005ef378

void FUN_1005ef378(int param_1)

{
  short sVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  short local_4a;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1005e9a2c();
  local_4a = 0x10da;
  lVar5 = DAT_1008c7bc0;
  if (DAT_1008c7bc0 != 0 && param_1 != 0) {
    do {
      if (*(int *)(lVar5 + 0x6884) == param_1) {
        if ((*(int *)(lVar5 + 0x68b8) == 0xb) && (*(int *)(lVar5 + 0x68bc) == 1)) {
          iVar3 = FUN_1005efbe6(0,lVar5,&local_4a);
          sVar1 = local_4a;
          if (iVar3 != 0) {
            *(undefined4 *)(lVar5 + 0x68bc) = 3;
            FUN_1005e73f0(&local_48,lVar5);
            FUN_100216f84(2,(int)sVar1,0,iVar3,&local_48,0);
            FUN_1001b7a50(&local_48);
          }
        }
        else {
          uVar4 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar4,0x10);
          if (cVar2 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x822;
            local_3a = 
            "(device->recoveryPhase == RawIPodDevice::kRebooting) && (device->recoverySubState == RawIPodDevice::kWaitingForPostOperationAppearance)"
            ;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
        }
        goto LAB_1005ef481;
      }
      lVar5 = *(long *)(lVar5 + 0x6878);
    } while (lVar5 != 0);
  }
  uVar4 = FUN_1001cc310();
  cVar2 = _os_log_type_enabled(uVar4,0x10);
  if (cVar2 != '\0') {
    local_48 = 0x8220202;
    local_44 = "Assertion failure";
    local_3c = 0x822;
    local_3a = "device != nullptr";
    __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
  }
  FUN_1001782e9(0,0);
LAB_1005ef481:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

