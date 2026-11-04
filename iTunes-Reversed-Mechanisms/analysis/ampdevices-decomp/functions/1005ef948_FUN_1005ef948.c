// name: FUN_1005ef948
// address: 1005ef948

void FUN_1005ef948(int param_1)

{
  int iVar1;
  short sVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  short local_5a;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1005e9a2c();
  local_5a = 0x10da;
  lVar6 = DAT_1008c7bc0;
  if (DAT_1008c7bc0 != 0 && param_1 != 0) {
    do {
      if (*(int *)(lVar6 + 0x6884) == param_1) {
        if (((*(uint *)(lVar6 + 0x68b8) & 0xfffffffe) == 6) && (*(int *)(lVar6 + 0x68bc) - 1U < 2))
        {
          if ((*(uint *)(lVar6 + 0x68b8) != 7) && (*(int *)(lVar6 + 0x68c0) != 0)) {
            uVar5 = FUN_1001cc310();
            cVar3 = _os_log_type_enabled(uVar5,0x10);
            if (cVar3 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = 
              "(device->recoveryPhase == RawIPodDevice::kSendingReWTF) || (device->securityEpochForReWTF == 0)"
              ;
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            FUN_1001782e9(0,0);
            *(undefined4 *)(lVar6 + 0x68c0) = 0;
          }
          iVar4 = FUN_1005efbe6(4,lVar6,&local_5a);
          sVar2 = local_5a;
          if (iVar4 != 0) {
            *(undefined4 *)(lVar6 + 0x68bc) = 3;
            iVar1 = *(int *)(lVar6 + 0x6898);
            FUN_1005e73f0(&local_58,lVar6);
            FUN_100216f84((iVar1 == 1) + '\x01',(int)sVar2,0,iVar4,&local_58,0);
            FUN_1001b7a50(&local_58);
          }
        }
        else {
          uVar5 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar5,0x10);
          if (cVar3 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = 
            "((device->recoveryPhase == RawIPodDevice::kSendingWTF) || (device->recoveryPhase == RawIPodDevice::kSendingReWTF)) && device->IsWaitingMobileDevice()"
            ;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
        }
        goto LAB_1005efabb;
      }
      lVar6 = *(long *)(lVar6 + 0x6878);
    } while (lVar6 != 0);
  }
  uVar5 = FUN_1001cc310();
  cVar3 = _os_log_type_enabled(uVar5,0x10);
  if (cVar3 != '\0') {
    local_58 = 0x8220202;
    local_54 = "Assertion failure";
    local_4c = 0x822;
    local_4a = "device != nullptr";
    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
  }
  FUN_1001782e9(0,0);
LAB_1005efabb:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

