// name: FUN_1002a3daf
// address: 1002a3daf

ulong FUN_1002a3daf(long param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char cVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_20;
  
  local_20 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar5 = FUN_10049784b();
  if (lVar5 == 0) {
    uVar6 = FUN_1001cc310();
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_2a = "faceInstance != nullptr";
LAB_1002a3eb4:
      local_2c = 0x822;
      local_34 = "Assertion failure";
      local_38 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_38,0x16);
    }
  }
  else {
    lVar5 = FUN_10049a863(*(undefined8 *)(param_1 + 0x10),*(undefined4 *)(lVar5 + 8),1);
    if (lVar5 != 0) {
      uVar1 = *(undefined4 *)(lVar5 + 0x3c);
      uVar2 = *(undefined4 *)(lVar5 + 0x40);
      uVar3 = *(undefined4 *)(lVar5 + 0x44);
      *param_3 = *(undefined4 *)(lVar5 + 0x38);
      param_3[1] = uVar1;
      param_3[2] = uVar2;
      param_3[3] = uVar3;
      uVar7 = CONCAT71((int7)((ulong)param_3 >> 8),1);
      goto LAB_1002a3e75;
    }
    uVar6 = FUN_1001cc310();
    uVar6 = _objc_retainAutoreleasedReturnValue(uVar6);
    cVar4 = _os_log_type_enabled(uVar6,0x10);
    if (cVar4 != '\0') {
      local_2a = "faceAlbum != nullptr";
      goto LAB_1002a3eb4;
    }
  }
  (*(code *)PTR__objc_release_10082c7b0)(uVar6);
  uVar7 = 0;
  FUN_1001782e9(0,0);
LAB_1002a3e75:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_20) {
    return uVar7 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

