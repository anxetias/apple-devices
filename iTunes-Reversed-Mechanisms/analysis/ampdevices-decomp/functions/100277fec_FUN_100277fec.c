// name: FUN_100277fec
// address: 100277fec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100277fec(uint *param_1,long param_2)

{
  ushort uVar1;
  char cVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 local_68 [16];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == 0) {
    uVar5 = FUN_1001cc310();
    cVar2 = _os_log_type_enabled(uVar5,0x10);
    if (cVar2 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = "inAlbumInfo != nullptr";
      __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: err == (%d)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar4 = *(long *)(param_2 + 0x60);
    if (lVar4 != 0) {
      local_68 = (undefined1  [16])0x0;
      iVar7 = 0;
      iVar8 = 0;
      iVar6 = 0;
      do {
        uVar3 = FUN_1004744bf(lVar4,0);
        if ((uVar3 & 0x100b0) == 0 && (uVar3 & 0xfe182321) != 0) {
          uVar1 = *(ushort *)(lVar4 + 0x140);
          auVar9._2_2_ = uVar1 >> 1;
          auVar9._0_2_ = uVar1;
          auVar9._4_2_ = uVar1 >> 2;
          auVar9._6_2_ = uVar1 >> 4;
          auVar9._8_8_ = 0;
          auVar9 = pmovzxwd(auVar9 & _DAT_10073f810,auVar9 & _DAT_10073f810);
          local_68._4_4_ = local_68._4_4_ + auVar9._4_4_;
          local_68._0_4_ = local_68._0_4_ + auVar9._0_4_;
          local_68._8_4_ = local_68._8_4_ + auVar9._8_4_;
          local_68._12_4_ = local_68._12_4_ + auVar9._12_4_;
          iVar6 = iVar6 + (uint)((uVar1 >> 5 & 1) != 0);
          iVar8 = iVar8 + (uint)((~**(byte **)(*(long *)(lVar4 + 0x58) + 0x10) & 0x21) == 0);
          iVar7 = iVar7 + 1;
        }
        lVar4 = FUN_1003a095a(param_2);
      } while (lVar4 != 0);
      if (iVar7 != 0) {
        auVar10._0_4_ = -(uint)(local_68._0_4_ == iVar7);
        auVar10._4_4_ = -(uint)(local_68._4_4_ == iVar7);
        auVar10._8_4_ = -(uint)(local_68._8_4_ == iVar7);
        auVar10._12_4_ = -(uint)(local_68._12_4_ == iVar7);
        auVar9 = packssdw(auVar10,auVar10);
        auVar9 = packsswb(auVar9,auVar9);
        *param_1 = auVar9._0_4_ & (uint)DAT_100718e10;
        *(bool *)(param_1 + 1) = iVar6 == iVar7;
        *(bool *)((long)param_1 + 5) = iVar8 == iVar7;
        goto LAB_100278140;
      }
    }
    *(undefined2 *)(param_1 + 1) = 0;
    *param_1 = 0;
  }
LAB_100278140:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

