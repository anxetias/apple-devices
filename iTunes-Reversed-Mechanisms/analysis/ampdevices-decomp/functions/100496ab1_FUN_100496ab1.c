// name: FUN_100496ab1
// address: 100496ab1

void FUN_100496ab1(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  char cVar4;
  undefined8 uVar5;
  long lVar6;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 == 0) || (cVar4 = FUN_100495380(*(undefined8 *)(param_1 + 0x10)), cVar4 == '\0')) {
    uVar5 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar5,0x10);
    if (cVar4 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "ITImageInfoIsValid(imageInfo)";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar1 = *(long *)(param_1 + 0x10);
    if (*(int *)(param_1 + 0x88) != 0) {
      FUN_1001dcff5(lVar1 + 0x70);
    }
    puVar2 = *(undefined8 **)(param_1 + 0x68);
    while (puVar2 != (undefined8 *)0x0) {
      puVar2 = (undefined8 *)*puVar2;
      FUN_100497f5f();
    }
    FUN_100497925(param_1);
    if (*(short *)(param_1 + 0x62) != 0) {
      uVar5 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar5,0x10);
      if (cVar4 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "imageInfo->numInstances == 0";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    if (*(short *)(param_1 + 0x72) != 0) {
      uVar5 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar5,0x10);
      if (cVar4 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "imageInfo->numFaces == 0";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    if (*(int *)(lVar1 + 8) == 0) {
      uVar5 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar5,0x10);
      if (cVar4 != '\0') {
        local_48 = 0x8220202;
        local_44 = "Assertion failure";
        local_3c = 0x822;
        local_3a = "imageLibrary->numImages != 0";
        __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    plVar3 = *(long **)(lVar1 + 0x13d0);
    if ((plVar3 != (long *)0x0) &&
       (lVar6 = FUN_10049c5a2(plVar3,*(undefined4 *)(param_1 + 0x18)),
       (long)(int)plVar3[1] * 0x10 + *plVar3 != lVar6)) {
      FUN_10049c6a8(plVar3,lVar6);
    }
    plVar3 = *(long **)(lVar1 + 0x13d8);
    if (((plVar3 != (long *)0x0) && (*(long *)(param_1 + 0x20) != 0)) &&
       (lVar6 = FUN_10049c5a2(plVar3), (long)(int)plVar3[1] * 0x10 + *plVar3 != lVar6)) {
      FUN_10049c6a8(plVar3,lVar6);
    }
    if (*(long *)(lVar1 + 0x13e0) != 0) {
      FUN_1001c64c1();
      *(undefined8 *)(lVar1 + 0x13e0) = 0;
    }
    FUN_1001c2d56(lVar1 + 0x10,param_1);
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + -1;
    FUN_1001c5aec(*(undefined8 *)(lVar1 + 0x48),param_1);
    *(undefined1 *)(lVar1 + 4) = 1;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

