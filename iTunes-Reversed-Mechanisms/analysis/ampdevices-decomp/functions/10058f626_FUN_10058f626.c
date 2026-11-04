// name: FUN_10058f626
// address: 10058f626

undefined8 FUN_10058f626(undefined8 param_1,uint param_2,long param_3)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  cVar2 = FUN_100495380();
  if (cVar2 == '\0') {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    uVar6 = 0xffffffce;
    if (cVar2 != '\0') {
      local_4a = "ITImageLibraryIsValid(imageLibrary)";
LAB_10058f7db:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
  }
  else if (param_2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    uVar6 = 0xffffffce;
    if (cVar2 != '\0') {
      local_4a = "numFormats != 0";
      goto LAB_10058f7db;
    }
  }
  else {
    if (param_3 != 0) {
      uVar7 = 0;
      do {
        iVar1 = *(int *)(param_3 + uVar7 * 0x78);
        for (puVar3 = (undefined8 *)FUN_100495ce0(param_1); puVar3 != (undefined8 *)0x0;
            puVar3 = (undefined8 *)*puVar3) {
          if (*(int *)(puVar3 + 2) == iVar1) goto LAB_10058f6ab;
        }
        lVar4 = FUN_100499673(param_1,*(undefined4 *)(uVar7 * 0x78 + param_3));
        if (lVar4 == 0) {
          uVar5 = FUN_1001cc310();
          cVar2 = _os_log_type_enabled(uVar5,0x10);
          uVar6 = 0xffffff94;
          if (cVar2 == '\0') goto LAB_10058f800;
          local_4a = "formatInfo != nullptr";
          goto LAB_10058f7db;
        }
LAB_10058f6ab:
        uVar7 = uVar7 + 1;
      } while (uVar7 != param_2);
      uVar6 = 0;
      goto LAB_10058f809;
    }
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    uVar6 = 0xffffffce;
    if (cVar2 != '\0') {
      local_4a = "formatDescriptionList != nullptr";
      goto LAB_10058f7db;
    }
  }
LAB_10058f800:
  FUN_1001782e9(0,0);
LAB_10058f809:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

