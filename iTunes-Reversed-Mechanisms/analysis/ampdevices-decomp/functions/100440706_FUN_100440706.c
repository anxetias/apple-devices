// name: FUN_100440706
// address: 100440706

byte FUN_100440706(long param_1,uint *param_2)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  byte bVar9;
  uint local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10043e902();
  if (*(long *)(param_1 + 0x498) == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "mAsset != __null";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar3 = _AVCFAssetCopyAssetTracks();
    if (lVar3 != 0) {
      lVar4 = FUN_10017076e(lVar3);
      if (lVar4 < 1) {
        uVar8 = 0;
        bVar9 = 0;
      }
      else {
        bVar9 = 0;
        lVar7 = 0;
        uVar8 = 0;
        do {
          local_58 = 0;
          uVar5 = FUN_100170853(lVar3,lVar7);
          bVar1 = FUN_100440938(uVar5,&local_58);
          uVar6 = 0;
          if (bVar1 != 0) {
            uVar6 = local_58;
          }
          uVar8 = uVar8 | uVar6;
          bVar9 = bVar9 | bVar1;
          lVar7 = lVar7 + 1;
        } while (lVar4 != lVar7);
      }
      goto LAB_1004407d9;
    }
  }
  uVar8 = 0;
  lVar3 = 0;
  bVar9 = 0;
LAB_1004407d9:
  FUN_10017060f(lVar3);
  if (param_2 != (uint *)0x0) {
    *param_2 = uVar8;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar9 & 1;
}

