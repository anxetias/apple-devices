// name: FUN_100609fbb
// address: 100609fbb

int FUN_100609fbb(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 local_60 [23];
  char local_49;
  undefined4 local_48;
  int local_44;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  int iStack_3a;
  undefined4 uStack_36;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar2 = *(long *)(param_1 + 0x10);
  local_49 = '\0';
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar9 = DAT_1008c75b8;
  cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar5 != '\0') {
    iVar7 = *(int *)(param_1 + 0x40);
    FUN_1006064a6(local_60,iVar7);
    uVar8 = FUN_1001b83ae(local_60);
    local_48 = 0x4000202;
    uStack_40 = 0x822;
    uStack_3e = (undefined2)uVar8;
    uStack_3c = (undefined2)((ulong)uVar8 >> 0x10);
    iStack_3a = (int)((ulong)uVar8 >> 0x20);
    local_44 = iVar7;
    __os_log_impl(0x100000000,uVar9,1,"sync> reverse sync options = 0x%08X (%{public}s)",&local_48,
                  0x12);
    FUN_1001b7a50(local_60);
  }
  uVar1 = *(uint *)(param_1 + 0x40);
  uVar6 = FUN_10060586b(lVar2);
  uVar6 = uVar6 & uVar1;
  if (uVar6 != *(uint *)(param_1 + 0x40)) {
    uVar9 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar9,0x10);
    if (cVar5 != '\0') {
      local_48 = 0x8220202;
      local_44 = 0x7a0a90;
      uStack_40 = 1;
      uStack_3e = 0;
      uStack_3c = 0x822;
      iStack_3a = 0x7f4b9f;
      uStack_36 = 1;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    uVar6 = *(uint *)(param_1 + 0x40);
  }
  *(undefined1 *)(lVar2 + 0x6ad0) = 1;
  if ((uVar6 & 0x183) == 0) {
LAB_10060a0dc:
    iVar7 = 0;
  }
  else {
    iVar7 = FUN_100619719(param_1,&local_49);
    if (iVar7 != -0x80) {
      if (iVar7 == 0) {
        if (local_49 != '\0') {
          *(undefined1 *)(param_1 + 0x4db) = 1;
        }
        goto LAB_10060a0dc;
      }
      uVar9 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar9,0x10);
      if (cVar5 != '\0') {
        local_48 = 0x8220202;
        local_44 = 0x7a0a90;
        uStack_40 = 1;
        uStack_3e = 0;
        uStack_3c = 0x400;
        iStack_3a = iVar7;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar9 = DAT_1008c75b8;
    cVar5 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar5 != '\0') {
      local_48 = 0x4000100;
      local_44 = iVar7;
      __os_log_impl(0x100000000,uVar9,1,"sync> ReverseSyncPurchasedTracks failed (%d)",&local_48,8);
    }
  }
  lVar3 = *(long *)(param_1 + 0x10);
  lVar4 = *(long *)(lVar3 + 0x6750);
  if (lVar4 != 0) {
    FUN_100529664(lVar4,0,0);
  }
  *(undefined2 *)(lVar3 + 0x67bc) = 0;
  *(undefined4 *)(param_1 + 0x458) = 0;
  *(undefined8 *)(param_1 + 0x460) = 0;
  *(undefined8 *)(param_1 + 0x468) = 0;
  if (*(char *)(lVar2 + 0x6ad0) == '\0') {
    uVar9 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar9,0x10);
    if (cVar5 != '\0') {
      local_48 = 0x8220202;
      local_44 = 0x7a0a90;
      uStack_40 = 1;
      uStack_3e = 0;
      uStack_3c = 0x822;
      iStack_3a = 0x7f4c20;
      uStack_36 = 1;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  *(undefined1 *)(lVar2 + 0x6ad0) = 0;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

