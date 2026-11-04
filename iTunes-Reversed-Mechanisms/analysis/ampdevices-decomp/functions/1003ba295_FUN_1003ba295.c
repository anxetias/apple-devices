// name: FUN_1003ba295
// address: 1003ba295

void FUN_1003ba295(undefined8 param_1,int param_2,undefined8 *param_3,long param_4)

{
  char cVar1;
  undefined8 uVar2;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined4 uStack_48;
  undefined2 uStack_44;
  undefined6 uStack_42;
  undefined1 local_3c;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_4 == 0) || (*(long *)(param_4 + 0x40) == 0)) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x92f1;
      uStack_48 = 0x1007c;
      uStack_44 = 0;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    FUN_1001c62d9(&local_58,0x24);
    if (param_2 == 0x756d6e74) {
      local_58 = *(undefined4 *)param_3;
      uStack_54 = (undefined4)param_3[1];
      uStack_50 = (undefined4)((ulong)param_3[1] >> 0x20);
      uVar2 = 0x76756e6d;
    }
    else if (param_2 == 0x726e616d) {
      local_58 = (undefined4)*param_3;
      uStack_54 = (undefined4)((ulong)*param_3 >> 0x20);
      uStack_50 = *(undefined4 *)(param_3 + 1);
      uVar2 = param_3[2];
      uStack_4c = (undefined2)uVar2;
      uStack_4a = (undefined2)((ulong)uVar2 >> 0x10);
      uStack_48 = (undefined4)((ulong)uVar2 >> 0x20);
      uVar2 = 0x766e616d;
    }
    else {
      if (param_2 != 0x6d6e7420) goto LAB_1003ba377;
      local_58 = *(undefined4 *)param_3;
      uStack_54 = *(undefined4 *)((long)param_3 + 4);
      uStack_50 = *(undefined4 *)(param_3 + 1);
      uStack_4c = (undefined2)*(undefined4 *)((long)param_3 + 0xc);
      uStack_4a = (undefined2)((uint)*(undefined4 *)((long)param_3 + 0xc) >> 0x10);
      uStack_48 = *(undefined4 *)(param_3 + 2);
      uStack_44 = (undefined2)param_3[3];
      uStack_42 = (undefined6)((ulong)param_3[3] >> 0x10);
      local_3c = *(undefined1 *)(param_3 + 4);
      uVar2 = 0x766d6e74;
    }
    FUN_1003b7d55(param_4,uVar2,&local_58);
  }
LAB_1003ba377:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

