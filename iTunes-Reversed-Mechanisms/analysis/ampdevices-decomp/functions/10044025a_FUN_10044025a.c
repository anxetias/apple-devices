// name: FUN_10044025a
// address: 10044025a

void FUN_10044025a(long param_1)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 local_38;
  char *local_34;
  undefined2 local_2c;
  char *local_2a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar4 = *(undefined8 *)PTR__CGSizeZero_10082e370;
  uVar5 = *(undefined8 *)(PTR__CGSizeZero_10082e370 + 8);
  if (*(long *)(param_1 + 0x4a8) != 0) {
    lVar2 = _AVCFPlayerItemGetStatus(*(long *)(param_1 + 0x4a8),0);
    if (lVar2 == 1) {
      uVar4 = _AVCFPlayerItemGetPresentationSize(*(undefined8 *)(param_1 + 0x4a8));
      goto LAB_1004402ee;
    }
  }
  if (*(long *)(param_1 + 0x498) == 0) {
    FUN_10043e902(param_1);
    if (*(long *)(param_1 + 0x498) == 0) {
      uVar3 = FUN_1001cc310();
      cVar1 = _os_log_type_enabled(uVar3,0x10);
      if (cVar1 != '\0') {
        local_38 = 0x8220202;
        local_34 = "Assertion failure";
        local_2c = 0x822;
        local_2a = "asset != __null";
        __os_log_error_impl(0x100000000,uVar3,0x10,"%{public}s: (%{public}s)",&local_38,0x16,uVar4,
                            uVar5);
      }
      FUN_1001782e9(0,0);
      goto LAB_1004402ee;
    }
  }
  uVar4 = _AVCFAssetGetNaturalSize();
LAB_1004402ee:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar4);
}

