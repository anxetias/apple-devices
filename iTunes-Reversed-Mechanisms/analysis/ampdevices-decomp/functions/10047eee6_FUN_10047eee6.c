// name: FUN_10047eee6
// address: 10047eee6

char FUN_10047eee6(long param_1)

{
  undefined8 *puVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *local_80 [2];
  char local_69;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined6 uStack_58;
  long *local_48;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
    uVar6 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar6,0x10);
    if (cVar2 != '\0') {
      local_68._0_4_ = 0x8220202;
      local_68._4_4_ = 0x7a0a90;
      local_60 = 1;
      uStack_5c = 0x822;
      uStack_5a = 0x6950;
      uStack_58 = 0x1007b;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
LAB_10047efe2:
    cVar2 = '\0';
    goto LAB_10047efe4;
  }
  cVar2 = *(char *)(param_1 + 200);
  if (cVar2 != '\0') goto LAB_10047efe4;
  if ((*(ushort *)(param_1 + 0xc6) >> 0xe & 1) != 0) goto LAB_10047efe2;
  if (*(int *)(param_1 + 0xd4) != 0) {
    *(ushort *)(param_1 + 0xc6) = *(ushort *)(param_1 + 0xc6) | 0x4000;
    local_69 = '\0';
    local_68._0_4_ = 0x85c500;
    local_68._4_4_ = 1;
    local_60 = SUB84(&local_69,0);
    uStack_5c = (undefined2)((ulong)&local_69 >> 0x20);
    uStack_5a = (undefined2)((ulong)&local_69 >> 0x30);
    local_48 = &local_68;
    puVar9 = *(undefined8 **)(param_1 + 0x58);
    do {
      if (puVar9 == (undefined8 *)0x0) break;
      puVar1 = (undefined8 *)*puVar9;
      local_80[0] = puVar9;
      if (local_48 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_10016bf14();
      }
      iVar4 = (**(code **)(*local_48 + 0x30))(local_48,local_80);
      puVar9 = puVar1;
    } while (iVar4 == 0);
    if (local_48 == &local_68) {
      lVar5 = 0x20;
LAB_10047f058:
      (**(code **)(*local_48 + lVar5))();
    }
    else {
      lVar5 = 0x28;
      if (local_48 != (long *)0x0) goto LAB_10047f058;
    }
    if ((local_69 == '\x01') &&
       (cVar2 = FUN_10031f8a3(*(undefined4 *)(param_1 + 0xd4)), cVar2 != '\0')) {
      if (DAT_1008c66e8 != -1) {
        _dispatch_once(&DAT_1008c66e8,&PTR___NSConcreteGlobalBlock_100853840);
      }
      uVar6 = DAT_1008c66e0;
      cVar3 = _os_log_type_enabled(DAT_1008c66e0,1);
      if (cVar3 != '\0') {
        FUN_100476ac1(local_80,param_1);
        uVar7 = FUN_1001b83ae(local_80);
        uVar8 = FUN_10015009d(cVar2);
        local_68._0_4_ = 0x8220202;
        local_68._4_4_ = (undefined4)uVar7;
        local_60 = (undefined4)((ulong)uVar7 >> 0x20);
        uStack_5c = 0x822;
        uStack_5a = (undefined2)uVar8;
        uStack_58 = (undefined6)((ulong)uVar8 >> 0x10);
        __os_log_impl(0x100000000,uVar6,1,
                      "Fixed store kind of track \"%{public}s\" to \"%{public}s\"",&local_68,0x16);
        FUN_1001b7a50(local_80);
      }
      FUN_10047f188(param_1,cVar2);
    }
  }
  cVar2 = *(char *)(param_1 + 200);
LAB_10047efe4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return cVar2;
}

