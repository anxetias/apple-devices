// name: FUN_10021cc8a
// address: 10021cc8a

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10021cc8a(long param_1,long param_2,undefined8 *param_3)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  long *plVar9;
  undefined8 uVar10;
  int iVar11;
  long lVar12;
  float fVar13;
  float fVar14;
  undefined4 local_6f8;
  char *local_6f4;
  undefined2 local_6ec;
  char *local_6ea;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_10021c23e(param_1,*(undefined8 *)(param_2 + 8),param_1 + 0x458);
  if ((*(int *)(param_1 + 0x478) == 0) || (lVar12 = *(long *)(param_1 + 0x28), lVar12 == 0)) {
    lVar12 = *(long *)(param_1 + 0x18);
  }
  plVar9 = operator_new(0x368,(nothrow_t *)PTR_nothrow_10082c970);
  if (plVar9 == (long *)0x0) {
    uVar10 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar10,0x10);
    if (cVar7 != '\0') {
      local_6f8 = 0x8220202;
      local_6f4 = "Assertion failure";
      local_6ec = 0x822;
      local_6ea = "encoder != nullptr";
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_6f8,0x16);
    }
    FUN_1001782e9(0,0);
    iVar8 = -0x6c;
    goto LAB_10021cfd4;
  }
  FUN_1002cd1b2(plVar9,lVar12);
  iVar8 = *(int *)(param_1 + 0x464);
  if (iVar8 == 0) {
    iVar8 = *(int *)(param_2 + 0x54);
  }
  *(int *)(param_1 + 0x444) = iVar8;
  uVar2 = *(uint *)(param_1 + 0x45c + (ulong)(iVar8 != 1) * 4);
  iVar11 = 0x7f;
  if (*(uint *)(param_2 + 0x58) < 0x11) {
    iVar11 = *(int *)(param_1 + 0x474);
  }
  uVar3 = *(uint *)(param_2 + 0x14);
  uVar4 = *(uint *)(param_1 + 0x468);
  iVar5 = *(int *)(param_1 + 0x46c);
  if (0x1f400 < uVar2) {
    iVar11 = 0x7f;
  }
  iVar6 = *(int *)(param_1 + 0x470);
  if (((iVar11 != 0) && (iVar11 != 0x60)) && (iVar11 != 0x7f)) {
    uVar10 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar10,0x10);
    if (cVar7 != '\0') {
      local_6f8 = 0x8220202;
      local_6f4 = "Assertion failure";
      local_6ec = 0x822;
      local_6ea = "qualitySetting == 0";
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_6f8,0x16);
    }
    iVar11 = 0;
    FUN_1001782e9(0,0);
    iVar8 = *(int *)(param_1 + 0x444);
  }
  iVar8 = (**(code **)(*plVar9 + 0x10))
                    (plVar9,(uint)(iVar6 != 0) | (uVar3 & 3) * 0x20 + (uVar3 & 4) * 4,uVar4,uVar2,
                     iVar8,iVar11);
  if (iVar8 != -0x80) {
    if (iVar8 == 0) {
      iVar8 = (**(code **)(*plVar9 + 0x18))(plVar9,param_2);
      if (iVar8 == -0x80) goto LAB_10021cfcb;
      if (iVar8 == 0) {
        *param_3 = plVar9;
        if (_DAT_100718a90 <= *(double *)(param_2 + 0x38)) {
          *(byte *)(param_2 + 0xb0) = *(byte *)(param_2 + 0xb0) | 2;
        }
        iVar8 = 0;
        if (iVar5 != 0) {
          dVar1 = *(double *)(param_2 + 0x70);
          fVar13 = (float)dVar1;
          cVar7 = FUN_10015d7a0(param_2 + 0x70);
          if (cVar7 != '\0') {
            *(undefined2 *)(param_1 + 0x410) = 0x101;
          }
          fVar14 = (float)uVar4;
          if ((fVar13 != fVar14) || (NAN(fVar13) || NAN(fVar14))) {
            *(undefined2 *)(param_1 + 0x410) = 0;
            fVar13 = DAT_100700b28 * fVar13;
          }
          else {
            fVar13 = DAT_100700b28 * fVar13;
            if ((*(byte *)(param_1 + 0x410) & 1) != 0) {
              *(undefined4 *)(param_1 + 0x41c) = 0x42c80000;
              if (fVar13 <= DAT_10070bcf0) {
                *(undefined1 *)(param_1 + 0x410) = 0;
              }
              else {
                FUN_10028621e(&local_6f8,1,(int)dVar1,100,(float *)(param_1 + 0x420),param_1 + 0x428
                             );
                *(float *)(param_1 + 0x424) = DAT_100700b50 / *(float *)(param_1 + 0x420);
                *(undefined8 *)(param_1 + 0x414) = 0;
              }
            }
          }
          if (*(char *)(param_1 + 0x411) == '\x01') {
            *(undefined4 *)(param_1 + 0x434) = 0x45bb8000;
            if (fVar13 <= DAT_100718a98) {
              *(undefined1 *)(param_1 + 0x411) = 0;
              iVar8 = 0;
            }
            else {
              fVar13 = fVar13 * _DAT_100718a9c;
              iVar11 = 6000;
              if (fVar13 < DAT_100718a98) {
                *(float *)(param_1 + 0x434) = fVar13;
                iVar11 = (int)fVar13;
              }
              FUN_1002860d6(&local_6f8,1,(int)dVar1,iVar11,(float *)(param_1 + 0x438),
                            param_1 + 0x440);
              *(float *)(param_1 + 0x43c) = DAT_100700b50 / *(float *)(param_1 + 0x438);
              *(undefined8 *)(param_1 + 0x42c) = 0;
            }
          }
        }
        goto LAB_10021cfd4;
      }
      uVar10 = FUN_1001cc310();
      cVar7 = _os_log_type_enabled(uVar10,0x10);
      if (cVar7 != '\0') {
        local_6ea = (char *)CONCAT44(local_6ea._4_4_,iVar8);
        goto LAB_10021d169;
      }
    }
    else {
      uVar10 = FUN_1001cc310();
      cVar7 = _os_log_type_enabled(uVar10,0x10);
      if (cVar7 != '\0') {
        local_6ea = (char *)CONCAT44(local_6ea._4_4_,iVar8);
LAB_10021d169:
        local_6ec = 0x400;
        local_6f4 = "Assertion failure";
        local_6f8 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_6f8,0x12);
      }
    }
    if (2 < iVar8 + 0xbb82U) {
      if (iVar8 == 0) goto LAB_10021cfd4;
      if (iVar8 != -0xce) goto LAB_10021cfcb;
    }
    FUN_1001c34b7(0x138c0001,param_2 + 0xb4);
  }
LAB_10021cfcb:
  (**(code **)(*plVar9 + 8))(plVar9);
LAB_10021cfd4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

