// name: FUN_100206b8c
// address: 100206b8c

undefined8 FUN_100206b8c(long param_1,long param_2,long *param_3,uint param_4,byte *param_5)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long *plVar11;
  uint local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  undefined2 uStack_42;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  plVar1 = *(long **)(param_1 + 0x20);
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *param_3 = 0;
  param_3[1] = 0;
  if (param_5 != (byte *)0x0) {
    param_5[0] = 0;
    param_5[1] = 0;
    param_5[2] = 0;
    param_5[3] = 0;
  }
  *param_3 = (long)(plVar1 + 0x16);
  param_3[1] = (long)plVar1;
  param_3[2] = param_2;
  *(uint *)(param_3 + 3) = param_4;
  if (param_2 == 0) {
    if ((param_4 & 8) == 0) {
      uVar10 = FUN_1001cc310();
      cVar3 = _os_log_type_enabled(uVar10,0x10);
      if (cVar3 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7a0a90;
        uStack_50 = 1;
        uStack_4c = 0x822;
        uStack_4a = 0xdec7;
        uStack_48 = 0x7a;
        uStack_46 = 1;
        __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      FUN_1001782e9(0,0);
    }
    iVar4 = (**(code **)(*plVar1 + 0x10))(plVar1,param_3);
    uVar10 = 0xe;
    if (iVar4 == -0x80) goto LAB_100206e17;
    if (iVar4 == 0) goto LAB_100206bf6;
    uVar7 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar7,0x10);
    if (cVar3 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x400;
      uStack_4a = (undefined2)iVar4;
      uStack_48 = (undefined2)((uint)iVar4 >> 0x10);
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
    if (iVar4 != 0) goto LAB_100206e17;
  }
  else {
LAB_100206bf6:
    if ((param_4 >> 8 & 1) != 0) {
      *(byte *)(param_3 + 4) = *(byte *)(param_3 + 4) | 4;
    }
    if ((param_4 & 0x1600) != 0) {
      *(byte *)(param_3 + 4) = *(byte *)(param_3 + 4) | 2;
    }
    if ((param_4 & 8) != 0) {
      *(byte *)(param_3 + 4) = *(byte *)(param_3 + 4) | 1;
    }
    if ((param_4 & 1) != 0) {
      *(byte *)(param_3 + 4) = *(byte *)(param_3 + 4) | 8;
    }
    if (param_3[2] == 0) {
LAB_100206c98:
      lVar6 = FUN_1001c6429(0x40);
      param_3[5] = lVar6;
      if (lVar6 == 0) {
        uVar10 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar10,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          uStack_4c = 0x822;
          uStack_4a = 0xdee3;
          uStack_48 = 0x7a;
          uStack_46 = 1;
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        uVar10 = 0xe;
        goto LAB_100206e17;
      }
      iVar4 = FUN_1001c4b6c(lVar6);
      uVar10 = 0xe;
      if (iVar4 == -0x80) goto LAB_100206e17;
      if (iVar4 != 0) {
        uVar7 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar7,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          uStack_4c = 0x400;
          uStack_4a = (undefined2)iVar4;
          uStack_48 = (undefined2)((uint)iVar4 >> 0x10);
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
        goto LAB_100206e17;
      }
      lVar6 = param_3[5];
      FUN_100147c92(&local_58,param_3[2]);
      plVar11 = plVar1 + 0x37;
      plVar5 = plVar11;
      if ((long *)plVar1[0x37] != (long *)0x0) {
        plVar2 = (long *)plVar1[0x37];
        do {
          while( true ) {
            plVar11 = plVar2;
            cVar3 = FUN_100207556(&local_58,plVar11 + 4);
            if (cVar3 < '\0') break;
            cVar3 = FUN_100207556(plVar11 + 4,&local_58);
            if (-1 < cVar3) {
              puVar8 = (undefined8 *)*plVar5;
              if (puVar8 != (undefined8 *)0x0) goto LAB_100206eb2;
              goto LAB_100206e40;
            }
            plVar5 = plVar11 + 1;
            plVar2 = (long *)plVar11[1];
            if ((long *)plVar11[1] == (long *)0x0) goto LAB_100206e40;
          }
          plVar2 = (long *)*plVar11;
          plVar5 = plVar11;
        } while ((long *)*plVar11 != (long *)0x0);
      }
LAB_100206e40:
      puVar8 = operator_new(0x40);
      puVar8[6] = CONCAT26(uStack_42,CONCAT42(uStack_46,uStack_48));
      puVar8[4] = CONCAT44(uStack_54,local_58);
      puVar8[5] = CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
      local_58 = 0;
      uStack_54 = 0;
      uStack_50 = 0;
      uStack_4c = 0;
      uStack_4a = 0;
      uStack_48 = 0;
      uStack_46 = 0;
      uStack_42 = 0;
      puVar8[7] = 0;
      *puVar8 = 0;
      puVar8[1] = 0;
      puVar8[2] = plVar11;
      *plVar5 = (long)puVar8;
      puVar9 = puVar8;
      if (*(long *)plVar1[0x36] != 0) {
        plVar1[0x36] = *(long *)plVar1[0x36];
        puVar9 = (undefined8 *)*plVar5;
      }
      FUN_1001ad344(plVar1[0x37],puVar9);
      plVar1[0x38] = plVar1[0x38] + 1;
LAB_100206eb2:
      puVar8[7] = lVar6;
      if ((local_58 & 1) != 0) {
        operator_delete((void *)CONCAT26(uStack_42,CONCAT42(uStack_46,uStack_48)));
      }
    }
    else {
      FUN_100147c92(&local_58);
      plVar5 = (long *)FUN_1002074ea(plVar1 + 0x36,&local_58);
      if ((local_58 & 1) != 0) {
        operator_delete((void *)CONCAT26(uStack_42,CONCAT42(uStack_46,uStack_48)));
      }
      if (plVar5 == plVar1 + 0x37) goto LAB_100206c98;
      param_3[5] = plVar5[7];
    }
    if (param_5 != (byte *)0x0 && (param_4 & 1) != 0) {
      *param_5 = *param_5 | 1;
    }
  }
  uVar10 = 0;
LAB_100206e17:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar10;
}

