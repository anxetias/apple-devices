// name: FUN_100578a84
// address: 100578a84

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_100578a84(long param_1,long param_2)

{
  undefined4 uVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  double dVar10;
  double dVar11;
  long local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x30) != 0) {
    *(undefined8 *)(param_1 + 0x30) = 0;
    _CFRelease();
  }
  if (param_2 != 0) {
    iVar4 = _AMDServiceConnectionSendMessage(*(undefined8 *)(param_1 + 0x20),param_2,200,0);
    if (iVar4 == -0x80) goto LAB_100578d6c;
    if (iVar4 != 0) {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 == '\0') goto LAB_100578d6c;
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
      goto LAB_100578d22;
    }
  }
  FUN_1001ee7b6(500);
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  iVar4 = 30000000;
  do {
    iVar5 = FUN_1001ebcfb();
    sVar3 = FUN_1001d260e(uVar1,0,100000);
    if (0 < sVar3) {
      local_50 = 0;
      dVar10 = (double)FUN_1001ebd46();
      dVar10 = dVar10 + _DAT_100756e48;
      goto LAB_100578b78;
    }
    iVar6 = FUN_1001ebcfb();
    iVar4 = iVar4 + (iVar5 - iVar6);
  } while (0 < iVar4);
  uVar7 = FUN_1001cc310();
  cVar2 = _os_log_type_enabled(uVar7,0x10);
  if (cVar2 != '\0') {
    local_48 = 0x8220202;
    uStack_44 = 0x7a0a90;
    uStack_40 = 1;
    local_3c = 0x822;
    local_3a = "ITAMDServiceConnectionSocketHasData(mSocket, true)";
    __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
  }
  FUN_1001782e9(0,0);
  iVar4 = 0x68a;
LAB_100578d6c:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
LAB_100578b78:
  iVar4 = _AMDServiceConnectionReceiveMessage(*(undefined8 *)(param_1 + 0x20),&local_50,0,0);
  if (iVar4 != -0x17ffffd2) goto LAB_100578bb2;
  dVar11 = (double)FUN_1001ebd46();
  if (dVar10 <= dVar11) goto LAB_100578cda;
  FUN_1001ee7b6(10);
  goto LAB_100578b78;
LAB_100578bb2:
  if (iVar4 == -0x80) goto LAB_100578d6c;
  if (iVar4 == 0) {
    lVar8 = FUN_1001705e9(local_50);
    lVar9 = FUN_1001713f5();
    if (lVar8 == lVar9) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar7 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar2 != '\0') {
        local_48 = 0x8400102;
        uStack_44 = (undefined4)local_50;
        uStack_40 = (undefined4)((ulong)local_50 >> 0x20);
        __os_log_impl(0x100000000,uVar7,1,"skynet> received dictionary message %@",&local_48,0xc);
      }
      lVar8 = local_50;
      local_48 = (undefined4)local_50;
      uStack_44 = (undefined4)((ulong)local_50 >> 0x20);
      if (local_50 != 0) {
        _CFRetain(local_50);
      }
      if (*(long *)(param_1 + 0x30) != 0) {
        _CFRelease();
        lVar8 = CONCAT44(uStack_44,local_48);
      }
      *(long *)(param_1 + 0x30) = lVar8;
      local_48 = 0;
      uStack_44 = 0;
      FUN_10026340c();
      iVar4 = FUN_100167d23(*(undefined8 *)(param_1 + 0x30),&cf_status);
    }
    else {
      uVar7 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar7,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7a0a90;
        uStack_40 = 1;
        local_3c = 0x822;
        local_3a = "JRCFGetTypeID(propertyList) == JRCFDictionaryGetTypeID()";
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      iVar4 = -0x32;
      FUN_1001782e9(0,0);
    }
    FUN_10017060f(local_50);
    goto LAB_100578d6c;
  }
LAB_100578cda:
  uVar7 = FUN_1001cc310();
  cVar2 = _os_log_type_enabled(uVar7,0x10);
  if (cVar2 == '\0') goto LAB_100578d6c;
  local_3a = (char *)CONCAT44(local_3a._4_4_,iVar4);
LAB_100578d22:
  local_3c = 0x400;
  uStack_40 = 1;
  uStack_44 = 0x7a0a90;
  local_48 = 0x8220202;
  __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_48,0x12);
  goto LAB_100578d6c;
}

