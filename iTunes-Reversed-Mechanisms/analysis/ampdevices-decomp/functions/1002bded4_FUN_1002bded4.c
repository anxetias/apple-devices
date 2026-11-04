// name: FUN_1002bded4
// address: 1002bded4

byte FUN_1002bded4(long param_1)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  undefined8 uVar5;
  char local_48 [16];
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  int local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  bVar1 = 0;
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  if ((*(byte *)(param_1 + 0x240) & 4) == 0) {
    if (*(int *)(param_1 + 0x268) == 0x66696c65) {
      iVar4 = FUN_10048256b(param_1,local_48);
      if (iVar4 != -0x80) {
        if (iVar4 == 0) {
          if ((local_48[0] == '\0' && local_48[7] == '\0') && (*(short *)(param_1 + 0x10) != 0x1e))
          {
            uVar3 = FUN_10048c0ca(param_1);
            bVar1 = FUN_10048c208(uVar3);
            bVar1 = bVar1 ^ 1;
            goto LAB_1002bdf65;
          }
        }
        else {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          if (cVar2 != '\0') {
            local_38 = 0x8220202;
            local_34 = "Assertion failure";
            local_2c = 0x400;
            local_2a = iVar4;
            __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_38,0x12);
          }
        }
      }
    }
    bVar1 = 0;
  }
LAB_1002bdf65:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

