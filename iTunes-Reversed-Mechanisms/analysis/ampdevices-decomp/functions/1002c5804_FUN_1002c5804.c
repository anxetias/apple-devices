// name: FUN_1002c5804
// address: 1002c5804

int FUN_1002c5804(long param_1,int param_2,long param_3,long param_4)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  int iVar11;
  long *plVar12;
  uint uVar13;
  uint uVar14;
  long *plVar15;
  long lVar16;
  char *pcVar17;
  long lVar18;
  char *local_68;
  undefined4 local_5c;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  undefined8 local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_68 = (char *)0x0;
  iVar6 = 0;
  iVar11 = 0;
  iVar5 = iVar6;
  switch(param_2) {
  case 200:
  case 0xcc:
    pcVar17 = "name";
    break;
  case 0xc9:
  case 0xca:
  case 0xcd:
    goto switchD_1002c584c_caseD_c9;
  case 0xcb:
    pcVar17 = "feed_url";
    break;
  case 0xce:
    iVar5 = iVar11;
    if ((param_4 == 0) ||
       (iVar5 = FUN_1002c4f7a(param_1,param_3,param_4,param_1 + 0x1a8,&local_5c), iVar5 == -0x80))
    goto switchD_1002c584c_caseD_c9;
    if (iVar5 != 0) {
      uVar7 = FUN_1001cc310();
      cVar4 = _os_log_type_enabled(uVar7,0x10);
      if (cVar4 == '\0') goto switchD_1002c584c_caseD_c9;
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
LAB_1002c5bc9:
      local_4c = 0x400;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
      goto switchD_1002c584c_caseD_c9;
    }
    plVar1 = (long *)(param_1 + 0x1f8);
    lVar8 = *(long *)(param_1 + 0x1f8);
    if (lVar8 == 0) {
      iVar6 = *(int *)(param_1 + 0x200);
      if (iVar6 == 0) {
        iVar11 = 0x40;
      }
      else {
        iVar11 = iVar6 * 2;
        if (*(int *)(param_1 + 0x208) * 6 < iVar6 * 2) {
          iVar11 = iVar6;
        }
      }
      FUN_1002ccc96(plVar1,iVar11);
      lVar8 = *plVar1;
      if (lVar8 == 0) {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "m_table";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
        lVar8 = *plVar1;
      }
    }
    lVar18 = *(long *)(param_1 + 0x38);
    uVar10 = ~(lVar18 << 0x20) + lVar18;
    uVar10 = uVar10 >> 0x16 ^ uVar10;
    uVar10 = ~(uVar10 << 0xd) + uVar10;
    uVar10 = (uVar10 >> 8 ^ uVar10) * 9;
    uVar10 = uVar10 >> 0xf ^ uVar10;
    uVar10 = ~(uVar10 << 0x1b) + uVar10;
    uVar13 = (uint)(uVar10 >> 0x1f) ^ (uint)uVar10;
    uVar9 = *(uint *)(param_1 + 0x204) & uVar13;
    plVar12 = (long *)(lVar8 + (long)(int)uVar9 * 0x10);
    lVar16 = *(long *)(lVar8 + (long)(int)uVar9 * 0x10);
    if (lVar16 == 0) {
LAB_1002c5dc7:
      iVar6 = *(int *)(param_1 + 0x20c);
    }
    else {
      uVar14 = (uVar13 >> 0x17) + ~uVar13;
      uVar14 = uVar14 * 0x1000 ^ uVar14;
      uVar14 = uVar14 >> 7 ^ uVar14;
      uVar14 = uVar14 * 4 ^ uVar14;
      plVar15 = (long *)0x0;
      uVar13 = 0;
      do {
        if (lVar16 == lVar18) goto switchD_1002c584c_caseD_c9;
        if (lVar16 == -1) {
          plVar15 = plVar12;
        }
        if (uVar13 == 0) {
          uVar13 = uVar14 >> 0x14 ^ uVar14 | 1;
        }
        uVar9 = uVar9 + uVar13 & *(uint *)(param_1 + 0x204);
        plVar12 = (long *)(lVar8 + (long)(int)uVar9 * 0x10);
        lVar16 = *(long *)(lVar8 + (long)(int)uVar9 * 0x10);
      } while (lVar16 != 0);
      if (plVar15 == (long *)0x0) goto LAB_1002c5dc7;
      *plVar15 = 0;
      *(undefined4 *)(plVar15 + 1) = 0;
      iVar6 = *(int *)(param_1 + 0x20c) + -1;
      *(int *)(param_1 + 0x20c) = iVar6;
      lVar18 = *(long *)(param_1 + 0x38);
      plVar12 = plVar15;
    }
    *plVar12 = lVar18;
    *(undefined4 *)(plVar12 + 1) = local_5c;
    iVar2 = *(int *)(param_1 + 0x200);
    iVar3 = *(int *)(param_1 + 0x208);
    iVar11 = iVar3 + 1;
    *(int *)(param_1 + 0x208) = iVar11;
    if (iVar2 <= (iVar6 + iVar3 + 1) * 2) {
      iVar6 = iVar2 * 2;
      if (iVar11 * 6 < iVar2 * 2) {
        iVar6 = iVar2;
      }
      iVar11 = 0x40;
      if (iVar2 != 0) {
        iVar11 = iVar6;
      }
      FUN_1002ccc96(plVar1,iVar11);
      lVar8 = FUN_1002cd07e(plVar1,lVar18);
      if (lVar8 == (long)*(int *)(param_1 + 0x200) * 0x10 + *(long *)(param_1 + 0x1f8)) {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x822;
          local_4a = "p.first != end()";
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
    }
    goto switchD_1002c584c_caseD_c9;
  default:
    if (param_2 == 0x6169686d) {
      if (param_4 != 0) {
        *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_3 + 0x14);
        FUN_1002cc4f8(&local_58,param_1 + 0x70,param_3 + 0x10,param_3 + 0x14);
        if (local_4a._2_1_ == '\0') {
          uVar7 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar7,0x10);
          if (cVar4 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x822;
            local_4a = "success";
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
          }
          FUN_1001782e9(0,0);
          iVar5 = -0x6c;
          goto switchD_1002c584c_caseD_c9;
        }
        *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
        if (*(char *)(param_1 + 0x51) == '\0') {
          iVar5 = FUN_1001d357f(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68),1);
          if (iVar5 == -0x80) goto switchD_1002c584c_caseD_c9;
          if (iVar5 != 0) {
            uVar7 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar7,0x10);
            if (cVar4 == '\0') goto switchD_1002c584c_caseD_c9;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
            goto LAB_1002c5bc9;
          }
          *(undefined1 *)(param_1 + 0x51) = 1;
        }
        local_68 = _sqlite3_mprintf("INSERT INTO album (pid,kind,artwork_status,artwork_item_pid,all_compilations,user_rating,name_order,season_number) VALUES (%lld,%u,%u,%lld,%u,%d,0,%u)"
                                    ,*(undefined8 *)(param_3 + 0x14),
                                    (ulong)*(byte *)(param_3 + 0x1c),
                                    (ulong)*(byte *)(param_3 + 0x1e),*(undefined8 *)(param_3 + 0x20)
                                    ,(ulong)*(byte *)(param_3 + 0x1d),
                                    (ulong)(uint)(int)*(char *)(param_3 + 0x28),
                                    (ulong)*(uint *)(param_3 + 0x2c));
        iVar5 = FUN_100626ef4(*(undefined8 *)(param_1 + 0x10));
        if ((iVar5 == -0x80) || (iVar5 == 0)) goto switchD_1002c584c_caseD_c9;
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 == '\0') goto switchD_1002c584c_caseD_c9;
        local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
        goto LAB_1002c5bc9;
      }
      iVar5 = iVar11;
      if ((*(char *)(param_1 + 0x51) != '\x01') || (*(ulong *)(param_1 + 0x58) < 100))
      goto switchD_1002c584c_caseD_c9;
      iVar6 = FUN_1001d3605(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68));
      if ((iVar6 != -0x80) && (iVar6 != 0)) {
        uVar7 = FUN_1001cc310();
        cVar4 = _os_log_type_enabled(uVar7,0x10);
        if (cVar4 != '\0') {
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
LAB_1002c5f32:
          local_4c = 0x400;
          local_54 = "Assertion failure";
          local_58 = 0x8220202;
          __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
LAB_1002c5b42:
      *(undefined1 *)(param_1 + 0x51) = 0;
    }
    else {
      if (param_2 != 0x616c686d) goto switchD_1002c584c_caseD_c9;
      if (param_4 == 0) {
        iVar6 = 0;
        if (*(char *)(param_1 + 0x51) == '\x01') {
          iVar6 = FUN_1001d3605(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68));
          if ((iVar6 != -0x80) && (iVar6 != 0)) {
            uVar7 = FUN_1001cc310();
            cVar4 = _os_log_type_enabled(uVar7,0x10);
            if (cVar4 != '\0') {
              local_4a = (char *)CONCAT44(local_4a._4_4_,iVar6);
              goto LAB_1002c5f32;
            }
          }
          goto LAB_1002c5b42;
        }
      }
      else {
        *(long *)(param_1 + 0x210) = *(long *)(param_1 + 0x210) + (ulong)*(uint *)(param_3 + 8);
        iVar5 = FUN_1001d357f(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x68),1);
        if (iVar5 == -0x80) goto switchD_1002c584c_caseD_c9;
        if (iVar5 != 0) {
          uVar7 = FUN_1001cc310();
          cVar4 = _os_log_type_enabled(uVar7,0x10);
          if (cVar4 != '\0') {
            local_58 = 0x8220202;
            local_54 = "Assertion failure";
            local_4c = 0x400;
            local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
            __os_log_error_impl(0x100000000,uVar7,0x10,"%{public}s: err == (%d)",&local_58,0x12);
          }
          goto switchD_1002c584c_caseD_c9;
        }
        *(undefined1 *)(param_1 + 0x51) = 1;
      }
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
    iVar5 = iVar6;
    goto switchD_1002c584c_caseD_c9;
  }
  iVar5 = iVar11;
  if (param_4 != 0) {
    iVar5 = FUN_1002c5198(param_1,param_3,param_4,"album",*(undefined8 *)(param_1 + 0x38),pcVar17,0)
    ;
  }
switchD_1002c584c_caseD_c9:
  _sqlite3_free(local_68);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar5;
}

