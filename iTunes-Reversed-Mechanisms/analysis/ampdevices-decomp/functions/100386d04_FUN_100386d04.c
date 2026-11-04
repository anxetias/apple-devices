// name: FUN_100386d04
// address: 100386d04

void FUN_100386d04(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  char cVar3;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  bool bVar10;
  long local_80;
  long local_78;
  undefined8 *local_70;
  undefined2 local_68;
  undefined2 uStack_66;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined6 uStack_56;
  undefined8 local_48;
  uint local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_78 = param_1;
  if ((*(long *)(param_1 + 0x20) == 0) ||
     (plVar4 = (long *)std::__shared_weak_count::lock(), plVar4 == (long *)0x0)) {
    plVar4 = (long *)0x0;
    local_70 = (undefined8 *)0x0;
  }
  else {
    local_70 = *(undefined8 **)(local_78 + 0x18);
  }
  if (DAT_1008c7568 != -1) {
    _dispatch_once(&DAT_1008c7568,&PTR___NSConcreteGlobalBlock_100855dc0);
  }
  uVar5 = DAT_1008c7560;
  cVar3 = _os_log_type_enabled(DAT_1008c7560,2);
  if (cVar3 != '\0') {
    local_68 = 0x200;
    uStack_66 = 0x800;
    uStack_64 = (undefined4)param_3;
    uStack_60 = (undefined4)((ulong)param_3 >> 0x20);
    uStack_5c = 0x400;
    uStack_5a = (undefined2)(int)param_2[2];
    uStack_58 = (undefined2)((uint)(int)param_2[2] >> 0x10);
    __os_log_impl(0x100000000,uVar5,2,"artwork status change event count:%lld for %d DBs",&local_68,
                  0x12);
  }
  if (local_70 == (undefined8 *)0x0) {
    if (DAT_1008c7568 != -1) {
      _dispatch_once(&DAT_1008c7568,&PTR___NSConcreteGlobalBlock_100855dc0);
    }
    uVar5 = DAT_1008c7560;
    cVar3 = _os_log_type_enabled(DAT_1008c7560,2);
    if (cVar3 != '\0') {
      local_68 = 0;
      __os_log_impl(0x100000000,uVar5,2,"no listener setup for artwork status events",&local_68,2);
    }
  }
  else {
    plVar7 = (long *)*param_2;
    if (plVar7 != param_2 + 1) {
      local_78 = local_78 + 0x138;
      do {
        local_80 = plVar7[4];
        local_68 = 0;
        uStack_66 = 0;
        uStack_64 = 0;
        uStack_60 = 0;
        uStack_5c = 0;
        uStack_5a = 0;
        uStack_58 = 0;
        uStack_56 = 0;
        lVar6 = plVar7[5];
        lVar1 = plVar7[6];
        local_40 = local_40 & 0xffffff00;
        lVar8 = lVar1 - lVar6;
        local_48 = &local_68;
        if (lVar8 != 0) {
          FUN_100283f60(&local_68,lVar8 >> 6);
          uVar5 = FUN_100283f9c(&uStack_58,lVar6,lVar1,
                                CONCAT26(uStack_5a,CONCAT24(uStack_5c,uStack_60)));
          uStack_60 = (undefined4)uVar5;
          uStack_5c = (undefined2)((ulong)uVar5 >> 0x20);
          uStack_5a = (undefined2)((ulong)uVar5 >> 0x30);
        }
        lVar6 = FUN_1002790a8(local_78,&local_80);
        if (lVar6 == 0) {
          if (DAT_1008c7568 != -1) {
            _dispatch_once(&DAT_1008c7568,&PTR___NSConcreteGlobalBlock_100855dc0);
          }
          uVar5 = DAT_1008c7560;
          cVar3 = _os_log_type_enabled(DAT_1008c7560,2);
          if (cVar3 != '\0') {
            local_48._0_4_ = 0x8000100;
            local_48._4_4_ = (undefined4)local_80;
            local_40 = (uint)((ulong)local_80 >> 0x20);
            __os_log_impl(0x100000000,uVar5,2,"no open database for event db:0x%16.16llx",&local_48,
                          0xc);
          }
        }
        else if (*(char *)(lVar6 + 0x21) == '\x01') {
          (**(code **)*local_70)(local_70,local_80,&local_68);
        }
        plVar2 = (long *)plVar7[1];
        plVar9 = plVar7;
        if ((long *)plVar7[1] == (long *)0x0) {
          do {
            plVar7 = (long *)plVar9[2];
            bVar10 = (long *)*plVar7 != plVar9;
            plVar9 = plVar7;
          } while (bVar10);
        }
        else {
          do {
            plVar7 = plVar2;
            plVar2 = (long *)*plVar7;
          } while ((long *)*plVar7 != (long *)0x0);
        }
        local_48 = &local_68;
        FUN_100284230(&local_48);
      } while (plVar7 != param_2 + 1);
    }
  }
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar7 = plVar4 + 1;
    lVar6 = *plVar7;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (lVar6 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

