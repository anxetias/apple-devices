// name: FUN_1005abddc
// address: 1005abddc

undefined8 FUN_1005abddc(long param_1,long *param_2,long param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_638 [512];
  undefined1 local_438 [512];
  undefined4 local_238;
  char *local_234;
  undefined2 local_22c;
  char *local_22a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 == (long *)0x0) || (param_2[2] == 0)) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_22a = "TrackInfoIsValid(trackInfo)";
LAB_1005abf4c:
      local_22c = 0x822;
      local_234 = "Assertion failure";
      local_238 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_238,0x16);
    }
  }
  else if (param_3 == 0) {
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_22a = "oldPersistentID != 0";
      goto LAB_1005abf4c;
    }
  }
  else {
    if (*param_2 != param_3) {
      cVar1 = FUN_10030e2f7();
      uVar5 = 0;
      if (cVar1 != '\0') goto LAB_1005abe98;
      uVar2 = *(uint *)(param_1 + 0x15b8) & *(uint *)(param_1 + 0x15b4);
      if ((uVar2 & 2) == 0) {
        if ((uVar2 & 4) == 0) goto LAB_1005abf84;
LAB_1005abf8c:
        FUN_1005a4672(param_1);
        iVar3 = FUN_100476928(param_2,&local_238);
        if (iVar3 == 0) {
          FUN_1004779ac(param_2,local_438);
          uVar6 = FUN_1005ac0ae(param_1,param_2);
          uVar2 = *(uint *)(param_1 + 0x15b4);
          uVar4 = *(uint *)(param_1 + 0x15b8);
          if (((uVar2 & uVar4 & 2) != 0) && (*(char *)(param_1 + 0x1658) == '\0')) {
            FUN_1001e1c39(&local_238,local_638);
            if (*(char *)(param_1 + 0x15a3) != '\0') {
              FUN_1005ab3d6(local_638,local_438);
            }
            FUN_1005ac160(param_1,3,param_3,*param_2,local_638,uVar6);
            uVar2 = *(uint *)(param_1 + 0x15b4);
            uVar4 = *(uint *)(param_1 + 0x15b8);
          }
          if ((uVar4 & uVar2 & 4) != 0) {
            FUN_1001e1c39(&local_238,local_638);
            FUN_1005ab3d6(local_638,local_438);
            FUN_1005ac160(param_1,2,param_3,*param_2,local_638,uVar6);
          }
        }
        else {
          uVar6 = 0;
        }
        FUN_1005a4ae0(param_1);
      }
      else {
        if (((uVar2 & 4) != 0) || (*(char *)(param_1 + 0x1658) == '\0')) goto LAB_1005abf8c;
LAB_1005abf84:
        uVar6 = 0;
      }
      FUN_10017060f(uVar6);
      goto LAB_1005abe98;
    }
    uVar5 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar5,0x10);
    if (cVar1 != '\0') {
      local_22a = "oldPersistentID != trackInfo->persistentID";
      goto LAB_1005abf4c;
    }
  }
  FUN_1001782e9(0,0);
  uVar5 = 0xffffffce;
LAB_1005abe98:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar5;
}

