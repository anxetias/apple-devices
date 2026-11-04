// name: FUN_1004f5a78
// address: 1004f5a78

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1004f5a78(long param_1,int param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  int *piVar11;
  char cVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  char cVar15;
  byte bVar16;
  undefined2 uVar17;
  ushort uVar18;
  ushort uVar19;
  short sVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  undefined4 uVar24;
  int iVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  undefined8 uVar30;
  ulong uVar31;
  long *plVar32;
  undefined7 uVar33;
  ushort uVar34;
  char *pcVar35;
  long lVar36;
  undefined8 *puVar37;
  long lVar38;
  bool bVar39;
  undefined1 *puVar40;
  uint uVar41;
  void *pvVar42;
  bool bVar43;
  double dVar44;
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar54 [16];
  undefined8 local_7f8;
  undefined8 uStack_7f0;
  undefined1 local_7e0 [16];
  undefined1 local_7d0 [16];
  undefined1 local_7c0 [16];
  undefined1 local_7b0 [16];
  undefined1 local_7a0 [16];
  long local_790;
  ulong local_788;
  long local_780;
  ulong local_778;
  long local_770;
  undefined8 local_768;
  undefined1 *puStack_760;
  undefined8 local_758;
  undefined6 uStack_750;
  undefined2 uStack_74a;
  undefined6 uStack_748;
  undefined4 local_740;
  undefined3 uStack_73c;
  undefined8 local_738;
  undefined8 local_730;
  undefined1 uStack_728;
  undefined7 uStack_727;
  undefined1 uStack_720;
  undefined8 uStack_71f;
  undefined8 local_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined4 uStack_6f0;
  undefined4 local_6ec;
  undefined4 uStack_6e8;
  undefined8 uStack_6e4;
  int local_6d8;
  int local_6d4;
  ulong local_6d0;
  ulong local_6c8;
  long local_6c0;
  ulong local_6b8;
  char local_6a9;
  long local_6a8;
  long local_6a0;
  long *local_698;
  long local_690;
  undefined4 local_688;
  char *local_684;
  undefined2 local_67c;
  undefined4 local_67a;
  undefined1 local_658 [12];
  undefined2 local_64c;
  int local_64a;
  ushort local_458;
  undefined2 uStack_456;
  undefined4 uStack_454;
  undefined2 uStack_450;
  undefined2 uStack_44e;
  undefined2 local_44c;
  int local_44a;
  undefined2 uStack_446;
  undefined2 uStack_444;
  undefined2 local_442;
  undefined4 local_440;
  undefined4 uStack_43c;
  undefined2 local_438;
  double local_436;
  undefined2 local_42e;
  undefined8 local_42c;
  undefined2 local_424;
  double local_422;
  undefined2 local_41a;
  undefined8 local_418;
  undefined2 local_410;
  double local_40e;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_698 = param_3;
  if (param_4 == 0) {
LAB_1004f5b8e:
    uVar26 = FUN_1001cc310();
    cVar12 = _os_log_type_enabled(uVar26,0x10);
    if (cVar12 != '\0') {
      local_458 = 0x202;
      uStack_456 = 0x822;
      uStack_454 = 0x7a0a90;
      uStack_450 = 1;
      uStack_44e = 0;
      local_44c = 0x822;
      local_44a = 0x7ad2b2;
      uStack_446 = 1;
      uStack_444 = 0;
      __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    FUN_1001782e9(0,0);
    iVar21 = -0x32;
    goto switchD_1004f5cc9_caseD_74646465;
  }
  local_690 = param_4;
  if (*(int *)(param_4 + 8) != 0x64756c63) {
    uVar26 = FUN_1001cc310();
    cVar12 = _os_log_type_enabled(uVar26,0x10);
    if (cVar12 != '\0') {
      local_458 = 0x202;
      uStack_456 = 0x822;
      uStack_454 = 0x7ab58c;
      uStack_450 = 1;
      uStack_44e = 0;
      local_44c = 0x822;
      local_44a = 0x7ad710;
      uStack_446 = 1;
      uStack_444 = 0;
      __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
    }
    cVar12 = FUN_1001782e9(0,1);
    if (cVar12 == '\0') goto LAB_1004f5b8e;
  }
  iVar21 = -4;
  bVar39 = true;
  bVar43 = true;
  iVar22 = 0;
  if (0x74646668 < param_2) {
    if (param_2 < 0x74647072) {
      if (param_2 < 0x74646774) {
        if (param_2 < 0x74646762) {
          if (param_2 == 0x74646669) {
            lVar27 = *local_698;
            lVar28 = FUN_1006033a6(local_690,lVar27,*(undefined1 *)(local_690 + 0x390));
            if (lVar28 != 0) {
              local_698[1] = lVar28;
              *(byte *)(local_698 + 2) = *(byte *)(lVar28 + 0x4a) & 1;
              uVar23 = *(uint *)(lVar28 + 0x48);
              iVar21 = 0;
              bVar16 = FUN_1004eb61a(local_690,lVar27,0);
              *(bool *)((long)local_698 + 0x11) = (uVar23 >> 0x10 & 1) != (uint)bVar16;
              goto switchD_1004f5cc9_caseD_74646465;
            }
          }
          else {
            if (param_2 != 0x7464666c) goto switchD_1004f5cc9_caseD_74646467;
            if ((((*(char *)(local_690 + 0x376) != '\0') || (*(char *)(local_690 + 0x377) != '\0'))
                && (uVar26 = 0x72696e67, (*local_698 & 0x100400000000000) != 0)) ||
               (((*(char *)(local_690 + 0x39c) != '\0' &&
                 (uVar26 = 0x626f6f6b, (*local_698 & 0xc0000000000000) != 0)) ||
                ((*(char *)(local_690 + 0x396) != '\0' &&
                 (uVar26 = 0x6d656d6f, (*local_698 & 0x10000000000000) != 0)))))) {
              iVar21 = FUN_1002441f8(*(undefined4 *)(local_690 + 0x66b0),local_690 + 0x6b40,uVar26,1
                                     ,local_698[6]);
              goto switchD_1004f5cc9_caseD_74646465;
            }
            uVar31 = FUN_1001ebcfb();
            uVar31 = (uVar31 & 0xffffffff) % (ulong)*(uint *)(local_690 + 0x7e20);
            pvVar42 = (void *)(local_690 + uVar31 * 0x420 + 0x7e28);
            cVar12 = FUN_10017cbd0(pvVar42);
            if (cVar12 == '\0') {
              iVar21 = FUN_1004fa9ac(local_690,uVar31);
              if (iVar21 == -0x80) goto switchD_1004f5cc9_caseD_74646465;
              if (iVar21 != 0) {
                uVar26 = FUN_1001cc310();
                cVar12 = _os_log_type_enabled(uVar26,0x10);
                if (cVar12 != '\0') {
                  local_458 = 0x202;
                  uStack_456 = 0x822;
                  uStack_454 = 0x7a0a90;
                  uStack_450 = 1;
                  uStack_44e = 0;
                  local_44c = 0x400;
                  local_44a = iVar21;
                  __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: err == (%d)",&local_458,
                                      0x12);
                }
                if (iVar21 != 0) goto switchD_1004f5cc9_caseD_74646465;
              }
            }
            _memcpy((void *)local_698[6],pvVar42,0x420);
          }
        }
        else if (param_2 == 0x74646762) {
          iVar21 = FUN_1002441f8(*(undefined4 *)(local_690 + 0x66b0),local_690 + 0x6b40,0x67616d65,1
                                 ,local_698[1]);
          if (iVar21 == -0x80) goto switchD_1004f5cc9_caseD_74646465;
          if (iVar21 != 0) {
            uVar26 = FUN_1001cc310();
            cVar12 = _os_log_type_enabled(uVar26,0x10);
joined_r0x0001004f842a:
            if (cVar12 != '\0') {
              uStack_44e = 0;
              uStack_450 = 1;
              uStack_454 = 0x7a0a90;
              uStack_456 = 0x822;
              local_458 = 0x202;
              local_44c = 0x400;
              local_44a = iVar21;
              __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: err == (%d)",&local_458,0x12)
              ;
            }
            goto switchD_1004f5cc9_caseD_74646465;
          }
          FUN_1005f837b(*local_698,local_698[2]);
          FUN_1005f7fd6(*(undefined8 *)(local_690 + 0x15960),*local_698);
        }
        else {
          if (param_2 == 0x74646764) {
            iVar21 = 0;
            if ((int)local_698[2] == 0) {
              FUN_1005f7a72(*(undefined8 *)(local_690 + 0x15960),local_698[1]);
              lVar27 = local_690 + 0x6b40;
              FUN_1002441f8(*(undefined4 *)(local_690 + 0x66b0),lVar27,0x67616d64,1,&local_458);
              FUN_1002441f8(*(undefined4 *)(local_690 + 0x66b0),lVar27,0x67616d73,1,&local_458);
            }
            goto switchD_1004f5cc9_caseD_74646465;
          }
          if (param_2 != 0x74646773) goto switchD_1004f5cc9_caseD_74646467;
          iVar21 = (int)*local_698;
          if (iVar21 < 0x6e73706c) {
            if (iVar21 < 0x6e666c64) {
              if (iVar21 != 0x626b7564) {
                if (iVar21 == 0x656a6374) {
                  bVar16 = FUN_10039e077(*(undefined4 *)(local_690 + 0x28),1,0);
                  *(uint *)(local_698 + 1) = (uint)(bVar16 ^ 1);
                  FUN_1001b7a44(&local_458);
                  if (*(char *)((long)local_698 + 4) == '\0') {
                    FUN_1001c334a(&local_768,0x880010);
                    FUN_1004fdbd0(&local_708,local_690);
                    FUN_1001bbec4(local_658,&local_768,&local_708);
                    FUN_1001b80b2(&local_458,local_658);
                    FUN_1001b7a50(local_658);
                    FUN_1001b7a50(&local_708);
                    puVar37 = &local_768;
                  }
                  else {
                    FUN_1001c334a(local_658,0x88000e);
                    FUN_1001b80b2(&local_458,local_658);
                    puVar37 = (undefined8 *)local_658;
                  }
                  FUN_1001b7a50(puVar37);
                  FUN_1001bb41a(&local_458,local_698[2]);
                  goto LAB_1004f7e2c;
                }
                if (iVar21 == 0x65706c73) goto LAB_1004f84ef;
LAB_1004f907e:
                iVar21 = FUN_100318904(param_1,0x74646773,local_698);
                goto switchD_1004f5cc9_caseD_74646465;
              }
              if (((*(char *)(local_690 + 0x35a) != '\0') &&
                  (cVar12 = FUN_1004fdb7d(local_690,0x626b7564), lVar27 = local_690, cVar12 != '\0')
                  ) && (cVar12 = FUN_1004e131a(local_690), cVar12 != '\0')) {
                if (((*(char *)(lVar27 + 0x6acf) != '\0') || (*(int *)(lVar27 + 0x6b0c) != 0)) ||
                   ((*(char *)(lVar27 + 0x3a2) != '\0' && (*(char *)(lVar27 + 0x16843) == '\0')))) {
                  *(int *)(local_698 + 1) = 4;
                  goto LAB_1004f900b;
                }
LAB_1004f8543:
                *(int *)(local_698 + 1) = 1;
                goto LAB_1004f900b;
              }
            }
            else {
              if (iVar21 != 0x6e666c64) {
                if ((iVar21 == 0x6e706c73) || (iVar21 == 0x6e706c79)) goto LAB_1004f84ef;
                goto LAB_1004f907e;
              }
              if ((*(char *)(local_690 + 0x14cd8) != '\0') &&
                 (((*(char *)(local_690 + 0x151d0) == '\0' &&
                   (*(char *)(local_690 + 0x151d1) == '\0')) &&
                  (*(char *)(local_690 + 0x372) != '\0')))) {
                cVar12 = FUN_10039e077(*(undefined4 *)(local_690 + 0x28),1,0);
                goto LAB_1004f853b;
              }
            }
          }
          else if (iVar21 < 0x72736477) {
            if (iVar21 == 0x6e73706c) {
LAB_1004f84ef:
              if ((((*(char *)(local_690 + 0x14cd8) != '\0') &&
                   (*(char *)(local_690 + 0x151d0) == '\0')) &&
                  (*(char *)(local_690 + 0x151d1) == '\0')) &&
                 ((*(char *)(local_690 + 0x35c) == '\0' || (*(char *)(local_690 + 0x370) != '\0'))))
              {
                cVar12 = FUN_10039e077(*(undefined4 *)(local_690 + 0x28),1,0);
LAB_1004f853b:
                if (cVar12 == '\0') goto LAB_1004f8543;
              }
            }
            else {
              if (iVar21 != 0x72657364) {
                if (iVar21 == 0x72695064) goto LAB_1004f87c6;
                goto LAB_1004f907e;
              }
              if (((*(char *)(local_690 + 0x35a) != '\0') &&
                  (cVar12 = FUN_1004fdb7d(local_690,0x72657364), cVar12 != '\0')) &&
                 ((cVar12 = FUN_1004e135b(local_690), cVar12 != '\0' &&
                  (*(char *)(local_690 + 0x6ae8) == '\x01')))) {
                iVar21 = 4;
                if (*(char *)(local_690 + 0x6acf) == '\0') {
                  iVar21 = (uint)(*(int *)(local_690 + 0x6b0c) != 0) * 3 + 1;
                }
                *(int *)(local_698 + 1) = iVar21;
                goto LAB_1004f900b;
              }
            }
          }
          else if (iVar21 < 0x73796e63) {
            if (iVar21 == 0x72736477) {
              cVar12 = FUN_1004fdb7d(local_690,0x72736477);
              iVar21 = 0;
              if ((cVar12 != '\0') && (cVar12 = FUN_1004e1666(local_690), cVar12 != '\0')) {
                *(int *)(local_698 + 1) = 1;
              }
              goto switchD_1004f5cc9_caseD_74646465;
            }
            if (iVar21 != 0x7273796e) goto LAB_1004f907e;
            cVar12 = FUN_1004fdb7d(local_690,0x7273796e);
            if ((cVar12 != '\0') && (uVar23 = FUN_1004e7c76(local_690), (uVar23 >> 0x13 & 1) != 0))
            {
              FUN_1001b7a44(&local_458);
              if (*(char *)((long)local_698 + 4) == '\0') {
                FUN_1001c334a(&local_768,0x88000d);
                FUN_1004fdbd0(&local_708,local_690);
                FUN_1001bbec4(local_658,&local_768,&local_708);
                FUN_1001b80b2(&local_458,local_658);
                FUN_1001b7a50(local_658);
                FUN_1001b7a50(&local_708);
                FUN_1001b7a50(&local_768);
                lVar27 = local_690;
              }
              else {
                FUN_1001c334a(local_658,0x88000c);
                lVar27 = local_690;
                FUN_1001b80b2(&local_458,local_658);
                FUN_1001b7a50(local_658);
              }
              FUN_1001bb41a(&local_458,local_698[2]);
LAB_1004f9c33:
              iVar21 = 4;
              if (*(char *)(lVar27 + 0x6acf) == '\0') {
                iVar21 = (uint)(*(int *)(lVar27 + 0x6b0c) != 0) * 3 + 1;
              }
              *(int *)(local_698 + 1) = iVar21;
              goto LAB_1004f7e2c;
            }
          }
          else {
            if (iVar21 != 0x73796e63) {
              if (iVar21 == 0x75695064) {
LAB_1004f87c6:
                cVar12 = FUN_100266bdc(*(undefined8 *)(local_690 + 0x66d8));
                *(uint *)(local_698 + 1) = (uint)(cVar12 != '\0');
                goto LAB_1004f900b;
              }
              goto LAB_1004f907e;
            }
            cVar12 = FUN_1004fdb7d(local_690,0x73796e63);
            if (cVar12 != '\0') {
              uVar31 = FUN_1004e7f5c(local_690);
              uVar29 = FUN_1004e7c76(local_690);
              uVar31 = uVar31 & uVar29 & 0x24fb838639e0;
              if (uVar31 != 0) {
                FUN_1001b7a44(&local_458);
                if (*(char *)((long)local_698 + 4) == '\0') {
                  FUN_1001c334a(&local_768,(uint)(uVar31 == 0x20) * 2 + 0x880009);
                  FUN_1004fdbd0(&local_708,local_690);
                  FUN_1001bbec4(local_658,&local_768,&local_708);
                  FUN_1001b80b2(&local_458,local_658);
                  FUN_1001b7a50(local_658);
                  FUN_1001b7a50(&local_708);
                  FUN_1001b7a50(&local_768);
                  lVar27 = local_690;
                }
                else {
                  FUN_1001c334a(local_658,(uint)(uVar31 == 0x20) * 2 + 0x880008);
                  lVar27 = local_690;
                  FUN_1001b80b2(&local_458,local_658);
                  FUN_1001b7a50(local_658);
                }
                FUN_1001bb41a(&local_458,local_698[2]);
                goto LAB_1004f9c33;
              }
            }
          }
          *(int *)(local_698 + 1) = 0;
        }
        goto LAB_1004f900b;
      }
      if (param_2 < 0x74646e70) {
        if (param_2 == 0x74646774) {
          if (((char)*local_698 == '\0') || (lVar27 = *(long *)(local_690 + 0x153a0), lVar27 == 0))
          {
            FUN_1004e48c6();
            lVar27 = *(long *)(local_690 + 0x153a0);
          }
          local_698[2] = lVar27;
          lVar27 = *(long *)(local_690 + 0x153a8);
          local_698[1] = lVar27;
          local_698[3] = *(long *)(local_690 + 0x153b0);
          iVar21 = 0;
          if ((*(char *)(local_690 + 0x3a2) != '\0') && (*(char *)(local_690 + 0x16845) != '\0')) {
            local_698[1] = lVar27 + *(long *)(local_690 + 0x168e0);
          }
          goto switchD_1004f5cc9_caseD_74646465;
        }
        if (param_2 == 0x74646c73) {
          FUN_1004fdbd0(&local_458,local_690);
          FUN_1001b80b2(local_698[1],&local_458);
          goto LAB_1004f7e2c;
        }
      }
      else if (param_2 == 0x74646e70) {
        lVar27 = *local_698;
        if ((((*(char *)(local_690 + 0x14dc9) != '\0') && (*(char *)(local_690 + 0x38b) != '\0')) &&
            ((*(char *)(local_690 + 0x38c) == '\0' || (cVar12 = FUN_100537ef0(0), cVar12 != '\0'))))
           && (*(long *)(local_690 + 0x16640) != 0)) {
          FUN_1005a833a(*(long *)(local_690 + 0x16640),lVar27,1);
        }
        if ((*(short *)(lVar27 + 0x10) == 0xb) && (*(char *)(local_690 + 0x392) != '\0')) {
          FUN_1001c6b4a(lVar27 + 200,local_690 + 0x66f0);
        }
      }
      else {
        if (param_2 == 0x7464706c) {
          iVar21 = FUN_1004fad1d(local_690,local_698);
          goto switchD_1004f5cc9_caseD_74646465;
        }
        if (param_2 != 0x74647070) goto switchD_1004f5cc9_caseD_74646467;
        local_6a0 = *local_698;
        lVar27 = local_698[2];
        iVar21 = (int)local_698[1];
        if (0x706c646c < iVar21) {
          if (iVar21 < 0x706c6964) {
            if (iVar21 == 0x706c646d) {
              FUN_1004ed4f6(local_690);
              iVar21 = FUN_100318904(param_1,0x74647070,local_698);
              FUN_1004ee22c(local_690);
              goto switchD_1004f5cc9_caseD_74646465;
            }
            if (iVar21 == 0x706c6564) {
              cVar12 = FUN_1004fcf2f(local_690,0x706c6564);
              if (cVar12 != '\0') {
                iVar21 = FUN_1004dccf5(local_690,"kPlaylistExternalDragMessage");
                if (iVar21 == -0x80) goto switchD_1004f5cc9_caseD_74646465;
                if (iVar21 == 0) {
                  **(undefined1 **)(local_690 + 0x157e8) = 1;
                  *(undefined1 *)(local_690 + 0x157e3) = 1;
                  iVar21 = FUN_100318904(param_1,0x74647070,local_698);
                  FUN_1004dd69c(local_690,"kPlaylistExternalDragMessage");
                  puVar37 = (undefined8 *)(local_690 + 0x157e8);
                  FUN_1005c9432(local_690,*puVar37,1);
                  puVar40 = (undefined1 *)(local_690 + 0x157e3);
                  FUN_10057bdca(*puVar37);
                  *puVar40 = 0;
                  goto switchD_1004f5cc9_caseD_74646465;
                }
                uVar26 = FUN_1001cc310();
                cVar12 = _os_log_type_enabled(uVar26,0x10);
                goto joined_r0x0001004f842a;
              }
              goto LAB_1004f900b;
            }
          }
          else if (iVar21 == 0x706c6964) {
            cVar12 = FUN_1004fcf2f(local_690,0x706c6964);
            if (cVar12 == '\0') {
              iVar22 = 0;
              goto LAB_1004f92ff;
            }
            local_6c8 = 0;
            if (*(char *)(local_690 + 0x151d0) == '\0') {
              *(undefined1 *)(local_690 + 0x157e2) = 1;
              bVar43 = true;
              iVar21 = 0;
              iVar22 = 0;
              if (((*(byte *)(local_6a0 + 0x240) & 4) != 0) &&
                 (((iVar22 = iVar21, *(char *)(local_690 + 0x35c) == '\0' ||
                   (*(char *)(local_690 + 0x370) != '\0')) &&
                  (piVar11 = *(int **)(lVar27 + 0x10), piVar11 != (int *)0x0)))) {
                if (((*piVar11 == 0x4f4c5354) && (piVar11[1] != 0)) &&
                   (puVar37 = *(undefined8 **)(piVar11 + 2),
                   *(undefined8 **)(piVar11 + 4) != puVar37)) {
                  local_708 = *puVar37;
                  uStack_700 = puVar37[1];
                  uStack_6f8 = puVar37[2];
                  uStack_6e4 = *(undefined8 *)((long)puVar37 + 0x24);
                  uStack_6e8 = (undefined4)((ulong)*(undefined8 *)((long)puVar37 + 0x1c) >> 0x20);
                  uStack_6f0 = (undefined4)puVar37[3];
                  local_6ec = (undefined4)((ulong)puVar37[3] >> 0x20);
                  iVar21 = FUN_100595fc8();
                  if (((iVar21 == 2) && (local_6a8 = FUN_1004909fc(&local_708), local_6a8 != 0)) &&
                     ((*(byte *)(local_6a8 + 0x240) & 4) == 0)) {
                    uVar17 = FUN_10048c0ca(local_6a8);
                    cVar12 = FUN_10048c208(uVar17);
                    if (cVar12 == '\0') {
                      bVar43 = true;
                      if (*(long *)(local_6a8 + 8) != *(long *)(local_690 + 0x30)) {
                        FUN_1004870ae(local_6a8,local_658);
                        if ((*(short *)(local_6a8 + 0x10) == 0x1a) &&
                           (lVar28 = FUN_10036a7b7(local_6a8), lVar28 != 0)) {
                          FUN_10036a5e8(lVar28,local_658);
                        }
                        lVar28 = FUN_100315ede(*(undefined8 *)(local_690 + 0x30));
                        local_6d0 = CONCAT44(local_6d0._4_4_,
                                             (int)CONCAT71((int7)((ulong)lVar28 >> 8),1));
                        if (lVar28 != 0) {
                          do {
                            if ((*(byte *)(lVar28 + 0x240) & 4) == 0) {
                              uVar17 = FUN_10048c0ca(lVar28);
                              cVar12 = FUN_10048c208(uVar17);
                              if (cVar12 == '\0') {
                                FUN_1004870ae(lVar28,&local_458);
                                cVar12 = FUN_1001e3edc(local_658,&local_458,0);
                                if (cVar12 != '\0') {
                                  if (*(char *)(local_690 + 0x14cec) == '\0') {
                                    local_6a9 = '\0';
                                    FUN_1001c334a(&local_688,0x10cf0045);
                                    FUN_1001b8dfc(local_7e0,local_658);
                                    FUN_1001bbec4(&local_768,&local_688,local_7e0);
                                    FUN_1001c334a(local_7d0,0x5db30011);
                                    FUN_1001c334a(local_7c0,0x5db30004);
                                    FUN_1001c334a(local_7b0,0x5db30013);
                                    FUN_1004fda52(local_7a0,*(undefined4 *)(local_690 + 0x28));
                                    sVar20 = FUN_10044fdb1(&local_768,local_7d0,local_7c0,local_7b0,
                                                           &local_6a9,local_7a0,0);
                                    FUN_1001b7a50(local_7a0);
                                    FUN_1001b7a50(local_7b0);
                                    FUN_1001b7a50(local_7c0);
                                    FUN_1001b7a50(local_7d0);
                                    FUN_1001b7a50(&local_768);
                                    FUN_1001b7a50(local_7e0);
                                    FUN_1001b7a50(&local_688);
                                    if (sVar20 != 1) goto LAB_1004fa3d0;
                                    if (local_6a9 != '\0') {
                                      *(undefined1 *)(local_690 + 0x14cec) = 1;
                                      FUN_1004ef324(local_690,8,0);
                                    }
                                  }
                                  local_6d0 = local_6d0 & 0xffffffff00000000;
                                  goto LAB_1004fa2ab;
                                }
                              }
                            }
                            lVar28 = FUN_100316031(lVar28);
                          } while (lVar28 != 0);
                        }
                        lVar28 = 0;
LAB_1004fa2ab:
                        if ((*(uint *)(local_690 + 0x414) == 0) ||
                           (*(uint *)(local_6a0 + 0x40) < *(uint *)(local_690 + 0x414))) {
                          local_768 = 0;
                          local_758 = 0;
                          uStack_750 = 0;
                          uStack_74a = 0;
                          uStack_748 = 0;
                          uVar31 = local_6b8 >> 0x20;
                          local_6b8 = uVar31 << 0x20;
                          local_740 = 0;
                          uStack_73c = 0;
                          local_738 = 0x3ff0000000000000;
                          local_730 = 0;
                          uStack_728 = 0;
                          uStack_727 = 0;
                          uStack_720 = 0;
                          uStack_71f = 0;
                          puStack_760 = local_658;
                          if ((*(byte *)(local_6a8 + 0x298) & 3) == 1) {
                            if ((*(char *)(local_6a8 + 0x2a3) == '\0') ||
                               (*(char *)(local_690 + 0x388) != '\0')) {
                              cVar12 = FUN_100586027(local_6a8);
                              if (cVar12 == '\0') {
                                bVar43 = false;
                                uVar33 = 0;
                              }
                              else {
                                bVar43 = *(short *)(local_6a8 + 0x10) != 0x1a;
                                uVar33 = (undefined7)((ulong)local_6a8 >> 8);
                              }
                              local_6b8 = CONCAT44(local_6b8._4_4_,(int)CONCAT71(uVar33,!bVar43));
                            }
                            else {
                              local_6b8 = uVar31 << 0x20;
                            }
                          }
                          FUN_100313e0b(*(undefined8 *)(local_690 + 0x30));
                          iVar22 = FUN_1002e2674(*(undefined8 *)(local_690 + 0x30),0,&local_768,
                                                 &local_6c0);
                          if (iVar22 == 0) {
                            uVar26 = FUN_100308474(local_6a8);
                            *(undefined8 *)(local_6c0 + 0x288) = uVar26;
                            *(undefined8 *)(local_6c0 + 0x290) = *(undefined8 *)(local_6a8 + 0x60);
                            FUN_1004862fd();
                            if (((char)local_6b8 != '\0') &&
                               (iVar21 = FUN_1005815a8(local_6a8 + 0x2a0,&local_688), iVar21 == 0))
                            {
                              FUN_100581b2a(local_6c0,&local_688,1);
                              FUN_1005814bd(&local_688);
                            }
                            **(undefined8 **)(lVar27 + 0x18) = *(undefined8 *)(local_6c0 + 0x78);
                            *(undefined8 *)(*(long *)(lVar27 + 0x18) + 8) = 0xffffffffffffffff;
                            iVar22 = FUN_100483f95(local_6c0,0x706c6964,lVar27);
                            cVar12 = FUN_1004fdaa0(local_6c0);
                            if (cVar12 != '\0') {
                              FUN_10036aa7d(local_6c0);
                            }
                            FUN_100488970(local_6c0);
                            iVar21 = FUN_100355d91(local_690,local_6c0,local_6a8,0);
                            local_6a8 = CONCAT44(local_6a8._4_4_,iVar21);
                            if ((iVar21 != -0x80) && (iVar21 != 0)) {
                              local_6b8 = FUN_1001cc310();
                              cVar12 = _os_log_type_enabled(local_6b8,0x10);
                              if (cVar12 != '\0') {
                                local_688 = 0x8220202;
                                local_684 = "Assertion failure";
                                local_67c = 0x400;
                                local_67a = (undefined4)local_6a8;
                                __os_log_error_impl(0x100000000,local_6b8,0x10,
                                                    "%{public}s: err == (%d)",&local_688,0x12);
                              }
                            }
                            if ((char)local_6d0 == '\0') {
                              FUN_100488d27(lVar28,0,0);
                            }
                            bVar43 = false;
                          }
                          else {
                            bVar43 = true;
                          }
                          FUN_1002fbbfc(*(undefined8 *)(local_690 + 0x30));
                        }
                        else {
                          local_768 = CONCAT44(local_768._4_4_,*(undefined4 *)(local_6a8 + 0x58));
                          FUN_100547220(local_690,FUN_10054738a);
LAB_1004fa3d0:
                          bVar43 = true;
                          iVar22 = -0x80;
                        }
                      }
                      goto LAB_1004f97a6;
                    }
                  }
                }
                bVar43 = true;
              }
LAB_1004f97a6:
              if (bVar43 && iVar22 == 0) {
                iVar22 = FUN_1004dccf5(local_690,"kPlaylistInternalDragMessage");
                if (iVar22 != -0x80) {
                  if (iVar22 == 0) {
                    iVar22 = FUN_100318904(param_1,0x74647070,local_698);
                    if (iVar22 == 0) {
                      if ((*(byte *)(local_6a0 + 0x240) & 4) == 0) {
                        uVar17 = FUN_10048c0ca(local_6a0);
                        cVar12 = FUN_10048c208(uVar17);
                        if (cVar12 == '\0') {
                          iVar22 = 0;
                          goto LAB_1004f9845;
                        }
                      }
                      iVar22 = FUN_1004394bb(local_690,*(undefined8 *)(lVar27 + 0x10),&local_6c8);
                    }
LAB_1004f9845:
                    FUN_1004dd69c(local_690,"kPlaylistInternalDragMessage");
                    bVar43 = false;
                    goto LAB_1004f985b;
                  }
                  uVar26 = FUN_1001cc310();
                  cVar12 = _os_log_type_enabled(uVar26,0x10);
                  if (cVar12 != '\0') {
                    local_658._0_4_ = 0x8220202;
                    local_658._4_8_ = "Assertion failure";
                    local_64c = 0x400;
                    local_64a = iVar22;
                    __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: err == (%d)",local_658,
                                        0x12);
                  }
                }
LAB_1004f92ff:
                bVar43 = false;
                goto switchD_1004f5cc9_caseD_74646467;
              }
LAB_1004f985b:
              FUN_1005c9432(local_690,*(undefined8 *)(local_690 + 0x157e8),1);
              lVar27 = local_690;
              FUN_10057bdca(*(undefined8 *)(local_690 + 0x157e8));
              *(undefined1 *)(lVar27 + 0x157e2) = 0;
LAB_1004f9c94:
              if (iVar22 != 0) goto switchD_1004f5cc9_caseD_74646467;
            }
            else {
              if ((*(byte *)(local_6a0 + 0x240) & 4) != 0) {
LAB_1004f8a86:
                iVar21 = *(int *)(lVar27 + 0x20);
                uVar26 = *(undefined8 *)(lVar27 + 0x10);
                if (iVar21 == 8) {
                  iVar22 = FUN_10043901a(local_690,uVar26,&local_6c8);
                }
                else if (iVar21 == 4) {
                  iVar22 = FUN_100438965(local_690,uVar26,&local_6c8);
                }
                else if (iVar21 == 3) {
                  iVar22 = FUN_1004384cb(local_690,uVar26,&local_6c8);
                }
                else {
                  iVar22 = FUN_1004394bb(local_690,uVar26,&local_6c8);
                }
                bVar43 = false;
                goto LAB_1004f9c94;
              }
              uVar17 = FUN_10048c0ca(local_6a0);
              cVar12 = FUN_10048c208(uVar17);
              if (cVar12 != '\0') goto LAB_1004f8a86;
              bVar43 = false;
            }
            uVar31 = FUN_1004e7c76(local_690);
            iVar22 = 0;
            local_6c8 = uVar31 & local_6c8;
            if (local_6c8 != 0) {
              FUN_100603fea(local_690,local_6c8 | 0x11);
            }
          }
          else if (iVar21 == 0x706c726e) {
            local_6a8 = *(long *)(lVar27 + 0x10);
            if ((((*(char *)(local_690 + 0x14dc9) != '\0') && (*(char *)(local_690 + 0x38b) != '\0')
                 ) && ((*(char *)(local_690 + 0x38c) == '\0' ||
                       (cVar12 = FUN_100537ef0(0), cVar12 != '\0')))) &&
               (*(long *)(local_690 + 0x16640) != 0)) {
              FUN_1005ace32(*(long *)(local_690 + 0x16640),local_6a0,local_6a8);
            }
            if ((*(byte *)(local_6a0 + 0x240) & 4) != 0) {
              if (*(int *)(local_690 + 0x6ae0) == 2) {
                iVar21 = FUN_100318904(param_1,0x74647070,local_698);
                if ((*(int *)(local_690 + 0x66e0) != 0) &&
                   (cVar12 = FUN_1003166a1(*(undefined8 *)(local_690 + 0x30),0xf), cVar12 != '\0'))
                {
                  FUN_1004ef324(local_690,1,1);
                }
                if (iVar21 == 0) {
                  uVar26 = FUN_1001c156e();
                  iVar21 = 0;
                  FUN_1001c6987(uVar26,0x6970646d,*(undefined4 *)(local_690 + 0x28),0,0);
                }
              }
              else {
                iVar21 = FUN_1004dccf5(local_690,"kPlaylistRenameMessage");
                if (iVar21 == 0) {
                  FUN_1004e7a5c(local_690);
                  if (*(char *)(local_690 + 0x37c) != '\0') {
                    FUN_1004f0e83(local_690,&local_458);
                    lVar27 = FUN_1003c5a70(*(undefined8 *)(local_690 + 0x40),1,0,0);
                    if (lVar27 != 0) {
                      FUN_1003c5f4c(lVar27,&local_458,local_6a8);
                    }
                    lVar27 = FUN_1003c5a70(*(undefined8 *)(local_690 + 0x40),2,0,0);
                    if (lVar27 != 0) {
                      FUN_1003c5f4c(lVar27,&local_458,local_6a8);
                    }
                    lVar27 = FUN_10048bbac(*(undefined8 *)(local_690 + 0x30),0x14,0);
                    if (lVar27 != 0) {
                      FUN_1003c5f4c(lVar27,&local_458,local_6a8);
                    }
                  }
                  lVar27 = local_690 + 0x6b40;
                  iVar22 = FUN_10024780c(lVar27,local_6a8,*(undefined4 *)(local_690 + 0x66b0),lVar27
                                         ,local_690 + 0x6f64);
                  if (iVar22 == 0) {
                    iVar21 = FUN_1002441f8(*(undefined4 *)(local_690 + 0x66b0),lVar27,0x6372746c,1,
                                           local_690 + 0x71c0);
                    if ((iVar21 != -0x80) && (iVar21 != 0)) {
                      uVar26 = FUN_1001cc310();
                      cVar12 = _os_log_type_enabled(uVar26,0x10);
                      if (cVar12 != '\0') {
                        local_458 = 0x202;
                        uStack_456 = 0x822;
                        uStack_454 = 0x7a0a90;
                        uStack_450 = 1;
                        uStack_44e = 0;
                        local_44c = 0x400;
                        local_44a = iVar21;
                        __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: err == (%d)",
                                            &local_458,0x12);
                      }
                    }
                    iVar21 = FUN_1002441f8(*(undefined4 *)(local_690 + 0x66b0),lVar27,0x6974756e,1,
                                           local_690 + 0x75e0);
                    if ((iVar21 != -0x80) && (iVar21 != 0)) {
                      uVar26 = FUN_1001cc310();
                      cVar12 = _os_log_type_enabled(uVar26,0x10);
                      if (cVar12 != '\0') {
                        local_458 = 0x202;
                        uStack_456 = 0x822;
                        uStack_454 = 0x7a0a90;
                        uStack_450 = 1;
                        uStack_44e = 0;
                        local_44c = 0x400;
                        local_44a = iVar21;
                        __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: err == (%d)",
                                            &local_458,0x12);
                      }
                    }
                    iVar21 = FUN_1002441f8(*(undefined4 *)(local_690 + 0x66b0),lVar27,0x736f6e67,1,
                                           local_690 + 0x7a00);
                    if ((iVar21 != -0x80) && (iVar21 != 0)) {
                      uVar26 = FUN_1001cc310();
                      cVar12 = _os_log_type_enabled(uVar26,0x10);
                      if (cVar12 != '\0') {
                        local_458 = 0x202;
                        uStack_456 = 0x822;
                        uStack_454 = 0x7a0a90;
                        uStack_450 = 1;
                        uStack_44e = 0;
                        local_44c = 0x400;
                        local_44a = iVar21;
                        __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: err == (%d)",
                                            &local_458,0x12);
                      }
                    }
                  }
                  cVar12 = FUN_100266a70(*(undefined8 *)(local_690 + 0x66d8));
                  if ((cVar12 != '\0') && (*(int *)(local_690 + 0x6ae0) == 2)) {
                    FUN_1002c3d1a(local_690);
                  }
                  iVar21 = -0x17ffffe9;
                  if (iVar22 != -0x17ffffe9) {
                    iVar21 = FUN_100318904(param_1,0x74647070,local_698);
                  }
                  cVar12 = FUN_1003166a1(*(undefined8 *)(local_690 + 0x30),0xf);
                  if (cVar12 != '\0') {
                    FUN_1004ef324(local_690,1,1);
                  }
                  if (((*(char *)(local_690 + 0x359) != '\0') &&
                      (*(char *)(local_690 + 0x15218) != '\0')) &&
                     (*(char *)(local_690 + 0x6ac3) != '\0')) {
                    FUN_1004f0b5c();
                  }
                  FUN_1004dd69c(local_690,"kPlaylistRenameMessage");
                  if (iVar21 == 0) {
                    uVar26 = FUN_1001c156e();
                    iVar21 = 0;
                    FUN_1001c6987(uVar26,0x6970646d,*(undefined4 *)(local_690 + 0x28),0,0);
                  }
                }
              }
              goto switchD_1004f5cc9_caseD_74646465;
            }
          }
          else if (iVar21 == 0x706c7375) {
            cVar12 = FUN_100586027(local_6a0);
            if ((cVar12 != '\0') || (*(char *)(local_690 + 0x151d0) == '\0')) {
              uVar26 = *(undefined8 *)(local_690 + 0x30);
              uVar13 = FUN_100482222(local_6a0,1);
              uVar13 = FUN_1003166a1(uVar26,uVar13);
              iVar21 = FUN_100318904(param_1,0x74647070,local_698);
              if (cVar12 != '\0') {
                uVar26 = *(undefined8 *)(local_690 + 0x30);
                uVar14 = FUN_100482222(local_6a0,1);
                FUN_100316867(uVar26,uVar14,uVar13);
              }
              goto switchD_1004f5cc9_caseD_74646465;
            }
            goto LAB_1004f900b;
          }
          goto switchD_1004f5cc9_caseD_74646467;
        }
        if (iVar21 < 0x706c616c) {
          if (iVar21 == 0x6770706d) {
            iVar21 = FUN_100318904(param_1,0x74647070,local_698);
            if (iVar21 != 0) goto switchD_1004f5cc9_caseD_74646465;
            lVar27 = *(long *)(lVar27 + 0x10);
            cVar12 = FUN_100490002(local_6a0);
            if (((cVar12 != '\0') && (*(char *)(local_690 + 0x151d0) != '\0')) &&
               (cVar12 = FUN_1004ed02d(), cVar12 != '\0')) {
              cVar12 = FUN_100539270(lVar27);
              if (cVar12 != '\0') {
                uVar26 = FUN_1001cc310();
                cVar12 = _os_log_type_enabled(uVar26,0x10);
                if (cVar12 != '\0') {
                  local_458 = 0x202;
                  uStack_456 = 0x822;
                  uStack_454 = 0x7a0a90;
                  uStack_450 = 1;
                  uStack_44e = 0;
                  local_44c = 0x822;
                  local_44a = 0x7d6819;
                  uStack_446 = 1;
                  uStack_444 = 0;
                  __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_458,
                                      0x16);
                }
                FUN_1001782e9(0,0);
              }
              FUN_1005389ba(lVar27,0x19);
              FUN_1005389ba(lVar27,0x9a);
            }
            if (((*(char *)(local_690 + 0x35c) == '\0') || (*(char *)(local_690 + 0x36d) == '\0'))
               || (*(char *)(local_690 + 0x6abf) != '\0')) {
              if ((*(byte *)(local_6a0 + 0x240) & 4) == 0) {
                iVar21 = 0;
                if (*(short *)(local_6a0 + 0x10) == 6) {
                  *(ushort *)(lVar27 + 0x20) = *(ushort *)(lVar27 + 0x20) | 0x280;
                }
                else if ((*(short *)(local_6a0 + 0x10) == 0xb) &&
                        (*(int *)(*(long *)(local_6a0 + 0x78) + 0x18) != 0)) {
                  *(byte *)(lVar27 + 0x20) = *(byte *)(lVar27 + 0x20) & 0xfd;
                }
              }
              else {
                iVar21 = 0;
                if ((*(char *)(local_690 + 0x14cd8) == '\0') ||
                   (*(char *)(local_690 + 0x6acf) != '\0')) {
                  uVar18 = 0;
                }
                else if (*(int *)(local_690 + 0x6b0c) == 0) {
                  if (*(char *)(local_690 + 0x3a2) == '\0') {
                    uVar18 = 1;
                  }
                  else {
                    uVar18 = (ushort)(*(char *)(local_690 + 0x16846) == '\0');
                  }
                }
                else {
                  uVar18 = 0;
                }
                uVar2 = *(ushort *)(lVar27 + 0x20);
                *(ushort *)(lVar27 + 0x20) = uVar18 | uVar2 & 0xfffe;
                uVar34 = (*(byte *)(local_690 + 0x35c) & 1) << 0xb;
                uVar19 = uVar18 | uVar2 & 0xf7fe | uVar34;
                *(ushort *)(lVar27 + 0x20) = uVar19;
                if (*(char *)(local_690 + 0x14cda) != '\0') {
                  *(ushort *)(lVar27 + 0x20) = uVar19 | 8;
                  *(ushort *)(lVar27 + 0x20) =
                       (uVar18 | uVar2 & 0xf76e | uVar34 | 8) +
                       (ushort)(*(char *)(local_690 + 0x6acf) == '\0') * 0x10 + 0x80;
                }
              }
              goto switchD_1004f5cc9_caseD_74646465;
            }
            *(byte *)(lVar27 + 0x20) = *(byte *)(lVar27 + 0x20) | 0x18;
            goto LAB_1004f900b;
          }
          if (iVar21 != 0x706c6169) goto switchD_1004f5cc9_caseD_74646467;
          if ((*(char *)(local_690 + 0x14cda) == '\0') ||
             (cVar12 = FUN_1004fcd40(*(undefined4 *)(lVar27 + 0x18),*(undefined8 *)(lVar27 + 0x20)),
             cVar12 != '\0')) {
            uVar23 = FUN_1004e9e57(local_690,*(undefined4 *)(lVar27 + 0x18),
                                   *(undefined8 *)(lVar27 + 0x20),0,1);
            if (uVar23 < 4) {
              if (uVar23 == 1) {
                uVar23 = 0x1000;
LAB_1004f9a62:
                *(uint *)(lVar27 + 0x28) = *(uint *)(lVar27 + 0x28) | uVar23;
              }
              else if (uVar23 == 3) {
                uVar23 = 0x2000;
                goto LAB_1004f9a62;
              }
              iVar21 = 0;
              iVar22 = iVar21;
              if ((((*(char *)(local_690 + 0x157e1) != '\0') &&
                   (*(int *)(lVar27 + 0x18) == 0x46494c45)) &&
                  ((iVar25 = FUN_1004e9a46(*(undefined8 *)(lVar27 + 0x20)), iVar22 = 0,
                   bVar43 = bVar39, iVar25 == 0x45505542 ||
                   ((iVar25 == 0x69626f6f || (iVar25 == 0x50444620)))))) &&
                 ((*(char *)(local_690 + 0x3a5) != '\0' &&
                  ((*(char *)(local_690 + 0x39c) == '\0' ||
                   (iVar22 = iVar21, *(char *)(local_690 + 0x6b03) == '\0')))))) {
                *(undefined1 *)(*(long *)(local_690 + 0x157e8) + 0x27) = 1;
                iVar22 = iVar21;
              }
              goto switchD_1004f5cc9_caseD_74646467;
            }
          }
          else {
            uVar23 = 0xc;
          }
          iVar21 = -0x32;
          if (*(char *)(local_690 + 0x157e1) != '\0') {
            FUN_10057c396(*(undefined8 *)(local_690 + 0x157e8),*(undefined4 *)(lVar27 + 0x18),
                          *(undefined8 *)(lVar27 + 0x20),uVar23);
          }
          goto switchD_1004f5cc9_caseD_74646465;
        }
        if (iVar21 != 0x706c616c) {
          if (iVar21 != 0x706c6461) {
            if (iVar21 == 0x706c6465) {
              cVar12 = FUN_1004fdaa0(local_6a0);
              if (cVar12 != '\0') {
                if (DAT_1008c75c0 != -1) {
                  _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
                }
                uVar26 = DAT_1008c75b8;
                cVar12 = _os_log_type_enabled(DAT_1008c75b8,1);
                if (cVar12 != '\0') {
                  local_6a8 = CONCAT62(local_6a8._2_6_,*(undefined2 *)(local_6a0 + 0x10));
                  FUN_100486d8f(local_658);
                  uVar30 = FUN_1001b83ae(local_658);
                  pcVar35 = "Genius";
                  if ((short)local_6a8 == 0x20) {
                    pcVar35 = "Genius Mix";
                  }
                  local_458 = 0x202;
                  uStack_456 = 0x822;
                  uStack_454 = SUB84(pcVar35,0);
                  uStack_450 = (undefined2)((ulong)pcVar35 >> 0x20);
                  uStack_44e = 0;
                  local_44c = 0x822;
                  local_44a = (int)uVar30;
                  uStack_446 = (undefined2)((ulong)uVar30 >> 0x20);
                  uStack_444 = (undefined2)((ulong)uVar30 >> 0x30);
                  __os_log_impl(0x100000000,uVar26,1,
                                "sync> deleting %{public}s playlist \"%{public}s\"",&local_458,0x16)
                  ;
                  FUN_1001b7a50(local_658);
                }
              }
              FUN_10035693b(local_690,local_6a0);
              if ((*(char *)(local_690 + 0x14dc9) != '\0') && (*(char *)(local_690 + 0x38b) != '\0')
                 ) {
                if ((*(char *)(local_690 + 0x38c) == '\0') ||
                   (cVar12 = FUN_100537ef0(0), cVar12 != '\0')) {
                  if (*(long *)(local_690 + 0x16640) != 0) {
                    FUN_1005ad062(*(long *)(local_690 + 0x16640),local_6a0);
                  }
                }
                else {
                  iVar22 = 0;
                }
              }
            }
            goto switchD_1004f5cc9_caseD_74646467;
          }
          if (*(char *)(local_690 + 0x14cd8) != '\0') {
            iVar21 = 0;
            cVar12 = FUN_10039e077(*(undefined4 *)(local_690 + 0x28),1,0);
            if ((cVar12 == '\0') && (cVar12 = FUN_1004e7efc(local_690), cVar12 != '\0')) {
              cVar12 = FUN_1002c3ac1(*(undefined8 *)(lVar27 + 0x10));
              lVar28 = local_690;
              if ((*(char *)(local_690 + 0x14cda) == '\0') || (iVar21 = 0, cVar12 == '\0')) {
                FUN_10057bdca(*(undefined8 *)(local_690 + 0x157e8));
                *(undefined1 *)(lVar28 + 0x157e1) = 1;
                iVar21 = FUN_100318904(param_1,0x74647070,local_698);
                if ((iVar21 == 0) &&
                   (cVar15 = FUN_10057b95c(*(undefined8 *)(local_690 + 0x157e8)), cVar15 != '\0')) {
                  *(undefined1 *)(lVar27 + 0x26) = 1;
                }
                *(undefined1 *)(local_690 + 0x157e1) = 0;
              }
              if (cVar12 != '\0' && *(char *)(lVar27 + 0x26) == '\0') {
                if ((*(byte *)(local_6a0 + 0x240) & 4) == 0) {
                  uVar17 = FUN_10048c0ca();
                  cVar12 = FUN_10048c208(uVar17);
                  if (cVar12 == '\0') goto switchD_1004f5cc9_caseD_74646465;
                }
                FUN_1002c3b9e(&local_458,*(undefined8 *)(lVar27 + 0x10));
                if (CONCAT44(uStack_454,CONCAT22(uStack_456,local_458)) == 0) {
                  uVar26 = 0;
                }
                else {
                  uVar13 = FUN_1004fc6a4(local_690);
                  *(undefined1 *)(lVar27 + 0x26) = uVar13;
                  uVar26 = CONCAT44(uStack_454,CONCAT22(uStack_456,local_458));
                }
                FUN_100595344(uVar26);
              }
            }
            goto switchD_1004f5cc9_caseD_74646465;
          }
          goto LAB_1004f900b;
        }
        plVar10 = *(long **)(lVar27 + 0x18);
        local_6a0 = param_1;
        uVar23 = FUN_1004eb707(local_690,plVar10,0,0,0);
        if (3 < uVar23) {
          iVar21 = -0x32;
          if ((*(char *)(local_690 + 0x157e1) != '\0') &&
             (((cVar12 = FUN_100480bf1(plVar10), cVar12 != '\0' &&
               ((*plVar10 == 0 || (cVar12 = FUN_1004fce6f(), cVar12 != '\0')))) ||
              ((cVar12 = FUN_1004741f6(plVar10[1]), cVar12 != '\0' && (*plVar10 == 0)))))) {
            FUN_10057bfae(*(undefined8 *)(local_690 + 0x157e8),plVar10,uVar23);
          }
          goto switchD_1004f5cc9_caseD_74646465;
        }
        uVar41 = 1;
        if (uVar23 == 1) {
LAB_1004f9179:
          *(uint *)(lVar27 + 0x20) = *(uint *)(lVar27 + 0x20) | uVar41;
        }
        else if (uVar23 == 3) {
          uVar41 = 8;
          goto LAB_1004f9179;
        }
        plVar32 = (long *)FUN_1004e7c10(local_690,plVar10[1],0);
        *(bool *)(lVar27 + 0x24) = plVar32 == plVar10;
        if (*(char *)(local_690 + 0x157e1) != '\0') {
          if ((*(char *)(local_690 + 0x3a5) == '\0') ||
             (cVar12 = FUN_1002bd03f(plVar10[1],*(undefined1 *)(local_690 + 0x39e),
                                     *(undefined1 *)(local_690 + 0x39d)), cVar12 == '\0')) {
            if ((*(char *)(local_690 + 0x3a7) != '\0') &&
               ((uVar23 = FUN_1004744bf(plVar10[1],0), (uVar23 & 0x10004) == 4 &&
                (*(char *)(local_690 + 0x6b06) == '\0')))) {
              *(undefined1 *)(*(long *)(local_690 + 0x157e8) + 0x28) = 1;
            }
          }
          else if ((*(char *)(local_690 + 0x39c) == '\0') || (*(char *)(local_690 + 0x6b03) == '\0')
                  ) {
            *(undefined1 *)(*(long *)(local_690 + 0x157e8) + 0x27) = 1;
          }
        }
        param_1 = local_6a0;
        iVar22 = 0;
      }
      goto switchD_1004f5cc9_caseD_74646467;
    }
    if (0x74647460 < param_2) {
      if (param_2 < 0x74647666) {
        if (param_2 == 0x74647461) {
          if (*(int *)(*local_698 + 0xc2) < 0) {
            iVar21 = FUN_1003cd991(local_690,*local_698,local_698 + 1);
          }
          goto switchD_1004f5cc9_caseD_74646465;
        }
        if (param_2 == 0x7464756c) {
          if (*(int *)(*local_698 + 0x3c) == 0x46494c45) {
            iVar21 = FUN_1004fb1e2(local_690);
            goto switchD_1004f5cc9_caseD_74646465;
          }
        }
        else if (param_2 == 0x74647574) {
          iVar21 = 0;
          if ((*(char *)(local_690 + 0x14dc9) != '\0') && (*(char *)(local_690 + 0x38b) != '\0')) {
            if (*(char *)(local_690 + 0x38c) != '\0') {
              iVar21 = 0;
              cVar12 = FUN_100537ef0(0);
              if (cVar12 == '\0') goto switchD_1004f5cc9_caseD_74646465;
            }
            iVar21 = 0;
            if (*(long *)(local_690 + 0x16640) != 0) {
              iVar21 = FUN_1005ab762(*(long *)(local_690 + 0x16640),*(undefined8 *)(*local_698 + 8),
                                     local_698[1],0);
            }
          }
          goto switchD_1004f5cc9_caseD_74646465;
        }
      }
      else {
        if (param_2 == 0x74647666) {
          iVar21 = 0;
          if ((*(char *)((long)local_698 + 9) != '\0') && (*(long *)(local_690 + 0x16688) == 0)) {
            FUN_10017e3e5(*local_698);
            if (0x1f < *(ushort *)*local_698) {
              FUN_1001e40a7((ushort *)*local_698,&local_458,local_658);
              if (10 < local_458) {
                local_458 = 10;
              }
              FUN_10017ed94(&local_458,local_658,*local_698);
            }
          }
          goto switchD_1004f5cc9_caseD_74646465;
        }
        if (param_2 == 0x7467766e) {
          FUN_1001e1c39(local_690 + 0x6f64,local_698[1]);
          goto LAB_1004f900b;
        }
        if (param_2 == 0x74677673) {
          iVar21 = FUN_1002441f8(*(undefined4 *)(local_690 + 0x66b0),local_690 + 0x6b40,0x726f6f74,1
                                 ,local_698[1]);
          goto switchD_1004f5cc9_caseD_74646465;
        }
      }
      goto switchD_1004f5cc9_caseD_74646467;
    }
    if (param_2 < 0x74647274) {
      if (param_2 == 0x74647072) {
        FUN_100231348(&local_458,local_690,(int)*local_698,*(int *)((long)local_698 + 4),
                      (int)local_698[1],0);
        FUN_1001bb41a(&local_458,local_698[2]);
        lVar27 = local_690;
        if (0x5ff < *(ushort *)(local_690 + 100)) {
          FUN_100231348(local_658,local_690,(int)*local_698,*(int *)((long)local_698 + 4),
                        (int)local_698[1],0);
          cVar12 = FUN_1001b8428(local_658);
          if (cVar12 == '\0') {
            FUN_10017060f(*(undefined8 *)(lVar27 + 0x16838));
            uVar26 = FUN_1001b8d0c(local_658);
            *(undefined8 *)(lVar27 + 0x16838) = uVar26;
          }
          FUN_1001b7a50(local_658);
        }
LAB_1004f7e2c:
        FUN_1001b7a50(&local_458);
      }
      else {
        if (param_2 != 0x7464726c) goto switchD_1004f5cc9_caseD_74646467;
        if ((*(long *)(local_690 + 0x30) != 0) &&
           (cVar12 = FUN_100316309(*(long *)(local_690 + 0x30),0xf), cVar12 != '\0')) {
          FUN_100316f84(*(undefined8 *)(local_690 + 0x30),0,0,0);
        }
        FUN_1004dd69c(local_690,"kTrackDataReleaseBackingStoreMessage");
      }
      goto LAB_1004f900b;
    }
    if (param_2 == 0x74647274) {
      *(undefined1 *)(local_690 + 0x6adb) = 1;
      iVar21 = FUN_1004dccf5(local_690,"kTrackDataRetainBackingStoreMessage");
      *(undefined1 *)(local_690 + 0x6adb) = 0;
      goto switchD_1004f5cc9_caseD_74646465;
    }
    if (param_2 != 0x74647364) {
      if (param_2 == 0x7464737a) {
        uVar23 = *(uint *)(local_698 + 3);
        if ((uVar23 & 1) != 0) {
          *(undefined2 *)(local_698 + 6) = *(undefined2 *)(local_690 + 0x14df6);
        }
        lVar27 = *local_698;
        if (lVar27 == 0) {
          iVar21 = FUN_100318904(param_1,0x7464737a);
          if ((((*(char *)(local_690 + 0x14dc9) != '\0') && (*(char *)(local_690 + 0x38b) != '\0'))
              && ((*(char *)(local_690 + 0x38c) == '\0' ||
                  (cVar12 = FUN_100537ef0(0), cVar12 != '\0')))) &&
             (*(long *)(local_690 + 0x16640) != 0)) {
            lVar27 = FUN_1005aa396(*(long *)(local_690 + 0x16640),local_698[1]);
            local_698[5] = local_698[5] + lVar27;
          }
          if (*(char *)(local_690 + 0x6acf) != '\0') goto switchD_1004f5cc9_caseD_74646465;
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar26 = DAT_1008c75b8;
          cVar12 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar12 == '\0') goto switchD_1004f5cc9_caseD_74646465;
          FUN_10017d520(local_658,local_698[1]);
          uVar30 = FUN_1001b83ae(local_658);
          lVar27 = local_698[4];
          uStack_454 = (undefined4)uVar30;
          uStack_450 = (undefined2)((ulong)uVar30 >> 0x20);
          uStack_44e = (undefined2)((ulong)uVar30 >> 0x30);
          local_44a = (int)lVar27;
          uStack_446 = (undefined2)((ulong)lVar27 >> 0x20);
          uStack_444 = (undefined2)((ulong)lVar27 >> 0x30);
          local_440 = (undefined4)local_698[5];
          uStack_43c = (undefined4)((ulong)local_698[5] >> 0x20);
          pcVar35 = "sync> file \"%{public}s\", file size = %llu, extra size = %llu";
        }
        else {
          lVar28 = local_698[6];
          if ((*(char *)(local_690 + 0x14dc9) == '\0') || (*(char *)(local_690 + 0x38b) == '\0')) {
            uVar13 = 0;
          }
          else if (*(char *)(local_690 + 0x38c) == '\0') {
            uVar13 = 1;
          }
          else {
            uVar13 = FUN_100537ef0(0);
          }
          puVar1 = (ulong *)(local_698 + 4);
          uVar29 = FUN_1004eb21f(local_690,lVar27,0,uVar23 & 1,(short)lVar28,uVar13,puVar1,0,0);
          uVar31 = *puVar1;
          if (uVar29 < uVar31) {
            uVar26 = FUN_1001cc310();
            cVar12 = _os_log_type_enabled(uVar26,0x10);
            if (cVar12 != '\0') {
              local_458 = 0x202;
              uStack_456 = 0x822;
              uStack_454 = 0x7a0a90;
              uStack_450 = 1;
              uStack_44e = 0;
              local_44c = 0x822;
              local_44a = 0x7d68ba;
              uStack_446 = 1;
              uStack_444 = 0;
              __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_458,0x16
                                 );
            }
            FUN_1001782e9(0,0);
            uVar31 = *puVar1;
          }
          local_698[5] = uVar29 - uVar31;
          iVar21 = 0;
          if (*(char *)(local_690 + 0x6acf) != '\0') goto switchD_1004f5cc9_caseD_74646465;
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar26 = DAT_1008c75b8;
          cVar12 = _os_log_type_enabled(DAT_1008c75b8,1);
          if (cVar12 == '\0') goto switchD_1004f5cc9_caseD_74646465;
          FUN_100476ac1(local_658,*(undefined8 *)(*local_698 + 8));
          uVar30 = FUN_1001b83ae(local_658);
          lVar27 = local_698[4];
          uStack_454 = (undefined4)uVar30;
          uStack_450 = (undefined2)((ulong)uVar30 >> 0x20);
          uStack_44e = (undefined2)((ulong)uVar30 >> 0x30);
          local_44a = (int)lVar27;
          uStack_446 = (undefined2)((ulong)lVar27 >> 0x20);
          uStack_444 = (undefined2)((ulong)lVar27 >> 0x30);
          local_440 = (undefined4)local_698[5];
          uStack_43c = (undefined4)((ulong)local_698[5] >> 0x20);
          pcVar35 = "sync> track \"%{public}s\", file size = %llu, extra size = %llu";
          iVar21 = 0;
        }
        local_442 = 0x800;
        local_44c = 0x800;
        uStack_456 = 0x822;
        local_458 = 0x302;
        __os_log_impl(0x100000000,uVar26,1,pcVar35,&local_458,0x20);
        FUN_1001b7a50(local_658);
        goto switchD_1004f5cc9_caseD_74646465;
      }
      goto switchD_1004f5cc9_caseD_74646467;
    }
    cVar12 = FUN_1001c19de();
    iVar21 = 0;
    if ((cVar12 != '\0') || (*(char *)(local_690 + 0x6afb) != '\0'))
    goto switchD_1004f5cc9_caseD_74646465;
    if ((char)*local_698 == '\0') {
LAB_1004f7c42:
      if (*(char *)((long)local_698 + 1) != '\0') goto LAB_1004f7c4f;
    }
    else {
      if (((((*(char *)(local_690 + 0x6acf) != '\0') || (*(char *)(local_690 + 0x6ad1) != '\0')) ||
           (*(char *)(local_690 + 0x6aeb) != '\0')) ||
          ((*(char *)(local_690 + 0x6aec) != '\0' || (*(char *)(local_690 + 0x14cd8) == '\0')))) ||
         (cVar12 = FUN_1003166a1(param_1,0xf), cVar12 == '\0'))
      goto switchD_1004f5cc9_caseD_74646465;
      if ((char)*local_698 == '\0') goto LAB_1004f7c42;
LAB_1004f7c4f:
      cVar12 = FUN_1005377e9();
      if (cVar12 != '\0') goto switchD_1004f5cc9_caseD_74646465;
    }
    iVar21 = FUN_1004ef324(local_690,1,1);
    goto switchD_1004f5cc9_caseD_74646465;
  }
  if (param_2 < 0x74646453) {
    if (param_2 < 0x74646264) {
      if (param_2 < 0x74646174) {
        if (param_2 == 0x67657374) {
          if ((int)*local_698 == 0x62617474) {
            if (*(char *)(local_690 + 0x153f0) != '\0') {
              uVar23 = (uint)(ushort)(*(ushort *)(local_690 + 0x153f1) << 8 |
                                     *(ushort *)(local_690 + 0x153f1) >> 8);
              *(uint *)((long)local_698 + 4) = uVar23;
              iVar21 = 0;
              if (*(char *)(local_690 + 0x426) != '\0') {
                *(uint *)((long)local_698 + 4) = uVar23 | 0x10000;
              }
            }
            goto switchD_1004f5cc9_caseD_74646465;
          }
        }
        else if (param_2 == 0x7464616f) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar26 = DAT_1008c75b8;
          cVar12 = _os_log_type_enabled(DAT_1008c75b8,1);
          lVar27 = local_690;
          if (cVar12 != '\0') {
            local_458 = 0;
            __os_log_impl(0x100000000,uVar26,1,
                          "sync> aborting operations due to kTrackDataAbortOperationsMessage",
                          &local_458,2);
          }
          FUN_1004fac41(lVar27,1);
          goto LAB_1004f900b;
        }
      }
      else {
        if (param_2 == 0x74646174) {
          uVar26 = *(undefined8 *)(*local_698 + 8);
          if ((*(uint *)(local_690 + 0x410) == 0) ||
             (*(uint *)(*(long *)(local_690 + 0x30) + 0x9c) < *(uint *)(local_690 + 0x410))) {
            iVar21 = 0;
            if ((*(char *)(local_690 + 0x391) == '\0') || (*(int *)(local_690 + 0x418) == 0))
            goto switchD_1004f5cc9_caseD_74646465;
            iVar21 = 0;
            uVar23 = FUN_1004744bf(uVar26,0);
            if (((uVar23 & 0x21800c) != 8) ||
               (uVar23 = FUN_1004fc562(*(undefined8 *)(local_690 + 0x30)),
               uVar23 < *(uint *)(local_690 + 0x418))) goto switchD_1004f5cc9_caseD_74646465;
            iVar21 = 0;
            lVar27 = FUN_1004fc18a(local_690,uVar26,0);
            if (lVar27 != 0) goto switchD_1004f5cc9_caseD_74646465;
            if ((*(char *)(local_690 + 0x157e2) != '\0') || (*(char *)(local_690 + 0x157e3) != '\0')
               ) {
              *(undefined1 *)(*(long *)(local_690 + 0x157e8) + 0xf) = 1;
            }
          }
          else if ((*(char *)(local_690 + 0x157e2) != '\0') ||
                  (*(char *)(local_690 + 0x157e3) != '\0')) {
            *(undefined1 *)(*(long *)(local_690 + 0x157e8) + 0xd) = 1;
          }
          iVar21 = -0x80;
          goto switchD_1004f5cc9_caseD_74646465;
        }
        if (param_2 == 0x74646253) {
          iVar21 = 0;
          if (*(char *)(local_690 + 0x3a2) != '\0') {
            if (*(char *)(local_690 + 0x6ac9) != '\0') {
              uVar26 = FUN_1001cc310();
              cVar12 = _os_log_type_enabled(uVar26,0x10);
              if (cVar12 != '\0') {
                local_458 = 0x202;
                uStack_456 = 0x822;
                uStack_454 = 0x7a0a90;
                uStack_450 = 1;
                uStack_44e = 0;
                local_44c = 0x822;
                local_44a = 0x7d6768;
                uStack_446 = 1;
                uStack_444 = 0;
                __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_458,
                                    0x16);
              }
              FUN_1001782e9(0,0);
            }
            lVar27 = local_690;
            *(undefined1 *)(local_690 + 0x6ac9) = 1;
            if (*(long *)(local_690 + 0x6750) != 0) {
              if (DAT_1008c75c0 != -1) {
                _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
              }
              uVar26 = DAT_1008c75b8;
              cVar12 = _os_log_type_enabled(DAT_1008c75b8,2);
              if (cVar12 != '\0') {
                local_458 = 0;
                __os_log_impl(0x100000000,uVar26,2,"progress> hiding sync progress bar",&local_458,2
                             );
              }
              FUN_100528d85(*(undefined8 *)(lVar27 + 0x6750));
            }
          }
          goto switchD_1004f5cc9_caseD_74646465;
        }
        if (param_2 == 0x74646263) {
          *(undefined8 *)(local_690 + 0x6b30) = *(undefined8 *)(local_690 + 0x6b20);
          uVar26 = FUN_1001ebd46();
          lVar27 = local_690;
          *(undefined8 *)(local_690 + 0x15950) = uVar26;
          *(undefined1 *)(local_690 + 0x6ad1) = 1;
          FUN_10057bdca(*(undefined8 *)(local_690 + 0x157f0));
          if (*(char *)(lVar27 + 0x6ac8) != '\0') {
            FUN_10023318f(lVar27,"");
            lVar27 = local_690;
          }
          FUN_1004ed4f6(lVar27);
          if (*(long *)(local_690 + 0x16640) != 0) {
            FUN_1005aaf38();
          }
          *(undefined8 *)(local_690 + 0x16828) = 0;
          uVar26 = FUN_1001c156e();
          iVar21 = 0;
          FUN_1001c6987(uVar26,0x69706378,*(undefined4 *)(local_690 + 0x28),1,0);
          goto switchD_1004f5cc9_caseD_74646465;
        }
      }
    }
    else {
      if (param_2 < 0x74646366) {
        if (param_2 == 0x74646264) {
          FUN_1004ed4f6(local_690);
          if ((*(char *)(local_690 + 0x14dc9) != '\0') && (*(char *)(local_690 + 0x38b) != '\0')) {
            if (*(char *)(local_690 + 0x38c) != '\0') {
              iVar21 = 0;
              cVar12 = FUN_100537ef0(0);
              if (cVar12 == '\0') goto switchD_1004f5cc9_caseD_74646465;
            }
            if (*(long *)(local_690 + 0x16640) != 0) {
              FUN_1005a4672();
            }
          }
        }
        else {
          if (param_2 == 0x74646266) {
            if (*(long *)(local_690 + 0x16688) == 0) {
              iVar21 = 0;
            }
            else {
              iVar21 = FUN_10033786f(local_690,local_698[1],local_698[2],local_698[3],local_698[4]);
            }
            if (*(long *)(local_690 + 0x16640) != 0) {
              FUN_1005ab01a();
            }
            goto switchD_1004f5cc9_caseD_74646465;
          }
          iVar22 = 0;
          if (param_2 != 0x74646273) goto switchD_1004f5cc9_caseD_74646467;
          if (*(int *)(*(long *)(*local_698 + 8) + 0xc2) < 0) {
            iVar21 = FUN_1003ca1bc(local_690,*local_698,local_698[1]);
            goto switchD_1004f5cc9_caseD_74646465;
          }
        }
        goto LAB_1004f900b;
      }
      if (param_2 == 0x74646366) {
        lVar27 = local_698[1];
        if (*(long *)(local_690 + 0x16640) != 0) {
          FUN_1005ab0e6();
        }
        iVar21 = 0;
        if ((((*(char *)(local_690 + 0x3a2) == '\0') &&
             (iVar22 = (int)local_698[5], (iVar22 + 0x80U & 0xffffff7f) != 0)) && (iVar22 != 0x46a))
           && (((int)*local_698 == 0 && (lVar27 != 0)))) {
          lVar28 = *(long *)(local_690 + 0x157f0);
          *(undefined1 *)(lVar28 + 0x11) = 1;
          FUN_10057c238(lVar27,iVar22,lVar28 + 0x118);
        }
        goto switchD_1004f5cc9_caseD_74646465;
      }
      if (param_2 == 0x7464636c) {
        *(undefined8 *)(local_690 + 0x30) = 0;
        iVar21 = 0;
        FUN_1004fa8e8(local_690,0);
        goto switchD_1004f5cc9_caseD_74646465;
      }
      if (param_2 == 0x7464636f) {
        if (*(char *)(local_690 + 0x6ad7) != '\0') {
          lVar27 = local_690 + 0x6b40;
          cVar12 = FUN_10017cbd0(lVar27);
          if (cVar12 != '\0') {
            *(char *)(local_698 + 2) = '\0';
            cVar12 = FUN_10017ec13(local_698[1],lVar27);
            iVar21 = 0;
            if (cVar12 != '\0') {
              _memcpy(&local_458,(void *)local_698[1],0x420);
              local_690 = local_690 + 0x7a00;
              do {
                iVar22 = FUN_10017d5ba(&local_458,&local_458);
                if (iVar22 != 0) goto switchD_1004f5cc9_caseD_74646465;
                cVar12 = FUN_10017f77e(&local_458,local_690);
              } while (cVar12 == '\0');
              *(char *)(local_698 + 2) = '\x01';
            }
            goto switchD_1004f5cc9_caseD_74646465;
          }
        }
        uVar26 = FUN_1001cc310();
        cVar12 = _os_log_type_enabled(uVar26,0x10);
        if (cVar12 != '\0') {
          local_458 = 0x202;
          uStack_456 = 0x822;
          uStack_454 = 0x7a0a90;
          uStack_450 = 1;
          uStack_44e = 0;
          local_44c = 0x822;
          local_44a = 0x7d67b3;
          uStack_446 = 1;
          uStack_444 = 0;
          __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
        }
        FUN_1001782e9(0,0);
        goto LAB_1004f7fac;
      }
    }
    goto switchD_1004f5cc9_caseD_74646467;
  }
  switch(param_2) {
  case 0x74646463:
    iVar21 = (int)*local_698;
    if (iVar21 < 0x6e73706c) {
      if (iVar21 < 0x6e666c64) {
        if (iVar21 == 0x626b7564) {
          FUN_100603fea(local_690,0x1000003);
          break;
        }
        if (iVar21 == 0x656a6374) {
          iVar21 = 0;
          FUN_1004f3c62(local_690,0x10cc005f,0x10cc0001,0x10cf0004,0);
          goto switchD_1004f5cc9_caseD_74646465;
        }
      }
      else if (((iVar21 == 0x6e666c64) || (iVar21 == 0x6e706c73)) || (iVar21 == 0x6e706c79))
      goto LAB_1004f8600;
LAB_1004f8815:
      iVar21 = FUN_100318904(param_1,0x74646463,local_698);
      goto switchD_1004f5cc9_caseD_74646465;
    }
    if (iVar21 < 0x72736477) {
      if (iVar21 == 0x6e73706c) {
LAB_1004f8600:
        iVar21 = 0;
        if ((*(int *)(local_690 + 0x414) != 0) &&
           (uVar23 = FUN_1004fdc30(*(undefined8 *)(local_690 + 0x30)),
           *(uint *)(local_690 + 0x414) <= uVar23)) {
          local_458 = 0;
          uStack_456 = 0;
          FUN_100547220(local_690,FUN_10054738a);
          iVar21 = 0x46e;
        }
        goto switchD_1004f5cc9_caseD_74646465;
      }
      if (iVar21 != 0x72657364) goto LAB_1004f8815;
      iVar21 = 0;
      lVar27 = FUN_100544af0(*(undefined4 *)(local_690 + 0x28),0);
      if (lVar27 == 0) goto switchD_1004f5cc9_caseD_74646465;
      local_7f8 = 0;
      uStack_7f0 = 0;
      FUN_1004fdc6e(*(undefined4 *)(local_690 + 0x28),lVar27,0,0,0,&local_7f8,0);
      FUN_100205d70(&local_7f8);
      FUN_10017060f(lVar27);
    }
    else if (iVar21 == 0x72736477) {
      FUN_1004f36b3();
    }
    else if (iVar21 == 0x7273796e) {
      FUN_100603fea(local_690,0x800000080003);
    }
    else {
      if (iVar21 != 0x73796e63) goto LAB_1004f8815;
      uVar31 = FUN_1004e7f5c();
      FUN_100603fea(local_690,uVar31 | 2);
    }
    break;
  case 0x74646464:
    if (((*(char *)(local_690 + 0x14dc9) != '\0') && (*(char *)(local_690 + 0x38b) != '\0')) &&
       (((*(char *)(local_690 + 0x38c) == '\0' || (cVar12 = FUN_100537ef0(0), cVar12 != '\0')) &&
        (*(long *)(local_690 + 0x16640) != 0)))) {
      FUN_1005a4ae0();
    }
    cVar12 = FUN_1004ef2b5(local_690);
    if (cVar12 != '\0') {
      FUN_1004ef324(local_690,1,1);
    }
    FUN_1004ee22c(local_690);
    break;
  case 0x74646465:
    goto switchD_1004f5cc9_caseD_74646465;
  case 0x74646466:
    lVar27 = local_698[1];
    lVar28 = *(long *)(lVar27 + 8);
    if ((lVar28 == 0) || (*(long *)(lVar28 + 0x10) == 0)) {
      uVar26 = FUN_1001cc310();
      cVar12 = _os_log_type_enabled(uVar26,0x10);
      if (cVar12 != '\0') {
        local_458 = 0x202;
        uStack_456 = 0x822;
        uStack_454 = 0x7a0a90;
        uStack_450 = 1;
        uStack_44e = 0;
        local_44c = 0x822;
        local_44a = 0x7b6950;
        uStack_446 = 1;
        uStack_444 = 0;
        __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
      }
      iVar21 = 0;
      FUN_1001782e9(0,0);
      goto switchD_1004f5cc9_caseD_74646465;
    }
    lVar8 = local_698[2];
    *(undefined1 *)(lVar28 + 0x12e) = *(undefined1 *)(lVar28 + 300);
    uVar13 = FUN_1004817dc(lVar28,0);
    *(undefined1 *)(lVar28 + 0x135) = uVar13;
    *(undefined1 *)(lVar28 + 0xb9) = 2;
    FUN_1002e5618(lVar28,0);
    iVar21 = FUN_10047f424(lVar28);
    if (iVar21 != *(int *)(*(long *)(lVar28 + 0x80) + 0x10)) {
      FUN_100473a90(lVar28);
      *(int *)(*(long *)(lVar28 + 0x80) + 0x10) = iVar21;
    }
    FUN_1003584ca(lVar28,*(undefined1 *)(local_690 + 0x14cda),0);
    if (*(long *)(*(long *)(lVar27 + 0x10) + 8) != 0) {
      uVar24 = FUN_1004e9858(*(undefined8 *)(lVar28 + 0x58),1);
      cVar12 = FUN_100536061(uVar24);
      if ((cVar12 != '\0') &&
         (cVar12 = FUN_1002d9f23(local_690,*(undefined8 *)(*(long *)(lVar27 + 0x10) + 8),
                                 *(undefined8 *)(*(long *)(lVar27 + 0x10) + 0x10)), cVar12 == '\0'))
      {
        *(undefined2 *)(local_690 + 0x15429) = 0x100;
      }
    }
    cVar12 = FUN_100474d03(lVar28);
    if (((cVar12 != '\0') && ((**(byte **)(lVar27 + 0x18) & 4) != 0)) &&
       (*(char *)(local_690 + 0x34c) == '\0')) {
      FUN_1004fbce0(lVar27);
      cVar12 = FUN_1002bdac0(lVar27,0,0,0,0);
      if (cVar12 != '\0') {
        *(byte *)(lVar27 + 0x4a) = *(byte *)(lVar27 + 0x4a) | 2;
      }
    }
    lVar36 = local_690;
    if (((*(char *)(local_690 + 0x14d00) != '\0') && (*(char *)(local_690 + 0x353) != '\0')) &&
       (*(char *)(local_690 + 0x3a2) == '\0')) {
      lVar38 = lVar28;
      if (lVar8 != 0) {
        lVar38 = *(long *)(lVar8 + 8);
      }
      cVar12 = FUN_1003537ab(local_690,lVar38);
      lVar36 = local_690;
      if (((cVar12 != '\0') &&
          (iVar21 = FUN_100354b6d(local_690,lVar28,lVar38,0), lVar36 = local_690, iVar21 != -0x80))
         && (iVar21 != 0)) {
        local_698 = (long *)FUN_1001cc310();
        cVar12 = _os_log_type_enabled(local_698,0x10);
        lVar36 = local_690;
        if (cVar12 != '\0') {
          local_458 = 0x202;
          uStack_456 = 0x822;
          uStack_454 = 0x7a0a90;
          uStack_450 = 1;
          uStack_44e = 0;
          local_44c = 0x400;
          local_44a = iVar21;
          __os_log_error_impl(0x100000000,local_698,0x10,"%{public}s: err == (%d)",&local_458,0x12);
        }
      }
    }
    if ((*(ushort *)(lVar36 + 100) < 0x841) &&
       (cVar12 = FUN_1002bd03f(lVar28,*(undefined1 *)(lVar36 + 0x39e),
                               *(undefined1 *)(lVar36 + 0x39d)), lVar36 = local_690, cVar12 != '\0')
       ) {
      FUN_1004fbedb(lVar27,lVar8);
      lVar36 = local_690;
    }
    if (((*(char *)(lVar36 + 0x391) != '\0') &&
        (uVar23 = FUN_1004744bf(lVar28,0), (uVar23 & 0x21800c) == 8)) &&
       (lVar27 = FUN_1004fc18a(local_690,lVar28,1), lVar27 != 0)) {
      FUN_1004fc3f0(lVar27,lVar28);
    }
    cVar12 = FUN_1002669ba(*(undefined8 *)(local_690 + 0x66d8));
    if ((cVar12 != '\0') &&
       (dVar44 = (double)FUN_1001ebd46(),
       *(double *)(local_690 + 0x15950) + _DAT_100707dc0 <= dVar44)) {
      FUN_1004ef324(local_690,1,1);
    }
    if (((*(long *)(local_690 + 0x16640) != 0) &&
        (FUN_1005ab0e6(), *(char *)(local_690 + 0x14dc9) != '\0')) &&
       ((*(char *)(local_690 + 0x38b) != '\0' &&
        ((*(char *)(local_690 + 0x38c) == '\0' || (cVar12 = FUN_100537ef0(0), cVar12 != '\0')))))) {
      FUN_1005a8516(*(undefined8 *)(local_690 + 0x16640),lVar28,1);
    }
    *(undefined8 *)(local_690 + 0x16828) = 0;
    break;
  case 0x74646467:
  case 0x7464646a:
  case 0x7464646b:
  case 0x7464646c:
  case 0x7464646d:
  case 0x7464646e:
  case 0x7464646f:
  case 0x74646470:
  case 0x74646471:
  case 0x74646472:
  case 0x74646474:
  case 0x74646475:
    goto switchD_1004f5cc9_caseD_74646467;
  case 0x74646468:
    FUN_1003570a7(local_690);
    if ((*(char *)(local_690 + 0x151d0) == '\0') && (cVar12 = FUN_1004ef2b5(), cVar12 != '\0')) {
      FUN_1004efbf5(local_690,FUN_1004faadb);
    }
    goto switchD_1004f5cc9_caseD_74646467;
  case 0x74646469:
    if ((*(char *)(local_690 + 0x6ad7) == '\0') ||
       (cVar12 = FUN_10017cbd0(local_690 + 0x6b40), cVar12 == '\0')) {
      uVar26 = FUN_1001cc310();
      cVar12 = _os_log_type_enabled(uVar26,0x10);
      if (cVar12 != '\0') {
        local_458 = 0x202;
        uStack_456 = 0x822;
        uStack_454 = 0x7a0a90;
        uStack_450 = 1;
        uStack_44e = 0;
        local_44c = 0x822;
        local_44a = 0x7d67b3;
        uStack_446 = 1;
        uStack_444 = 0;
        __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
      }
      FUN_1001782e9(0,0);
LAB_1004f7fac:
      iVar21 = -0x23;
      goto switchD_1004f5cc9_caseD_74646465;
    }
    if ((*(byte *)(*(long *)(local_690 + 0x30) + 0x1bb3) & 0x20) == 0) {
      *(undefined2 *)(local_690 + 0x15428) = 0;
      *(undefined1 *)(local_690 + 0x1542a) = 1;
      lVar27 = *local_698;
      local_6a0 = *(long *)(lVar27 + 8);
      if ((*(long *)(local_690 + 0x16688) == 0) && (iVar21 = FUN_1002b0559(lVar27,2), iVar21 == 0))
      {
        if ((*(char *)(local_690 + 0x396) != '\0') &&
           (uVar23 = FUN_1004744bf(local_6a0,0), (uVar23 >> 0x14 & 1) != 0)) {
          FUN_10032e6f3(local_690,local_6a0);
          cVar12 = FUN_10017cbd0(*(undefined8 *)(lVar27 + 0x80));
          if (cVar12 == '\0') goto LAB_1004f6756;
        }
        if (*(int *)(local_6a0 + 0xc2) < 0) {
          FUN_1003cd418(local_690,local_6a0);
        }
        else {
          iVar21 = FUN_1004fc593(lVar27);
          if (iVar21 == 0) {
            FUN_1002b765a(lVar27);
          }
        }
      }
LAB_1004f6756:
      FUN_100356836(local_690,local_6a0);
      if ((((*(char *)(local_690 + 0x14dc9) != '\0') && (*(char *)(local_690 + 0x38b) != '\0')) &&
          ((*(char *)(local_690 + 0x38c) == '\0' || (cVar12 = FUN_100537ef0(0), cVar12 != '\0'))))
         && (*(long *)(local_690 + 0x16640) != 0)) {
        FUN_1005ac2c6(*(long *)(local_690 + 0x16640),local_6a0);
      }
      if ((((*(char *)(local_690 + 0x391) != '\0') &&
           (uVar23 = FUN_1004744bf(local_6a0,0), (uVar23 & 0x21800c) == 8)) &&
          (lVar27 = FUN_1004fc18a(local_690,local_6a0,0), lVar27 != 0)) &&
         (*(int *)(*(long *)(lVar27 + 0x78) + 0x18) == 0)) {
        FUN_100488d27(lVar27,0,0);
      }
      if ((*(char *)(local_690 + 0x389) != '\0') && (*(long *)(local_690 + 0x16658) != 0)) {
        FUN_10062aada(*(long *)(local_690 + 0x16658),local_6a0);
      }
    }
switchD_1004f5cc9_caseD_74646467:
    iVar21 = iVar22;
    if ((iVar22 == 0) && (bVar43)) {
      iVar21 = FUN_100318904(param_1,param_2,local_698);
    }
    goto switchD_1004f5cc9_caseD_74646465;
  case 0x74646473:
    iVar21 = 0;
    if (*(int *)(*(long *)(*local_698 + 8) + 0xc2) < 0) {
      iVar21 = FUN_1003ca68a(local_690,*local_698,local_698[1],1);
    }
    *(undefined8 *)(local_690 + 0x16828) = 0;
    goto switchD_1004f5cc9_caseD_74646465;
  case 0x74646476:
    puVar40 = (undefined1 *)local_698[1];
    if ((*(char *)(local_690 + 0x3a2) == '\0') || (*(char *)(local_690 + 0x168ce) == '\0')) {
      if (((char)*local_698 == '\0') || (*(long *)(local_690 + 0x153a0) == 0)) {
        FUN_1004e48c6(local_690);
      }
      if (*(char *)(local_690 + 0x168ce) == '\0') {
        *(undefined8 *)(local_690 + 0x168d0) = *(undefined8 *)(local_690 + 0x153a0);
        *(undefined8 *)(local_690 + 0x168d8) = *(undefined8 *)(local_690 + 0x153a8);
      }
    }
    *puVar40 = *(undefined1 *)(local_690 + 0x33b);
    puVar40[1] = *(undefined1 *)(local_690 + 0x346);
    puVar40[2] = *(undefined1 *)(local_690 + 0x33c);
    puVar40[3] = *(undefined1 *)(local_690 + 0x36a);
    puVar40[4] = *(undefined1 *)(local_690 + 0x37d);
    puVar40[5] = *(undefined1 *)(local_690 + 0x39c);
    uVar13 = FUN_1001cd44e("show-device-log-bytes",0,0);
    puVar40[6] = uVar13;
    uVar13 = FUN_1001cd44e("show-device-reserved-bytes",0,0);
    puVar40[7] = uVar13;
    uVar13 = FUN_1001cd44e("show-device-purgeable-bytes",0,0);
    puVar40[8] = uVar13;
    if (*(char *)(local_690 + 0x3a2) == '\0') {
      uVar26 = *(undefined8 *)(local_690 + 0x153a8);
      *(undefined8 *)(puVar40 + 0x10) = *(undefined8 *)(local_690 + 0x153a0);
      *(undefined8 *)(puVar40 + 0x18) = uVar26;
      *(undefined8 *)(puVar40 + 0x28) = *(undefined8 *)(local_690 + 0x153b0);
      FUN_1004fb6ce(local_690,puVar40);
      iVar21 = *(int *)(local_690 + 0x153c0);
      *(int *)(puVar40 + 0x148) = iVar21;
      lVar27 = *(long *)(local_690 + 0x153c8);
      *(long *)(puVar40 + 0x150) = lVar27;
      lVar28 = *(long *)(local_690 + 87000);
      if (lVar28 != 0) {
        *(int *)(puVar40 + 0x148) = iVar21 + *(int *)(local_690 + 0x153d0);
        *(long *)(puVar40 + 0x150) = lVar28 + lVar27;
      }
      if (*(long *)(local_690 + 0x7168) != 0) {
        if (*(long *)(local_690 + 0x15970) == 0) {
          uVar24 = 0;
        }
        else {
          uVar24 = FUN_100171426();
        }
        *(undefined4 *)(puVar40 + 0x168) = uVar24;
        *(undefined8 *)(puVar40 + 0x170) = *(undefined8 *)(local_690 + 0x7188);
        *(undefined8 *)(puVar40 + 0x180) = *(undefined8 *)(local_690 + 0x7190);
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
        uVar26 = DAT_1008c75b8;
        cVar12 = _os_log_type_enabled(DAT_1008c75b8,1);
        if (cVar12 != '\0') {
          uStack_454 = *(undefined4 *)(puVar40 + 0x168);
          uVar30 = *(undefined8 *)(puVar40 + 0x170);
          local_458 = 0x200;
          uStack_456 = 0x400;
          uStack_450 = 0x800;
          uStack_44e = (undefined2)uVar30;
          local_44c = (undefined2)((ulong)uVar30 >> 0x10);
          local_44a = (int)((ulong)uVar30 >> 0x20);
          __os_log_impl(0x100000000,uVar26,1,
                        "stats> totalInstalledApplications = %u, totalApplicationBytes = %llu",
                        &local_458,0x12);
        }
        if (*(ushort *)(local_690 + 100) < 0x113) {
          *(undefined8 *)(puVar40 + 0x28) = 0;
        }
        else {
          *(undefined8 *)(puVar40 + 0x28) = *(undefined8 *)(local_690 + 0x7198);
        }
      }
    }
    else {
      uVar26 = *(undefined8 *)(local_690 + 0x168d8);
      *(undefined8 *)(puVar40 + 0x10) = *(undefined8 *)(local_690 + 0x168d0);
      *(undefined8 *)(puVar40 + 0x18) = uVar26;
      if (*(char *)(local_690 + 0x16845) != '\0') {
        *(undefined8 *)(puVar40 + 0x20) = *(undefined8 *)(local_690 + 0x168e0);
      }
      *(undefined8 *)(puVar40 + 0x28) = *(undefined8 *)(local_690 + 0x153b0);
      local_6d4 = *(int *)(local_690 + 0x168e8);
      *(int *)(puVar40 + 0x58) = local_6d4;
      local_6b8 = *(ulong *)(local_690 + 0x168f0);
      *(ulong *)(puVar40 + 0x60) = local_6b8;
      iVar21 = *(int *)(local_690 + 0x168f8);
      *(int *)(puVar40 + 0x68) = iVar21;
      lVar27 = *(long *)(local_690 + 0x16900);
      *(long *)(puVar40 + 0x70) = lVar27;
      iVar22 = *(int *)(local_690 + 0x16908);
      local_6a8 = CONCAT44(local_6a8._4_4_,iVar22);
      *(int *)(puVar40 + 0x78) = iVar22;
      local_698 = *(long **)(local_690 + 0x16910);
      *(long **)(puVar40 + 0x80) = local_698;
      iVar25 = *(int *)(local_690 + 0x16918);
      *(int *)(puVar40 + 0x88) = iVar25;
      local_6a0 = *(long *)(local_690 + 0x16920);
      *(long *)(puVar40 + 0x90) = local_6a0;
      iVar3 = *(int *)(local_690 + 0x16928);
      *(int *)(puVar40 + 0xa8) = iVar3;
      lVar28 = *(long *)(local_690 + 0x16930);
      *(long *)(puVar40 + 0xb0) = lVar28;
      local_6d8 = *(int *)(local_690 + 0x16938);
      *(int *)(puVar40 + 0xb8) = local_6d8;
      local_6d0 = *(ulong *)(local_690 + 0x16940);
      *(ulong *)(puVar40 + 0xc0) = local_6d0;
      uVar23 = *(uint *)(local_690 + 0x16948);
      local_778 = (ulong)uVar23;
      iVar4 = *(int *)(local_690 + 0x16958);
      *(uint *)(puVar40 + 0xd8) = iVar4 + uVar23;
      local_780 = *(long *)(local_690 + 0x16950);
      local_790 = *(long *)(local_690 + 0x16960);
      *(long *)(puVar40 + 0xe0) = local_790 + local_780;
      iVar5 = *(int *)(local_690 + 0x16968);
      uVar41 = *(uint *)(local_690 + 0x16978);
      local_788 = (ulong)uVar41;
      *(uint *)(puVar40 + 0xe8) = uVar41 + iVar5;
      lVar8 = *(long *)(local_690 + 0x16970);
      lVar36 = *(long *)(local_690 + 0x16980);
      *(long *)(puVar40 + 0xf0) = lVar36 + lVar8;
      iVar6 = *(int *)(local_690 + 0x16988);
      *(int *)(puVar40 + 0xf8) = iVar6;
      local_770 = *(long *)(local_690 + 0x16990);
      *(long *)(puVar40 + 0x100) = local_770;
      iVar7 = *(int *)(local_690 + 0x16998);
      *(int *)(puVar40 + 0x118) = iVar7;
      *(undefined4 *)(puVar40 + 0x128) = *(undefined4 *)(local_690 + 0x169a8);
      *(undefined8 *)(puVar40 + 0x130) = *(undefined8 *)(local_690 + 0x169b0);
      *(int *)(puVar40 + 0x148) = *(int *)(local_690 + 0x169d8) + *(int *)(local_690 + 0x169c8);
      *(long *)(puVar40 + 0x150) = *(long *)(local_690 + 0x169e0) + *(long *)(local_690 + 0x169d0);
      *(undefined4 *)(puVar40 + 0x168) = *(undefined4 *)(local_690 + 0x169b8);
      *(undefined8 *)(puVar40 + 0x170) = *(undefined8 *)(local_690 + 0x169c0);
      *(undefined8 *)(puVar40 + 0x178) = *(undefined8 *)(local_690 + 0x169e8);
      *(undefined8 *)(puVar40 + 0x188) = *(undefined8 *)(local_690 + 0x169f0);
      *(uint *)(puVar40 + 0x38) = iVar6 + iVar7 + iVar5 + uVar23 + iVar21 + local_6d4;
      *(ulong *)(puVar40 + 0x40) =
           lVar8 + local_780 + lVar27 + local_6b8 + local_770 + *(long *)(local_690 + 0x169a0);
      *(uint *)(puVar40 + 0x48) = iVar4 + uVar41 + iVar3 + local_6d8 + iVar25 + iVar22;
      *(char **)(puVar40 + 0x50) =
           (char *)((long)local_698 + lVar36 + local_790 + lVar28 + local_6d0 + local_6a0);
    }
    uVar31 = *(long *)(puVar40 + 0x70) + *(long *)(puVar40 + 0x60) + *(long *)(puVar40 + 0x80) +
             *(long *)(puVar40 + 0x90) + *(long *)(puVar40 + 0xa0) + *(long *)(puVar40 + 0xb0) +
             *(long *)(puVar40 + 0xc0) + *(long *)(puVar40 + 0xd0) + *(long *)(puVar40 + 0xe0) +
             *(long *)(puVar40 + 0xf0) + *(long *)(puVar40 + 0x100) + *(long *)(puVar40 + 0x110) +
             *(long *)(puVar40 + 0x120) + *(long *)(puVar40 + 0x130) + *(long *)(puVar40 + 0x140) +
             *(long *)(puVar40 + 0x150) + *(long *)(puVar40 + 0x160) + *(long *)(puVar40 + 0x170) +
             *(long *)(puVar40 + 0x178) + *(long *)(puVar40 + 0x188);
    uVar29 = *(long *)(puVar40 + 0x10) - (*(long *)(puVar40 + 0x18) + *(long *)(puVar40 + 0x20));
    iVar21 = 0;
    lVar27 = 0;
    if (uVar31 <= uVar29) {
      lVar27 = uVar29 - uVar31;
    }
    *(long *)(local_690 + 0x153b8) = lVar27;
    if ((*(long *)(local_690 + 0x30) != 0) &&
       ((*(byte *)(*(long *)(local_690 + 0x30) + 0x2be0) & 0x20) == 0)) {
      if (DAT_1008c75c0 != -1) {
        _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
      }
      uVar26 = DAT_1008c75b8;
      cVar12 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar12 != '\0') {
        uVar30 = *(undefined8 *)(puVar40 + 0x10);
        auVar45._8_4_ = (int)((ulong)uVar30 >> 0x20);
        auVar45._0_8_ = uVar30;
        auVar45._12_4_ = DAT_10070d3c0._4_4_;
        uStack_454 = (undefined4)uVar30;
        uVar9 = *(undefined8 *)(puVar40 + 0x18);
        uStack_43c = (undefined4)((ulong)uVar9 >> 0x20);
        auVar52._8_4_ = uStack_43c;
        auVar52._0_8_ = uVar9;
        auVar52._12_4_ = DAT_10070d3c0._4_4_;
        local_440 = (undefined4)uVar9;
        dVar44 = (((double)CONCAT44((undefined4)DAT_10070d3c0,uStack_454) - _DAT_10070d3d0) +
                 (auVar45._8_8_ - _UNK_10070d3d8)) / DAT_10070e4d8;
        local_42c = *(undefined8 *)(puVar40 + 0x20);
        auVar53._8_4_ = (int)((ulong)local_42c >> 0x20);
        auVar53._0_8_ = local_42c;
        auVar53._12_4_ = DAT_10070d3c0._4_4_;
        local_436 = (((double)CONCAT44((undefined4)DAT_10070d3c0,local_440) - _DAT_10070d3d0) +
                    (auVar52._8_8_ - _UNK_10070d3d8)) / DAT_10070e4d8;
        local_418 = *(undefined8 *)(puVar40 + 0x28);
        auVar54._8_4_ = (int)((ulong)local_418 >> 0x20);
        auVar54._0_8_ = local_418;
        auVar54._12_4_ = DAT_10070d3c0._4_4_;
        local_422 = (((double)CONCAT44((undefined4)DAT_10070d3c0,(int)local_42c) - _DAT_10070d3d0) +
                    (auVar53._8_8_ - _UNK_10070d3d8)) / DAT_10070e4d8;
        local_40e = (((double)CONCAT44((undefined4)DAT_10070d3c0,(int)local_418) - _DAT_10070d3d0) +
                    (auVar54._8_8_ - _UNK_10070d3d8)) / DAT_10070e4d8;
        local_458 = 0x800;
        uStack_456 = 0x800;
        uStack_450 = (undefined2)((ulong)uVar30 >> 0x20);
        uStack_44e = (undefined2)((ulong)uVar30 >> 0x30);
        local_44c = 0x800;
        local_44a = SUB84(dVar44,0);
        uStack_446 = (undefined2)((ulong)dVar44 >> 0x20);
        uStack_444 = (undefined2)((ulong)dVar44 >> 0x30);
        local_442 = 0x800;
        local_438 = 0x800;
        local_42e = 0x800;
        local_424 = 0x800;
        local_41a = 0x800;
        local_410 = 0x800;
        __os_log_impl(0x100000000,uVar26,1,
                      "totals> totalDiskBytes = %llu (%.2f GB), freeDiskBytes = %llu (%.2f GB), purgeableDiskBytes = %llu (%.2f GB), reservedDiskBytes = %llu (%.2f GB)"
                      ,&local_458,0x52);
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
      }
      uVar26 = DAT_1008c75b8;
      cVar12 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar12 != '\0') {
        uVar30 = *(undefined8 *)(puVar40 + 0x40);
        local_44a = (int)((ulong)uVar30 >> 0x20);
        auVar46._8_4_ = local_44a;
        auVar46._0_8_ = uVar30;
        auVar46._12_4_ = DAT_10070d3c0._4_4_;
        uStack_454 = *(undefined4 *)(puVar40 + 0x38);
        dVar44 = (((double)CONCAT44((undefined4)DAT_10070d3c0,(int)uVar30) - _DAT_10070d3d0) +
                 (auVar46._8_8_ - _UNK_10070d3d8)) / DAT_10070e4d8;
        local_458 = 0x300;
        uStack_456 = 0x400;
        uStack_450 = 0x800;
        uStack_44e = (undefined2)uVar30;
        local_44c = (undefined2)((ulong)uVar30 >> 0x10);
        uStack_446 = 0x800;
        uStack_444 = SUB82(dVar44,0);
        local_442 = (undefined2)((ulong)dVar44 >> 0x10);
        local_440 = (undefined4)((ulong)dVar44 >> 0x20);
        __os_log_impl(0x100000000,uVar26,1,
                      "totals> totalAudioTracks = %u, totalAudioBytes = %llu (%.2f GB)",&local_458,
                      0x1c);
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
      }
      uVar26 = DAT_1008c75b8;
      cVar12 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar12 != '\0') {
        uVar30 = *(undefined8 *)(puVar40 + 0x50);
        local_44a = (int)((ulong)uVar30 >> 0x20);
        auVar47._8_4_ = local_44a;
        auVar47._0_8_ = uVar30;
        auVar47._12_4_ = DAT_10070d3c0._4_4_;
        uStack_454 = *(undefined4 *)(puVar40 + 0x48);
        dVar44 = (((double)CONCAT44((undefined4)DAT_10070d3c0,(int)uVar30) - _DAT_10070d3d0) +
                 (auVar47._8_8_ - _UNK_10070d3d8)) / DAT_10070e4d8;
        local_458 = 0x300;
        uStack_456 = 0x400;
        uStack_450 = 0x800;
        uStack_44e = (undefined2)uVar30;
        local_44c = (undefined2)((ulong)uVar30 >> 0x10);
        uStack_446 = 0x800;
        uStack_444 = SUB82(dVar44,0);
        local_442 = (undefined2)((ulong)dVar44 >> 0x10);
        local_440 = (undefined4)((ulong)dVar44 >> 0x20);
        __os_log_impl(0x100000000,uVar26,1,
                      "totals> totalVideoTracks = %u, totalVideoBytes = %llu (%.2f GB)",&local_458,
                      0x1c);
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
      }
      uVar26 = DAT_1008c75b8;
      cVar12 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar12 != '\0') {
        uVar30 = *(undefined8 *)(puVar40 + 0x160);
        local_44a = (int)((ulong)uVar30 >> 0x20);
        auVar48._8_4_ = local_44a;
        auVar48._0_8_ = uVar30;
        auVar48._12_4_ = DAT_10070d3c0._4_4_;
        uStack_454 = *(undefined4 *)(puVar40 + 0x158);
        dVar44 = (((double)CONCAT44((undefined4)DAT_10070d3c0,(int)uVar30) - _DAT_10070d3d0) +
                 (auVar48._8_8_ - _UNK_10070d3d8)) / DAT_10070e4d8;
        local_458 = 0x300;
        uStack_456 = 0x400;
        uStack_450 = 0x800;
        uStack_44e = (undefined2)uVar30;
        local_44c = (undefined2)((ulong)uVar30 >> 0x10);
        uStack_446 = 0x800;
        uStack_444 = SUB82(dVar44,0);
        local_442 = (undefined2)((ulong)dVar44 >> 0x10);
        local_440 = (undefined4)((ulong)dVar44 >> 0x20);
        __os_log_impl(0x100000000,uVar26,1,
                      "totals> totalGames = %u, totalGameBytes = %llu (%.2f GB)",&local_458,0x1c);
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
      }
      uVar26 = DAT_1008c75b8;
      cVar12 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar12 != '\0') {
        uVar30 = *(undefined8 *)(puVar40 + 0x170);
        local_44a = (int)((ulong)uVar30 >> 0x20);
        auVar49._8_4_ = local_44a;
        auVar49._0_8_ = uVar30;
        auVar49._12_4_ = DAT_10070d3c0._4_4_;
        uStack_454 = *(undefined4 *)(puVar40 + 0x168);
        dVar44 = (((double)CONCAT44((undefined4)DAT_10070d3c0,(int)uVar30) - _DAT_10070d3d0) +
                 (auVar49._8_8_ - _UNK_10070d3d8)) / DAT_10070e4d8;
        local_458 = 0x300;
        uStack_456 = 0x400;
        uStack_450 = 0x800;
        uStack_44e = (undefined2)uVar30;
        local_44c = (undefined2)((ulong)uVar30 >> 0x10);
        uStack_446 = 0x800;
        uStack_444 = SUB82(dVar44,0);
        local_442 = (undefined2)((ulong)dVar44 >> 0x10);
        local_440 = (undefined4)((ulong)dVar44 >> 0x20);
        __os_log_impl(0x100000000,uVar26,1,
                      "totals> totalApplications = %u, totalApplicationBytes = %llu (%.2f GB)",
                      &local_458,0x1c);
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
      }
      uVar26 = DAT_1008c75b8;
      cVar12 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar12 != '\0') {
        uVar30 = *(undefined8 *)(puVar40 + 0x150);
        local_44a = (int)((ulong)uVar30 >> 0x20);
        auVar50._8_4_ = local_44a;
        auVar50._0_8_ = uVar30;
        auVar50._12_4_ = DAT_10070d3c0._4_4_;
        uStack_454 = *(undefined4 *)(puVar40 + 0x148);
        dVar44 = (((double)CONCAT44((undefined4)DAT_10070d3c0,(int)uVar30) - _DAT_10070d3d0) +
                 (auVar50._8_8_ - _UNK_10070d3d8)) / DAT_10070e4d8;
        local_458 = 0x300;
        uStack_456 = 0x400;
        uStack_450 = 0x800;
        uStack_44e = (undefined2)uVar30;
        local_44c = (undefined2)((ulong)uVar30 >> 0x10);
        uStack_446 = 0x800;
        uStack_444 = SUB82(dVar44,0);
        local_442 = (undefined2)((ulong)dVar44 >> 0x10);
        local_440 = (undefined4)((ulong)dVar44 >> 0x20);
        __os_log_impl(0x100000000,uVar26,1,
                      "totals> totalPhotos = %u, totalPhotoBytes = %llu (%.2f GB)",&local_458,0x1c);
        if (DAT_1008c75c0 != -1) {
          _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
        }
      }
      uVar26 = DAT_1008c75b8;
      cVar12 = _os_log_type_enabled(DAT_1008c75b8,1);
      if (cVar12 != '\0') {
        uVar30 = *(undefined8 *)(local_690 + 0x153b8);
        auVar51._8_4_ = (int)((ulong)uVar30 >> 0x20);
        auVar51._0_8_ = uVar30;
        auVar51._12_4_ = DAT_10070d3c0._4_4_;
        uStack_454 = (undefined4)uVar30;
        dVar44 = (((double)CONCAT44((undefined4)DAT_10070d3c0,uStack_454) - _DAT_10070d3d0) +
                 (auVar51._8_8_ - _UNK_10070d3d8)) / DAT_10070e4d8;
        local_458 = 0x200;
        uStack_456 = 0x800;
        uStack_450 = (undefined2)((ulong)uVar30 >> 0x20);
        uStack_44e = (undefined2)((ulong)uVar30 >> 0x30);
        local_44c = 0x800;
        local_44a = SUB84(dVar44,0);
        uStack_446 = (undefined2)((ulong)dVar44 >> 0x20);
        uStack_444 = (undefined2)((ulong)dVar44 >> 0x30);
        __os_log_impl(0x100000000,uVar26,1,"totals> otherDiskBytes = %llu (%.2f GB)",&local_458,0x16
                     );
      }
    }
    goto switchD_1004f5cc9_caseD_74646465;
  default:
    if (param_2 == 0x74646453) {
      iVar21 = 0;
      if (*(char *)(local_690 + 0x3a2) != '\0') {
        if (*(char *)(local_690 + 0x6ac9) == '\0') {
          uVar26 = FUN_1001cc310();
          cVar12 = _os_log_type_enabled(uVar26,0x10);
          if (cVar12 != '\0') {
            local_458 = 0x202;
            uStack_456 = 0x822;
            uStack_454 = 0x7a0a90;
            uStack_450 = 1;
            uStack_44e = 0;
            local_44c = 0x822;
            local_44a = 0x7d6792;
            uStack_446 = 1;
            uStack_444 = 0;
            __os_log_error_impl(0x100000000,uVar26,0x10,"%{public}s: (%{public}s)",&local_458,0x16);
          }
          FUN_1001782e9(0,0);
        }
        lVar27 = local_690;
        *(undefined1 *)(local_690 + 0x6ac9) = 0;
        if (*(long *)(local_690 + 0x6750) != 0) {
          if (DAT_1008c75c0 != -1) {
            _dispatch_once(&DAT_1008c75c0,&PTR___NSConcreteGlobalBlock_100857068);
          }
          uVar26 = DAT_1008c75b8;
          cVar12 = _os_log_type_enabled(DAT_1008c75b8,2);
          if (cVar12 != '\0') {
            local_458 = 0;
            __os_log_impl(0x100000000,uVar26,2,"progress> showing sync progress bar",&local_458,2);
          }
          FUN_100528074(*(undefined8 *)(lVar27 + 0x6750),1);
        }
      }
      goto switchD_1004f5cc9_caseD_74646465;
    }
    if (param_2 != 0x74646563) goto switchD_1004f5cc9_caseD_74646467;
    if (*(long *)(local_690 + 0x16640) != 0) {
      FUN_1005ab22a();
    }
    *(undefined1 *)(local_690 + 0x6ad1) = 0;
    if (*(int *)(local_690 + 0x152dc) == 0) {
      *(undefined4 *)(local_690 + 0x152dc) = *(undefined4 *)(param_1 + 0x2c58);
    }
    uVar26 = FUN_1001c156e();
    FUN_1001c6987(uVar26,0x69706378,*(undefined4 *)(local_690 + 0x28),0,0);
    if (*(long *)(local_690 + 0x16688) == 0) {
      if ((*(int *)(param_1 + 0x2c58) != 0) ||
         (uVar13 = 1, *(int *)(local_690 + 0x15398) != *(int *)(local_690 + 0x1539c))) {
        uVar13 = 0;
      }
      FUN_1004e7aad(local_690,uVar13);
      FUN_1004eecd1(local_690);
    }
    lVar27 = local_690;
    FUN_1002d79dd(local_690);
    FUN_1004ef324(lVar27,0x8000000000000009,1);
    FUN_1004ee22c(local_690);
    cVar12 = FUN_10057b95c(*(undefined8 *)(local_690 + 0x157f0));
    if (cVar12 != '\0') {
      uVar26 = *(undefined8 *)(local_690 + 0x157f0);
      cVar12 = FUN_100266cae(*(undefined8 *)(local_690 + 0x66d8));
      FUN_1005c9432(local_690,uVar26,cVar12 == '\0');
    }
    lVar27 = local_690;
    FUN_10057bdca(*(undefined8 *)(local_690 + 0x157f0));
    FUN_10023318f(lVar27,"");
  }
LAB_1004f900b:
  iVar21 = 0;
switchD_1004f5cc9_caseD_74646465:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar21;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

