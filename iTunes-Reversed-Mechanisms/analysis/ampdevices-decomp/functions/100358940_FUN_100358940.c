// name: FUN_100358940
// address: 100358940

void FUN_100358940(undefined1 param_1,undefined1 param_2,undefined4 *param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(param_4,0xc0);
  FUN_1001ceabd(param_4 + 0x38,0,FUN_100358b8f,param_4,0,0);
  *param_4 = param_2;
  param_4[0x27] = 1;
  param_4[0x26] = param_1;
  param_4[0x25] = 1;
  FUN_100177cff(param_4 + 0x68);
  iVar5 = FUN_100594adc(param_4 + 0x18,0);
  if ((iVar5 != -0x80) && (iVar5 != 0)) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x400;
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar5);
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
  }
  if (param_3 == (undefined4 *)0x0) {
    lVar7 = FUN_10048bc9a();
    lVar7 = *(long *)(lVar7 + 0x78);
    *(long *)(param_4 + 4) = lVar7;
    if (lVar7 == 0) {
      uVar6 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar6,0x10);
      if (cVar4 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "processFileData->destPlaylistLocation.parent != nullptr";
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    *(undefined8 *)(param_4 + 0xc) = 0xffffffffffffffff;
  }
  else {
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    uVar3 = param_3[3];
    *(undefined4 *)(param_4 + 4) = *param_3;
    *(undefined4 *)(param_4 + 8) = uVar1;
    *(undefined4 *)(param_4 + 0xc) = uVar2;
    *(undefined4 *)(param_4 + 0x10) = uVar3;
  }
  plVar8 = *(long **)(param_4 + 4);
  if (plVar8 == (long *)0x0) {
    uVar6 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure (expected to be not NULL)";
      local_3c = 0x822;
      local_3a = "processFileData->destPlaylistLocation.parent";
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    cVar4 = FUN_1001782e9(0,0);
    if (cVar4 == '\0') {
      lVar7 = *(long *)(param_4 + 0xa8);
      goto LAB_100358a69;
    }
    plVar8 = *(long **)(param_4 + 4);
  }
  lVar7 = *plVar8;
  *(long *)(param_4 + 0xa8) = lVar7;
LAB_100358a69:
  *(undefined8 *)(param_4 + 0xa0) = *(undefined8 *)(lVar7 + 8);
  param_4[0x22] = param_4[0x22] | 1;
  FUN_100585817();
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

