// name: FUN_1003dad86
// address: 1003dad86

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1003dad86(long param_1,int *param_2)

{
  long *plVar1;
  int *piVar2;
  double dVar3;
  long *plVar4;
  double dVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  uint uVar12;
  void *pvVar13;
  int iVar14;
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 uStack_280;
  undefined4 uStack_27c;
  undefined8 local_278;
  long local_270;
  double *local_268;
  int local_25c;
  uint local_258;
  undefined8 local_254;
  undefined2 local_24c;
  undefined2 uStack_24a;
  undefined2 uStack_248;
  undefined2 uStack_246;
  undefined2 uStack_244;
  long local_240 [61];
  int local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x578) = 0;
  *(undefined1 *)(param_1 + 0x594) = 0;
  uVar9 = param_2[4];
  *(bool *)(param_1 + 0x595) = (uVar9 & 0x48) != 0;
  *(byte *)(param_1 + 0x597) = (byte)(uVar9 >> 0x15) & 1;
  *(byte *)(param_1 + 0x599) = (byte)(uVar9 >> 0xe) & 1;
  *(char *)(param_1 + 0x59a) = (char)((uVar9 & 0x8000) >> 0xf);
  if ((uVar9 & 0x8000) != 0) {
    *(undefined1 *)(param_1 + 0x599) = 1;
  }
  local_25c = 0;
  lVar11 = *(long *)(param_2 + 0xe);
  *(long *)(param_1 + 0x20) = lVar11;
  if (lVar11 != 0) {
    if (*(long *)(lVar11 + 8) == 0) {
LAB_1003dae54:
      *(long *)(lVar11 + 8) = param_1;
      goto LAB_1003dae58;
    }
    iVar7 = (**(code **)(**(long **)(*(long *)(lVar11 + 8) + 0x568) + 0x128))();
    if (iVar7 == -0x80) goto LAB_1003db1dc;
    if (iVar7 == 0) {
      lVar11 = *(long *)(param_1 + 0x20);
      goto LAB_1003dae54;
    }
    uVar10 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar10,0x10);
    if (cVar6 == '\0') goto LAB_1003db1dc;
    uStack_24a = (undefined2)iVar7;
    uStack_248 = (undefined2)((uint)iVar7 >> 0x10);
LAB_1003db100:
    local_24c = 0x400;
    local_254 = "Assertion failure";
    local_258 = 0x8220202;
    __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_258,0x12);
    goto LAB_1003db1dc;
  }
