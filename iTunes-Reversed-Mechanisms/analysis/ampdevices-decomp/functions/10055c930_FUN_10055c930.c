// name: FUN_10055c930
// address: 10055c930

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10055c930(long param_1,long param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  double dVar11;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined6 uStack_68;
  undefined2 uStack_62;
  undefined8 uStack_60;
  undefined2 local_58;
  undefined6 uStack_56;
  undefined2 uStack_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_1001c19de();
  if (cVar1 != '\0') {
    if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
      FUN_10017060f(*(undefined8 *)(param_1 + 0x30));
      return;
    }
    goto LAB_10055cfad;
  }
  cVar1 = FUN_100263428(param_2);
  if (cVar1 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_78 = 0x8220202;
      uStack_74 = 0x7a0a90;
      uStack_70 = 1;
      uStack_6c = 0x822;
      uStack_6a = 0x5c16;
      uStack_68 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
    FUN_1001782e9(0,0);
    FUN_10017060f(*(undefined8 *)(param_1 + 0x30));
  }
  else {
    if (*(char *)(param_2 + 0x6df9) == '\0') {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_78 = 0x8220202;
        uStack_74 = 0x7a0a90;
        uStack_70 = 1;
        uStack_6c = 0x822;
        uStack_6a = 0x79f2;
        uStack_68 = 0x1007e;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
      }
      FUN_1001782e9(0,0);
    }
    if (*(long *)(param_1 + 0x30) == 0) {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_78 = 0x8220202;
        uStack_74 = 0x7a0a90;
        uStack_70 = 1;
        uStack_6c = 0x822;
        uStack_6a = 0x7a11;
        uStack_68 = 0x1007e;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
      }
      FUN_1001782e9(0x400,0);
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar4 = DAT_1008c75b8;
      cVar1 = _os_log_type_enabled(DAT_1008c75b8,0x10);
      if (cVar1 != '\0') {
        local_78 = 0x8420302;
        uStack_74 = (undefined4)*(undefined8 *)(param_2 + 0x6dc8);
        uStack_70 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x6dc8) >> 0x20);
        uStack_6c = 0x800;
        uStack_6a = (undefined2)*(undefined8 *)(param_2 + 0x6e10);
        uStack_68 = (undefined6)((ulong)*(undefined8 *)(param_2 + 0x6e10) >> 0x10);
        uStack_62 = 0x400;
        uStack_60 = CONCAT44(uStack_60._4_4_,*(undefined4 *)(param_1 + 0x24));
        pcVar10 = "AMDevicePowerAssertionCreate failed for device %{public}@ (%p) (0x%08X)";
        uVar8 = 0x10;
        uVar9 = 0x1c;
