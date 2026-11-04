// name: FUN_1002688dc
// address: 1002688dc

undefined8 FUN_1002688dc(byte *param_1,byte param_2,uint *param_3,uint *param_4)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  bVar1 = *param_1;
  *param_3 = (uint)bVar1;
  if (bVar1 < 6) {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_2a = "*outBufferLength >= (1 + 4 + 1)";
LAB_100268a5d:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else if (param_1[3] == 0 && (uint)param_1[2] + (uint)param_1[1] == 0) {
    if (param_1[4] == (param_2 | 0x80)) {
      bVar1 = param_1[5];
      *param_4 = (uint)bVar1;
      uVar3 = 0;
      if (bVar1 + 5 == *param_3) goto LAB_100268983;
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_2a = "(4 + 1 + *outDataLength) == *outBufferLength";
        goto LAB_100268a5d;
      }
    }
    else {
      uVar3 = FUN_1001cc310();
      cVar2 = _os_log_type_enabled(uVar3,0x10);
      if (cVar2 != '\0') {
        local_2a = "buffer[4] == (modePage | 0x80)";
        goto LAB_100268a5d;
      }
    }
  }
  else {
    uVar3 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar3,0x10);
    if (cVar2 != '\0') {
      local_2a = "((UInt32)buffer[1] + buffer[2] + buffer[3]) == 0";
      goto LAB_100268a5d;
    }
  }
  FUN_1001782e9(0,0);
  uVar3 = 0xffffffce;
LAB_100268983:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

