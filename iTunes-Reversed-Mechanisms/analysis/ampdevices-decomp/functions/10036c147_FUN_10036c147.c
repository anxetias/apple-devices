// name: FUN_10036c147
// address: 10036c147

int FUN_10036c147(void)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 local_88;
  undefined4 local_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined2 uStack_78;
  long *local_68;
  undefined8 local_58;
  undefined7 uStack_50;
  undefined1 uStack_49;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined8 local_40;
  undefined8 uStack_38;
  long *local_30;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_1005b7b92();
  if (cVar2 == '\0') {
LAB_10036c309:
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_1001e9c3e(&DAT_1008bddd0);
    if (iVar3 == -0x80) goto LAB_10036c30b;
    if (iVar3 == 0) {
      iVar3 = FUN_1001e9c3e(&DAT_1008bde18);
      if (iVar3 == -0x80) goto LAB_10036c30b;
      if (iVar3 == 0) {
        local_88._0_4_ = 0x83c1d0;
        local_88._4_4_ = 1;
        local_80 = 0x36c33f;
        uStack_7c = 1;
        uStack_7a = 0;
        local_58 = 0;
        uStack_50 = 0;
        uStack_49 = 0;
        uStack_48 = 0;
        uStack_46 = 0;
        local_40 = 0;
        uStack_38 = 0;
        local_30 = (long *)0x0;
        uStack_47 = 1;
        local_68 = &local_88;
        FUN_10017869a(&local_88);
        FUN_1001c0fbe(FUN_10036c4cd,0,0,0,0);
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
          if (local_68 == (long *)0x0) goto LAB_10036c309;
        }
        (**(code **)(*local_68 + lVar4))();
        goto LAB_10036c309;
      }
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 == '\0') goto LAB_10036c30b;
      uStack_7a = (undefined2)iVar3;
      uStack_78 = (undefined2)((uint)iVar3 >> 0x10);
    }
    else {
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 == '\0') goto LAB_10036c30b;
      uStack_7a = (undefined2)iVar3;
      uStack_78 = (undefined2)((uint)iVar3 >> 0x10);
    }
    uStack_7c = 0x400;
    local_80 = 1;
    local_88._4_4_ = 0x7a0a90;
    local_88._0_4_ = 0x8220202;
    __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_88,0x12);
  }
LAB_10036c30b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_20) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar3;
}