LAB_1003dae58:
  iVar14 = *param_2;
  *(int *)(param_1 + 0x28) = iVar14;
  _memcpy((void *)(param_1 + 0x2c),*(void **)(param_2 + 2),0x460);
  iVar7 = -4;
  if (iVar14 < 0x4d46494c) {
    if (iVar14 == 0x46494c45) goto LAB_1003daeb5;
    if (iVar14 != 0x48545450) goto LAB_1003db1dc;
LAB_1003dafb3:
    local_258 = local_258 & 0xffffff00;
    if ((*param_2 == 0x48545450) || (*param_2 == 0x53485244)) {
      pvVar13 = (void *)(*(long *)(param_2 + 2) + 0x2c);
      _memcpy((void *)(param_1 + 0x59c),pvVar13,0x408);
      iVar7 = FUN_1003dbb78(pvVar13,&local_25c);
      if (iVar7 == 0) {
        iVar7 = FUN_1003dbc9c(*(undefined8 *)(param_1 + 0x10),pvVar13,param_2[0x26],&local_258,0,
                              *(undefined8 *)(param_2 + 6),param_1 + 0x596,param_1 + 0x568);
      }
      if ((iVar7 != -0x80) && (iVar7 != 0)) {
        uVar10 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar10,0x10);
        if (cVar6 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar7);
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
    }
    else {
      uVar10 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar10,0x10);
      if (cVar6 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "urlLocation != nullptr";
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      iVar7 = -0x32;
    }
  }
  else {
    if (iVar14 == 0x53485244) goto LAB_1003dafb3;
    if (iVar14 != 0x4d46494c) goto LAB_1003db1dc;
LAB_1003daeb5:
    local_258 = 0;
    uVar8 = FUN_1003b73be(*param_2,*(undefined8 *)(param_2 + 2),0);
    iVar7 = FUN_100466aac("FFIAFFIAFFIA FIAFFIAFFIACFIACFIACFIAADDCFFIAFFIAEVAWEVAWEVAW VAWEVAWEVAWVAW.EVAWEVAW"
                          ,uVar8,local_258,&local_58,0,0xf);
    local_25c = 0x41494646;
    if (local_58 != 0x41494643) {
      local_25c = local_58;
    }
    if (iVar7 == 0) {
      iVar7 = FUN_1003db90a(*param_2,*(undefined8 *)(param_2 + 2),param_2[0x26],
                            *(byte *)(param_1 + 0x595) == 0,
                            ((uint)param_2[4] >> 0x14 & 4) + (*(byte *)(param_1 + 0x595) ^ 1) * 2,
                            param_1 + 0x568);
    }
    if ((iVar7 != -0x80) && (iVar7 != 0)) {
      uVar10 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar10,0x10);
      if (cVar6 == '\0') goto LAB_1003db1dc;
      uStack_24a = (undefined2)iVar7;
      uStack_248 = (undefined2)((uint)iVar7 >> 0x10);
      goto LAB_1003db100;
    }
  }
  if (iVar7 != 0) goto LAB_1003db1dc;
  plVar4 = *(long **)(param_1 + 0x570);
  local_288 = *(undefined4 *)(param_1 + 0x568);
  uStack_284 = *(undefined4 *)(param_1 + 0x56c);
  uStack_280 = *(undefined4 *)(param_1 + 0x570);
  uStack_27c = *(undefined4 *)(param_1 + 0x574);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar4[1] = plVar4[1] + 1;
    UNLOCK();
  }
  local_268 = (double *)(param_1 + 0x510);
  iVar7 = FUN_1003dc014(&local_288,local_25c,param_2[4],*(undefined8 *)(param_2 + 6),
                        (double *)(param_1 + 0x490),param_1 + 0x508,local_268);
  if (plVar4 != (long *)0x0) {
    LOCK();
    plVar1 = plVar4 + 1;
    lVar11 = *plVar1;
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (lVar11 == 0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
      std::__shared_weak_count::__release_weak();
    }
  }
  if (iVar7 != 0) goto LAB_1003db1dc;
  *(undefined4 *)(param_1 + 0x588) = 0x4000;
  iVar7 = 0x4000;
  *(int *)(param_1 + 0x538) = (int)(0x4000 / (ulong)*(uint *)(param_1 + 0x528));
  if (*(long *)(param_1 + 0x508) != 0) {
    dVar15 = *(double *)(param_1 + 0x490);
    dVar3 = *local_268;
    if (((dVar15 == dVar3) && (!NAN(dVar15) && !NAN(dVar3))) &&
       (*(int *)(param_1 + 0x498) == 0x6c70636d)) {
      *(undefined1 *)(param_1 + 0x598) = 1;
    }
    if (((dVar15 != dVar3) || (NAN(dVar15) || NAN(dVar3))) && (*(char *)(param_1 + 0x598) == '\0'))
    {
      local_58 = 0x7f;
      iVar7 = _AudioConverterSetProperty(*(long *)(param_1 + 0x508),0x73726371,4);
      if ((iVar7 != -0x80) && (iVar7 != 0)) {
        uVar10 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar10,0x10);
        if (cVar6 != '\0') {
          local_258 = 0x8220202;
          local_254 = "Assertion failure";
          local_24c = 0x400;
          uStack_24a = (undefined2)iVar7;
          uStack_248 = (undefined2)((uint)iVar7 >> 0x10);
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_258,0x12);
        }
      }
    }
    uVar9 = *(uint *)(param_1 + 0x4a0);
    if (uVar9 == 0) {
      uVar10 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar10,0x10);
      if (cVar6 != '\0') {
        local_258 = 0x8220202;
        local_254 = "Assertion failure";
        local_24c = 0x822;
        uStack_24a = 0xad04;
        uStack_248 = 0x7c;
        uStack_246 = 1;
        uStack_244 = 0;
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_258,0x16);
      }
      FUN_1001782e9(0,0);
      uVar10 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar10,0x10);
      iVar7 = -0xd5;
      if (cVar6 == '\0') goto LAB_1003db1dc;
      uStack_24a = 0xff2b;
      uStack_248 = 0xffff;
      goto LAB_1003db100;
    }
    uVar12 = *(uint *)(param_1 + 0x588) / uVar9;
    *(uint *)(param_1 + 0x538) = *(int *)(param_1 + 0x4a4) * uVar12;
    iVar7 = uVar12 * uVar9;
    *(int *)(param_1 + 0x588) = iVar7;
  }
  if ((*(byte *)(param_2 + 4) & 0x40) != 0) {
    iVar7 = -0xd0;
    if (*(int *)(param_1 + 0x4a4) != 1) goto LAB_1003db1dc;
    iVar7 = 0x400;
    if (param_2[0x27] != 0) {
      iVar7 = param_2[0x27];
    }
    *(int *)(param_1 + 0x538) = iVar7;
    iVar7 = iVar7 * *(int *)(param_1 + 0x4a0);
    *(int *)(param_1 + 0x588) = iVar7;
  }
  lVar11 = FUN_1001c63e1((long)iVar7);
  *(long *)(param_1 + 0x580) = lVar11;
  if (lVar11 == 0) {
    uVar10 = FUN_1001cc310();
    cVar6 = _os_log_type_enabled(uVar10,0x10);
    if (cVar6 != '\0') {
      local_258 = 0x8220202;
      local_254 = "Assertion failure";
      local_24c = 0x822;
      uStack_24a = 0xadb3;
      uStack_248 = 0x7c;
      uStack_246 = 1;
      uStack_244 = 0;
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_258,0x16);
    }
    FUN_1001782e9(0,0);
    iVar7 = -0x6c;
    goto LAB_1003db1dc;
  }
  iVar7 = *(int *)(param_1 + 0x28);
  if ((local_25c == 0x41494646) && ((iVar7 == 0x4d46494c || (iVar7 == 0x46494c45)))) {
    lVar11 = FUN_1003ae1f8();
    if (lVar11 != 0) {
      local_258 = 0x61727477;
      local_240[0] = 0;
      local_254._0_5_ = CONCAT14(1,(undefined4)local_254);
      local_24c = 0;
      uStack_248 = 0;
      uStack_246 = 0;
      if (((*(byte *)(param_2 + 4) & 100) == 0) &&
         (iVar7 = FUN_1005d38c7(0,0,local_240), iVar7 != 0)) {
LAB_1003db55c:
        if (local_240[0] != 0) {
          piVar2 = (int *)(local_240[0] + 4);
          *piVar2 = *piVar2 + -1;
          if (*piVar2 == 0) {
            FUN_1005d3cba();
          }
        }
      }
      else {
        local_278 = *(undefined8 *)(param_1 + 0x568);
        local_270 = *(long *)(param_1 + 0x570);
        if (local_270 != 0) {
          LOCK();
          *(long *)(local_270 + 8) = *(long *)(local_270 + 8) + 1;
          UNLOCK();
        }
        iVar7 = FUN_1003de1c2(local_278,local_270,lVar11,lVar11 + 0x1660,&local_258,0);
        FUN_10021e316(&local_278);
        if (iVar7 != 0) goto LAB_1003db55c;
        *(long *)(param_1 + 0x4f0) = local_240[0];
        *(undefined1 *)(param_1 + 0x4f8) = local_254._4_1_;
        *(ulong *)(param_1 + 0x4fc) =
             CONCAT26(uStack_246,CONCAT24(uStack_248,CONCAT22(uStack_24a,local_24c)));
      }
      FUN_1003ae783(lVar11 + 0x4ca8);
      FUN_1001c64c1(lVar11);
    }
    iVar7 = *(int *)(param_1 + 0x28);
  }
  if ((iVar7 != 0x48545450) && (iVar7 != 0x53485244)) {
    iVar7 = (**(code **)(**(long **)(param_1 + 0x568) + 0xf0))
                      (*(long **)(param_1 + 0x568),*(undefined8 *)(param_1 + 0x4c8));
    if (iVar7 == -0x80) goto LAB_1003db1dc;
    if (iVar7 != 0) {
      uVar10 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar10,0x10);
      if (cVar6 == '\0') goto LAB_1003db1dc;
      uStack_24a = (undefined2)iVar7;
      uStack_248 = (undefined2)((uint)iVar7 >> 0x10);
      goto LAB_1003db100;
    }
  }
  dVar15 = (double)*(uint *)(param_1 + 0x4a4) * _DAT_100708b48;
  auVar16._0_8_ =
       (double)*(uint *)(param_1 + 0x4a4) *
       (((double)CONCAT44((undefined4)DAT_10070d3c0,(int)*(undefined8 *)(param_1 + 0x4c0)) -
        _DAT_10070d3d0) +
       ((double)CONCAT44(DAT_10070d3c0._4_4_,(int)((ulong)*(undefined8 *)(param_1 + 0x4c0) >> 0x20))
       - _UNK_10070d3d8));
  auVar16._8_8_ = _UNK_100747ca8 * (double)*(uint *)(param_1 + 0x4a0) * *(double *)(param_1 + 0x490)
  ;
  auVar17._8_4_ = SUB84(dVar15,0);
  auVar17._0_8_ = *(double *)(param_1 + 0x490) / _DAT_100708b48;
  auVar17._12_4_ = (int)((ulong)dVar15 >> 0x20);
  auVar17 = divpd(auVar16,auVar17);
  iVar7 = (int)auVar17._0_8_;
  iVar14 = (int)auVar17._8_8_;
  *(ulong *)(param_1 + 0x53c) =
       CONCAT44((int)(auVar17._8_8_ + _UNK_100747cb8),(int)(auVar17._0_8_ + _DAT_100747cb0)) &
       CONCAT44(iVar14 >> 0x1f,iVar7 >> 0x1f) | CONCAT44(iVar14,iVar7);
  *(undefined4 *)(param_1 + 0x548) = *(undefined4 *)(param_1 + 0x4c8);
  *(undefined4 *)(param_1 + 0x54c) = *(undefined4 *)(param_1 + 0x4cc);
  *(undefined4 *)(param_1 + 0x550) = *(undefined4 *)(param_1 + 0x4c8);
  *(undefined4 *)(param_1 + 0x554) = *(undefined4 *)(param_1 + 0x4cc);
  *(undefined4 *)(param_1 + 0x558) = *(undefined4 *)(param_1 + 0x4d0);
  *(undefined4 *)(param_1 + 0x55c) = *(undefined4 *)(param_1 + 0x4d4);
  *(undefined8 *)(param_1 + 0x560) = 0;
  *(undefined1 *)(param_1 + 0x594) = 1;
  if (param_2[0xc] != 0) {
    FUN_1003de254(param_1,*(undefined8 *)(param_2 + 6),param_2[0xc],param_2 + 0x22,param_2 + 0x24);
  }
  if (param_2[0xd] != 0) {
    FUN_1003dab5e(param_1);
  }
  *(double *)(param_2 + 0x30) = local_268[4];
  dVar15 = *local_268;
  dVar3 = local_268[1];
  dVar5 = local_268[3];
  *(double *)(param_2 + 0x2c) = local_268[2];
  *(double *)(param_2 + 0x2e) = dVar5;
  *(double *)(param_2 + 0x28) = dVar15;
  *(double *)(param_2 + 0x2a) = dVar3;
  param_2[0x26] = *(int *)(param_1 + 0x540);
  param_2[0x1f] = *(int *)(param_1 + 0x53c);
  *(ulong *)(param_2 + 0x20) = (ulong)*(uint *)(param_1 + 0x4a4) * *(long *)(param_1 + 0x4c0);
  param_2[0x27] = *(int *)(param_1 + 0x538);
  iVar14 = *param_2;
  uVar9 = 0;
  if (iVar14 < 0x48545450) {
    if ((iVar14 == 0x44574e4c) || (iVar14 == 0x46494c45)) {
LAB_1003db75b:
      uVar9 = 0x11bd;
    }
  }
  else if ((iVar14 == 0x48545450) || (iVar14 == 0x53485244)) {
    uVar9 = 0x110c;
  }
  else if (iVar14 == 0x4d46494c) goto LAB_1003db75b;
  param_2[0x1e] = uVar9;
  if (((iVar14 == 0x53485244) || (iVar7 = 0, iVar14 == 0x48545450)) &&
     (iVar7 = 0, *(char *)(param_1 + 0x596) == '\0')) {
    param_2[0x1e] = uVar9 & 0x11b4;
  }
LAB_1003db1dc:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar7;
}

