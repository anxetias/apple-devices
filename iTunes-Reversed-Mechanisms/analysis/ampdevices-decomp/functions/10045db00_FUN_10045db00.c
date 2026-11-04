// name: FUN_10045db00
// address: 10045db00

void FUN_10045db00(long param_1,long param_2,uint *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) goto LAB_10045dc96;
  uVar2 = *(uint *)(param_2 + 0x50);
  uVar7 = (ulong)uVar2;
  if (uVar2 == *param_3) {
    uVar8 = uVar2 + 4;
    if (*(long *)(param_2 + 0x58) == 0) {
      if (uVar2 != 0) {
        uVar6 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "newNumAllocatedImages == kAlbumImageListChunkSize";
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      lVar5 = FUN_1001c6429((ulong)uVar8 << 4);
      *(long *)(param_2 + 0x58) = lVar5;
      if (lVar5 == 0) goto LAB_10045dc74;
    }
    else {
      lVar5 = FUN_1001c6479(*(long *)(param_2 + 0x58),(ulong)uVar8 << 4);
      *(long *)(param_2 + 0x58) = lVar5;
      if (lVar5 == 0) {
LAB_10045dc74:
        uVar6 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar6,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "album->imageList != nullptr";
          __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        goto LAB_10045dc96;
      }
      if (uVar2 < 0xfffffffc) {
        lVar9 = uVar8 - uVar7;
        lVar5 = uVar7 << 4;
        do {
          puVar1 = (undefined8 *)(*(long *)(param_2 + 0x58) + lVar5);
          *puVar1 = 0;
          puVar1[1] = 0;
          lVar5 = lVar5 + 0x10;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
    }
    *param_3 = uVar8;
    uVar7 = (ulong)*(uint *)(param_2 + 0x50);
  }
  iVar4 = FUN_10049b80b(param_2,uVar7,param_1);
  if (iVar4 != -0x80) {
    if (iVar4 == 0) {
      *(int *)(param_2 + 0x50) = *(int *)(param_2 + 0x50) + 1;
      if (*(uint *)(param_2 + 0x90) < *(uint *)(param_1 + 0x58)) {
        *(uint *)(param_2 + 0x90) = *(uint *)(param_1 + 0x58);
      }
    }
    else {
      uVar6 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar6,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x400;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar4);
        __os_log_error_impl(0x100000000,uVar6,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      }
    }
  }
LAB_10045dc96:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

