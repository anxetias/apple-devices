// name: FUN_1002b8190
// address: 1002b8190

undefined1 FUN_1002b8190(uint param_1,uint *param_2,uint param_3,undefined8 *param_4,int *param_5)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  do {
    if (param_3 == 0) {
      uVar5 = 0;
LAB_1002b824b:
      if (*(long *)PTR____stack_chk_guard_10082cb58 != local_18) {
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      return uVar5;
    }
    uVar1 = *param_2;
    uVar3 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    if (uVar1 == 0) {
      uVar3 = param_3;
    }
    if (param_3 < uVar3) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_2a = "atomSize <= inputSize";
LAB_1002b8289:
        local_2c = 0x822;
        local_34 = "Assertion failure";
        local_38 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
      }
LAB_1002b822f:
      uVar5 = 0;
      FUN_1001782e9(0,0);
      goto LAB_1002b824b;
    }
    if (uVar3 < 8) {
      uVar4 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar4,0x10);
      if (cVar2 != '\0') {
        local_2a = "atomSize >= (sizeof(AtomHeader))";
        goto LAB_1002b8289;
      }
      goto LAB_1002b822f;
    }
    uVar1 = param_2[1];
    if ((uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) == param_1
       ) {
      *param_4 = param_2 + 2;
      *param_5 = uVar3 - 8;
      uVar5 = 1;
      goto LAB_1002b824b;
    }
    param_2 = (uint *)((long)param_2 + (ulong)uVar3);
    param_3 = param_3 - uVar3;
  } while( true );
}

