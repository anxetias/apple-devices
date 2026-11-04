// name: FUN_100627e58
// address: 100627e58

/* WARNING: Type propagation algorithm not settling */

int FUN_100627e58(long param_1)

{
  long *plVar1;
  byte bVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  ushort uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  char *pcVar14;
  long lVar15;
  ulong uVar16;
  char local_15d9;
  undefined4 local_15d8;
  char *local_15d4;
  undefined2 local_15cc;
  char *local_15ca;
  char local_5d8 [512];
  uint local_3d8;
  char *local_3d4;
  undefined2 local_3cc;
  int local_3ca;
  char local_1d8 [384];
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  undefined8 uStack_40;
  long local_38;
  
  uStack_40 = 0x100627e70;
  lVar10 = FUN_100108310();
  lVar10 = -lVar10;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (*(long *)(param_1 + 0x28) == 0) {
    *(undefined8 *)((long)&local_38 + lVar10) = 0x10062878a;
    uVar11 = FUN_1001cc310();
    *(undefined8 *)((long)&local_38 + lVar10) = 0x10062879a;
    cVar6 = _os_log_type_enabled(uVar11,0x10);
    if (cVar6 != '\0') {
      local_15d8 = 0x8220202;
      local_15d4 = "Assertion failure";
      local_15cc = 0x822;
      local_15ca = "mSchema.numTables != 0";
      *(undefined8 *)((long)&local_38 + lVar10) = 0x1006289a2;
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_15d8,0x16);
    }
    *(undefined8 *)((long)&local_38 + lVar10) = 0x1006287ab;
    FUN_1001782e9(0,0);
    iVar8 = -0x1c;
    goto LAB_10062892d;
  }
  if (*(int *)(param_1 + 0x1040) == 0) {
    uVar11 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)((long)&local_38 + lVar10) = 0x1006287c4;
    iVar8 = FUN_1001d357f(uVar11,1);
    if (iVar8 == -0x80) goto LAB_10062892d;
    if (iVar8 != 0) {
      *(undefined8 *)((long)&local_38 + lVar10) = 0x10062884b;
      uVar11 = FUN_1001cc310();
      *(undefined8 *)((long)&local_38 + lVar10) = 0x10062885b;
      cVar6 = _os_log_type_enabled(uVar11,0x10);
      if (cVar6 != '\0') {
        local_15d8 = 0x8220202;
        local_15d4 = "Assertion failure";
        local_15cc = 0x400;
        local_15ca = (char *)CONCAT44(local_15ca._4_4_,iVar8);
        *(undefined8 *)((long)&local_38 + lVar10) = 0x1006288a8;
        __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_15d8,0x12);
      }
      goto LAB_10062892d;
    }
    *(int *)(param_1 + 0x1040) = *(int *)(param_1 + 0x1040) + 1;
    if (*(long *)(param_1 + 0x28) != 0) goto LAB_100627ea6;
  }
  else {
    *(int *)(param_1 + 0x1040) = *(int *)(param_1 + 0x1040) + 1;
LAB_100627ea6:
    uVar13 = 0;
    do {
      plVar1 = (long *)(*(long *)(param_1 + 0x30) + uVar13 * 0x28);
      lVar15 = *plVar1;
      if ((lVar15 == 0) || (plVar1[3] == 0)) {
        *(undefined8 *)((long)&local_38 + lVar10) = 0x100627edf;
        uVar11 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar10) = 0x100627eef;
        cVar6 = _os_log_type_enabled(uVar11,0x10);
        if (cVar6 != '\0') {
          local_15d8 = 0x8220202;
          local_15d4 = "Assertion failure";
          local_15cc = 0x822;
          local_15ca = "tableDef->name != nullptr && tableDef->columns != nullptr";
          *(undefined8 *)((long)&local_38 + lVar10) = 0x100628490;
          __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_15d8,0x16);
        }
        *(undefined8 *)((long)&local_38 + lVar10) = 0x100627f00;
        FUN_1001782e9(0,0);
        lVar15 = *plVar1;
      }
      uVar11 = *(undefined8 *)(param_1 + 0x68);
      *(undefined8 *)((long)&local_38 + lVar10) = 0x100627f14;
      iVar8 = FUN_1001d33c0(uVar11,lVar15,&local_15d9);
      if (iVar8 == 0) {
        if (local_15d9 == '\0') {
          local_15d8 = CONCAT22(local_15d8._2_2_,0x28);
          local_3d8 = local_3d8 & 0xffffff00;
          local_5d8[0] = '\0';
          if (plVar1[2] == 0) {
LAB_100628642:
            *(undefined8 *)((long)&local_38 + lVar10) = 0x10062864a;
            uVar9 = FUN_1001dfc51(&local_15d8);
            if (uVar9 < 0xfff) {
              *(undefined2 *)((long)&local_15d8 + (ulong)uVar9) = 0x29;
              uVar11 = *(undefined8 *)(param_1 + 0x68);
              lVar15 = *plVar1;
              *(undefined8 *)((long)&local_38 + lVar10) = 0x100628676;
              iVar8 = FUN_1001d33d7(uVar11,lVar15,&local_15d8,1);
              if ((iVar8 != -0x80) && (iVar8 != 0)) {
                *(undefined8 *)((long)&local_38 + lVar10) = 0x100628690;
                uVar11 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar10) = 0x1006286a0;
                cVar6 = _os_log_type_enabled(uVar11,0x10);
                goto joined_r0x000100628376;
              }
              goto LAB_100627f41;
            }
            *(undefined8 *)((long)&local_38 + lVar10) = 0x100628a44;
            uVar11 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar10) = 0x100628a54;
            cVar6 = _os_log_type_enabled(uVar11,0x10);
            if (cVar6 != '\0') {
              local_4a = "len < (maxLength - 1)";
              goto LAB_100628ac3;
            }
          }
          else {
            lVar15 = 0x10;
            uVar16 = 0;
            do {
              lVar4 = plVar1[3];
              if (lVar4 == 0) {
                *(undefined8 *)((long)&local_38 + lVar10) = 0x10062807d;
                uVar11 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar10) = 0x10062808d;
                cVar6 = _os_log_type_enabled(uVar11,0x10);
                if (cVar6 != '\0') {
                  local_58 = 0x8220202;
                  local_54 = "Assertion failure";
                  local_4c = 0x822;
                  local_4a = "columnDef != nullptr";
                  *(undefined8 *)((long)&local_38 + lVar10) = 0x1006282f3;
                  __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_58,
                                      0x16);
                }
                *(undefined8 *)((long)&local_38 + lVar10) = 0x10062809e;
                FUN_1001782e9(0,0);
              }
              uVar3 = *(undefined4 *)(lVar4 + -4 + lVar15);
              *(undefined8 *)((long)&local_38 + lVar10) = 0x1006280af;
              uVar12 = FUN_1001d2d39(uVar3);
              uVar11 = *(undefined8 *)(lVar4 + -0x10 + lVar15);
              pcVar14 = ", %s %s";
              if (uVar16 == 0) {
                pcVar14 = "%s %s";
              }
              *(undefined8 *)((long)&local_38 + lVar10) = 0x1006280db;
              uVar9 = _snprintf(local_1d8,0x180,pcVar14,uVar11,uVar12);
              if (0x17e < uVar9) {
LAB_1006287f9:
                *(undefined8 *)((long)&local_38 + lVar10) = 0x1006287fe;
                uVar11 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar10) = 0x10062880e;
                cVar6 = _os_log_type_enabled(uVar11,0x10);
                if (cVar6 == '\0') goto LAB_1006288d9;
                local_4a = "len < (sizeof(tempString) - 1)";
                goto LAB_100628ac3;
              }
              uVar7 = *(ushort *)(lVar4 + lVar15);
              if ((uVar7 & 1) != 0) {
                pcVar14 = ", PRIMARY KEY (";
                if ((char)local_3d8 != '\0') {
                  pcVar14 = ",";
                }
                *(undefined8 *)((long)&local_38 + lVar10) = 0x10062811b;
                FUN_1001df1e7(pcVar14,&local_3d8,0x200);
                uVar11 = *(undefined8 *)(lVar4 + -0x10 + lVar15);
                *(undefined8 *)((long)&local_38 + lVar10) = 0x10062812d;
                FUN_1001df1e7(uVar11,&local_3d8,0x200);
                *(undefined8 *)((long)&local_38 + lVar10) = 0x100628135;
                uVar9 = FUN_1001dfc51(&local_3d8);
                if (uVar9 < 0x1ff) {
                  *(undefined8 *)((long)&local_38 + lVar10) = 0x10062815b;
                  FUN_1001df1e7(" NOT NULL",local_1d8,0x180);
                  uVar7 = *(ushort *)(lVar4 + lVar15);
                  goto LAB_100628161;
                }
LAB_1006288b5:
                *(undefined8 *)((long)&local_38 + lVar10) = 0x1006288ba;
                uVar11 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar10) = 0x1006288ca;
                cVar6 = _os_log_type_enabled(uVar11,0x10);
                goto joined_r0x0001006288d3;
              }
