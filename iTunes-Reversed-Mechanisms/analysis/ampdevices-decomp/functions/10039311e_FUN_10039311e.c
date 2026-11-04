// name: FUN_10039311e
// address: 10039311e

int FUN_10039311e(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,void *param_6,void *param_7,undefined1 param_8,void *param_9,
                 void *param_10,long *param_11)

{
  undefined8 *puVar1;
  uint uVar2;
  long *plVar3;
  char cVar4;
  int iVar5;
  undefined8 *puVar6;
  void *pvVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  bool bVar14;
  long *local_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined2 uStack_58;
  undefined4 uStack_56;
  long *local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  iVar5 = -0x80;
  if (*(char *)(*(long *)(param_1 + 8) + 0x168cc) != '\0') goto LAB_100393150;
  puVar6 = operator_new(0x1130,(nothrow_t *)PTR_nothrow_10082c970);
  if (puVar6 == (undefined8 *)0x0) {
    uVar10 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar10,0x10);
    if (cVar4 != '\0') {
      local_68._0_4_ = 0x8220202;
      local_68._4_4_ = 0x7a0a90;
      local_60 = 1;
      uStack_5c = 0x822;
      uStack_5a = 0xe7fa;
      uStack_58 = 0x7b;
      uStack_56 = 1;
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    iVar5 = -0x6c;
    goto LAB_100393150;
  }
  puVar6[6] = 0;
  *puVar6 = 0;
  puVar6[8] = 0;
  puVar6[9] = 0;
  puVar6[10] = 0;
  *(undefined4 *)(puVar6 + 0xb) = param_2;
  *(undefined8 *)((long)puVar6 + 0x5c) = param_3;
  *(undefined8 *)((long)puVar6 + 100) = param_4;
  *(undefined4 *)((long)puVar6 + 0x6c) = param_5;
  _memcpy(puVar6 + 0xe,param_6,0x420);
  if (param_7 == (void *)0x0) {
    *(undefined4 *)(puVar6 + 0x92) = 0;
    *(undefined2 *)((long)puVar6 + 0x494) = 0;
    *(undefined4 *)(puVar6 + 0x93) = 0;
    ___bzero(puVar6 + 0x94,0x410);
  }
  else {
    _memcpy(puVar6 + 0x92,param_7,0x420);
  }
  *(bool *)(puVar6 + 0x116) = param_7 != (void *)0x0;
  *(undefined1 *)((long)puVar6 + 0x8b1) = param_8;
  if (param_9 == (void *)0x0) {
    *(undefined4 *)(puVar6 + 0x117) = 0;
    *(undefined2 *)((long)puVar6 + 0x8bc) = 0;
    *(undefined4 *)(puVar6 + 0x118) = 0;
    ___bzero(puVar6 + 0x119,0x410);
  }
  else {
    _memcpy(puVar6 + 0x117,param_9,0x420);
  }
  *(bool *)(puVar6 + 0x19b) = param_9 != (void *)0x0;
  if (param_10 == (void *)0x0) {
    *(undefined4 *)(puVar6 + 0x19c) = 0;
    *(undefined2 *)((long)puVar6 + 0xce4) = 0;
    *(undefined4 *)(puVar6 + 0x19d) = 0;
    ___bzero(puVar6 + 0x19e,0x410);
  }
  else {
    _memcpy(puVar6 + 0x19c,param_10,0x420);
  }
  *(bool *)(puVar6 + 0x220) = param_10 != (void *)0x0;
  puVar1 = puVar6 + 0x221;
  plVar3 = puVar6 + 0x222;
  puVar6[0x222] = 0;
  puVar6[0x223] = 0;
  puVar6[0x221] = plVar3;
  plVar8 = (long *)*param_11;
  if (plVar8 != param_11 + 1) {
    local_70 = (long *)0x0;
    plVar11 = plVar3;
    do {
      plVar13 = plVar3;
      if (plVar11 == plVar3) {
LAB_1003933ae:
        plVar11 = plVar13 + 1;
        if (local_70 == (long *)0x0) {
          plVar11 = plVar3;
          plVar13 = plVar3;
        }
        if (*plVar11 == 0) goto LAB_1003933fc;
      }
      else {
        plVar11 = local_70;
        plVar12 = plVar3;
        if (local_70 == (long *)0x0) {
          do {
            plVar13 = (long *)plVar12[2];
            bVar14 = (long *)*plVar13 == plVar12;
            plVar12 = plVar13;
          } while (bVar14);
        }
        else {
          do {
            plVar13 = plVar11;
            plVar11 = (long *)plVar13[1];
          } while ((long *)plVar13[1] != (long *)0x0);
        }
        uVar2 = *(uint *)(plVar8 + 4);
        if (*(uint *)(plVar13 + 4) < uVar2) goto LAB_1003933ae;
        plVar11 = plVar3;
        plVar13 = plVar3;
        if (local_70 != (long *)0x0) {
          do {
            while (plVar13 = local_70, uVar2 < *(uint *)(plVar13 + 4)) {
              local_70 = (long *)*plVar13;
              plVar11 = plVar13;
              if ((long *)*plVar13 == (long *)0x0) goto LAB_1003933fc;
            }
            if (uVar2 <= *(uint *)(plVar13 + 4)) goto LAB_100393441;
            local_70 = (long *)plVar13[1];
          } while ((long *)plVar13[1] != (long *)0x0);
          plVar11 = plVar13 + 1;
        }
LAB_1003933fc:
        pvVar7 = operator_new(0x50);
        *(int *)((long)pvVar7 + 0x20) = (int)plVar8[4];
        *(long *)((long)pvVar7 + 0x28) = plVar8[5];
        *(int *)((long)pvVar7 + 0x30) = (int)plVar8[6];
        FUN_1002a3fa0((long)pvVar7 + 0x38,plVar8 + 7);
        FUN_10020e4b6(puVar1,plVar13,plVar11,pvVar7);
      }
LAB_100393441:
      plVar11 = (long *)plVar8[1];
      plVar13 = plVar8;
      if ((long *)plVar8[1] == (long *)0x0) {
        do {
          plVar8 = (long *)plVar13[2];
          bVar14 = (long *)*plVar8 != plVar13;
          plVar13 = plVar8;
        } while (bVar14);
      }
      else {
        do {
          plVar8 = plVar11;
          plVar11 = (long *)*plVar8;
        } while ((long *)*plVar8 != (long *)0x0);
      }
      if (plVar8 == param_11 + 1) break;
      local_70 = (long *)*plVar3;
      plVar11 = (long *)*puVar1;
    } while( true );
  }
  puVar6[0x224] = param_1;
  local_68._0_4_ = 0x855f08;
  local_68._4_4_ = 1;
  local_60 = SUB84(puVar6,0);
  uStack_5c = (undefined2)((ulong)puVar6 >> 0x20);
  uStack_5a = (undefined2)((ulong)puVar6 >> 0x30);
  local_48 = &local_68;
  FUN_100238ef2(&local_68,puVar6 + 2);
  if (local_48 == &local_68) {
    lVar9 = 0x20;
LAB_1003934d8:
    (**(code **)(*local_48 + lVar9))();
  }
  else {
    lVar9 = 0x28;
    if (local_48 != (long *)0x0) goto LAB_1003934d8;
  }
  iVar5 = FUN_1001ebfee(*(undefined8 *)(param_1 + 0x10),puVar6);
  if (iVar5 != -0x80) {
    if (iVar5 == 0) goto LAB_100393150;
    uVar10 = FUN_1001cc310();
    cVar4 = _os_log_type_enabled(uVar10,0x10);
    if (cVar4 != '\0') {
      local_68._0_4_ = 0x8220202;
      local_68._4_4_ = 0x7a0a90;
      local_60 = 1;
      uStack_5c = 0x400;
      uStack_5a = (undefined2)iVar5;
      uStack_58 = (undefined2)((uint)iVar5 >> 0x10);
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_68,0x12);
    }
    if (iVar5 == 0) {
      iVar5 = 0;
      goto LAB_100393150;
    }
  }
  FUN_1002a8ddc(puVar1,puVar6[0x222]);
  plVar3 = (long *)puVar6[6];
  if (plVar3 == puVar6 + 2) {
    lVar9 = 0x20;
LAB_10039354e:
    (**(code **)(*plVar3 + lVar9))();
  }
  else {
    lVar9 = 0x28;
    if (plVar3 != (long *)0x0) goto LAB_10039354e;
  }
  operator_delete(puVar6);
LAB_100393150:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

