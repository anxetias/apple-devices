// name: FUN_10049b80b
// address: 10049b80b

undefined8 FUN_10049b80b(long param_1,ulong param_2,long param_3)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == 0) {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "album != nullptr";
LAB_10049b95b:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar2,0x10,"%{public}s: err == (%d)",&local_38,0x16);
    }
  }
  else if (*(byte *)(param_1 + 0x11) < 0x12) {
    if (param_3 == 0) {
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_2a = "imageInfo != nullptr";
        goto LAB_10049b95b;
      }
    }
    else {
      lVar3 = (param_2 & 0xffffffff) * 0x10;
      if (*(long *)(*(long *)(param_1 + 0x58) + lVar3) == 0) {
        *(long *)(*(long *)(param_1 + 0x58) + lVar3) = param_3;
        uVar2 = 0;
        goto LAB_10049b98e;
      }
      uVar2 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar2,0x10);
      if (cVar1 != '\0') {
        local_2a = "albumItem->imageInfo == nullptr";
        goto LAB_10049b95b;
      }
    }
  }
  else {
    uVar2 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar2,0x10);
    if (cVar1 != '\0') {
      local_2a = "album->albumKind <= kITImageAlbumKind_LAST";
      goto LAB_10049b95b;
    }
  }
  FUN_1001782e9(0,0);
  uVar2 = 0xffffffce;
LAB_10049b98e:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

