// name: FUN_100301119
// address: 100301119

void FUN_100301119(long param_1,short *param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined2 uStack_38;
  undefined4 uStack_36;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((*(long *)(param_1 + 8) == 0) ||
     (lVar1 = *(long *)(*(long *)(param_1 + 8) + 0x10), lVar1 == 0)) {
    uVar5 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar5,0x10);
    if (cVar3 != '\0') {
      local_48 = 0x8220202;
      uStack_44 = 0x7a0a90;
      local_40 = 1;
      uStack_3c = 0x822;
      uStack_3a = 0x8d38;
      uStack_38 = 0x7b;
      uStack_36 = 1;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar2 = *(long *)(lVar1 + 0x2648);
    if (lVar2 != 0) {
      if (*(int *)(*(long *)(param_1 + 0x10) + 0x68) != 0) {
        uVar5 = FUN_1002acb5a(param_1);
        FUN_1002adb1d(lVar2,param_1,uVar5);
      }
      if (*param_2 != 0) {
        uVar5 = *(undefined8 *)(lVar1 + 0x2648);
        uVar6 = FUN_1002acaee(param_2);
        local_48 = (undefined4)uVar6;
        uStack_44 = (undefined4)((ulong)uVar6 >> 0x20);
        local_40 = (undefined4)param_1;
        uStack_3c = (undefined2)((ulong)param_1 >> 0x20);
        uStack_3a = (undefined2)((ulong)param_1 >> 0x30);
        FUN_1002b7dfc(uVar5);
      }
    }
    FUN_1002af0ff(param_1);
    iVar4 = FUN_1001ddeca(lVar1 + 0x2250,param_2,*(long *)(param_1 + 0x10) + 0x68);
    if ((iVar4 != -0x80) && (iVar4 != 0)) {
      uVar5 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar5,0x10);
      if (cVar3 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7a0a90;
        local_40 = 1;
        uStack_3c = 0x400;
        uStack_3a = (undefined2)iVar4;
        uStack_38 = (undefined2)((uint)iVar4 >> 0x10);
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x12);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

