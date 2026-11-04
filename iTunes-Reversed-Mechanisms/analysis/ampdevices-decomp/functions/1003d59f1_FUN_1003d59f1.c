// name: FUN_1003d59f1
// address: 1003d59f1

void FUN_1003d59f1(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_100496791(*(undefined8 *)(param_1 + 0x3e0));
  FUN_1003d767c(param_1,1,*(long *)(param_1 + 0x10) + 0x4578,
                *(undefined4 *)(*(long *)(param_1 + 0x10) + 0x4570),0);
  lVar2 = FUN_100496019(*(undefined8 *)(param_1 + 0x3e0));
  if (lVar2 != 0) {
    do {
      cVar1 = *(char *)(lVar2 + 0x80);
      if (cVar1 == '\x03') {
        uVar3 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar3,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "desktopImageInfo->imageState != kITImageState_MissingThumbs";
          __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        cVar1 = *(char *)(lVar2 + 0x80);
      }
      if (((cVar1 == '\x03') || (cVar1 == '\0')) && ((*(byte *)(lVar2 + 0xa0) & 2) == 0)) {
        *(undefined1 *)(lVar2 + 0x80) = 6;
      }
      lVar2 = FUN_1004960d0(lVar2);
    } while (lVar2 != 0);
  }
  FUN_100496791(*(undefined8 *)(param_1 + 0x3e0));
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