LAB_100628161:
              if ((uVar7 & 2) != 0) {
                if ((uVar7 & 1) != 0) {
                  *(undefined8 *)((long)&local_38 + lVar10) = 0x100628173;
                  uVar11 = FUN_1001cc310();
                  *(undefined8 *)((long)&local_38 + lVar10) = 0x100628183;
                  cVar6 = _os_log_type_enabled(uVar11,0x10);
                  if (cVar6 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x822;
                    local_4a = "not (columnDef->flags & kConstraint_PrimaryKey)";
                    *(undefined8 *)((long)&local_38 + lVar10) = 0x100628340;
                    __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_58
                                        ,0x16);
                  }
                  *(undefined8 *)((long)&local_38 + lVar10) = 0x100628194;
                  FUN_1001782e9(0,0);
                }
                *(undefined8 *)((long)&local_38 + lVar10) = 0x1006281af;
                FUN_1001df1e7(" NOT NULL",local_1d8,0x180);
                uVar7 = *(ushort *)(lVar4 + lVar15);
              }
              if ((uVar7 & 4) != 0) {
                pcVar14 = ", UNIQUE (";
                if (local_5d8[0] != '\0') {
                  pcVar14 = ",";
                }
                *(undefined8 *)((long)&local_38 + lVar10) = 0x1006281e4;
                FUN_1001df1e7(pcVar14,local_5d8,0x200);
                uVar11 = *(undefined8 *)(lVar4 + -0x10 + lVar15);
                *(undefined8 *)((long)&local_38 + lVar10) = 0x1006281f6;
                FUN_1001df1e7(uVar11,local_5d8,0x200);
                *(undefined8 *)((long)&local_38 + lVar10) = 0x1006281fe;
                uVar9 = FUN_1001dfc51(local_5d8);
                if (0x1fe < uVar9) goto LAB_1006288b5;
                uVar7 = *(ushort *)(lVar4 + lVar15);
              }
              if ((uVar7 & 0x20) != 0) {
                *(undefined8 *)((long)&local_38 + lVar10) = 0x10062822e;
                FUN_1001df1e7(" AUTOINCREMENT",local_1d8,0x180);
                uVar7 = *(ushort *)(lVar4 + lVar15);
              }
              if ((uVar7 & 8) != 0) {
                *(undefined8 *)((long)&local_38 + lVar10) = 0x10062824c;
                FUN_1001df1e7(" DEFAULT 0",local_1d8,0x180);
                uVar7 = *(ushort *)(lVar4 + lVar15);
              }
              if ((uVar7 & 0x10) != 0) {
                *(undefined8 *)((long)&local_38 + lVar10) = 0x10062826a;
                FUN_1001df1e7(" DEFAULT \"\"",local_1d8,0x180);
              }
              *(undefined8 *)((long)&local_38 + lVar10) = 0x100628272;
              uVar9 = FUN_1001dfc51(local_1d8);
              if (0x17e < uVar9) goto LAB_1006287f9;
              *(undefined8 *)((long)&local_38 + lVar10) = 0x100628294;
              FUN_1001df1e7(local_1d8,&local_15d8,0x1000);
              uVar16 = uVar16 + 1;
              lVar15 = lVar15 + 0x18;
            } while (uVar16 < (ulong)plVar1[2]);
            if ((char)local_3d8 == '\0') {
LAB_100628594:
              if (local_5d8[0] == '\0') goto LAB_100628642;
              *(undefined8 *)((long)&local_38 + lVar10) = 0x1006285bc;
              FUN_1001df1e7(")",local_5d8,0x200);
              bVar2 = *(byte *)(plVar1 + 4);
              if ((bVar2 & 4) == 0) {
                pcVar14 = " ON CONFLICT REPLACE";
                if ((bVar2 & 8) != 0) goto LAB_100628612;
              }
              else {
                pcVar14 = " ON CONFLICT IGNORE";
                if ((bVar2 & 8) != 0) {
                  *(undefined8 *)((long)&local_38 + lVar10) = 0x1006285e3;
                  uVar11 = FUN_1001cc310(" ON CONFLICT IGNORE");
                  *(undefined8 *)((long)&local_38 + lVar10) = 0x1006285f3;
                  cVar6 = _os_log_type_enabled(uVar11,0x10);
                  if (cVar6 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x822;
                    local_4a = "(tableDef->conflictOptions & kConflictOption_UniqueReplace) == 0";
                    *(undefined8 *)((long)&local_38 + lVar10) = 0x100628780;
                    __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_58
                                        ,0x16);
                  }
                  *(undefined8 *)((long)&local_38 + lVar10) = 0x100628604;
                  FUN_1001782e9(0,0);
                  pcVar14 = " ON CONFLICT IGNORE";
                }
LAB_100628612:
                *(undefined8 *)((long)&local_38 + lVar10) = 0x10062861f;
                FUN_1001df1e7(pcVar14,local_5d8,0x200);
              }
              *(undefined8 *)((long)&local_38 + lVar10) = 0x100628627;
              uVar9 = FUN_1001dfc51(local_5d8);
              if (uVar9 < 0x1ff) {
                *(undefined8 *)((long)&local_38 + lVar10) = 0x100628642;
                FUN_1001df1e7(local_5d8,&local_15d8,0x1000);
                goto LAB_100628642;
              }
              *(undefined8 *)((long)&local_38 + lVar10) = 0x100628af2;
              uVar11 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar10) = 0x100628b02;
              cVar6 = _os_log_type_enabled(uVar11,0x10);
              if (cVar6 != '\0') {
                local_4a = "len < (sizeof(uniqueConstraintString) - 1)";
                goto LAB_100628ac3;
              }
            }
            else {
              *(undefined8 *)((long)&local_38 + lVar10) = 0x100628515;
              FUN_1001df1e7(")",&local_3d8,0x200);
              bVar2 = *(byte *)(plVar1 + 4);
              if ((bVar2 & 1) == 0) {
                pcVar14 = " ON CONFLICT REPLACE";
                if ((bVar2 & 2) != 0) goto LAB_100628564;
              }
              else {
                pcVar14 = " ON CONFLICT IGNORE";
                if ((bVar2 & 2) != 0) {
                  *(undefined8 *)((long)&local_38 + lVar10) = 0x10062853c;
                  uVar11 = FUN_1001cc310(" ON CONFLICT IGNORE");
                  *(undefined8 *)((long)&local_38 + lVar10) = 0x10062854c;
                  cVar6 = _os_log_type_enabled(uVar11,0x10);
                  if (cVar6 != '\0') {
                    local_58 = 0x8220202;
                    local_54 = "Assertion failure";
                    local_4c = 0x822;
                    local_4a = 
                    "(tableDef->conflictOptions & kConflictOption_PrimaryKeyReplace) == 0";
                    *(undefined8 *)((long)&local_38 + lVar10) = 0x100628733;
                    __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_58
                                        ,0x16);
                  }
                  *(undefined8 *)((long)&local_38 + lVar10) = 0x10062855d;
                  FUN_1001782e9(0,0);
                  pcVar14 = " ON CONFLICT IGNORE";
                }
LAB_100628564:
                *(undefined8 *)((long)&local_38 + lVar10) = 0x100628571;
                FUN_1001df1e7(pcVar14,&local_3d8,0x200);
              }
              *(undefined8 *)((long)&local_38 + lVar10) = 0x100628579;
              uVar9 = FUN_1001dfc51(&local_3d8);
              if (uVar9 < 0x1ff) {
                *(undefined8 *)((long)&local_38 + lVar10) = 0x100628594;
                FUN_1001df1e7(&local_3d8,&local_15d8,0x1000);
                goto LAB_100628594;
              }
              *(undefined8 *)((long)&local_38 + lVar10) = 0x100628a87;
              uVar11 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar10) = 0x100628a97;
              cVar6 = _os_log_type_enabled(uVar11,0x10);
