// name: FUN_10061eb39
// address: 10061eb39

void FUN_10061eb39(long *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined1 local_68 [16];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 uStack_4c;
  undefined4 uStack_4a;
  undefined4 uStack_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_78 = param_4;
  local_70 = param_3;
  if ((param_1 != (long *)0x0) && (*param_1 != param_1[1])) {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar2 = DAT_1008c75b8;
    cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar3 != '\0') {
      uVar6 = param_1[1] - *param_1 >> 3;
      if (uVar6 < 2) {
        lVar4 = FUN_1001b9294(param_2);
        FUN_1001ba6e0(local_68,param_2,0,lVar4 + -1);
      }
      else {
        FUN_1001b7a5c(local_68,param_2);
      }
      uVar5 = FUN_1001b83ae(local_68);
      local_58 = 0x4000202;
      uStack_54 = (undefined4)uVar6;
      local_50 = 0x822;
      local_4e = (undefined2)uVar5;
      uStack_4c = (undefined2)((ulong)uVar5 >> 0x10);
      uStack_4a = (undefined4)((ulong)uVar5 >> 0x20);
      __os_log_impl(0x100000000,uVar2,1,"sync> syncing %u %{public}s",&local_58,0x12);
      FUN_1001b7a50(local_68);
    }
    puVar7 = (undefined8 *)*param_1;
    if (puVar7 != (undefined8 *)param_1[1]) {
      do {
        local_80 = *puVar7;
        plVar1 = *(long **)(local_70 + 0x20);
        local_58 = (undefined4)local_78;
        uStack_54 = (undefined4)((ulong)local_78 >> 0x20);
        if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_10016bf14();
        }
        (**(code **)(*plVar1 + 0x30))(local_68,plVar1,&local_58,&local_80);
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar2 = DAT_1008c75b8;
        cVar3 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar3 != '\0') {
          uVar5 = FUN_1001b83ae(local_68);
          local_58 = 0x8220202;
          uStack_54 = (undefined4)uVar5;
          local_50 = (undefined2)((ulong)uVar5 >> 0x20);
          local_4e = (undefined2)((ulong)uVar5 >> 0x30);
          uStack_4c = 0x800;
          uStack_4a = (undefined4)*puVar7;
          uStack_46 = (undefined4)((ulong)*puVar7 >> 0x20);
          __os_log_impl(0x100000000,uVar2,1,"sync>  %{public}s (%llu)",&local_58,0x16);
        }
        FUN_1001b7a50(local_68);
        puVar7 = puVar7 + 1;
      } while (puVar7 != (undefined8 *)param_1[1]);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