LAB_10055cda0:
        __os_log_impl(0x100000000,uVar4,uVar8,pcVar10,&local_78,uVar9);
      }
    }
    else {
      cVar1 = *(char *)(param_2 + 0x6df8);
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar4 = DAT_1008c75b8;
      cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar1 == '\0') {
        if (cVar2 != '\0') {
          iVar3 = _AMDeviceGetInterfaceType(*(undefined8 *)(param_2 + 0x6e10));
          pcVar10 = "UNKNOWN";
          if (iVar3 == 2) {
            pcVar10 = "WiFi";
          }
          pcVar7 = "USB";
          if (iVar3 != 1) {
            pcVar7 = pcVar10;
          }
          uStack_60 = *(undefined8 *)(param_2 + 0x6e10);
          local_78 = 0x8220302;
          uStack_74 = SUB84(pcVar7,0);
          uStack_70 = (undefined4)((ulong)pcVar7 >> 0x20);
          uStack_6c = 0x842;
          uStack_6a = (undefined2)*(undefined8 *)(param_2 + 0x6dc8);
          uStack_68 = (undefined6)((ulong)*(undefined8 *)(param_2 + 0x6dc8) >> 0x10);
          uStack_62 = 0x800;
          pcVar10 = 
          "support> releasing power assertion for %{public}s interface for device %{public}@ (%p) since power assertion is not enabled"
          ;
          uVar8 = 1;
          uVar9 = 0x20;
          goto LAB_10055cda0;
        }
      }
      else {
        if (cVar2 != '\0') {
          pcVar10 = "refreshed";
          if (*(long *)(param_2 + 0x6e08) == 0) {
            pcVar10 = "created";
          }
          iVar3 = _AMDeviceGetInterfaceType(*(undefined8 *)(param_2 + 0x6e10));
          pcVar7 = "UNKNOWN";
          if (iVar3 == 2) {
            pcVar7 = "WiFi";
          }
          pcVar5 = "USB";
          if (iVar3 != 1) {
            pcVar5 = pcVar7;
          }
          uStack_60 = *(undefined8 *)(param_2 + 0x6dc8);
          local_78 = 0x8220402;
          uStack_74 = SUB84(pcVar10,0);
          uStack_70 = (undefined4)((ulong)pcVar10 >> 0x20);
          uStack_6c = 0x822;
          uStack_6a = SUB82(pcVar5,0);
          uStack_68 = (undefined6)((ulong)pcVar5 >> 0x10);
          uStack_62 = 0x842;
          local_58 = 0x800;
          uStack_56 = (undefined6)*(undefined8 *)(param_2 + 0x6e10);
          uStack_50 = (undefined2)((ulong)*(undefined8 *)(param_2 + 0x6e10) >> 0x30);
          __os_log_impl(0x100000000,uVar4,1,
                        "support> %{public}s power assertion for %{public}s interface for device %{public}@ (%p)"
                        ,&local_78,0x2a);
        }
        uVar4 = FUN_1001705fc(*(undefined8 *)(param_1 + 0x30));
        FUN_10017060f(*(undefined8 *)(param_2 + 0x6e08));
        *(undefined8 *)(param_2 + 0x6e08) = uVar4;
        if (*(long *)(param_2 + 0x6e18) != 0) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_78 = 0x8220202;
            uStack_74 = 0x7e7a4e;
            uStack_70 = 1;
            uStack_6c = 0x822;
            uStack_6a = 0x7a76;
            uStack_68 = 0x1007e;
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
          }
          cVar1 = FUN_1001782e9(0,0);
          if (cVar1 == '\0') {
            if (DAT_1008c75c0 != -1) {
              _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
            }
            uVar4 = DAT_1008c75b8;
            cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
            if (cVar1 != '\0') {
              local_78 = 0x8000100;
              uStack_74 = (undefined4)*(undefined8 *)(param_2 + 0x6e18);
              uStack_70 = (undefined4)((ulong)*(undefined8 *)(param_2 + 0x6e18) >> 0x20);
              __os_log_impl(0x100000000,uVar4,1,"support> already have power assertion timer %p",
                            &local_78,0xc);
            }
            FUN_100172ddf(*(undefined8 *)(param_2 + 0x6e18));
            FUN_10017060f(*(undefined8 *)(param_2 + 0x6e18));
            *(undefined8 *)(param_2 + 0x6e18) = 0;
          }
        }
        uVar4 = DAT_1008c4d90;
        local_78 = 0;
        uStack_74 = 0;
        uStack_68 = 0;
        uStack_62 = 0;
        uStack_60 = 0;
        local_58 = 0;
        uStack_56 = 0;
        uStack_70 = (undefined4)param_2;
        uStack_6c = (undefined2)((ulong)param_2 >> 0x20);
        uStack_6a = (undefined2)((ulong)param_2 >> 0x30);
        dVar11 = (double)FUN_1001711e2();
        lVar6 = FUN_100172d93(dVar11 + _DAT_100756498,0,uVar4,0,0,FUN_10055cfb2,&local_78);
        *(long *)(param_2 + 0x6e18) = lVar6;
        if (lVar6 == 0) {
          uVar4 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar4,0x10);
          if (cVar1 != '\0') {
            local_48 = 0x8220202;
            local_44 = "Assertion failure";
            local_3c = 0x822;
            local_3a = "iPod->powerAssertionTimerRef != nullptr";
            __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
        }
        uVar4 = FUN_1001727a0();
        FUN_100172b4b(uVar4,*(undefined8 *)(param_2 + 0x6e18),
                      *(undefined8 *)PTR__kCFRunLoopCommonModes_10082e110);
        FUN_100172863(uVar4);
      }
    }
    FUN_10017060f(*(undefined8 *)(param_1 + 0x30));
    *(undefined1 *)(param_2 + 0x6df9) = 0;
    FUN_100264ec8(param_2);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
LAB_10055cfad:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

