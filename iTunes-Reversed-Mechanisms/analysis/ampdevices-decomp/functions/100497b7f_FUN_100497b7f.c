// name: FUN_100497b7f
// address: 100497b7f

undefined8 FUN_100497b7f(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
LAB_100497c42:
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "ITImageInfoIsValid(sourceImageInfo)";
LAB_100497cef:
      local_3c = 0x822;
      local_44 = "Assertion failure";
      local_48 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x16);
    }
  }
  else {
    cVar1 = FUN_100495380(*(undefined8 *)(param_1 + 0x10));
    if (cVar1 == '\0') goto LAB_100497c42;
    if (param_2 != 0) {
      cVar1 = FUN_100495380(*(undefined8 *)(param_2 + 0x10));
      if (cVar1 != '\0') {
        FUN_100497925(param_2);
        plVar4 = (long *)(param_1 + 0x78);
        uVar3 = 0;
        do {
          plVar4 = (long *)*plVar4;
          if (plVar4 == (long *)0x0) goto LAB_100497ca9;
          lVar2 = FUN_100497564(param_2,*(undefined4 *)(plVar4 + 1),
                                *(undefined2 *)((long)plVar4 + 0xc),plVar4 + 3,0);
        } while (lVar2 != 0);
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure";
          local_3c = 0x822;
          local_3a = 
          "NewITImageFaceInstance(destImageInfo, sourceFaceInstance->faceAlbumSourceID, sourceFaceInstance->faceIndex, sourceFaceInstance->faceRect) != nullptr"
          ;
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: err == (%d)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
        FUN_100497925(param_2);
        uVar3 = 0xffffff94;
        goto LAB_100497ca9;
      }
    }
    uVar3 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar3,0x10);
    if (cVar1 != '\0') {
      local_3a = "ITImageInfoIsValid(destImageInfo)";
      goto LAB_100497cef;
    }
  }
  FUN_1001782e9(0,0);
  uVar3 = 0xffffffce;
LAB_100497ca9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

