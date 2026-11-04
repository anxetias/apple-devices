// name: FUN_100210fd2
// address: 100210fd2

ulong FUN_100210fd2(long param_1,int *param_2)

{
  long lVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 unaff_RBX;
  ulong uVar5;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (int *)0x0) {
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_3a = "outUSBLocationID != nullptr";
LAB_1002110cb:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
  }
  else {
    uVar5 = CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
    if (*param_2 != -1) goto LAB_1002110fb;
    lVar1 = *(long *)(param_1 + 0x21c0);
    if ((((uint)(*(long *)(param_1 + 0x21c8) != 0) - (uint)(lVar1 == 0)) + 2) -
        (uint)(*(long *)(param_1 + 0x21d0) == 0) == 1) {
      if (lVar1 == 0) {
        if (*(long *)(param_1 + 0x21c8) == 0) {
          iVar3 = _AMRecoveryModeDeviceGetLocationID(*(long *)(param_1 + 0x21d0));
        }
        else {
          iVar3 = _AMDFUModeDeviceGetLocationID();
        }
      }
      else {
        iVar3 = _AMDeviceUSBLocationID(lVar1);
      }
      if (iVar3 == 0) {
        uVar4 = FUN_1001cc310();
        cVar2 = _os_log_type_enabled(uVar4,0x10);
        if (cVar2 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = "usbLocationID != 0";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      *param_2 = iVar3;
      goto LAB_1002110fb;
    }
    uVar4 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar4,0x10);
    if (cVar2 != '\0') {
      local_3a = 
      "((UInt32)(mMobileDeviceRef != nullptr) + (UInt32)(mDFUDeviceRef != nullptr) + (UInt32)(mRecoveryDeviceRef != nullptr)) == 1"
      ;
      goto LAB_1002110cb;
    }
  }
  uVar5 = 0;
  FUN_1001782e9(0,0);
LAB_1002110fb:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar5 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

