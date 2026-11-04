// name: FUN_10023590f
// address: 10023590f

undefined8 FUN_10023590f(undefined4 param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 local_ac [4];
  undefined8 local_a8;
  undefined8 local_68;
  undefined8 uStack_60;
  int local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined4 uStack_36;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_68 = 0;
  uStack_60 = 0;
  FUN_1003af8bd(local_ac);
  FUN_100241f22(&local_48,2,param_1,param_2,0,&local_4c);
  plVar2 = (long *)CONCAT44(uStack_44,local_48);
  plVar3 = (long *)CONCAT26(uStack_3a,CONCAT24(uStack_3c,local_40));
  if (plVar2 == (long *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a168c;
      local_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0x25ec;
      uStack_38 = 0x7b;
      uStack_36 = 1;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    cVar4 = FUN_1001782e9(0,0);
    if (cVar4 != '\0') goto LAB_1002359a5;
  }
  else {
LAB_1002359a5:
    iVar5 = (**(code **)(*plVar2 + 0x88))(plVar2,param_3 & 8 | 4,0,0,0,local_ac,0);
    local_4c = iVar5;
    if (iVar5 != -0x80) {
      if (iVar5 == 0) {
        uVar6 = FUN_1001757f8(local_a8);
        goto LAB_100235a16;
      }
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7a0a90;
        local_40 = 1;
        uStack_3c = 0x400;
        uStack_3a = (undefined2)iVar5;
        uStack_38 = (undefined2)((uint)iVar5 >> 0x10);
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
  }
  uVar6 = 0;
LAB_100235a16:
  FUN_1003ae783(local_ac);
  if (plVar3 != (long *)0x0) {
    LOCK();
    plVar2 = plVar3 + 1;
    lVar1 = *plVar2;
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (lVar1 == 0) {
      (**(code **)(*plVar3 + 0x10))(plVar3);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

