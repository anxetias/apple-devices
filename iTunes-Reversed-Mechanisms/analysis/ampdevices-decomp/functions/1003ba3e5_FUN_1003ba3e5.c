// name: FUN_1003ba3e5
// address: 1003ba3e5

void FUN_1003ba3e5(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined6 uStack_48;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar1 = DAT_1008c7598;
  do {
    if (lVar1 == 0) {
LAB_1003ba458:
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4c = 0x822;
        uStack_4a = 0x92f1;
        uStack_48 = 0x1007c;
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
LAB_1003ba47a:
      if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    if (*(int *)(lVar1 + 0x5c) == param_2) {
      if (*(long *)(lVar1 + 0x40) != 0) {
        FUN_1001c62d9(&local_58,0x24);
        local_58 = (undefined4)param_3;
        uStack_54 = (undefined4)((ulong)param_3 >> 0x20);
        uStack_50 = (undefined4)param_4;
        uStack_4c = (undefined2)((ulong)param_4 >> 0x20);
        uStack_4a = (undefined2)((ulong)param_4 >> 0x30);
        FUN_1003b7d55(lVar1,0x70646c79,&local_58);
        goto LAB_1003ba47a;
      }
      goto LAB_1003ba458;
    }
    lVar1 = *(long *)(lVar1 + 8);
  } while( true );
}

