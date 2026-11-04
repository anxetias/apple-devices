// name: FUN_100407d12
// address: 100407d12

char FUN_100407d12(int param_1,uint param_2)

{
  char cVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 < 0x67656e75) {
    if (param_1 == 0x61727477) {
      cVar1 = '\r';
      goto LAB_100407e6b;
    }
    cVar1 = '\f';
    if (param_1 == 0x666f746f) goto LAB_100407e6b;
  }
  else {
    if (param_1 == 0x67656e75) {
      cVar1 = '\x0f';
      goto LAB_100407e6b;
    }
    if (param_1 == 0x6c797263) {
      cVar1 = '\x0e';
      goto LAB_100407e6b;
    }
    if (param_1 == 0x7472616b) {
      if (param_2 == 0) {
        uVar2 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar2,0x10);
        if (cVar1 != '\0') {
          local_38 = 0x8220202;
          local_34 = "Assertion failure";
          local_2c = 0x822;
          local_2a = "mediaKind != kTrackInfoMediaKind_Unknown";
          __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
        }
        FUN_1001782e9(0,0);
      }
      uVar3 = param_2 & 0xffdffffb;
      if ((param_2 & 0xc00008) == 0) {
        uVar3 = param_2;
      }
      cVar1 = '\0';
      if ((((((-1 < (short)uVar3) && (cVar1 = '\a', (uVar3 & 4) == 0)) &&
            (cVar1 = '\b', (uVar3 >> 0x15 & 1) == 0)) &&
           ((cVar1 = '\x03', (uVar3 & 0x1004000) == 0 && (cVar1 = '\x05', (uVar3 & 0x402) == 0))))
          && ((cVar1 = '\x06', (uVar3 & 0x40) == 0 &&
              ((cVar1 = '\t', (uVar3 & 8) == 0 && (cVar1 = '\n', (uVar3 & 0xc00000) == 0)))))) &&
         ((cVar1 = '\v', (uVar3 & 0x10090) == 0 &&
          ((cVar1 = '\x04', (uVar3 & 0x100121) == 0 && (cVar1 = '\x01', (uVar3 & 0x60000) == 0))))))
      {
        cVar1 = ((uVar3 >> 0xc & 1) == 0) * '\x02' + '\x02';
      }
      goto LAB_100407e6b;
    }
  }
  cVar1 = '\x10';
LAB_100407e6b:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return cVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

