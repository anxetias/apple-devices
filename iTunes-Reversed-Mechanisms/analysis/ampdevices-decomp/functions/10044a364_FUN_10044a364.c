// name: FUN_10044a364
// address: 10044a364

void FUN_10044a364(long param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 local_48;
  char *local_44;
  undefined2 local_3c;
  char *local_3a;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_10082cb58;
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  lVar4 = _AVCFAssetExportSessionGetStatus(uVar6);
  lVar5 = 0;
  if (lVar4 != 2) {
    if (lVar4 == 4) {
      uVar3 = 0xffffff80;
    }
    else {
      if (lVar4 != 3) goto LAB_10044a3fb;
      lVar5 = _AVCFAssetExportSessionCopyError(uVar6);
      if (lVar5 == 0) {
        uVar6 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar6,0x10);
        if (cVar1 != '\0') {
          local_48 = 0x8220202;
          local_44 = "Assertion failure (expected to be not NULL)";
          local_3c = 0x822;
          local_3a = "error";
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        cVar1 = FUN_1001782e9(0,0);
        if (cVar1 != '\0') goto LAB_10044a3d9;
        iVar2 = *(int *)(param_1 + 0x34);
      }
      else {
LAB_10044a3d9:
        iVar2 = FUN_100171607(lVar5);
        *(int *)(param_1 + 0x34) = iVar2;
      }
      if (iVar2 != 0) goto LAB_10044a3f7;
      uVar3 = 0x2350;
    }
    *(undefined4 *)(param_1 + 0x34) = uVar3;
  }
LAB_10044a3f7:
  *(undefined1 *)(param_1 + 0x31) = 1;
LAB_10044a3fb:
  FUN_10017060f(lVar5);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

