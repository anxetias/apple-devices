// name: FUN_1005a249c
// address: 1005a249c

int FUN_1005a249c(long param_1,int param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                 undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 local_898;
  char *local_894;
  undefined2 local_88c;
  int local_88a;
  undefined2 local_878 [256];
  undefined1 local_678 [512];
  ulong local_478 [132];
  undefined1 local_58 [12];
  undefined1 local_4c [20];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1005a93cb();
  FUN_1005a3d14(param_3,local_678);
  local_878[0] = 0;
  uVar7 = param_2 - 1;
  switch((ulong)uVar7) {
  case 0:
    FUN_1001e115f(&cf_UISS,local_878);
    uVar3 = *(ulong *)(param_1 + 0x1630);
    break;
  case 1:
    FUN_1001e115f(&cf_TASS,local_878);
    uVar3 = *(ulong *)(param_1 + 0x1640);
    break;
  case 2:
    if (*(char *)(param_1 + 0x15a1) != '\0') {
      pcVar5 = &cf_Tracks;
LAB_1005a2577:
      FUN_1001e115f(pcVar5,local_878);
      goto switchD_1005a251f_default;
    }
    FUN_1001e115f(&cf_TRSS,local_878);
    uVar3 = *(ulong *)(param_1 + 0x1638);
    break;
  case 3:
    if (*(char *)(param_1 + 0x15a1) != '\0') {
      pcVar5 = &cf_Playlists;
      goto LAB_1005a2577;
    }
    FUN_1001e115f(&cf_PLSS,local_878);
    uVar3 = *(ulong *)(param_1 + 0x1648);
    break;
  case 4:
    if (*(char *)(param_1 + 0x15a1) != '\0') {
      pcVar5 = &cf_Others;
      goto LAB_1005a2577;
    }
    FUN_1001e115f(&cf_OTSS,local_878);
    uVar3 = *(ulong *)(param_1 + 0x1650);
    break;
  default:
    goto switchD_1005a251f_default;
  }
  uVar3 = uVar3 & param_3;
  local_478[0] = uVar3 >> 0x38 | (uVar3 & 0xff000000000000) >> 0x28 |
                 (uVar3 & 0xff0000000000) >> 0x18 | (uVar3 & 0xff00000000) >> 8 |
                 (uVar3 & 0xff000000) << 8 | (uVar3 & 0xff0000) << 0x18 | (uVar3 & 0xff00) << 0x28 |
                 uVar3 << 0x38;
  FUN_1001e0a72(local_478,8,local_58,0x11,0);
switchD_1005a251f_default:
  if (*(char *)(param_1 + 0x15a1) == '\0') {
    FUN_1001e26e1(local_4c,local_878);
  }
  iVar2 = FUN_10017ecc9(param_1 + 0x4f0,local_878,local_478,0);
  if (iVar2 == -0x2b) {
    iVar2 = FUN_100181256(param_1 + 0x4f0,local_878,local_478);
  }
  if (iVar2 != -0x80) {
    if (iVar2 == 0) {
      uVar6 = 0;
      if (uVar7 < 6) {
        uVar6 = *(undefined4 *)
                 (
                 "SSIUSSATSSRTSSLPSSTOSSYSSSIUSSATSSRTSSLPSSTO35AMPLClientLibraryChangesDataCreator"
                 + (ulong)uVar7 * 4);
      }
      iVar2 = FUN_1005ae396(param_1,param_4,param_5,param_6,param_7,uVar6,param_3,local_678,
                            local_478,param_1 + 0x910,param_8);
    }
    else {
      uVar4 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar4,0x10);
      if (cVar1 != '\0') {
        local_898 = 0x8220202;
        local_894 = "Assertion failure";
        local_88c = 0x400;
        local_88a = iVar2;
        __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_898,0x12);
      }
    }
  }
  FUN_1001e9eb9(param_1 + 0x18);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

