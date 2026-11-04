// name: FUN_100319dad
// address: 100319dad

int FUN_100319dad(long param_1,undefined8 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 local_60 [8];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (*(long *)(param_1 + 8) == 0)) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(*(long *)(param_1 + 8) + 0x10);
  }
  FUN_1001b811c(param_2);
  iVar2 = FUN_1002b0559(param_1,0);
  if ((iVar2 != -0x80) && (iVar2 != 0)) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x400;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar2);
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
  }
  if (lVar5 == 0) {
LAB_100319f09:
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "TrackDataIsValid(trackData)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar3 = -0x32;
    goto LAB_100319fe1;
  }
  if (*(int *)(lVar5 + 0x80) != 0x74646174) {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure (expected to be true)";
      local_4c = 0x822;
      local_4a = "trackData->magic == \'tdat\'";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    cVar1 = FUN_1001782e9(0,1);
    if (cVar1 == '\0') goto LAB_100319f09;
  }
  iVar3 = *(int *)(param_1 + 0x3c);
  if (iVar3 < 0x48545450) {
    if (iVar3 == 0x43442020) {
      if (*(char *)(param_1 + 0x44) == '\x01') {
        FUN_10031b262(&local_58,lVar5);
        FUN_1001b80b2(param_2,&local_58);
        goto LAB_100319fc6;
      }
    }
    else if (iVar3 == 0x46494c45) {
      if (*(char *)(param_1 + 0x44) != '\x01') {
        FUN_1002b4b5e(&local_58,param_1);
        FUN_1001b80b2(param_2,&local_58);
        goto LAB_100319fc6;
      }
      uVar4 = *(undefined8 *)(param_1 + 0x80);
      FUN_1001aa318(local_60);
      uVar4 = FUN_10016ff43(0,uVar4);
      FUN_1001ab218(&local_58,uVar4);
      FUN_1001aaadc(local_60,&local_58);
      FUN_1001ab3c4(&local_58);
      FUN_1001ab3ce(&local_58,local_60);
      FUN_1001b80b2(param_2,&local_58);
      FUN_1001b7a50(&local_58);
      FUN_1001ab3c4(local_60);
    }
  }
  else if (iVar3 == 0x48545450) {
    if (*(char *)(param_1 + 0x44) == '\x01') {
      FUN_1002b4b5e(&local_58,param_1);
      FUN_1001b80b2(param_2,&local_58);
      goto LAB_100319fc6;
    }
  }
  else if ((iVar3 == 0x53485244) && (*(char *)(param_1 + 0x44) == '\x01')) {
    FUN_10031b262(&local_58,lVar5);
    FUN_1001b80b2(param_2,&local_58);
LAB_100319fc6:
    FUN_1001b7a50(&local_58);
  }
  cVar1 = FUN_1001b8428(param_2);
  iVar3 = 0;
  if (cVar1 != '\0') {
    iVar3 = iVar2;
  }
LAB_100319fe1:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

