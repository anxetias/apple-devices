// name: FUN_10036be72
// address: 10036be72

void FUN_10036be72(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar3 = FUN_10036faf9();
  if (lVar3 == 0) goto LAB_10036c0c8;
  FUN_1001e9de0(&DAT_1008bddd0);
  iVar2 = _AMDeviceGetInterfaceType(param_1);
  cVar1 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
  if (iVar2 == 2) {
    if (*(long *)(lVar3 + 0x638) == 0) {
      if (cVar1 != '\0') {
        local_44 = *(char **)(lVar3 + 0x6a8);
        pcVar5 = "lost WiFi interface, do not have USB interface for device %{public}@";
        goto LAB_10036bf88;
      }
    }
    else if (cVar1 != '\0') {
      local_44 = *(char **)(lVar3 + 0x6a8);
      pcVar5 = "lost WiFi interface, still have USB interface for device %{public}@";
LAB_10036bf88:
      local_48 = 0x8420102;
      __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,pcVar5,&local_48,0xc);
    }
    lVar6 = lVar3 + 0x670;
    cVar1 = FUN_100170633(*(undefined8 *)(lVar3 + 0x670),param_1);
    if (cVar1 == '\0') {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_3a = "JRCFEqual(afcVolumeInfo->wifi.device, device)";
LAB_10036c118:
        local_3c = 0x822;
        local_44 = "Assertion failure";
        local_48 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
LAB_10036c072:
      FUN_1001782e9(0,0);
    }
  }
  else {
    if (*(long *)(lVar3 + 0x670) == 0) {
      if (cVar1 != '\0') {
        local_44 = *(char **)(lVar3 + 0x6a8);
        pcVar5 = "lost USB interface, do not have WiFi interface for device %{public}@";
        goto LAB_10036c02b;
      }
    }
    else if (cVar1 != '\0') {
      local_44 = *(char **)(lVar3 + 0x6a8);
      pcVar5 = "lost USB interface, still have WiFi interface for device %{public}@";
LAB_10036c02b:
      local_48 = 0x8420102;
      __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,pcVar5,&local_48,0xc);
    }
    lVar6 = lVar3 + 0x638;
    cVar1 = FUN_100170633(*(undefined8 *)(lVar3 + 0x638),param_1);
    if (cVar1 == '\0') {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_3a = "JRCFEqual(afcVolumeInfo->usb.device, device)";
        goto LAB_10036c118;
      }
      goto LAB_10036c072;
    }
  }
  FUN_1003795cb(lVar6,1);
  if (*(long *)(lVar3 + 0x638) == 0) {
    lVar6 = *(long *)(lVar3 + 0x670);
    FUN_1001e9eb9(&DAT_1008bddd0);
    if (lVar6 == 0) {
      FUN_10036d4d2(lVar3);
    }
  }
  else {
    FUN_1001e9eb9(&DAT_1008bddd0);
  }
  FUN_10036d4d2(lVar3);
LAB_10036c0c8:
  FUN_1003703a4(param_1,0x61666364,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

