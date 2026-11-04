// name: FUN_1002fbbfc
// address: 1002fbbfc

ulong FUN_1002fbbfc(long param_1)

{
  long lVar1;
  int iVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined6 uVar5;
  undefined6 uVar6;
  char cVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 uStack_3c;
  undefined4 uStack_3a;
  undefined2 local_36;
  undefined2 local_34;
  undefined6 uStack_32;
  undefined2 local_2c;
  undefined4 local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_1002fbd0c:
    uVar8 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar8,0x10);
    if (cVar7 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      local_40 = 1;
      local_3e = 0;
      uStack_3c = 0x822;
      uStack_3a = 0x7bcfe4;
      local_36 = 1;
      local_34 = 0;
      __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    uVar9 = 0;
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar8 = FUN_1001cc310();
      cVar7 = _os_log_type_enabled(uVar8,0x10);
      if (cVar7 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7ab58c;
        local_40 = 1;
        local_3e = 0;
        uStack_3c = 0x822;
        uStack_3a = 0x7aec03;
        local_36 = 1;
        local_34 = 0;
        __os_log_error_impl(0x100000000,uVar8,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar7 = FUN_1001782e9(0,1);
      if (cVar7 == '\0') goto LAB_1002fbd0c;
    }
    uVar5 = uStack_32;
    uVar3 = local_34;
    local_34 = (undefined2)param_1;
    uVar4 = local_34;
    uStack_32 = (undefined6)((ulong)param_1 >> 0x10);
    uVar6 = uStack_32;
    local_34 = uVar3;
    uStack_32 = uVar5;
    if ((*(byte *)(param_1 + 0x1bb2) & 0x10) != 0) {
      if (DAT_1008c66e8 != -1) {
        _dispatch_once(&DAT_1008c66e8,&PTR___NSConcreteGlobalBlock_100853840);
      }
      uVar8 = DAT_1008c66e0;
      cVar7 = _os_log_type_enabled(DAT_1008c66e0,1);
      if (cVar7 != '\0') {
        lVar1 = param_1 + 0x84;
        local_2a = *(undefined4 *)(param_1 + 0x94);
        local_48 = 0x4100402;
        uStack_44 = 4;
        local_40 = 0x820;
        local_3e = (undefined2)lVar1;
        uStack_3c = (undefined2)((ulong)lVar1 >> 0x10);
        uStack_3a = (undefined4)((ulong)lVar1 >> 0x20);
        local_36 = 0x800;
        local_2c = 0x400;
        local_34 = uVar4;
        uStack_32 = uVar6;
        __os_log_impl(0x100000000,uVar8,1,"edit> END  \'%.4s\' %p (%d)",&local_48,0x22);
      }
    }
    iVar2 = *(int *)(param_1 + 0x94);
    *(int *)(param_1 + 0x94) = iVar2 + -1;
    if (iVar2 < 2) {
      if ((iVar2 != 1) && ((*(ulong *)(param_1 + 0x1bb0) & 0x80000) != 0)) {
        if (DAT_1008c66e8 != -1) {
          _dispatch_once(&DAT_1008c66e8,&PTR___NSConcreteGlobalBlock_100853840);
        }
        uVar8 = DAT_1008c66e0;
        cVar7 = _os_log_type_enabled(DAT_1008c66e0,0x10);
        if (cVar7 != '\0') {
          lVar1 = param_1 + 0x84;
          local_48 = 0x4120302;
          uStack_44 = 4;
          local_40 = 0x822;
          local_3e = (undefined2)lVar1;
          uStack_3c = (undefined2)((ulong)lVar1 >> 0x10);
          uStack_3a = (undefined4)((ulong)lVar1 >> 0x20);
          local_36 = 0x800;
          local_34 = uVar4;
          uStack_32 = uVar6;
          __os_log_impl(0x100000000,uVar8,0x10,
                        "edit> WARN \'%{public}.4s\' %p TrackDataDoneWithChanges() called without matching call to TrackDataBeginChanges()"
                        ,&local_48,0x1c);
        }
      }
      *(undefined4 *)(param_1 + 0x94) = 0;
      FUN_10031422c(param_1);
      uVar9 = CONCAT71((int7)((ulong)param_1 >> 8),1);
    }
    else {
      uVar9 = 0;
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar9 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

