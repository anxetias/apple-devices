// name: FUN_100594f1e
// address: 100594f1e

ulong FUN_100594f1e(int *param_1,int *param_2,char param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  void *pvVar2;
  code *pcVar3;
  int iVar4;
  undefined6 uVar5;
  undefined6 uVar6;
  undefined8 uVar7;
  char cVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined8 uVar11;
  long lVar12;
  size_t sVar13;
  ulong uVar14;
  long lVar15;
  undefined8 *puVar16;
  ulong uVar17;
  void *pvVar18;
  undefined1 auVar19 [16];
  int local_68;
  int iStack_64;
  int iStack_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined2 uStack_56;
  undefined2 uStack_54;
  undefined2 uStack_52;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  undefined4 uStack_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_2 == (int *)0x0) {
    uVar11 = FUN_1001cc310();
    cVar8 = _os_log_type_enabled(uVar11,0x10);
    if (cVar8 != '\0') {
      local_68 = 0x8220202;
      iStack_64 = 0x7a0a90;
      iStack_60 = 1;
      uStack_5c = 0x822;
      uStack_5a = 0xeb3f;
      uStack_58 = 0x7b;
      uStack_56 = 1;
      uStack_54 = 0;
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    uVar17 = 0xffffffce;
  }
  else {
    uVar17 = 0xffffffce;
    if (((param_1 != (int *)0x0) && (*param_1 == 0x4f4c5354)) && (param_1[1] != 0)) {
      if (param_3 == '\0') {
switchD_100594f9d_caseD_3:
        local_68 = *param_2;
        iStack_64 = param_2[1];
        uVar11 = *(undefined8 *)param_2;
        iStack_60 = param_2[2];
        uVar5 = *(undefined6 *)(param_2 + 2);
        iVar4 = param_2[4];
        uVar6 = *(undefined6 *)(param_2 + 4);
        iStack_50 = param_2[6];
        iStack_4c = param_2[7];
        uVar7 = *(undefined8 *)(param_2 + 6);
        iStack_48 = param_2[8];
        iStack_44 = param_2[9];
        iStack_40 = param_2[10];
        uStack_58 = (undefined2)iVar4;
        uStack_56 = (undefined2)((uint)iVar4 >> 0x10);
        uStack_54 = (undefined2)param_2[5];
        uStack_52 = (undefined2)((uint)param_2[5] >> 0x10);
        uStack_5c = (undefined2)param_2[3];
        uStack_5a = (undefined2)((uint)param_2[3] >> 0x10);
        puVar16 = *(undefined8 **)(param_1 + 4);
        if (puVar16 < *(undefined8 **)(param_1 + 6)) {
          puVar16[4] = *(undefined8 *)(param_2 + 8);
          puVar16[5] = CONCAT44(uStack_3c,iStack_40);
          puVar16[2] = CONCAT26(uStack_52,uVar6);
          puVar16[3] = uVar7;
          *puVar16 = uVar11;
          puVar16[1] = CONCAT26(uStack_5a,uVar5);
          puVar16[6] = param_4;
          puVar16 = puVar16 + 7;
        }
        else {
          lVar15 = (long)puVar16 - *(long *)(param_1 + 2) >> 3;
          uVar17 = lVar15 * 0x6db6db6db6db6db7 + 1;
          if (0x492492492492492 < uVar17) {
            FUN_100596e70();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          lVar12 = (long)*(undefined8 **)(param_1 + 6) - *(long *)(param_1 + 2) >> 3;
          uVar14 = lVar12 * -0x2492492492492492;
          if (uVar17 < uVar14) {
            uVar17 = uVar14;
          }
          uVar14 = 0x492492492492492;
          if ((ulong)(lVar12 * 0x6db6db6db6db6db7) < 0x249249249249249) {
            uVar14 = uVar17;
          }
          if (uVar14 == 0) {
            auVar19 = ZEXT816(0);
          }
          else {
            auVar19 = FUN_100596e80();
          }
          lVar12 = auVar19._0_8_;
          lVar15 = lVar15 * 8;
          puVar1 = (undefined8 *)(lVar12 + lVar15);
          puVar16 = puVar1 + 7;
          puVar1[4] = CONCAT44(iStack_44,iStack_48);
          puVar1[5] = CONCAT44(uStack_3c,iStack_40);
          puVar1[2] = CONCAT26(uStack_52,CONCAT24(uStack_54,CONCAT22(uStack_56,uStack_58)));
          puVar1[3] = CONCAT44(iStack_4c,iStack_50);
          *puVar1 = CONCAT44(iStack_64,local_68);
          puVar1[1] = CONCAT26(uStack_5a,CONCAT24(uStack_5c,iStack_60));
          puVar1[6] = param_4;
          sVar13 = *(long *)(param_1 + 4) - (long)*(void **)(param_1 + 2);
          pvVar18 = (void *)((lVar12 + lVar15) - sVar13);
          _memcpy(pvVar18,*(void **)(param_1 + 2),sVar13);
          pvVar2 = *(void **)(param_1 + 2);
          *(void **)(param_1 + 2) = pvVar18;
          *(undefined8 **)(param_1 + 4) = puVar16;
          *(long *)(param_1 + 6) = auVar19._8_8_ * 0x38 + lVar12;
          if (pvVar2 != (void *)0x0) {
            operator_delete(pvVar2);
          }
        }
        *(undefined8 **)(param_1 + 4) = puVar16;
      }
      else {
        uVar9 = FUN_100595fc8(param_2);
        switch(uVar9) {
        case 1:
          uVar17 = 0;
          if ((*param_2 != 0) && (lVar15 = FUN_100314a6c(), lVar15 != 0)) {
            lVar15 = FUN_100315ede(lVar15);
            uVar17 = 0;
            for (; lVar15 != 0; lVar15 = FUN_100316031(lVar15)) {
              uVar10 = FUN_100596046(param_1,lVar15,1,param_4);
              uVar17 = (ulong)uVar10;
              if (uVar10 != 0) {
                if (uVar10 != 0xffffff80) {
                  uVar11 = FUN_1001cc310();
                  cVar8 = _os_log_type_enabled(uVar11,0x10);
                  if (cVar8 != '\0') {
                    local_68 = 0x8220202;
                    iStack_64 = 0x7a0a90;
                    iStack_60 = 1;
                    uStack_5c = 0x400;
                    uStack_5a = (undefined2)uVar10;
                    uStack_58 = (undefined2)(uVar10 >> 0x10);
                    __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_68,
                                        0x12);
                  }
                }
                break;
              }
            }
          }
          goto LAB_100595020;
        case 2:
          lVar15 = FUN_1004909fc(param_2);
          if (lVar15 != 0) {
            if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
              uVar17 = FUN_100596046(param_1,lVar15,1,param_4);
              return uVar17;
            }
            goto LAB_1005952f5;
          }
          break;
        default:
          goto switchD_100594f9d_caseD_3;
        case 6:
          lVar15 = FUN_1003a4670(param_2);
          if (lVar15 != 0) {
            if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
              uVar17 = FUN_1005962c4(param_1,lVar15,param_4);
              return uVar17;
            }
            goto LAB_1005952f5;
          }
          break;
        case 7:
          lVar15 = FUN_1004d0033(param_2);
          if (lVar15 != 0) {
            if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
              uVar17 = FUN_100596379(param_1,lVar15,param_4);
              return uVar17;
            }
            goto LAB_1005952f5;
          }
        }
      }
      uVar17 = 0;
    }
  }
LAB_100595020:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return uVar17;
  }
LAB_1005952f5:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

