// name: FUN_1004d5120
// address: 1004d5120

undefined8 FUN_1004d5120(long param_1,undefined8 param_2)

{
  char cVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  ulong uVar9;
  undefined1 local_90 [16];
  undefined1 local_80 [16];
  long local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined2 uStack_60;
  undefined2 uStack_5e;
  undefined2 uStack_5c;
  undefined4 uStack_5a;
  undefined2 uStack_56;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined4 uStack_50;
  undefined2 local_4c;
  long local_4a;
  undefined2 local_42;
  long local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar2 = FUN_10017076e(param_2);
  if (param_1 == 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = (ulong)*(uint *)(*(long *)(param_1 + 0x78) + 0x18);
  }
  local_70 = param_1;
  if (uVar2 == uVar9) {
    uVar5 = 1;
    if (uVar2 != 0) {
      uVar9 = 0;
      do {
        lVar3 = FUN_10016516d(param_2,uVar9);
        plVar4 = (long *)FUN_100380761(local_70,1,0,uVar9 & 0xffffffff);
        if (plVar4 == (long *)0x0) {
          uVar5 = FUN_1001cc310();
          cVar1 = _os_log_type_enabled(uVar5,0x10);
          if (cVar1 != '\0') {
            local_68 = 0x8220202;
            local_64 = 0x7a0a90;
            uStack_60 = 1;
            uStack_5e = 0;
            uStack_5c = 0x822;
            uStack_5a = 0x7b581f;
            uStack_56 = 1;
            uStack_54 = 0;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
          }
          FUN_1001782e9(0,0);
          goto LAB_1004d5359;
        }
        if (*plVar4 != lVar3) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar5 = DAT_1008c75b8;
          cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar1 == '\0') goto LAB_1004d5359;
          FUN_100476ac1(local_80,plVar4);
          uVar6 = FUN_1001b83ae(local_80);
          FUN_100486d8f(local_90,local_70);
          uVar7 = FUN_1001b83ae(local_90);
          local_4a = *plVar4;
          local_68 = 0x4000502;
          uStack_60 = 0x822;
          uStack_5e = (undefined2)uVar6;
          uStack_5c = (undefined2)((ulong)uVar6 >> 0x10);
          uStack_5a = (undefined4)((ulong)uVar6 >> 0x20);
          uStack_56 = 0x822;
          uStack_54 = (undefined2)uVar7;
          uStack_52 = (undefined2)((ulong)uVar7 >> 0x10);
          uStack_50 = (undefined4)((ulong)uVar7 >> 0x20);
          local_4c = 0x800;
          local_42 = 0x800;
          local_64 = (int)uVar9;
          local_40 = lVar3;
          __os_log_impl(0x100000000,uVar5,1,
                        "sync> persistent id does not match for track %u \"%{public}s\" in playlist \"%{public}s\" (%llu vs. %llu)"
                        ,&local_68,0x30);
          FUN_1001b7a50(local_90);
          goto LAB_1004d5350;
        }
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
      uVar5 = 1;
    }
  }
  else {
    if (DAT_1008c75c0 != -1) {
      _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
    }
    uVar5 = DAT_1008c75b8;
    cVar1 = _os_log_type_enabled(DAT_1008c75b8,1);
    if (cVar1 != '\0') {
      FUN_100486d8f(local_80,local_70);
      uVar6 = FUN_1001b83ae(local_80);
      if (local_70 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(undefined4 *)(*(long *)(local_70 + 0x78) + 0x18);
      }
      local_68 = 0x8220302;
      local_64 = (undefined4)uVar6;
      uStack_60 = (undefined2)((ulong)uVar6 >> 0x20);
      uStack_5e = (undefined2)((ulong)uVar6 >> 0x30);
      uStack_5c = 0x400;
      uStack_5a = (undefined4)uVar2;
      uStack_56 = 0x400;
      uStack_54 = (undefined2)uVar8;
      uStack_52 = (undefined2)((uint)uVar8 >> 0x10);
      __os_log_impl(0x100000000,uVar5,1,
                    "sync> track counts do not match for playlist \"%{public}s\" (%u vs. %u)",
                    &local_68,0x18);
LAB_1004d5350:
      FUN_1001b7a50(local_80);
    }
LAB_1004d5359:
    uVar5 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

