// name: FUN_10030778b
// address: 10030778b

undefined8 FUN_10030778b(long param_1)

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
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar5 = 0;
  if (*(long *)(param_1 + 0x2738) == 0) {
    plVar3 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
    if (plVar3 == (long *)0x0) {
      *(undefined8 *)(param_1 + 0x2738) = 0;
      uVar5 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar5,0x10);
      if (cVar2 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7a0a90;
        local_40 = 1;
        uStack_3c = 0x822;
        uStack_3a = 0xee12;
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
      *(long **)(param_1 + 0x2738) = plVar3;
      lVar4 = FUN_1002f930c(param_1);
      if (lVar4 != 0) {
        do {
          lVar1 = *(long *)(lVar4 + 400);
          if (lVar1 != 0) {
            local_48 = (undefined4)lVar1;
            uStack_44 = (undefined4)((ulong)lVar1 >> 0x20);
            local_40 = (undefined4)lVar4;
            uStack_3c = (undefined2)((ulong)lVar4 >> 0x20);
            uStack_3a = (undefined2)((ulong)lVar4 >> 0x30);
            FUN_1002b7dfc(*(undefined8 *)(param_1 + 0x2738),&local_48);
          }
          lVar4 = FUN_1002f9451(lVar4);
        } while (lVar4 != 0);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_30) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

