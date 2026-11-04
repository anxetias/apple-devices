// name: FUN_100447f3a
// address: 100447f3a

int FUN_100447f3a(long param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long local_50;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_50 = 0;
  if (*(long *)(param_1 + 0x30) != 0) {
LAB_100447f64:
    iVar2 = 0;
    goto LAB_100448004;
  }
  iVar2 = *(int *)(param_1 + 0x40);
  if (iVar2 != 0) goto LAB_100448004;
  lVar3 = _AVCFAssetReaderCreateWithAsset(0,*(undefined8 *)(param_1 + 0x28),&local_50);
  *(long *)(param_1 + 0x30) = lVar3;
  if (local_50 == 0 || lVar3 != 0) {
LAB_100447fbf:
    if (lVar3 != 0) {
      FUN_10017060f(local_50);
      goto LAB_100447f64;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x822;
      local_3a = "mAssetReader != __null";
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
    }
    FUN_1001782e9(0,0);
    iVar2 = 0x234f;
LAB_100447ff7:
    FUN_10017060f(local_50);
  }
  else {
    iVar2 = FUN_100171607();
    if (iVar2 == -0x80) goto LAB_100447ff7;
    if (iVar2 == 0) {
      lVar3 = *(long *)(param_1 + 0x30);
      goto LAB_100447fbf;
    }
    uVar4 = FUN_1001cc310();
    cVar1 = _os_log_type_enabled(uVar4,0x10);
    if (cVar1 != '\0') {
      local_48 = 0x8220202;
      local_44 = "Assertion failure";
      local_3c = 0x400;
      local_3a = (char *)CONCAT44(local_3a._4_4_,iVar2);
      __os_log_error_impl(0x100000000,uVar4,0x10,"%{public}s: err == (%d)",&local_48,0x12);
    }
    FUN_10017060f(local_50);
    if (iVar2 == 0) goto LAB_100447f64;
  }
  *(int *)(param_1 + 0x40) = iVar2;
LAB_100448004:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar2;
}

