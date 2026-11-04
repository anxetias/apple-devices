// name: FUN_1005ab762
// address: 1005ab762

undefined8 FUN_1005ab762(long param_1,long *param_2,byte *param_3,char param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 local_a48 [512];
  undefined1 local_848 [512];
  undefined1 local_648;
  undefined1 local_638 [512];
  undefined1 local_438 [512];
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 == (long *)0x0) || (param_2[2] == 0)) {
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_22a = "TrackInfoIsValid(trackInfo)";
LAB_1005ab8a2:
      local_22c = 0x822;
      local_234 = "Assertion failure";
      local_238 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
  }
  else {
    if (param_3 != (byte *)0x0) {
      cVar1 = FUN_10030e2f7();
      uVar3 = 0;
      if ((cVar1 == '\0') &&
         ((*(uint *)(param_1 + 0x15b4) & *(uint *)(param_1 + 0x15b8) & 0x16) != 0)) {
        FUN_1005a4672(param_1);
        if ((*param_3 & 1) == 0) {
          FUN_100476928(param_2,&local_238);
        }
        else {
          FUN_1001e1c39(param_3 + 8,&local_238);
        }
        if ((*param_3 & 4) == 0) {
          FUN_1004779ac(param_2,local_638);
        }
        else {
          FUN_1001e1c39(param_3 + 0x408,local_638);
        }
        if ((*param_3 & 8) == 0) {
          FUN_1004772c4(param_2,local_438);
        }
        else {
          FUN_1001e1c39(param_3 + 0x608,local_438);
        }
        local_648 = 0;
        uVar4 = FUN_1005ab32a(*(undefined1 *)(param_1 + 0x15a2),&local_238,local_638,local_438);
        if (((*param_3 & 1) != 0) && (iVar2 = FUN_100476928(param_2,local_848), iVar2 == 0)) {
          if (((*(uint *)(param_1 + 0x15b4) & *(uint *)(param_1 + 0x15b8) & 2) != 0) &&
             ((param_4 != '\0' || (cVar1 = FUN_1001e3edc(local_848,param_3 + 8,0), cVar1 == '\0'))))
          {
            FUN_1001e1c39(param_3 + 8,local_a48);
            if (*(char *)(param_1 + 0x15a3) != '\0') {
              FUN_1005ab3d6(local_a48,local_638);
            }
            if (*(char *)(param_1 + 0x1658) == '\0') {
              if (*param_2 != 0) {
                FUN_1005ad828(param_1,3,*param_2,local_a48,4,1,uVar4);
              }
            }
            else {
              FUN_1005abc82(param_1,local_848,local_a48,4,uVar4);
            }
          }
          if ((*(uint *)(param_1 + 0x15b4) & *(uint *)(param_1 + 0x15b8) & 4) != 0) {
            FUN_1001e1c39(param_3 + 8,local_a48);
            FUN_1005ab3d6(local_a48,local_638);
            if (*param_2 != 0) {
              FUN_1005ad828(param_1,2,*param_2,local_a48,4,1,uVar4);
            }
          }
        }
        if ((((*(uint *)(param_1 + 0x15b4) & *(uint *)(param_1 + 0x15b8) & 0x10) != 0) ||
            (((*(char *)(param_1 + 0x15a2) != '\0' && (*(char *)(param_1 + 0x15a3) == '\0')) &&
             (uVar5 = FUN_100474dd0(param_2,0), (uVar5 & 0x200004) != 0)))) &&
           ((((*param_3 & 8) != 0 && ((*(byte *)(param_1 + 0x1578) & 1) != 0)) &&
            (iVar2 = FUN_1004772c4(param_2,local_848), iVar2 == 0)))) {
          FUN_1005abc82(param_1,local_848,param_3 + 0x608,2,uVar4);
        }
        if ((*(uint *)(param_1 + 0x15b4) & *(uint *)(param_1 + 0x15b8) & 0x10) != 0) {
          if ((((*param_3 & 4) != 0) && ((*(byte *)(param_1 + 0x1578) & 4) != 0)) &&
             (iVar2 = FUN_1004779ac(param_2,local_848), iVar2 == 0)) {
            FUN_1005abc82(param_1,local_848,param_3 + 0x408,1,uVar4);
          }
          if ((((param_3[3] & 0x40) != 0) && ((*(byte *)(param_1 + 0x1578) & 2) != 0)) &&
             (iVar2 = FUN_100478022(param_2,local_848), iVar2 == 0)) {
            FUN_1005abc82(param_1,local_848,param_3 + 0x1458,1,uVar4);
          }
          if ((((param_3[2] & 0x20) != 0) && ((*(byte *)(param_1 + 0x1578) & 0x10) != 0)) &&
             (iVar2 = FUN_10047a0d2(param_2,local_848), iVar2 == 0)) {
            FUN_1005abc82(param_1,local_848,param_3 + 0x1040,8,uVar4);
          }
          if ((((*param_3 & 0x10) != 0) && ((*(byte *)(param_1 + 0x1578) & 0x20) != 0)) &&
             (iVar2 = FUN_10047a7b5(param_2,local_848), iVar2 == 0)) {
            FUN_1005abc82(param_1,local_848,param_3 + 0x808,0x10,uVar4);
          }
        }
        FUN_1005a4ae0(param_1);
        FUN_10017060f(uVar4);
      }
      goto LAB_1005ab811;
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_22a = "newTrackInfo != nullptr";
      goto LAB_1005ab8a2;
    }
  }
  FUN_1001782e9(0,0);
  uVar3 = 0xffffffce;
LAB_1005ab811:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar3;
}

