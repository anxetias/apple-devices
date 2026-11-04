// name: FUN_10036b63c
// address: 10036b63c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10036b63c(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  char *pcVar10;
  long lVar11;
  char *pcVar12;
  undefined8 local_a8;
  long local_a0;
  undefined4 local_98;
  int iStack_94;
  undefined2 local_90;
  undefined2 local_8e;
  undefined2 uStack_8c;
  int iStack_8a;
  int iStack_86;
  undefined2 local_82;
  char *local_80;
  undefined2 local_78;
  undefined8 local_76;
  undefined2 local_6e;
  undefined8 local_6c;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar7 = FUN_10036fbfc(param_1,local_48,local_58);
  if (iVar7 != 0) {
    cVar5 = _os_log_type_enabled(PTR___os_log_default_10082cb88,0x10);
    iVar4 = iStack_8a;
    iVar1 = iStack_94;
    iStack_94 = (int)param_1;
    iVar2 = iStack_94;
    iStack_8a = (int)((ulong)param_1 >> 0x20);
    iVar3 = iStack_8a;
    iStack_94 = iVar1;
    if (cVar5 != '\0') {
      uVar8 = _AMDeviceCopyDeviceIdentifier(param_1);
      FUN_1001aaedc(&local_a0,uVar8);
      local_98 = 0x8420302;
      iStack_94 = (int)local_a0;
      local_90 = (undefined2)((ulong)local_a0 >> 0x20);
      local_8e = (undefined2)((ulong)local_a0 >> 0x30);
      uStack_8c = 0x800;
      local_82 = 0x400;
      local_80 = (char *)CONCAT44(local_80._4_4_,iVar7);
      iStack_86 = iStack_8a;
      iStack_8a = iVar2;
      __os_log_error_impl(0x100000000,PTR___os_log_default_10082cb88,0x10,
                          "failed to open AFC connection with device %{public}@ (%p) (0x%08X)",
                          &local_98,0x1c);
      FUN_1001ab006(&local_a0);
      iVar4 = iStack_8a;
    }
    iStack_8a = iVar4;
    uVar8 = FUN_10039a28c();
    cVar5 = FUN_1002d6e80(uVar8,2);
    if (cVar5 != '\0') {
      uVar8 = _AMDeviceCopyDeviceIdentifier(param_1);
      FUN_1001aaedc(&local_98,uVar8);
      _AMRLog(5,&cf_receivedkAMDeviceAttachedaction_device____p__AFCerror__X,
              CONCAT44(iStack_94,local_98),param_1,iVar7);
      FUN_1001ab006(&local_98);
    }
    if (iVar7 == -0x17ffffe6) {
      cVar5 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
      if (cVar5 != '\0') {
        local_98 = 0x4000200;
        iStack_94 = 5;
        local_90 = 0x800;
        local_8e = (undefined2)param_1;
        uStack_8c = (undefined2)((ulong)param_1 >> 0x10);
        iStack_8a = iVar3;
        __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,
                      "waiting for %d seconds for device %p to unlock",&local_98,0x12);
      }
      iVar7 = _AMDeviceIsValid(param_1);
      if (iVar7 == 0) {
        cVar5 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
        if (cVar5 != '\0') {
          local_98 = 0x8000100;
          local_90 = (undefined2)((ulong)param_1 >> 0x20);
          local_8e = (undefined2)((ulong)param_1 >> 0x30);
          iStack_94 = iVar2;
          __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,"device %p no longer valid",
                        &local_98,0xc);
        }
      }
      else {
        uVar8 = FUN_1001705fc(param_1);
        FUN_1001ee941(_DAT_100710490,0,0,0,FUN_10037921b,uVar8,0);
      }
    }
    else if ((iVar7 == -0x17ffffd8) && (DAT_1008bde70 != (code *)0x0)) {
      (*DAT_1008bde70)(param_1,1,DAT_1008bde78);
    }
    goto LAB_10036babd;
  }
  local_a0 = 0;
  cVar5 = _os_log_type_enabled(PTR___os_log_default_10082cb88,2);
  if (cVar5 != '\0') {
    iVar7 = _AMDeviceGetInterfaceType(param_1);
    pcVar10 = "UNKNOWN";
    if (iVar7 == 2) {
      pcVar10 = "WiFi";
    }
    pcVar12 = "USB";
    if (iVar7 != 1) {
      pcVar12 = pcVar10;
    }
    uVar8 = _AMDeviceCopyDeviceIdentifier(param_1);
    FUN_1001aaedc(&local_a8,uVar8);
    local_98 = 0x8000502;
    iStack_94 = (int)local_58._0_8_;
    local_90 = SUB82(local_58._0_8_,4);
    local_8e = SUB82(local_58._0_8_,6);
    uStack_8c = 0x800;
    iStack_8a = (int)local_58._8_8_;
    iStack_86 = SUB84(local_58._8_8_,4);
    local_82 = 0x822;
    local_78 = 0x842;
    local_76 = local_a8;
    local_6e = 0x800;
    local_80 = pcVar12;
    local_6c = param_1;
    __os_log_debug_impl(0x100000000,PTR___os_log_default_10082cb88,2,
                        "created AFC connections %p, %p for %{public}s device %{public}@ (%p)",
                        &local_98,0x34);
    FUN_1001ab006(&local_a8);
  }
  lVar9 = FUN_10036b291(param_1);
  if ((lVar9 == 0) || (lVar9 = FUN_10036faf9(lVar9), local_a0 = lVar9, lVar9 == 0)) {
    iVar7 = FUN_10036fcd3(param_1,local_48,local_58,"/",0,&local_a0);
    lVar9 = local_a0;
    if (iVar7 != 0) {
      uVar8 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar8,0x10);
      if (cVar5 != '\0') {
        local_98 = 0x8220202;
        iStack_94 = 0x7a0a90;
        local_90 = 1;
        local_8e = 0;
        uStack_8c = 0x400;
        iStack_8a = iVar7;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: err == (%d)",&local_98,0x12);
      }
      goto LAB_10036babd;
    }
  }
  else {
    FUN_1001e9de0(&DAT_1008bddd0);
    iVar7 = _AMDeviceGetInterfaceType(param_1);
    cVar5 = _os_log_type_enabled(PTR___os_log_default_10082cb88,1);
    if (iVar7 == 2) {
      if (cVar5 != '\0') {
        uVar8 = *(undefined8 *)(lVar9 + 0x6a8);
        local_98 = 0x8420102;
        iStack_94 = (int)uVar8;
        local_90 = (undefined2)((ulong)uVar8 >> 0x20);
        local_8e = (undefined2)((ulong)uVar8 >> 0x30);
        __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,
                      "got WiFi interface, already have USB interface for device %{public}@",
                      &local_98,0xc);
      }
      lVar11 = 0x670;
      if (*(long *)(lVar9 + 0x638) == 0) {
        uVar8 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar8,0x10);
        if (cVar5 != '\0') {
          pcVar10 = "afcVolumeInfo->usb.device != nullptr";
LAB_10036bc46:
          uStack_8c = 0x822;
          local_8e = 0;
          local_90 = 1;
          iStack_94 = 0x7a0a90;
          local_98 = 0x8220202;
          iStack_8a = (int)pcVar10;
          iStack_86 = (int)((ulong)pcVar10 >> 0x20);
          __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
        }
LAB_10036ba3f:
        FUN_1001782e9(0,0);
      }
    }
    else {
      if (cVar5 != '\0') {
        uVar8 = *(undefined8 *)(lVar9 + 0x6a8);
        local_98 = 0x8420102;
        iStack_94 = (int)uVar8;
        local_90 = (undefined2)((ulong)uVar8 >> 0x20);
        local_8e = (undefined2)((ulong)uVar8 >> 0x30);
        __os_log_impl(0x100000000,PTR___os_log_default_10082cb88,1,
                      "got USB interface, already have WiFi interface for device %{public}@",
                      &local_98,0xc);
      }
      lVar11 = 0x638;
      if (*(long *)(lVar9 + 0x670) == 0) {
        uVar8 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar8,0x10);
        if (cVar5 != '\0') {
          pcVar10 = "afcVolumeInfo->wifi.device != nullptr";
          goto LAB_10036bc46;
        }
        goto LAB_10036ba3f;
      }
    }
    FUN_1003706be(lVar9 + lVar11,param_1,local_48,local_58);
    FUN_1001e9eb9(&DAT_1008bddd0);
  }
  FUN_1003703a4(param_1,0x61666361,lVar9 + 0x10);
  FUN_10036d4d2(local_a0);
  uVar8 = FUN_10039a28c();
  bVar6 = FUN_1002d6e80(uVar8,2);
  if ((bVar6 & DAT_1008bde70 != (code *)0x0) == 1) {
    (*DAT_1008bde70)(param_1,0,DAT_1008bde78);
  }
LAB_10036babd:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

