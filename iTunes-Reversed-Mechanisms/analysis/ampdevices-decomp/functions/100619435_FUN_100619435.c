// name: FUN_100619435
// address: 100619435

undefined8
FUN_100619435(undefined8 param_1,char *param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *param_5)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_68;
  undefined8 local_64;
  undefined4 local_58;
  int local_54;
  undefined2 uStack_50;
  undefined2 uStack_4e;
  undefined2 uStack_4c;
  undefined2 local_4a;
  undefined6 uStack_48;
  undefined2 uStack_42;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*param_2 != '\0') goto LAB_1006195aa;
  lVar3 = FUN_100165eef(DAT_1008c4d90,param_1,0,0);
  if (lVar3 == 0) {
    uVar6 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar6,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4e = 0;
      uStack_4c = 0x822;
      local_4a = 0x4b75;
      uStack_48 = 0x1007f;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
LAB_100619597:
    lVar4 = 0;
  }
  else {
    lVar4 = _MISProfileCreateWithData(DAT_1008c4d90,lVar3);
    if (lVar4 == 0) {
      uVar6 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar6,0x10);
      if (cVar1 != '\0') {
        local_58 = 0x8220202;
        local_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4e = 0;
        uStack_4c = 0x822;
        local_4a = 0x4b8c;
        uStack_48 = 0x1007f;
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      goto LAB_100619597;
    }
    iVar2 = _MISProvisioningProfileCheckValidity(lVar4,param_5[1],0);
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar6 = DAT_1008c75b8;
    if (iVar2 == 0) {
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar1 != '\0') {
        FUN_1001b8dfc(&local_58,param_3);
        local_64 = FUN_1001b83ae(&local_58);
        local_68 = 0x8220102;
        __os_log_impl(0x100000000,uVar6,1,
                      "sync> MISProvisioningProfileCheckValidity succeeded for \"%{public}s\"",
                      &local_68,0xc);
        FUN_1001b7a50(&local_58);
      }
      FUN_1001709a5(*param_5,lVar4);
    }
    else {
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar1 != '\0') {
        FUN_1001b8dfc(&local_68,param_3);
        uVar5 = FUN_1001b83ae(&local_68);
        local_58 = 0x4000302;
        uStack_50 = 0x400;
        uStack_4e = (undefined2)iVar2;
        uStack_4c = (undefined2)((uint)iVar2 >> 0x10);
        local_4a = 0x822;
        uStack_48 = (undefined6)uVar5;
        uStack_42 = (undefined2)((ulong)uVar5 >> 0x30);
        local_54 = iVar2;
        __os_log_impl(0x100000000,uVar6,0x10,
                      "sync> MISProvisioningProfileCheckValidity failed (%d / 0x%08X) for \"%{public}s\""
                      ,&local_58,0x18);
        FUN_1001b7a50(&local_68);
      }
    }
  }
  FUN_10017060f(lVar4);
  FUN_10017060f(lVar3);
LAB_1006195aa:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

