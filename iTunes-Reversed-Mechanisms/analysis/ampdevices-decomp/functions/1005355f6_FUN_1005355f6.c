// name: FUN_1005355f6
// address: 1005355f6

void FUN_1005355f6(int param_1,int param_2,short *param_3)

{
  char cVar1;
  undefined8 uVar2;
  short sVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 == (short *)0x0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_38 = 0x8220202;
      local_34 = "Assertion failure";
      local_2c = 0x822;
      local_2a = "audioFormat != nullptr";
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
    FUN_1001782e9(0,0);
    goto LAB_100535763;
  }
  *param_3 = 1;
  if (param_1 < 0x6c70636d) {
    if (param_1 == 0x616c6163) {
      *param_3 = 0x259;
      goto LAB_100535763;
    }
    if (param_1 != 0x61756462) {
      if (param_1 == 0x666c6163) {
        *param_3 = 0x25a;
      }
      goto LAB_100535763;
    }
    if (param_2 == 0) {
      *param_3 = 0x191;
      goto LAB_100535763;
    }
    sVar3 = (short)param_2 + 400;
  }
  else {
    if (0x6d706566 < param_1) {
      if (param_1 == 0x75736163) {
        *param_3 = 0x3e9;
      }
      else if (param_1 == 0x6d706567) {
        if (param_2 != 3) {
          if (param_2 == 2) {
            *param_3 = 0xc9;
            goto LAB_100535763;
          }
          if (param_2 == 1) {
            *param_3 = 0x65;
            goto LAB_100535763;
          }
        }
        *param_3 = 0x12d;
      }
      goto LAB_100535763;
    }
    if (param_1 == 0x6c70636d) {
      *param_3 = 0x2bd;
      goto LAB_100535763;
    }
    if (param_1 != 0x6d703461) goto LAB_100535763;
    if (param_2 == 0) {
      *param_3 = 0x1f6;
      goto LAB_100535763;
    }
    sVar3 = (short)param_2 + 500;
  }
  *param_3 = sVar3;
LAB_100535763:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

