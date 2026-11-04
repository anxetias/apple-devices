// name: FUN_1001f1875
// address: 1001f1875

long * FUN_1001f1875(long *param_1,undefined1 (*param_2) [16],undefined4 *param_3,char param_4)

{
  undefined4 uVar1;
  undefined1 local_80 [8];
  char local_78 [48];
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_78[0] = '\0';
  local_78[1] = '\0';
  local_78[2] = '\0';
  local_78[3] = '\0';
  local_78[4] = '\0';
  local_78[5] = '\0';
  local_78[6] = '\0';
  local_78[7] = '\0';
  local_78[8] = '\0';
  local_78[9] = '\0';
  local_78[10] = '\0';
  local_78[0xb] = '\0';
  local_78[0xc] = '\0';
  local_78[0xd] = '\0';
  local_78[0xe] = '\0';
  local_78[0xf] = '\0';
  if (*param_2 == (undefined1  [16])0x0) {
    *param_3 = 0;
    FUN_1001aa318(param_1);
  }
  else {
    FUN_1001aa318(param_1);
    local_48 = *(undefined8 *)*param_2;
    uStack_40 = *(undefined8 *)(*param_2 + 8);
    if (param_4 == '\0') {
      _uuid_unparse_upper((uchar *)&local_48,local_78);
    }
    else {
      _uuid_unparse_lower((uchar *)&local_48,local_78);
    }
    FUN_1001aaf3c(local_80,local_78);
    FUN_1001aaadc(param_1,local_80);
    FUN_1001ab006(local_80);
    uVar1 = 0xfffff7be;
    if (*param_1 != 0) {
      uVar1 = 0;
    }
    *param_3 = uVar1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

