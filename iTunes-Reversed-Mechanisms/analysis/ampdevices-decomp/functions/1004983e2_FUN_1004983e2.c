// name: FUN_1004983e2
// address: 1004983e2

undefined8 FUN_1004983e2(long param_1,int param_2)

{
  char cVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong local_68;
  long local_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar1 = FUN_100495380();
  if (cVar1 == '\0') {
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "ITImageLibraryIsValid(imageLibrary)";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else if (param_2 != 0) {
    puVar2 = *(undefined8 **)(param_1 + 0x13d0);
    if (puVar2 == (undefined8 *)0x0) {
      puVar2 = operator_new(0x18,(nothrow_t *)PTR_nothrow_10082c970);
      if (puVar2 == (undefined8 *)0x0) {
        *(undefined8 *)(param_1 + 0x13d0) = 0;
        uVar4 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar4,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "imageLibrary->imageRecordIDMap != nullptr";
          __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        goto LAB_1004984e9;
      }
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      *(undefined8 **)(param_1 + 0x13d0) = puVar2;
      lVar3 = FUN_100496019(param_1);
      local_60 = lVar3;
      if (lVar3 != 0) {
        do {
          local_68 = (ulong)*(uint *)(lVar3 + 0x18);
          local_60 = lVar3;
          FUN_10049bea4(&local_58,*(undefined8 *)(param_1 + 0x13d0),&local_68,&local_60);
          lVar3 = FUN_1004960d0(lVar3);
          local_60 = lVar3;
        } while (lVar3 != 0);
      }
      puVar2 = *(undefined8 **)(param_1 + 0x13d0);
    }
    lVar3 = FUN_10049c6ea(*puVar2,*(undefined4 *)((long)puVar2 + 0xc),param_2);
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(lVar3 + 8);
      goto LAB_1004984eb;
    }
  }
LAB_1004984e9:
  uVar4 = 0;
LAB_1004984eb:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

