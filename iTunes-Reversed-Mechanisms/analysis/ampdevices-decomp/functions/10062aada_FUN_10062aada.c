// name: FUN_10062aada
// address: 10062aada

undefined8 FUN_10062aada(long param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  void *pvVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  undefined8 *puVar7;
  ulong uVar8;
  void *pvVar9;
  undefined8 uVar10;
  size_t sVar11;
  void *pvVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined6 uStack_68;
  undefined2 uStack_62;
  undefined8 uStack_60;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_2 == (long *)0x0) || (param_2[2] == 0)) {
    uVar10 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar10,0x10);
    if (cVar5 != '\0') {
      local_78 = 0x8220202;
      uStack_74 = 0x7a0a90;
      uStack_70 = 1;
      uStack_6c = 0x822;
      uStack_6a = 0x4d17;
      uStack_68 = 0x1007c;
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
    }
    FUN_1001782e9(0,0);
    uVar10 = 0xffffffe4;
  }
  else {
    if (*(long *)(param_1 + 0x18a0) == 0) {
      puVar7 = (undefined8 *)FUN_1001c6429(0x7e0);
      *(undefined8 **)(param_1 + 0x18a0) = puVar7;
      if (puVar7 == (undefined8 *)0x0) {
        uVar10 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar10,0x10);
        if (cVar5 != '\0') {
          local_78 = 0x8220202;
          uStack_74 = 0x7a0a90;
          uStack_70 = 1;
          uStack_6c = 0x822;
          uStack_6a = 0x5dd8;
          uStack_68 = 0x1007f;
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_78,0x16);
        }
        FUN_1001782e9(0,0);
LAB_10062ae27:
        uVar10 = 0xffffff94;
        goto LAB_10062adde;
      }
      *puVar7 = *(undefined8 *)(param_1 + 0x68);
      uVar18 = 1;
      do {
        cVar5 = FUN_100626f3e(param_1,uVar18 & 0xffffffff,&local_78);
        if (cVar5 != '\0') {
          lVar17 = *(long *)(param_1 + 0x18a0);
          lVar16 = 1;
          pcVar4 = (char *)CONCAT44(uStack_74,local_78);
          do {
            plVar2 = *(long **)(lVar17 + 8 + lVar16 * 8);
            if (plVar2 != (long *)0x0) {
              puVar7 = (undefined8 *)*plVar2;
              if (plVar2[1] - (long)puVar7 != 0) {
                lVar13 = plVar2[1] - (long)puVar7 >> 5;
                lVar13 = lVar13 + (ulong)(lVar13 == 0);
                do {
                  iVar6 = _strcmp((char *)*puVar7,pcVar4);
                  if (iVar6 == 0) goto LAB_10062ad32;
                  puVar7 = puVar7 + 4;
                  lVar13 = lVar13 + -1;
                } while (lVar13 != 0);
              }
            }
            lVar16 = lVar16 + 1;
          } while (lVar16 != 0xfb);
          puVar7 = operator_new(0x38,(nothrow_t *)PTR_nothrow_10082c970);
          if (puVar7 != (undefined8 *)0x0) {
            *puVar7 = 0;
            puVar7[1] = 0;
            puVar7[2] = 0;
            puVar7[4] = 0;
            puVar7[5] = 0;
            puVar7[3] = puVar7 + 4;
          }
          *(undefined8 **)(lVar17 + 8 + uVar18 * 8) = puVar7;
          plVar2 = *(long **)(*(long *)(param_1 + 0x18a0) + 8 + uVar18 * 8);
          if (plVar2 == (long *)0x0) {
            uVar10 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar10,0x10);
            if (cVar5 != '\0') {
              local_58 = 0x8220202;
              local_54 = "Assertion failure";
              local_4c = 0x822;
              local_4a = "mDeleteList->subLists[fieldIndex] != nullptr";
              __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16)
              ;
            }
            FUN_1001782e9(0,0);
            FUN_100626cf6();
            *(undefined8 *)(param_1 + 0x18a0) = 0;
            goto LAB_10062ae27;
          }
          puVar7 = (undefined8 *)plVar2[1];
          if (puVar7 < (undefined8 *)plVar2[2]) {
            puVar7[2] = CONCAT26(uStack_62,uStack_68);
            puVar7[3] = uStack_60;
            *puVar7 = CONCAT44(uStack_74,local_78);
            puVar7[1] = CONCAT26(uStack_6a,CONCAT24(uStack_6c,uStack_70));
            puVar7 = puVar7 + 4;
          }
          else {
            lVar17 = (long)puVar7 - *plVar2 >> 5;
            uVar1 = lVar17 + 1;
            if (uVar1 >> 0x3b != 0) {
              FUN_10062bc02();
LAB_10062af63:
                    /* WARNING: Subroutine does not return */
              FUN_1001082d0();
            }
            uVar8 = plVar2[2] - *plVar2;
            uVar14 = (long)uVar8 >> 4;
            if (uVar14 <= uVar1) {
              uVar14 = uVar1;
            }
            if (0x7fffffffffffffdf < uVar8) {
              uVar14 = 0x7ffffffffffffff;
            }
            if (uVar14 == 0) {
              pvVar9 = (void *)0x0;
            }
            else {
              if (0x7ffffffffffffff < uVar14) goto LAB_10062af63;
              pvVar9 = operator_new(uVar14 << 5);
            }
            lVar17 = lVar17 * 0x20;
            puVar15 = (undefined8 *)(lVar17 + (long)pvVar9);
            puVar7 = puVar15 + 4;
            puVar15[2] = CONCAT26(uStack_62,uStack_68);
            puVar15[3] = uStack_60;
            *puVar15 = CONCAT44(uStack_74,local_78);
            puVar15[1] = CONCAT26(uStack_6a,CONCAT24(uStack_6c,uStack_70));
            sVar11 = plVar2[1] - *plVar2;
            pvVar12 = (void *)((long)pvVar9 + (lVar17 - sVar11));
            _memcpy(pvVar12,(void *)*plVar2,sVar11);
            pvVar3 = (void *)*plVar2;
            *plVar2 = (long)pvVar12;
            plVar2[1] = (long)puVar7;
            plVar2[2] = (long)(uVar14 * 0x20 + (long)pvVar9);
            if (pvVar3 != (void *)0x0) {
              operator_delete(pvVar3);
            }
          }
          plVar2[1] = (long)puVar7;
          iVar6 = _strcmp((char *)CONCAT26(uStack_6a,CONCAT24(uStack_6c,uStack_70)),"genius_id");
          *(bool *)(*(long *)(*(long *)(param_1 + 0x18a0) + 8 + uVar18 * 8) + 0x30) = iVar6 == 0;
        }
LAB_10062ad32:
        uVar18 = uVar18 + 1;
      } while (uVar18 != 0xfb);
    }
    lVar17 = 2;
    do {
      lVar16 = *(long *)(*(long *)(param_1 + 0x18a0) + lVar17 * 8);
      if (lVar16 != 0) {
        if (*(char *)(lVar16 + 0x30) == '\x01') {
          lVar13 = param_2[0x32];
          if ((lVar13 != 0) && ((int)param_2[0x33] != 0)) {
            local_78 = (undefined4)lVar13;
            uStack_74 = (undefined4)((ulong)lVar13 >> 0x20);
LAB_10062ad98:
            FUN_1002b7e7c(lVar16 + 0x18,&local_78,&local_78);
          }
        }
        else {
          lVar13 = *param_2;
          local_78 = (undefined4)lVar13;
          uStack_74 = (undefined4)((ulong)lVar13 >> 0x20);
          if (lVar13 != 0) goto LAB_10062ad98;
        }
      }
      lVar17 = lVar17 + 1;
    } while (lVar17 != 0xfc);
    uVar10 = 0;
  }
LAB_10062adde:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar10;
}

