// name: FUN_10046e5ec
// address: 10046e5ec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_10046e5ec(long *param_1,undefined8 param_2,undefined4 param_3,void *param_4,double *param_5,
                 double *param_6,int param_7,uint param_8,uint param_9,undefined1 param_10)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  bool bVar11;
  undefined8 *puVar12;
  undefined1 uVar13;
  char cVar14;
  int iVar15;
  long lVar16;
  double *pdVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  uint uVar20;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  FUN_1001c62d9(param_1,0x18c0);
  *(undefined4 *)(param_1 + 1) = 0x61646563;
  FUN_100203686(param_1 + 0x267,param_2);
  *(undefined4 *)(param_1 + 0x269) = param_3;
  _memcpy((void *)((long)param_1 + 0x134c),param_4,0x460);
  dVar8 = param_5[1];
  dVar9 = param_5[2];
  dVar10 = param_5[3];
  param_1[0x2f9] = (long)*param_5;
  param_1[0x2fa] = (long)dVar8;
  param_1[0x2fd] = (long)param_5[4];
  param_1[0x2fb] = (long)dVar9;
  param_1[0x2fc] = (long)dVar10;
  uVar1 = *(undefined4 *)((long)param_5 + 4);
  uVar2 = *(undefined4 *)(param_5 + 1);
  uVar3 = *(undefined4 *)((long)param_5 + 0xc);
  uVar4 = *(undefined4 *)(param_5 + 2);
  uVar5 = *(undefined4 *)((long)param_5 + 0x14);
  uVar6 = *(undefined4 *)(param_5 + 3);
  uVar7 = *(undefined4 *)((long)param_5 + 0x1c);
  *(undefined4 *)(param_1 + 0x2fe) = *(undefined4 *)param_5;
  *(undefined4 *)((long)param_1 + 0x17f4) = uVar1;
  *(undefined4 *)(param_1 + 0x2ff) = uVar2;
  *(undefined4 *)((long)param_1 + 0x17fc) = uVar3;
  param_1[0x302] = (long)param_5[4];
  *(undefined4 *)(param_1 + 0x300) = uVar4;
  *(undefined4 *)((long)param_1 + 0x1804) = uVar5;
  *(undefined4 *)(param_1 + 0x301) = uVar6;
  *(undefined4 *)((long)param_1 + 0x180c) = uVar7;
  if (param_7 == 0) {
    param_7 = 0x800;
  }
  uVar20 = 0x800;
  if (param_8 < 0x800) {
    uVar20 = param_8;
  }
  *(int *)(param_1 + 0x307) = param_7;
  if (param_8 == 0) {
    uVar20 = 0x800;
  }
  *(uint *)(param_1 + 0x30e) = uVar20;
  if (*(int *)((long)param_1 + 0x17e4) - 1U < 2) {
    param_7 = param_7 * (int)param_1[0x2fc];
    *(int *)(param_1 + 0x30a) = param_7;
    lVar16 = FUN_1001c64d2(param_7);
    param_1[0x309] = lVar16;
    if (lVar16 == 0) {
      uVar18 = FUN_1001cc310();
      cVar14 = _os_log_type_enabled(uVar18,0x10);
      if (cVar14 != '\0') {
        local_58 = 0x8220202;
        local_54 = "Assertion failure";
        local_4c = 0x822;
        local_4a = "decoderData->inputBuffer != nullptr";
        __os_log_error_impl(0x100000000,uVar18,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
      iVar15 = -0x6c;
    }
    else {
      *(uint *)((long)param_1 + 0x17ac) = param_9;
      pdVar17 = param_6;
      if (param_6 == (double *)0x0) {
        pdVar17 = param_5;
      }
      param_1[0x2f7] = (long)(((double)param_9 * *pdVar17) / _DAT_100708b48);
      uVar13 = FUN_10018ea7c();
      *(undefined1 *)((long)param_1 + 0x187a) = uVar13;
      iVar15 = FUN_1001e9c3e(param_1 + 0x25a);
      if (iVar15 != -0x80) {
        if (iVar15 != 0) {
          uVar18 = FUN_1001cc310();
          cVar14 = _os_log_type_enabled(uVar18,0x10);
          if (cVar14 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar15);
            __os_log_error_impl(0x100000000,uVar18,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
          bVar11 = false;
          goto LAB_10046e89d;
        }
        iVar15 = FUN_10035fb98(param_1);
        if (iVar15 != -0x80) {
          if (iVar15 == 0) {
            if ((param_6 != (double *)0x0) &&
               (cVar14 = FUN_10015d730(param_5,param_6), cVar14 == '\0')) {
              iVar15 = FUN_10046df91(param_1,param_6,param_10);
              if (iVar15 != -0x80) {
                if (iVar15 == 0) goto LAB_10046e7ab;
                uVar18 = FUN_1001cc310();
                cVar14 = _os_log_type_enabled(uVar18,0x10);
                if (cVar14 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x400;
                  local_4a = (char *)CONCAT44(local_4a._4_4_,iVar15);
                  __os_log_error_impl(0x100000000,uVar18,0x10,"%{public}s: err == (%d)",&local_58,
                                      0x12);
                }
              }
              FUN_10035fee0(param_1);
              bVar11 = true;
              goto LAB_10046e89d;
            }
            FUN_10035fb19(param_1);
LAB_10046e7ab:
            FUN_10046eb3e();
            puVar12 = DAT_1008c76a8;
            if (*param_1 != 0) {
              uVar18 = FUN_1001cc310();
              cVar14 = _os_log_type_enabled(uVar18,0x10);
              if (cVar14 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure";
                local_4c = 0x822;
                local_4a = "element->*PNEXT == nullptr";
                __os_log_error_impl(0x100000000,uVar18,0x10,"%{public}s: (%{public}s)",&local_58,
                                    0x16);
              }
              FUN_1001782e9(0,0);
            }
            if (puVar12 == (undefined8 *)0x0) {
              puVar19 = &DAT_1008c76a8;
            }
            else {
              do {
                puVar19 = puVar12;
                puVar12 = (undefined8 *)*puVar19;
              } while ((undefined8 *)*puVar19 != (undefined8 *)0x0);
            }
            *param_1 = 0;
            *puVar19 = param_1;
            FUN_1001e9eb9(&DAT_1008c76b8);
          }
          else {
            uVar18 = FUN_1001cc310();
            cVar14 = _os_log_type_enabled(uVar18,0x10);
            bVar11 = true;
            if (cVar14 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x400;
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar15);
              __os_log_error_impl(0x100000000,uVar18,0x10,"%{public}s: err == (%d)",&local_58,0x12);
            }
LAB_10046e89d:
            if (iVar15 != 0) {
              if (!bVar11) goto LAB_10046e8b3;
              goto LAB_10046e8ab;
            }
          }
          iVar15 = 0;
          goto LAB_10046e8e2;
        }
LAB_10046e8ab:
        FUN_1001e9d75(param_1 + 0x25a);
      }
    }
  }
  else {
    uVar18 = FUN_1001cc310();
    cVar14 = _os_log_type_enabled(uVar18,0x10);
    if (cVar14 != '\0') {
      local_58 = 0x8220202;
      local_54 = "Assertion failure";
      local_4c = 0x822;
      local_4a = 
      "((decoderData->srcDataFormat.mChannelsPerFrame == 1) || (decoderData->srcDataFormat.mChannelsPerFrame == 2))"
      ;
      __os_log_error_impl(0x100000000,uVar18,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
    iVar15 = -0x32;
  }
LAB_10046e8b3:
  if (param_1[0x309] != 0) {
    FUN_1001c64c1();
  }
  if (param_1[0x30d] != 0) {
    FUN_1001c64c1();
  }
  FUN_1001c62d9(param_1,0x18c0);
LAB_10046e8e2:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar15;
}

