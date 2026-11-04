// name: FUN_1002c871c
// address: 1002c871c

/* WARNING: Type propagation algorithm not settling */

int FUN_1002c871c(long param_1,int param_2,byte *param_3,ulong param_4,undefined8 param_5,
                 int param_6)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  ulong uVar12;
  char *pcVar13;
  uint uVar14;
  ulong uVar15;
  ulong uVar16;
  bool bVar17;
  char *local_b8;
  undefined8 local_b0;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  byte *local_98;
  uint local_8c;
  undefined4 local_88;
  char *local_84;
  undefined2 local_7c;
  int local_7a;
  uint local_68;
  char *local_64;
  undefined2 local_5c;
  int local_5a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_b8 = (char *)0x0;
  iVar8 = 0;
  iVar7 = 0;
  iVar5 = local_5a;
  if (param_2 < 0x33) {
    if (param_2 == 1) {
      pcVar13 = "name";
    }
    else {
      if (param_2 != 2) {
        if ((param_2 != 0x32) || (param_4 == 0)) goto LAB_1002c900c;
        local_8c = (uint)*param_3;
        local_a4 = (uint)param_3[1];
        local_98 = (byte *)CONCAT44(local_98._4_4_,(uint)param_3[2]);
        bVar2 = param_3[3];
        uVar9 = *(uint *)(param_3 + 4);
        uVar10 = *(uint *)(param_3 + 8);
        local_a0 = (uint)param_3[0xc];
        uVar14 = *(uint *)(param_3 + 0x10);
        bVar17 = *(char *)(param_1 + 0x30) == '\0';
        uVar3 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
        if (bVar17) {
          uVar3 = uVar9;
        }
        uVar9 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
        if (bVar17) {
          uVar9 = uVar10;
        }
        uVar15 = (ulong)uVar9;
        uVar9 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 | uVar14 << 0x18;
        if (bVar17) {
          uVar9 = uVar14;
        }
        bVar1 = param_3[0xd];
        local_9c = (uint)param_3[0xe];
        local_b0 = FUN_1003ee795(uVar3);
        uVar9 = FUN_1003ee795(uVar9);
        uVar11 = 0;
        switch(bVar2) {
        case 1:
          break;
        case 2:
          uVar11 = 1;
          break;
        case 3:
          uVar11 = 2;
          break;
        case 4:
          uVar11 = 3;
          break;
        case 5:
          uVar11 = 4;
          break;
        default:
          uVar15 = 0x3e;
        }
        local_b8 = _sqlite3_mprintf("UPDATE container SET smart_is_dynamic=%u,smart_is_filtered=%u,smart_is_genius=%u,smart_enabled_only=%u,smart_is_limited=%u,smart_limit_kind=%u,smart_limit_value=%u,smart_limit_order=%u,smart_reverse_limit_order=%u,smart_evaluation_order=%u WHERE pid=%lld"
                                    ,(ulong)local_8c,(ulong)local_a4,(ulong)local_9c,(ulong)local_a0
                                    ,(ulong)local_98 & 0xffffffff,uVar11,uVar15,local_b0,
                                    (ulong)bVar1,(ulong)uVar9,*(undefined8 *)(param_1 + 0x38));
        iVar7 = FUN_100626ef4(*(undefined8 *)(param_1 + 0x10));
        iVar5 = local_5a;
        if ((iVar7 == -0x80) || (iVar7 == 0)) goto LAB_1002c900c;
        uVar11 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar11,0x10);
        iVar8 = iVar7;
        iVar5 = local_5a;
        goto joined_r0x0001002c8c83;
      }
      pcVar13 = "description";
    }
    if (param_4 != 0) {
      iVar7 = FUN_1002c5198(param_1,param_3,param_4,"container",*(undefined8 *)(param_1 + 0x38),
                            pcVar13,0);
      iVar5 = local_5a;
    }
    goto LAB_1002c900c;
  }
  local_98 = param_3;
  if (param_2 < 0x706c686d) {
    if (param_2 != 0x33) {
      iVar7 = iVar8;
      if ((param_2 == 0x36) && ((int)(param_4 >> 3) != 0)) {
        uVar15 = 0;
        do {
          uVar16 = *(ulong *)(local_98 + uVar15 * 8);
          uVar12 = uVar16 >> 0x38 | (uVar16 & 0xff000000000000) >> 0x28 |
                   (uVar16 & 0xff0000000000) >> 0x18 | (uVar16 & 0xff00000000) >> 8 |
                   (uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18 |
                   (uVar16 & 0xff00) << 0x28 | uVar16 << 0x38;
          if (*(char *)(param_1 + 0x30) == '\0') {
            uVar12 = uVar16;
          }
          local_b8 = _sqlite3_mprintf("INSERT INTO container_seed (container_pid,item_pid,seed_order) VALUES (%lld,%lld,%u)"
                                      ,*(undefined8 *)(param_1 + 0x38),uVar12,uVar15 & 0xffffffff);
          iVar7 = FUN_100626ef4(*(undefined8 *)(param_1 + 0x10),&local_b8);
          iVar5 = local_5a;
          if (iVar7 != 0) {
            if (iVar7 != -0x80) {
              uVar11 = FUN_1001cc310();
              cVar6 = _os_log_type_enabled(uVar11,0x10);
              iVar8 = iVar7;
              iVar5 = local_5a;
              goto joined_r0x0001002c8c83;
            }
            break;
          }
          uVar15 = uVar15 + 1;
        } while ((param_4 >> 3 & 0xffffffff) != uVar15);
      }
      goto LAB_1002c900c;
    }
    if (param_4 == 0) goto LAB_1002c900c;
    if (*(int *)(param_1 + 0x24) != 0) {
      iVar7 = 0;
      iVar8 = FUN_1001d1aa6(param_3,param_4 & 0xffffffff,FUN_100289b76,0);
      iVar5 = local_5a;
      if (iVar8 == -0x80) goto LAB_1002c900c;
      if (iVar8 != 0) {
        uVar11 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar11,0x10);
        iVar5 = local_5a;
        goto joined_r0x0001002c8c83;
      }
      FUN_1001cf3f5(0);
      uVar9 = FUN_1001d0b82(0);
      if (uVar9 != 0) {
        uVar10 = 0;
        uVar14 = 0;
        do {
          local_8c = uVar10;
          iVar7 = FUN_1001cf495(0,uVar14,&local_68);
          if (iVar7 != 0) {
            if (iVar7 != -0x80) {
              uVar11 = FUN_1001cc310();
              cVar6 = _os_log_type_enabled(uVar11,0x10);
              if (cVar6 != '\0') {
                local_88 = 0x8220202;
                local_84 = "Assertion failure";
                local_7c = 0x400;
                local_7a = iVar7;
                __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_88,0x12
                                   );
              }
            }
LAB_1002c8fbc:
            FUN_1001cf5c9(0);
            iVar7 = 0;
            iVar5 = local_5a;
            if ((local_8c & 1) != 0) goto LAB_1002c8fdb;
            goto LAB_1002c900c;
          }
          if (*(uint *)(param_1 + 0x24) < local_68) goto LAB_1002c8fbc;
          uVar14 = uVar14 + 1;
          uVar10 = CONCAT31((int3)(local_68 >> 8),uVar9 <= uVar14);
        } while (uVar14 != uVar9);
      }
      FUN_1001cf5c9(0);
    }
