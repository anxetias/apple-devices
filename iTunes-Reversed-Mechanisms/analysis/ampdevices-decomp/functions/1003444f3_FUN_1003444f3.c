// name: FUN_1003444f3
// address: 1003444f3

undefined4
FUN_1003444f3(long param_1,undefined8 param_2,undefined4 param_3,long param_4,undefined8 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 local_478 [1056];
  undefined4 local_58;
  undefined4 local_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 local_4c;
  int local_4a;
  undefined4 uStack_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 == 0) {
    iVar3 = FUN_100347c5b(param_1,&cf_Artwork,local_478);
    uVar4 = 3;
    iVar2 = local_4a;
    if (iVar3 == -0x80) goto LAB_100344825;
    if (iVar3 == 0) {
      iVar3 = FUN_100348713(param_1,param_2,param_3,param_5,local_478,FUN_10034943e,0);
      if (iVar3 == -0x80) {
        uVar4 = 0x10;
        iVar2 = local_4a;
        goto LAB_100344825;
      }
      if (iVar3 == 0) goto LAB_100344649;
      uVar7 = FUN_1001cc310();
      uVar4 = 0x10;
      cVar1 = _os_log_type_enabled(uVar7,0x10);
      iVar2 = local_4a;
    }
    else {
      uVar7 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar7,0x10);
      iVar2 = local_4a;
    }
    local_4a = iVar3;
    if (cVar1 != '\0') {
      local_4c = 0x400;
      uStack_4e = 0;
      uStack_50 = 1;
      local_54 = 0x7a0a90;
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      iVar2 = local_4a;
    }
  }
  else {
    lVar5 = FUN_100347f79(param_1,param_3,0);
    if (lVar5 == 0) {
      uVar7 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar7,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4e = 0;
        local_4c = 0x822;
        local_4a = 0x7c1dc6;
        uStack_46 = 1;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar7 = DAT_1008c75b8;
      uVar4 = 0x10;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      iVar2 = local_4a;
      if (cVar1 != '\0') {
        local_58 = 0x4000202;
        uStack_50 = 0x842;
        uStack_4e = (undefined2)param_2;
        local_4c = (undefined2)((ulong)param_2 >> 0x10);
        local_4a = (int)((ulong)param_2 >> 0x20);
        local_54 = param_3;
        __os_log_impl(0x100000000,uVar7,0x10,
                      "airtraffic> failed to find track for artwork record id %u, asset identifier \"%{public}@\""
                      ,&local_58,0x12);
        iVar2 = local_4a;
      }
      goto LAB_100344825;
    }
    lVar6 = FUN_100597c13(lVar5,0);
    if (lVar6 == 0) {
      uVar7 = FUN_1001cc310();
      uVar4 = 0x10;
      cVar1 = _os_log_type_enabled(uVar7,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4e = 0;
        local_4c = 0x822;
        local_4a = 0x7c1de5;
        uStack_46 = 1;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      iVar2 = local_4a;
      goto LAB_100344825;
    }
    FUN_100476928(lVar5,local_478);
    iVar2 = FUN_100406f46(*(undefined8 *)(param_1 + 0x30),0x61727477,param_2,local_478,
                          *(undefined4 *)(lVar6 + 0x78),FUN_100348262,0,FUN_100347b55,0);
    if (iVar2 != -0x80) {
      if (iVar2 == 0) {
        FUN_1001714de(*(undefined8 *)(param_1 + 0x167f0),param_2,param_4);
LAB_100344649:
        uVar4 = 0;
        iVar2 = local_4a;
        goto LAB_100344825;
      }
      uVar7 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar7,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4e = 0;
        local_4c = 0x400;
        local_4a = iVar2;
        __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar7 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8420102;
      local_54 = (undefined4)param_2;
      uStack_50 = (undefined2)((ulong)param_2 >> 0x20);
      uStack_4e = (undefined2)((ulong)param_2 >> 0x30);
      __os_log_impl(0x100000000,uVar7,0x10,
                    "airtraffic> failed to queue promised artwork data for track asset identifier \"%{public}@\""
                    ,&local_58,0xc);
    }
    uVar4 = FUN_10032f3b4(iVar2);
    iVar2 = local_4a;
  }
LAB_100344825:
  local_4a = iVar2;
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

