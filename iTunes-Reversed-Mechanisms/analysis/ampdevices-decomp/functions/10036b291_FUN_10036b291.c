// name: FUN_10036b291
// address: 10036b291

undefined8 FUN_10036b291(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  long local_98;
  undefined8 local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  long local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined6 local_58;
  undefined2 uStack_52;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  int local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_90 = 0;
  iVar2 = _AMDeviceGetInterfaceType();
  if (1 < iVar2 - 1U) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      pcVar7 = 
      "interfaceType == kAMDeviceInterfaceConnectionTypeDirect || interfaceType == kAMDeviceInterfaceConnectionTypeIndirect"
      ;
LAB_10036b55b:
      uStack_5c = 0x822;
      local_60 = 1;
      uStack_64 = 0x7a0a90;
      local_68 = 0x8220202;
      uStack_5a = SUB82(pcVar7,0);
      local_58 = (undefined6)((ulong)pcVar7 >> 0x10);
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
LAB_10036b302:
    uVar6 = 0;
    FUN_1001782e9(0,0);
    goto LAB_10036b513;
  }
  if ((iVar2 == 1) && (DAT_1008c6718 == 0)) {
    uVar6 = 0;
    goto LAB_10036b513;
  }
  local_98 = _AMDeviceCopyDeviceIdentifier(param_1);
  if (local_98 == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      pcVar7 = "identifier != __null";
      goto LAB_10036b55b;
    }
    goto LAB_10036b302;
  }
  lVar3 = FUN_100170716(DAT_1008c4d90,&local_98,1,PTR__kCFTypeArrayCallBacks_10082e130);
  if (lVar3 == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      puVar9 = &local_68;
      local_68 = 0x8220202;
      uStack_64 = 0x7a0a90;
      local_60 = 1;
      uStack_5c = 0x822;
      pcVar7 = "identifiers != __null";
LAB_10036b60d:
      *(char **)((long)puVar9 + 0xe) = pcVar7;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",puVar9,0x16);
    }
LAB_10036b4dc:
    lVar4 = 0;
    FUN_1001782e9(0,0);
LAB_10036b4e8:
    uVar6 = 0;
  }
  else {
    local_68 = 0x87e470;
    uStack_64 = 1;
    local_88 = &cf_MatchAll;
    local_60 = 0x87e4b0;
    uStack_5c = 1;
    uStack_5a = 0;
    local_80 = &cf_MatchConnectionTypeUSB;
    if (iVar2 == 1) {
      local_80 = &cf_MatchConnectionTypeNetwork;
    }
    local_58 = 0x10087e510;
    uStack_52 = 0;
    local_78 = lVar3;
    lVar4 = FUN_1001713ff(DAT_1008c4d90,&local_68,&local_88,3,
                          PTR__kCFTypeDictionaryKeyCallBacks_10082e138,
                          PTR__kCFTypeDictionaryValueCallBacks_10082e140);
    if (lVar4 == 0) {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        puVar9 = &local_48;
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        pcVar7 = "query != __null";
        goto LAB_10036b60d;
      }
      goto LAB_10036b4dc;
    }
    puVar8 = &DAT_1008c6720;
    if (iVar2 == 1) {
      puVar8 = &DAT_1008c6718;
    }
    iVar2 = _AMDCopyArrayOfDevicesMatchingQuery(*puVar8,lVar4,&local_90);
    if (iVar2 == -0x80) goto LAB_10036b4e8;
    if (iVar2 != 0) {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x400;
        local_3a = iVar2;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
      goto LAB_10036b4e8;
    }
    lVar5 = FUN_10017076e(local_90);
    if (lVar5 < 1) goto LAB_10036b4e8;
    uVar6 = FUN_100170853(local_90,0);
  }
  FUN_10017060f(local_90);
  FUN_10017060f(lVar4);
  FUN_10017060f(lVar3);
  FUN_10017060f(local_98);
LAB_10036b513:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

