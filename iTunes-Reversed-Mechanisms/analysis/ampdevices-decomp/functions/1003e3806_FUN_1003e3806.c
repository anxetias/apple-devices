// name: FUN_1003e3806
// address: 1003e3806

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1003e3806(int param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  double dVar4;
  char cVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  void *pvVar9;
  undefined8 uVar10;
  int *piVar11;
  int *piVar12;
  ulong uVar13;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 uStack_3c;
  undefined2 uStack_3a;
  undefined6 uStack_38;
  long local_30;
  
  local_30 = *(long *)PTR____stack_chk_guard_10082cb58;
  piVar2 = (int *)*param_2;
  uVar13 = 0xfffffffc;
  if (param_1 < 0x67756669) {
    if (param_1 < 0x67636f6d) {
      if (param_1 < 0x64636163) {
        if (param_1 < 0x63636163) {
          if (param_1 == 0x626f6666) {
            if ((piVar2 != (int *)0x0) && (*piVar2 == 0x50434d44)) {
              uVar13 = FUN_1003deffa(piVar2,*(undefined4 *)(param_2 + 5),(long)param_2 + 0x2c,
                                     param_2 + 6,param_2 + 7);
              return uVar13;
            }
            uVar10 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar10,0x10);
            if (cVar5 != '\0') {
              local_48 = 0x8220202;
              uStack_44 = 0x7a0a90;
              uStack_40 = 1;
              uStack_3c = 0x822;
              uStack_3a = 0xb216;
              uStack_38 = 0x1007c;
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_48,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          else if (param_1 == 0x63616e20) goto LAB_1003e3b99;
        }
        else if (param_1 == 0x63636163) {
          if ((param_3 != (int *)0x0) && (*param_3 == 0x50434d48)) {
            uVar13 = FUN_1003e2402(param_2 + 3);
            return uVar13;
          }
          uVar10 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar10,0x10);
          if (cVar5 != '\0') {
            local_48 = 0x8220202;
            uStack_44 = 0x7a0a90;
            uStack_40 = 1;
            uStack_3c = 0x822;
            uStack_3a = 0xb1c9;
            uStack_38 = 0x1007c;
            __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else if (param_1 == 0x636c7220) {
          if ((param_3 != (int *)0x0) && (*param_3 == 0x50434d48)) {
            operator_delete(param_3);
            goto LAB_1003e480d;
          }
          uVar10 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar10,0x10);
          if (cVar5 != '\0') {
            local_48 = 0x8220202;
            uStack_44 = 0x7a0a90;
            uStack_40 = 1;
            uStack_3c = 0x822;
            uStack_3a = 0xb1c9;
            uStack_38 = 0x1007c;
            __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
        }
      }
      else if (param_1 < 0x65736d70) {
        if (param_1 == 0x64636163) {
          if ((param_3 != (int *)0x0) && (*param_3 == 0x50434d48)) {
            uVar13 = FUN_1003e2504(param_2[3]);
            return uVar13;
          }
          uVar10 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar10,0x10);
          if (cVar5 != '\0') {
            local_48 = 0x8220202;
            uStack_44 = 0x7a0a90;
            uStack_40 = 1;
            uStack_3c = 0x822;
            uStack_3a = 0xb1c9;
            uStack_38 = 0x1007c;
            __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else if (param_1 == 0x64636f64) {
          if ((piVar2 != (int *)0x0) && (*piVar2 == 0x50434d44)) {
            uVar13 = FUN_1003de4c8(piVar2,param_2[3],*(undefined4 *)(param_2 + 4),
                                   (long)param_2 + 0x24,param_2 + 5,param_2 + 6);
            return uVar13;
          }
          uVar10 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar10,0x10);
          if (cVar5 != '\0') {
            local_48 = 0x8220202;
            uStack_44 = 0x7a0a90;
            uStack_40 = 1;
            uStack_3c = 0x822;
            uStack_3a = 0xb216;
            uStack_38 = 0x1007c;
            __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
        }
      }
      else {
        if (param_1 == 0x65736d70) goto LAB_1003e4689;
        if (param_1 == 0x67617274) {
          if ((param_3 != (int *)0x0) && (*param_3 == 0x50434d48)) {
            cVar5 = FUN_1003df2de(*(undefined4 *)(param_2 + 3),param_2[4]);
            if (cVar5 != '\0') {
              uVar13 = FUN_1003e3580(param_3,*(undefined4 *)(param_2 + 3),param_2[4],param_2 + 6,
                                     *(undefined4 *)(param_2 + 5),param_2 + 7,(long)param_2 + 0x3c);
              goto LAB_1003e3e0a;
            }
            goto LAB_1003e4689;
          }
          uVar10 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar10,0x10);
          if (cVar5 != '\0') {
            local_48 = 0x8220202;
            uStack_44 = 0x7a0a90;
            uStack_40 = 1;
            uStack_3c = 0x822;
            uStack_3a = 0xb1c9;
            uStack_38 = 0x1007c;
            __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
        }
      }
    }
    else if (param_1 < 0x67667874) {
      if (param_1 < 0x67646872) {
        if (param_1 == 0x67636f6d) {
          if ((param_3 != (int *)0x0) && (*param_3 == 0x50434d48)) {
            uVar13 = FUN_1003e30d6(param_2);
            return uVar13;
          }
          uVar10 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar10,0x10);
          if (cVar5 != '\0') {
            local_48 = 0x8220202;
            uStack_44 = 0x7a0a90;
            uStack_40 = 1;
            uStack_3c = 0x822;
            uStack_3a = 0xb1c9;
            uStack_38 = 0x1007c;
            __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else if (param_1 == 0x67646574) {
          if ((param_3 != (int *)0x0) && (*param_3 == 0x50434d48)) {
            uVar13 = FUN_1003e2b5c(*(undefined4 *)(param_2 + 3),param_2[4],
                                   *(undefined4 *)(param_2 + 5),(long)param_2 + 0x2c,param_2[6]);
            return uVar13;
          }
          uVar10 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar10,0x10);
          if (cVar5 != '\0') {
            local_48 = 0x8220202;
            uStack_44 = 0x7a0a90;
            uStack_40 = 1;
            uStack_3c = 0x822;
            uStack_3a = 0xb1c9;
            uStack_38 = 0x1007c;
            __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
        }
      }
      else if (param_1 == 0x67646872) {
        if ((piVar2 != (int *)0x0) && (*piVar2 == 0x50434d44)) {
          uVar10 = *(undefined8 *)(piVar2 + 0x15a);
          local_48 = (undefined4)uVar10;
          uStack_44 = (undefined4)((ulong)uVar10 >> 0x20);
          lVar3 = *(long *)(piVar2 + 0x15c);
          uStack_40 = (undefined4)lVar3;
          uStack_3c = (undefined2)((ulong)lVar3 >> 0x20);
          uStack_3a = (undefined2)((ulong)lVar3 >> 0x30);
          if (lVar3 != 0) {
            LOCK();
            *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
            UNLOCK();
          }
          puVar8 = operator_new(0x10,(nothrow_t *)PTR_nothrow_10082c970);
          if (puVar8 != (undefined8 *)0x0) {
            *puVar8 = uVar10;
            puVar8[1] = lVar3;
            if (lVar3 != 0) {
              LOCK();
              *(long *)(lVar3 + 8) = *(long *)(lVar3 + 8) + 1;
              UNLOCK();
            }
          }
          param_2[6] = puVar8;
          FUN_10021e316(&local_48);
          goto LAB_1003e480d;
        }
        uVar10 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar10,0x10);
        if (cVar5 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7a0a90;
          uStack_40 = 1;
          uStack_3c = 0x822;
          uStack_3a = 0xb216;
          uStack_38 = 0x1007c;
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else if (param_1 == 0x6765696c) {
        param_2[4] = &DAT_100857888;
LAB_1003e480d:
        uVar13 = 0;
        goto LAB_1003e4689;
      }
    }
    else if (param_1 < 0x676c7972) {
      if (param_1 == 0x67667874) {
        uVar13 = FUN_100466cd7("FFIAFFIAFFIA FIAFFIAFFIACFIACFIACFIAADDCFFIAFFIAEVAWEVAWEVAW VAWEVAWEVAWVAW.EVAWEVAW"
                               ,param_2[3],param_2 + 4,(long)param_2 + 0x24,0xf);
        return uVar13;
      }
      if (param_1 == 0x67696e66) {
        if ((piVar2 != (int *)0x0) && (*piVar2 == 0x50434d44)) {
          dVar4 = ((double)CONCAT44((undefined4)DAT_10070d3c0,(int)*(undefined8 *)(piVar2 + 0x158))
                  - _DAT_10070d3d0) +
                  ((double)CONCAT44(DAT_10070d3c0._4_4_,
                                    (int)((ulong)*(undefined8 *)(piVar2 + 0x158) >> 0x20)) -
                  _UNK_10070d3d8);
          *(int *)((long)param_2 + 0x34) =
               (int)(long)((_DAT_100708b48 * dVar4) / *(double *)(piVar2 + 0x144));
          param_2[7] = dVar4;
          *(int *)(param_2 + 6) = piVar2[0x14f];
          *(int *)(param_2 + 8) = piVar2[0x150];
          *(float *)((long)param_2 + 0x44) = (float)*(double *)(piVar2 + 0x144);
          goto LAB_1003e480d;
        }
        uVar10 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar10,0x10);
        if (cVar5 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7a0a90;
          uStack_40 = 1;
          uStack_3c = 0x822;
          uStack_3a = 0xb216;
          uStack_38 = 0x1007c;
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
    }
    else if (param_1 == 0x676c7972) {
      if ((param_3 != (int *)0x0) && (*param_3 == 0x50434d48)) {
        cVar5 = FUN_1003df2de(*(undefined4 *)(param_2 + 3),param_2[4]);
        if (cVar5 != '\0') {
          if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
            uVar13 = FUN_1003e376c(*(undefined4 *)(param_2 + 3),param_2[4],param_2[6],
                                   *(undefined4 *)(param_2 + 5));
            return uVar13;
          }
          goto LAB_1003e50d4;
        }
        goto LAB_1003e4689;
      }
      uVar10 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar10,0x10);
      if (cVar5 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7a0a90;
        uStack_40 = 1;
        uStack_3c = 0x822;
        uStack_3a = 0xb1c9;
        uStack_38 = 0x1007c;
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else if (param_1 == 0x67706174) {
      if ((param_3 != (int *)0x0) && (*param_3 == 0x50434d48)) {
        iVar1 = *(int *)(param_2 + 3);
        uVar6 = 0;
        if (iVar1 < 0x48545450) {
          if ((iVar1 == 0x44574e4c) || (iVar1 == 0x46494c45)) {
LAB_1003e47fb:
            uVar6 = 0x11bd;
          }
        }
        else if ((iVar1 == 0x48545450) || (iVar1 == 0x53485244)) {
          uVar6 = 0x110c;
        }
        else if (iVar1 == 0x4d46494c) goto LAB_1003e47fb;
        *(uint *)((long)param_2 + 0x34) = uVar6 & *(uint *)(param_2 + 6);
        goto LAB_1003e480d;
      }
      uVar10 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar10,0x10);
      if (cVar5 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7a0a90;
        uStack_40 = 1;
        uStack_3c = 0x822;
        uStack_3a = 0xb1c9;
        uStack_38 = 0x1007c;
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
    else if (param_1 == 0x6774696e) {
      if ((param_3 != (int *)0x0) && (*param_3 == 0x50434d48)) {
        uVar13 = FUN_1003e2532(*(undefined4 *)(param_2 + 3),param_2[4],param_2[7],param_2[8],0,0,
                               *(undefined4 *)(param_2 + 5),param_2 + 9);
LAB_1003e3e0a:
        if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
          return uVar13;
        }
        goto LAB_1003e50d4;
      }
      uVar10 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar10,0x10);
      if (cVar5 != '\0') {
        local_48 = 0x8220202;
        uStack_44 = 0x7a0a90;
        uStack_40 = 1;
        uStack_3c = 0x822;
        uStack_3a = 0xb1c9;
        uStack_38 = 0x1007c;
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
      }
      FUN_1001782e9(0,0);
    }
LAB_1003e4683:
    uVar13 = 0xffffffce;
  }
  else {
    if (param_1 < 0x73636869) {
      if (param_1 < 0x706c6179) {
        if (param_1 < 0x6c64746d) {
          if (param_1 == 0x67756669) {
            if ((param_3 != (int *)0x0) && (*param_3 == 0x50434d48)) {
              uVar13 = FUN_1003e328a(param_2);
              return uVar13;
            }
            uVar10 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar10,0x10);
            if (cVar5 != '\0') {
              local_48 = 0x8220202;
              uStack_44 = 0x7a0a90;
              uStack_40 = 1;
              uStack_3c = 0x822;
              uStack_3a = 0xb1c9;
              uStack_38 = 0x1007c;
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_48,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          else if (param_1 == 0x696e6974) {
            puVar7 = operator_new(0x20,(nothrow_t *)PTR_nothrow_10082c970);
            if (puVar7 == (undefined4 *)0x0) {
              uVar10 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar10,0x10);
              if (cVar5 != '\0') {
                local_48 = 0x8220202;
                uStack_44 = 0x7a0a90;
                uStack_40 = 1;
                uStack_3c = 0x822;
                uStack_3a = 0xe9a;
                uStack_38 = 0x1007b;
                __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_48,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              uVar13 = 0xffffff94;
            }
            else {
              *puVar7 = 0x50434d48;
              uVar10 = param_2[5];
              *(undefined8 *)(puVar7 + 2) = param_2[4];
              *(undefined8 *)(puVar7 + 4) = uVar10;
              *(undefined8 *)(puVar7 + 6) = 0;
              uVar13 = 0;
            }
            param_2[7] = puVar7;
            goto LAB_1003e4689;
          }
        }
        else {
          if (param_1 == 0x6c64746d) goto LAB_1003e4689;
          if (param_1 == 0x7063616e) {
LAB_1003e3b99:
            if ((param_3 != (int *)0x0) && (*param_3 == 0x50434d48)) {
              iVar1 = *(int *)(param_2 + 3);
              uVar13 = 0xffffffce;
              if (iVar1 < 0x4d46494c) {
                if (iVar1 == 0x46494c45) {
LAB_1003e4722:
                  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
                    uVar13 = FUN_100466aac("FFIAFFIAFFIA FIAFFIAFFIACFIACFIACFIAADDCFFIAFFIAEVAWEVAWEVAW VAWEVAWEVAWVAW.EVAWEVAW"
                                           ,*(undefined4 *)param_2[4],((undefined4 *)param_2[4])[9],
                                           0,0,*(undefined4 *)(param_2 + 5));
                    return uVar13;
                  }
                  goto LAB_1003e50d4;
                }
                if (iVar1 != 0x48545450) goto LAB_1003e4689;
              }
              else if (iVar1 != 0x53485244) {
                if (iVar1 != 0x4d46494c) goto LAB_1003e4689;
                goto LAB_1003e4722;
              }
              if (((iVar1 == 0x53485244) || (iVar1 == 0x48545450)) && (param_2[4] != 0)) {
                if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
                  uVar13 = FUN_1003dbb78(param_2[4],0);
                  return uVar13;
                }
                goto LAB_1003e50d4;
              }
              uVar10 = FUN_1001cc310();
              cVar5 = _os_log_type_enabled(uVar10,0x10);
              if (cVar5 != '\0') {
                local_48 = 0x8220202;
                uStack_44 = 0x7a0a90;
                uStack_40 = 1;
                uStack_3c = 0x822;
                uStack_3a = 0x257b;
                uStack_38 = 0x1007b;
                __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_48,
                                    0x16);
              }
              FUN_1001782e9(0,0);
              goto LAB_1003e4689;
            }
            uVar10 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar10,0x10);
            if (cVar5 != '\0') {
              local_48 = 0x8220202;
              uStack_44 = 0x7a0a90;
              uStack_40 = 1;
              uStack_3c = 0x822;
              uStack_3a = 0xb1c9;
              uStack_38 = 0x1007c;
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_48,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
        }
      }
      else if (param_1 < 0x72656266) {
        if (param_1 == 0x706c6179) {
          pvVar9 = operator_new(0x9b0,(nothrow_t *)PTR_nothrow_10082c970);
          if (pvVar9 == (void *)0x0) {
            uVar10 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar10,0x10);
            if (cVar5 != '\0') {
              local_48 = 0x8220202;
              uStack_44 = 0x7a0a90;
              uStack_40 = 1;
              uStack_3c = 0x822;
              uStack_3a = 0xb207;
              uStack_38 = 0x1007c;
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_48,0x16)
              ;
            }
            FUN_1001782e9(0,0);
            uVar13 = 0xffffff94;
          }
          else {
            FUN_1003da830(pvVar9,param_3);
            uVar6 = FUN_1003dad86(pvVar9,param_2 + 3);
            uVar13 = (ulong)uVar6;
            if (uVar6 == 0) {
              if (*(char *)((long)pvVar9 + 0x599) == '\0') {
                FUN_1003e51e5(param_3 + 6,pvVar9);
              }
            }
            else {
              FUN_1003da928(pvVar9);
              operator_delete(pvVar9);
              pvVar9 = (void *)0x0;
            }
            *param_2 = pvVar9;
          }
          goto LAB_1003e4689;
        }
        if (param_1 == 0x72636f6d) {
          if ((param_3 != (int *)0x0) && (*param_3 == 0x50434d48)) {
            uVar13 = FUN_1003e3246(param_2);
            return uVar13;
          }
          uVar10 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar10,0x10);
          if (cVar5 != '\0') {
            local_48 = 0x8220202;
            uStack_44 = 0x7a0a90;
            uStack_40 = 1;
            uStack_3c = 0x822;
            uStack_3a = 0xb1c9;
            uStack_38 = 0x1007c;
            __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
        }
      }
      else if (param_1 == 0x72656266) {
        if ((piVar2 != (int *)0x0) && (*piVar2 == 0x50434d44)) {
          uVar13 = FUN_1003df1ea(piVar2,param_2[3]);
          return uVar13;
        }
        uVar10 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar10,0x10);
        if (cVar5 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7a0a90;
          uStack_40 = 1;
          uStack_3c = 0x822;
          uStack_3a = 0xb216;
          uStack_38 = 0x1007c;
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else if (param_1 == 0x72756669) {
        if ((param_3 != (int *)0x0) && (*param_3 == 0x50434d48)) {
          uVar13 = FUN_1003e33f2(param_2);
          return uVar13;
        }
        uVar10 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar10,0x10);
        if (cVar5 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7a0a90;
          uStack_40 = 1;
          uStack_3c = 0x822;
          uStack_3a = 0xb1c9;
          uStack_38 = 0x1007c;
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else if (param_1 == 0x73617274) {
        if ((param_3 != (int *)0x0) && (*param_3 == 0x50434d48)) {
          uVar13 = FUN_1003e3436(*(undefined8 *)(param_3 + 6),param_2);
          return uVar13;
        }
        uVar10 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar10,0x10);
        if (cVar5 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7a0a90;
          uStack_40 = 1;
          uStack_3c = 0x822;
          uStack_3a = 0xb1c9;
          uStack_38 = 0x1007c;
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      goto LAB_1003e4683;
    }
    if (0x736c7971 < param_1) {
      if (param_1 < 0x7374696e) {
        if (param_1 == 0x736c7972) {
          if ((param_3 != (int *)0x0) && (*param_3 == 0x50434d48)) {
            uVar13 = FUN_1003e3536(param_2);
            return uVar13;
          }
          uVar10 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar10,0x10);
          if (cVar5 != '\0') {
            local_48 = 0x8220202;
            uStack_44 = 0x7a0a90;
            uStack_40 = 1;
            uStack_3c = 0x822;
            uStack_3a = 0xb1c9;
            uStack_38 = 0x1007c;
            __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else if (param_1 == 0x73706f73) {
          if ((piVar2 != (int *)0x0) && (*piVar2 == 0x50434d44)) {
            uVar13 = FUN_1003de254(piVar2,param_2[3],*(undefined4 *)(param_2 + 4),param_2 + 6,
                                   param_2 + 7);
            return uVar13;
          }
          uVar10 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar10,0x10);
          if (cVar5 != '\0') {
            local_48 = 0x8220202;
            uStack_44 = 0x7a0a90;
            uStack_40 = 1;
            uStack_3c = 0x822;
            uStack_3a = 0xb216;
            uStack_38 = 0x1007c;
            __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
        }
      }
      else if (param_1 == 0x7374696e) {
        if ((param_3 != (int *)0x0) && (*param_3 == 0x50434d48)) {
          uVar13 = FUN_1003e2b10(*(undefined4 *)(param_2 + 3),param_2[4],param_2[7],
                                 *(undefined4 *)(param_2 + 5));
          return uVar13;
        }
        uVar10 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar10,0x10);
        if (cVar5 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7a0a90;
          uStack_40 = 1;
          uStack_3c = 0x822;
          uStack_3a = 0xb1c9;
          uStack_38 = 0x1007c;
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else if (param_1 == 0x73746f70) {
        if ((piVar2 != (int *)0x0) && (*piVar2 == 0x50434d44)) {
          uVar6 = FUN_1003df0c6(piVar2,param_2 + 3);
          uVar13 = (ulong)uVar6;
          if ((*(char *)((long)piVar2 + 0x599) == '\0') &&
             (piVar11 = *(int **)(param_3 + 6), piVar11 != (int *)0x0)) {
            if (piVar11 == piVar2) {
              piVar12 = (int *)0x0;
            }
            else {
              do {
                piVar12 = piVar11;
                piVar11 = *(int **)(piVar12 + 2);
                if (piVar11 == (int *)0x0) goto LAB_1003e4fd5;
              } while (piVar11 != piVar2);
            }
            piVar11 = piVar12 + 2;
            if (piVar12 == (int *)0x0) {
              piVar11 = param_3 + 6;
            }
            *(undefined8 *)piVar11 = *(undefined8 *)(piVar2 + 2);
            piVar2[2] = 0;
            piVar2[3] = 0;
          }
LAB_1003e4fd5:
          FUN_1003da928(piVar2);
          operator_delete(piVar2);
          goto LAB_1003e4689;
        }
        uVar10 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar10,0x10);
        if (cVar5 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7a0a90;
          uStack_40 = 1;
          uStack_3c = 0x822;
          uStack_3a = 0xb216;
          uStack_38 = 0x1007c;
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else if (param_1 == 0x73756669) {
        if ((param_3 != (int *)0x0) && (*param_3 == 0x50434d48)) {
          uVar13 = FUN_1003e33ac(param_2);
          return uVar13;
        }
        uVar10 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar10,0x10);
        if (cVar5 != '\0') {
          local_48 = 0x8220202;
          uStack_44 = 0x7a0a90;
          uStack_40 = 1;
          uStack_3c = 0x822;
          uStack_3a = 0xb1c9;
          uStack_38 = 0x1007c;
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
        }
        FUN_1001782e9(0,0);
      }
      goto LAB_1003e4683;
    }
    if (param_1 < 0x73657874) {
      if (param_1 != 0x73636869) {
        if (param_1 == 0x73636f6d) {
          if ((param_3 != (int *)0x0) && (*param_3 == 0x50434d48)) {
            uVar13 = FUN_1003e3200(param_2);
            return uVar13;
          }
          uVar10 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar10,0x10);
          if (cVar5 != '\0') {
            local_48 = 0x8220202;
            uStack_44 = 0x7a0a90;
            uStack_40 = 1;
            uStack_3c = 0x822;
            uStack_3a = 0xb1c9;
            uStack_38 = 0x1007c;
            __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_48,0x16);
          }
          FUN_1001782e9(0,0);
        }
        goto LAB_1003e4683;
      }
    }
    else {
      if (param_1 == 0x73657874) {
        uVar13 = FUN_100466d97("FFIAFFIAFFIA FIAFFIAFFIACFIACFIACFIAADDCFFIAFFIAEVAWEVAWEVAW VAWEVAWEVAWVAW.EVAWEVAW"
                               ,param_2[3],param_2[4]);
        return uVar13;
      }
      if (param_1 != 0x73676374) goto LAB_1003e4683;
    }
  }
LAB_1003e4689:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_30) {
    return uVar13;
  }
LAB_1003e50d4:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