LAB_1002c8fdb:
    iVar7 = FUN_1001d4025(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68),"container",0,
                          *(undefined8 *)(param_1 + 0x38),"smart_criteria",param_4,local_98);
    iVar5 = local_5a;
    goto LAB_1002c900c;
  }
  if (param_2 == 0x7079686d) {
    if (param_4 != 0) {
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_3 + 0x1c);
      *(undefined4 *)(param_1 + 0x48) = 0;
      *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
      uVar16 = 0;
      uVar15 = 0;
      if (*(int *)(param_3 + 0x18) != 0) {
        uVar9 = FUN_100177fb5();
        uVar15 = (ulong)uVar9;
      }
      if (*(int *)(local_98 + 0x58) != 0) {
        uVar9 = FUN_100177fb5();
        uVar16 = (ulong)uVar9;
      }
      if (*(char *)(param_1 + 0x51) == '\0') {
        iVar7 = FUN_1001d357f(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68),1);
        iVar5 = local_5a;
        if (iVar7 == -0x80) goto LAB_1002c900c;
        if (iVar7 != 0) {
          uVar11 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar11,0x10);
          iVar8 = iVar7;
          iVar5 = local_5a;
          goto joined_r0x0001002c8c83;
        }
        *(undefined1 *)(param_1 + 0x51) = 1;
      }
      uVar9 = (uint)local_98[0x52];
      if ((((local_98[0x52] == 0) && (uVar9 = (uint)local_98[0x50], local_98[0x50] == 0)) &&
          (uVar9 = 0x11, local_98[0x17] == 0)) &&
         ((uVar9 = 0xb, local_98[0x2a] == 0 && (uVar9 = 0x14, local_98[0x51] == 0)))) {
        uVar9 = 0;
      }
      local_b8 = _sqlite3_mprintf("INSERT INTO container (pid,distinguished_kind,date_created,date_modified,parent_pid,workout_template_id,smart_is_folder,is_hidden) VALUES (%lld,%u,%d,%d,%lld,%u,%u,%u)"
                                  ,*(undefined8 *)(local_98 + 0x1c),(ulong)uVar9,uVar15,uVar16,
                                  *(undefined8 *)(local_98 + 0x30),0,(ulong)local_98[0x2b],
                                  (ulong)(param_6 == 5 || local_98[0x14] != 0));
      iVar7 = FUN_100626ef4(*(undefined8 *)(param_1 + 0x10));
      iVar5 = local_5a;
      if (iVar7 == -0x80) goto LAB_1002c900c;
      if (iVar7 == 0) {
        if (local_98[0x14] != 0) {
          iVar7 = FUN_1001d40ad(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68),"db_info",0,
                                *(undefined8 *)(param_1 + 0x28),"primary_container_pid",
                                *(undefined8 *)(local_98 + 0x1c));
          iVar5 = local_5a;
          if (iVar7 == -0x80) goto LAB_1002c900c;
          if (iVar7 != 0) {
            uVar11 = FUN_1001cc310();
            cVar6 = _os_log_type_enabled(uVar11,0x10);
            iVar8 = iVar7;
            iVar5 = local_5a;
            goto joined_r0x0001002c8c83;
          }
        }
        pbVar4 = local_98;
        uVar11 = *(undefined8 *)(local_98 + 0x1c);
        uVar9 = FUN_1003ee795(*(undefined4 *)(local_98 + 0x2c));
        bVar2 = pbVar4[0x53];
        uVar10 = FUN_1003ee795(*(undefined4 *)(pbVar4 + 0x4c));
        local_b8 = _sqlite3_mprintf("INSERT INTO container_ui (container_pid,play_order,is_reversed,album_field_order,repeat_mode,shuffle_items,has_been_shuffled) VALUES (%lld,%u,%u,%u,%u,%u,%u)"
                                    ,uVar11,(ulong)uVar9,(ulong)bVar2,(ulong)uVar10,0,0,
                                    (ulong)pbVar4[0x16]);
        iVar7 = FUN_100626ef4(*(undefined8 *)(param_1 + 0x10));
        iVar5 = local_5a;
        if ((iVar7 == -0x80) || (iVar7 == 0)) goto LAB_1002c900c;
        uVar11 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar11,0x10);
        iVar8 = iVar7;
        iVar5 = local_5a;
      }
      else {
        uVar11 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar11,0x10);
        iVar8 = iVar7;
        iVar5 = local_5a;
      }