joined_r0x0001006288d3:
              if (cVar6 == '\0') goto LAB_1006288d9;
              local_4a = "len < (sizeof(primaryKeyString) - 1)";
LAB_100628ac3:
              local_4c = 0x822;
              local_54 = "Assertion failure";
              local_58 = 0x8220202;
              *(undefined8 *)((long)&local_38 + lVar10) = 0x100628ae8;
              __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_58,0x16)
              ;
            }
          }
LAB_1006288d9:
          *(undefined8 *)((long)&local_38 + lVar10) = 0x1006288e2;
          FUN_1001782e9(0,0);
          *(undefined8 *)((long)&local_38 + lVar10) = 0x1006288e7;
          uVar11 = FUN_1001cc310();
          *(undefined8 *)((long)&local_38 + lVar10) = 0x1006288f7;
          cVar6 = _os_log_type_enabled(uVar11,0x10);
          if (cVar6 != '\0') {
            local_3d8 = 0x8220202;
            local_3d4 = "Assertion failure";
            local_3cc = 0x400;
            local_3ca = -0x32;
            *(undefined8 *)((long)&local_38 + lVar10) = 0x100628a3a;
            __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_3d8,0x12);
          }
          iVar8 = -0x32;
          goto LAB_100628905;
        }
        if (plVar1[2] != 0) {
          lVar15 = 0;
          uVar16 = 0;
          do {
            lVar4 = *plVar1;
            lVar5 = plVar1[3];
            uVar11 = *(undefined8 *)(param_1 + 0x68);
            uVar12 = *(undefined8 *)(lVar5 + lVar15);
            *(undefined8 *)((long)&local_38 + lVar10) = 0x100627f92;
            iVar8 = FUN_1001d342c(uVar11,lVar4,uVar12,&local_15d9);
            if (iVar8 != 0) {
              if (iVar8 == -0x80) goto LAB_1006287ee;
              *(undefined8 *)((long)&local_38 + lVar10) = 0x100628364;
              uVar11 = FUN_1001cc310();
              *(undefined8 *)((long)&local_38 + lVar10) = 0x100628374;
              cVar6 = _os_log_type_enabled(uVar11,0x10);
              goto joined_r0x000100628376;
            }
            if (local_15d9 == '\0') {
              uVar3 = *(undefined4 *)(lVar5 + 0xc + lVar15);
              *(undefined8 *)((long)&local_38 + lVar10) = 0x100627fad;
              uVar12 = FUN_1001d2d39(uVar3);
              lVar4 = *plVar1;
              uVar11 = *(undefined8 *)(lVar5 + lVar15);
              *(undefined8 *)((long)&local_38 + lVar10) = 0x100627fd6;
              _snprintf((char *)&local_15d8,0x1000,"alter table %s add column %s %s",lVar4,uVar11,
                        uVar12);
              uVar11 = *(undefined8 *)(param_1 + 0x68);
              *(undefined8 *)((long)&local_38 + lVar10) = 0x100627fed;
              iVar8 = FUN_1001d302b(uVar11,&local_15d8,0,0);
              if (iVar8 != 0) {
                if (iVar8 == -0x80) goto LAB_1006287ee;
                *(undefined8 *)((long)&local_38 + lVar10) = 0x1006283de;
                uVar11 = FUN_1001cc310();
                *(undefined8 *)((long)&local_38 + lVar10) = 0x1006283ee;
                cVar6 = _os_log_type_enabled(uVar11,0x10);
                goto joined_r0x000100628376;
              }
            }
            uVar16 = uVar16 + 1;
            lVar15 = lVar15 + 0x18;
          } while (uVar16 < (ulong)plVar1[2]);
        }
      }
      else {
        if (iVar8 == -0x80) {
LAB_1006287ee:
          iVar8 = -0x80;
          goto LAB_100628922;
        }
        *(undefined8 *)((long)&local_38 + lVar10) = 0x100627f29;
        uVar11 = FUN_1001cc310();
        *(undefined8 *)((long)&local_38 + lVar10) = 0x100627f39;
        cVar6 = _os_log_type_enabled(uVar11,0x10);
joined_r0x000100628376:
        if (cVar6 != '\0') {
          local_3cc = 0x400;
          local_3d4 = "Assertion failure";
          local_3d8 = 0x8220202;
          *(undefined8 *)((long)&local_38 + lVar10) = 0x1006284e1;
          local_3ca = iVar8;
          __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_3d8,0x12);
        }
LAB_100627f41:
        if (iVar8 != 0) {
          if (iVar8 != -0x80) {
LAB_100628905:
            *(undefined8 *)((long)&local_38 + lVar10) = 0x10062890a;
            uVar11 = FUN_1001cc310();
            *(undefined8 *)((long)&local_38 + lVar10) = 0x10062891a;
            cVar6 = _os_log_type_enabled(uVar11,0x10);
            if (cVar6 != '\0') {
              local_15d8 = 0x8220202;
              local_15d4 = "Assertion failure";
              local_15cc = 0x400;
              local_15ca = (char *)CONCAT44(local_15ca._4_4_,iVar8);
              *(undefined8 *)((long)&local_38 + lVar10) = 0x1006289ec;
              __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: err == (%d)",&local_15d8,0x12
                                 );
            }
          }
          goto LAB_100628922;
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < *(ulong *)(param_1 + 0x28));
  }
  iVar8 = 0;
LAB_100628922:
  *(undefined8 *)((long)&local_38 + lVar10) = 0x10062892d;
  FUN_100628b72(param_1,iVar8);
LAB_10062892d:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)((long)&local_38 + lVar10) = &UNK_100628b35;
    ___stack_chk_fail();
  }
  return iVar8;
}

