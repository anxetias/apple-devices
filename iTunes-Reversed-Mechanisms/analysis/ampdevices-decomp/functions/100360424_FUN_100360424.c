// name: FUN_100360424
// address: 100360424

void FUN_100360424(long param_1,uint param_2,int param_3)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  short sVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_3 != 0) {
    if (*(int *)(param_1 + 0x1894) != 0) {
      uVar3 = (*(int *)(param_1 + 0x1894) + *(int *)(param_1 + 0x18ac)) - 1;
      if (param_2 <= uVar3 && uVar3 - param_2 != 0) {
        iVar12 = uVar3 - param_2;
        if (param_3 + param_2 < uVar3) {
          iVar12 = param_3;
        }
        uVar3 = *(uint *)(param_1 + 0x180c);
        if (uVar3 != 0) {
          sVar10 = 0;
          fVar14 = DAT_100700b50;
          do {
            uVar8 = *(uint *)(param_1 + 0x18ac);
            uVar13 = param_2 - uVar8;
            if (uVar8 <= param_2) {
              uVar13 = uVar13 / *(uint *)(param_1 + 0x188c);
            }
            iVar11 = 1;
            fVar15 = fVar14;
            if ((int)uVar13 < 200) {
              if ((int)uVar13 < 0) {
                fVar15 = 0.0;
              }
              else {
                iVar11 = *(int *)(param_1 + 0x188c) * uVar13 +
                         (uVar8 - param_2) + *(int *)(param_1 + 0x188c);
                fVar15 = *(float *)(&DAT_1008bd7f0 + (ulong)uVar13 * 4);
              }
            }
            lVar6 = *(long *)(param_1 + 0x18);
            if (lVar6 == 0) {
              uVar5 = FUN_1001cc310();
              cVar2 = _os_log_type_enabled(uVar5,0x10);
              if (cVar2 != '\0') {
                local_58 = 0x8220202;
                local_54 = "Assertion failure (expected to be not NULL)";
                local_4c = 0x822;
                local_4a = "decoderData->eqSamplesOut";
                __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16
                                   );
              }
              cVar2 = FUN_1001782e9(0,0);
              uVar3 = *(uint *)(param_1 + 0x180c);
              fVar14 = DAT_100700b50;
              if (cVar2 != '\0') {
                lVar6 = *(long *)(param_1 + 0x18);
                goto LAB_10036056c;
              }
            }
            else {
LAB_10036056c:
              if (uVar3 * iVar12 != 0) {
                lVar6 = lVar6 + (long)sVar10 * 4;
                uVar8 = 0;
                do {
                  *(float *)(lVar6 + (ulong)uVar8 * 4) =
                       *(float *)(lVar6 + (ulong)uVar8 * 4) * fVar15;
                  iVar11 = iVar11 + -1;
                  if (iVar11 == 0) {
                    uVar4 = uVar13 + 1;
                    if ((int)uVar13 < 0) {
                      iVar11 = 1;
                      uVar13 = uVar4;
                      if (uVar4 == 0) {
                        iVar11 = *(int *)(param_1 + 0x188c);
                        uVar13 = 0;
                      }
                    }
                    else {
                      iVar11 = 0x7fffffff;
                      bVar1 = uVar13 < 199;
                      fVar15 = fVar14;
                      uVar13 = uVar4;
                      if (bVar1) {
                        iVar11 = *(int *)(param_1 + 0x188c);
                        fVar15 = *(float *)(&DAT_1008bd7f0 + (ulong)uVar4 * 4);
                      }
                    }
                  }
                  uVar8 = uVar8 + uVar3;
                } while (uVar8 < uVar3 * iVar12);
              }
            }
            sVar10 = sVar10 + 1;
          } while ((uint)(int)sVar10 < uVar3);
        }
      }
    }
    if ((*(int *)(param_1 + 0x1898) != 0) &&
       (uVar3 = *(int *)(param_1 + 0x18b0) - *(int *)(param_1 + 0x1898),
       uVar3 <= (param_3 + param_2) - 1)) {
      uVar8 = uVar3 - param_2;
      if (uVar3 < param_2) {
        uVar8 = 0;
      }
      uVar13 = param_2 - uVar3;
      if (param_2 < uVar3) {
        uVar13 = 0;
      }
      uVar3 = *(uint *)(param_1 + 0x180c);
      if (uVar3 != 0) {
        sVar10 = 0;
        do {
          uVar4 = *(uint *)(param_1 + 0x1890);
          if (uVar13 / uVar4 < 200) {
            uVar9 = 199 - uVar13 / uVar4;
            uVar7 = (ulong)uVar9;
            fVar14 = *(float *)(&DAT_1008bd7f0 + uVar7 * 4);
            iVar12 = (uVar4 - uVar13) + uVar9 * uVar4;
          }
          else {
            fVar14 = 0.0;
            iVar12 = 0x7fffffff;
            uVar7 = 0;
          }
          lVar6 = *(long *)(param_1 + 0x18);
          if (lVar6 == 0) {
            uVar5 = FUN_1001cc310();
            cVar2 = _os_log_type_enabled(uVar5,0x10);
            if (cVar2 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure (expected to be not NULL)";
              local_4c = 0x822;
              local_4a = "decoderData->eqSamplesOut";
              __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
            }
            cVar2 = FUN_1001782e9(0,0);
            uVar3 = *(uint *)(param_1 + 0x180c);
            if (cVar2 != '\0') {
              lVar6 = *(long *)(param_1 + 0x18);
              goto LAB_10036075a;
            }
          }
          else {
LAB_10036075a:
            uVar4 = uVar3 * (param_3 - uVar8);
            if (uVar8 < uVar4) {
              lVar6 = lVar6 + (long)sVar10 * 4;
              uVar9 = uVar8;
              do {
                *(float *)(lVar6 + (ulong)uVar9 * 4) = *(float *)(lVar6 + (ulong)uVar9 * 4) * fVar14
                ;
                iVar12 = iVar12 + -1;
                if (iVar12 == 0) {
                  if ((int)uVar7 == 0) {
                    fVar14 = 0.0;
                    iVar12 = 0x7fffffff;
                    uVar7 = 0;
                  }
                  else {
                    uVar7 = (ulong)((int)uVar7 - 1);
                    fVar14 = *(float *)(&DAT_1008bd7f0 + uVar7 * 4);
                    iVar12 = *(int *)(param_1 + 0x1890);
                  }
                }
                uVar9 = uVar9 + uVar3;
              } while (uVar9 < uVar4);
            }
          }
          sVar10 = sVar10 + 1;
        } while ((uint)(int)sVar10 < uVar3);
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

