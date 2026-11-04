// name: FUN_1002b2193
// address: 1002b2193

undefined8 FUN_1002b2193(long *param_1)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar5 = 0;
  if (param_1[0x4c7] == 0) {
    plVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
    if (plVar3 == (long *)0x0) {
      param_1[0x4c7] = 0;
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7a0a90;
        local_40 = 1;
        uStack_3c = 0x822;
        uStack_3a = 0x9494;
        uStack_38 = 0x1007b;
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
      uVar5 = 0xffffff94;
    }
    else {
      plVar3[1] = 0;
      plVar3[2] = 0;
      *plVar3 = (long)(plVar3 + 1);
      param_1[0x4c7] = (long)plVar3;
      lVar4 = FUN_1002f9fc5(param_1);
      if (lVar4 != 0) {
        do {
          if (((*(long *)(lVar4 + 8) != 0) && (*(long *)(*(long *)(lVar4 + 8) + 0x10) != 0)) &&
             (lVar1 = *(long *)(*(long *)(lVar4 + 0x10) + 0x38), lVar1 != 0)) {
            local_48 = (undefined4)lVar1;
            uStack_44 = (undefined4)((ulong)lVar1 >> 0x20);
            local_40 = (undefined4)lVar4;
            uStack_3c = (undefined2)((ulong)lVar4 >> 0x20);
            uStack_3a = (undefined2)((ulong)lVar4 >> 0x30);
            FUN_1002b7dfc(param_1[0x4c7],&local_48);
          }
          lVar4 = FUN_1002fa118(lVar4);
        } while (lVar4 != 0);
      }
      uVar5 = 0;
      (**(code **)(*param_1 + 0x10))(param_1,0x74647369,param_1,0,0);
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