joined_r0x0001002c8c83:
      local_5a = iVar8;
      if (cVar6 != '\0') {
        local_5c = 0x400;
        local_64 = "Assertion failure";
        local_68 = 0x8220202;
        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_68,0x12);
        iVar5 = local_5a;
      }
      goto LAB_1002c900c;
    }
    if ((*(char *)(param_1 + 0x51) != '\x01') || (*(ulong *)(param_1 + 0x58) < 100))
    goto LAB_1002c900c;
    iVar7 = FUN_1001d3605(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68));
    if ((iVar7 != -0x80) && (iVar7 != 0)) {
      uVar11 = FUN_1001cc310();
      cVar6 = _os_log_type_enabled(uVar11,0x10);
joined_r0x0001002c8d0b:
      if (cVar6 != '\0') {
        local_5c = 0x400;
        local_64 = "Assertion failure";
        local_68 = 0x8220202;
        local_5a = iVar7;
        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_68,0x12);
      }
    }
LAB_1002c8d81:
    *(undefined1 *)(param_1 + 0x51) = 0;
  }
  else {
    if (param_2 != 0x706c686d) goto LAB_1002c900c;
    if (param_4 == 0) {
      iVar7 = 0;
      if (*(char *)(param_1 + 0x51) == '\x01') {
        iVar7 = FUN_1001d3605(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68));
        if ((iVar7 != -0x80) && (iVar7 != 0)) {
          uVar11 = FUN_1001cc310();
          cVar6 = _os_log_type_enabled(uVar11,0x10);
          goto joined_r0x0001002c8d0b;
        }
        goto LAB_1002c8d81;
      }
    }
    else {
      *(long *)(param_1 + 0x228) = *(long *)(param_1 + 0x228) + (ulong)*(uint *)(param_3 + 8);
      iVar7 = FUN_1001d357f(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68),1);
      iVar5 = local_5a;
      if (iVar7 == -0x80) goto LAB_1002c900c;
      if (iVar7 != 0) {
        uVar11 = FUN_1001cc310();
        cVar6 = _os_log_type_enabled(uVar11,0x10);
        iVar5 = local_5a;
        if (cVar6 != '\0') {
          local_68 = 0x8220202;
          local_64 = "Assertion failure";
          local_5c = 0x400;
          local_5a = iVar7;
          __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_68,0x12);
          iVar5 = local_5a;
        }
        goto LAB_1002c900c;
      }
      *(undefined1 *)(param_1 + 0x51) = 1;
      iVar7 = iVar8;
    }
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  iVar5 = local_5a;
LAB_1002c900c:
  local_5a = iVar5;
  _sqlite3_free(local_b8);
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar7;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

