// name: FUN_100340288
// address: 100340288

void FUN_100340288(long param_1,uint param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  char cVar7;
  long lVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 uStack_40;
  undefined2 uStack_3e;
  undefined2 uStack_3c;
  undefined4 uStack_3a;
  undefined2 uStack_36;
  undefined2 uStack_34;
  undefined2 uStack_32;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*(uint *)(param_1 + 0x10) & param_2) == 0) goto LAB_1003403c3;
  uVar10 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined4 *)(param_1 + 0x18);
  cVar7 = FUN_100167740(param_3,uVar10);
  if (cVar7 == '\0') {
    lVar8 = FUN_100171475(param_3,uVar10);
    uVar5 = uStack_34;
    uVar3 = uStack_36;
    uVar1 = uStack_3a;
    uStack_36 = (undefined2)((ulong)uVar10 >> 0x20);
    uVar4 = uStack_36;
    uStack_34 = (undefined2)((ulong)uVar10 >> 0x30);
    uVar6 = uStack_34;
    uStack_3a = (undefined4)uVar10;
    uVar2 = uStack_3a;
    uStack_3a = uVar1;
    uStack_36 = uVar3;
    uStack_34 = uVar5;
    if (lVar8 == 0) {
      cVar7 = FUN_100170633(uVar10,&cf_VoiceMemo);
      if (cVar7 == '\0') {
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar11 = DAT_1008c75b8;
        cVar7 = _os_log_type_enabled(DAT_1008c75b8,0x10);
        if (cVar7 != '\0') {
          local_48 = 0x8420102;
          pcVar9 = "airtraffic> missing sync anchor for dataclass %{public}@";
          uVar10 = 0x10;
          uVar12 = 0xc;
          local_44 = uVar2;
          uStack_40 = uVar4;
          uStack_3e = uVar6;
          goto LAB_1003403b8;
        }
      }
    }
    else {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar11 = DAT_1008c75b8;
      cVar7 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar7 != '\0') {
        local_48 = 0x8420202;
        local_44 = (undefined4)lVar8;
        uStack_40 = (undefined2)((ulong)lVar8 >> 0x20);
        uStack_3e = (undefined2)((ulong)lVar8 >> 0x30);
        uStack_3c = 0x842;
        pcVar9 = "airtraffic> invalid sync anchor \"%{public}@\" for dataclass %{public}@";
        uVar10 = 0x10;
        uVar12 = 0x16;
        uStack_3a = uVar2;
        uStack_36 = uVar4;
        uStack_34 = uVar6;
        goto LAB_1003403b8;
      }
    }
  }
  else {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar11 = DAT_1008c75b8;
    cVar7 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar7 != '\0') {
      local_48 = 0x4000302;
      local_44 = 0;
      uStack_40 = 0x842;
      uStack_3e = (undefined2)uVar10;
      uStack_3c = (undefined2)((ulong)uVar10 >> 0x10);
      uStack_3a = (undefined4)((ulong)uVar10 >> 0x20);
      uStack_36 = 0x400;
      uStack_34 = (undefined2)uVar1;
      uStack_32 = (undefined2)((uint)uVar1 >> 0x10);
      pcVar9 = "airtraffic> got sync anchor %u for dataclass %{public}@, expected %u";
      uVar10 = 1;
      uVar12 = 0x18;
LAB_1003403b8:
      __os_log_impl(0x100000000,uVar11,uVar10,pcVar9,&local_48,uVar12);
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
LAB_1003403c3:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

