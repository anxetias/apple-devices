// name: FUN_100313e0b
// address: 100313e0b

void FUN_100313e0b(long *param_1)

{
  long lVar1;
  int iVar2;
  char cVar3;
  undefined8 uVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined2 local_40;
  undefined2 local_3e;
  undefined2 uStack_3c;
  undefined4 uStack_3a;
  undefined2 local_36;
  undefined2 local_34;
  undefined6 uStack_32;
  undefined2 local_2c;
  undefined4 local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (long *)0x0) {
LAB_100313f2b:
    uVar4 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar4,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      local_40 = 1;
      local_3e = 0;
      uStack_3c = 0x822;
      uStack_3a = 0x7b63b4;
      local_36 = 1;
      local_34 = 0;
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if ((int)param_1[0x10] != 0x74646174) {
      uVar4 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar4,0x10);
      if (cVar3 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7ab58c;
        local_40 = 1;
        local_3e = 0;
        uStack_3c = 0x822;
        uStack_3a = 0x7aec03;
        local_36 = 1;
        local_34 = 0;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      cVar3 = FUN_1001782e9(0,1);
      if (cVar3 == '\0') goto LAB_100313f2b;
    }
    if ((*(byte *)((long)param_1 + 0x1bb2) & 0x10) != 0) {
      if (DAT_1008c66e8 != -1) {
        _dispatch_once(&DAT_1008c66e8,&PTR___NSConcreteGlobalBlock_100853840);
      }
      uVar4 = DAT_1008c66e0;
      cVar3 = _os_log_type_enabled(DAT_1008c66e0,1);
      if (cVar3 != '\0') {
        lVar1 = (long)param_1 + 0x84;
        local_2a = *(undefined4 *)((long)param_1 + 0x94);
        local_48 = 0x4100402;
        uStack_44 = 4;
        local_40 = 0x820;
        local_3e = (undefined2)lVar1;
        uStack_3c = (undefined2)((ulong)lVar1 >> 0x10);
        uStack_3a = (undefined4)((ulong)lVar1 >> 0x20);
        local_36 = 0x800;
        local_34 = SUB82(param_1,0);
        uStack_32 = (undefined6)((ulong)param_1 >> 0x10);
        local_2c = 0x400;
        __os_log_impl(0x100000000,uVar4,1,"edit> BEG  \'%.4s\' %p (%d)",&local_48,0x22);
      }
    }
    iVar2 = *(int *)((long)param_1 + 0x94);
    *(int *)((long)param_1 + 0x94) = iVar2 + 1;
    if (iVar2 == 0) {
      (**(code **)(*param_1 + 0x10))(param_1,0x74644243,param_1,0,0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

