// name: FUN_1005a4efe
// address: 1005a4efe

void FUN_1005a4efe(long param_1,undefined4 param_2,ulong param_3,undefined8 param_4)

{
  cfstringStruct *pcVar1;
  ulong local_250;
  undefined2 local_248 [256];
  undefined1 local_48 [12];
  undefined1 local_3c [20];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_248[0] = 0;
  switch(param_2) {
  case 1:
    FUN_1001e115f(&cf_UISS,local_248);
    param_3 = param_3 & *(ulong *)(param_1 + 0x1630);
    break;
  case 2:
    FUN_1001e115f(&cf_TASS,local_248);
    param_3 = param_3 & *(ulong *)(param_1 + 0x1640);
    break;
  case 3:
    if (*(char *)(param_1 + 0x15a1) != '\0') {
      pcVar1 = &cf_Tracks;
LAB_1005a4f9f:
      FUN_1001e115f(pcVar1,local_248);
      goto switchD_1005a4f47_default;
    }
    FUN_1001e115f(&cf_TRSS,local_248);
    param_3 = param_3 & *(ulong *)(param_1 + 0x1638);
    break;
  case 4:
    if (*(char *)(param_1 + 0x15a1) != '\0') {
      pcVar1 = &cf_Playlists;
      goto LAB_1005a4f9f;
    }
    FUN_1001e115f(&cf_PLSS,local_248);
    param_3 = param_3 & *(ulong *)(param_1 + 0x1648);
    break;
  case 5:
    if (*(char *)(param_1 + 0x15a1) != '\0') {
      pcVar1 = &cf_Others;
      goto LAB_1005a4f9f;
    }
    FUN_1001e115f(&cf_OTSS,local_248);
    param_3 = param_3 & *(ulong *)(param_1 + 0x1650);
    break;
  default:
    goto switchD_1005a4f47_default;
  }
  local_250 = param_3 >> 0x38 | (param_3 & 0xff000000000000) >> 0x28 |
              (param_3 & 0xff0000000000) >> 0x18 | (param_3 & 0xff00000000) >> 8 |
              (param_3 & 0xff000000) << 8 | (param_3 & 0xff0000) << 0x18 |
              (param_3 & 0xff00) << 0x28 | param_3 << 0x38;
  FUN_1001e0a72(&local_250,8,local_48,0x11,0);
switchD_1005a4f47_default:
  if (*(char *)(param_1 + 0x15a1) == '\0') {
    FUN_1001e26e1(local_3c,local_248);
  }
  FUN_10017ecc9(param_1 + 0x4f0,local_248,param_4,0);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

