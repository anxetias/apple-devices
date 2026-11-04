// name: FUN_1002d65e7
// address: 1002d65e7

void FUN_1002d65e7(undefined8 param_1,undefined4 param_2)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  int local_8c;
  undefined8 local_88;
  undefined4 local_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  undefined6 uStack_76;
  long *local_68;
  undefined8 local_58;
  undefined7 uStack_50;
  undefined4 uStack_49;
  undefined8 local_40;
  undefined8 uStack_38;
  long *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (DAT_1008c75c0 != -1) {
    _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
  }
  uVar5 = DAT_1008c75b8;
  cVar2 = _os_log_type_enabled(DAT_1008c75b8,1);
  if (cVar2 != '\0') {
    local_88._0_2_ = 0;
    __os_log_impl(0x100000000,uVar5,1,"",&local_88,2);
  }
  iVar3 = _FSGetAsyncEjectStatus(param_1,&local_8c,0,0,0,0);
  if (iVar3 != -0x80) {
    if (iVar3 == 0) {
      if (local_8c == 6) {
        lVar4 = FUN_100264440(param_2);
        if (lVar4 != 0) {
          *(undefined1 *)(lVar4 + 0x3d) = 0;
          uVar5 = FUN_1001ebd46();
          *(undefined8 *)(lVar4 + 0x6db8) = uVar5;
        }
        local_88._0_2_ = 0x2478;
        local_88._2_2_ = 0x85;
        local_88._4_4_ = 1;
        local_80 = 0x2d67f7;
        uStack_7c = 1;
        uStack_7a = 0;
        uStack_78 = (undefined2)param_1;
        uStack_76 = (undefined6)((ulong)param_1 >> 0x10);
        local_58 = 0;
        uStack_50 = 0;
        uStack_49 = 0;
        local_40 = 0;
        uStack_38 = 0;
        local_30 = (long *)0x0;
        local_68 = &local_88;
        FUN_10017869a(&local_88);
        if (local_30 != (long *)0x0) {
          LOCK();
          plVar1 = local_30 + 1;
          lVar4 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar4 == 0) {
            (**(code **)(*local_30 + 0x10))(local_30);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (local_68 == &local_88) {
          lVar4 = 0x20;
        }
        else {
          lVar4 = 0x28;
          if (local_68 == (long *)0x0) goto LAB_1002d67a6;
        }
        (**(code **)(*local_68 + lVar4))();
      }
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_88._0_2_ = 0x202;
        local_88._2_2_ = 0x822;
        local_88._4_4_ = 0x7a0a90;
        local_80 = 1;
        uStack_7c = 0x400;
        uStack_7a = (undefined2)iVar3;
        uStack_78 = (undefined2)((uint)iVar3 >> 0x10);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_88,0x12);
      }
    }
  }
LAB_1002d67a6:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

