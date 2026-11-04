// name: FUN_1001f44f6
// address: 1001f44f6

void * FUN_1001f44f6(undefined8 param_1,int param_2,undefined8 param_3,undefined4 *param_4)

{
  long lVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  void *pvVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  char *pcVar17;
  ulong uVar18;
  undefined8 *puVar19;
  int iVar20;
  uint uVar21;
  void *pvVar22;
  ulong uVar23;
  undefined1 auVar24 [16];
  undefined1 auStack_10268 [8];
  undefined1 auStack_10260 [8];
  undefined1 auStack_10258 [8];
  ulong uStack_10250;
  ulong uStack_10248;
  ulong uStack_10240;
  long lStack_10238;
  undefined8 *puStack_10230;
  ulong uStack_10228;
  long lStack_10220;
  ulong uStack_10218;
  void *pvStack_10210;
  ulong uStack_10208;
  ulong uStack_10200;
  ulong uStack_101f8;
  ulong uStack_101f0;
  ulong uStack_101e8;
  void *pvStack_101e0;
  undefined4 uStack_101d8;
  undefined4 uStack_101d4;
  undefined4 uStack_101d0;
  undefined4 uStack_101cc;
  undefined8 uStack_101c8;
  undefined8 uStack_101c0;
  undefined8 uStack_101b8;
  code *pcStack_101b0;
  undefined8 uStack_101a8;
  undefined8 uStack_101a0;
  undefined8 uStack_10198;
  undefined8 uStack_10190;
  undefined8 uStack_10188;
  ulong uStack_10180;
  undefined8 uStack_10178;
  undefined8 uStack_10170;
  undefined4 uStack_10168;
  undefined4 uStack_100f0;
  void *local_40;
  long local_38;
  
  auVar24 = FUN_100108310();
  puVar19 = auVar24._8_8_;
  lVar1 = -auVar24._0_8_;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  uStack_10190 = 0;
  uStack_10188 = 0;
  if (param_4 == (undefined4 *)0x0) {
    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4586;
    FUN_1001a70c6(&uStack_101d8);
  }
  else {
    uStack_10188 = *(undefined8 *)(param_4 + 0x14);
    uStack_10198 = *(undefined8 *)(param_4 + 0x10);
    uStack_10190 = *(undefined8 *)(param_4 + 0x12);
    uStack_101d8 = *param_4;
    uStack_101d4 = param_4[1];
    uStack_101d0 = param_4[2];
    uStack_101cc = param_4[3];
    uStack_101c8 = *(undefined8 *)(param_4 + 4);
    uStack_101c0 = *(undefined8 *)(param_4 + 6);
    uStack_101b8 = *(undefined8 *)(param_4 + 8);
    pcStack_101b0 = *(code **)(param_4 + 10);
    uStack_101a8 = *(undefined8 *)(param_4 + 0xc);
    uStack_101a0 = *(undefined8 *)(param_4 + 0xe);
  }
  *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f45a6;
  uStack_10180 = FUN_1001a7017(&uStack_101d8,param_1,(param_2 == 0) * '\x04' + '\a');
  if (uStack_10180 != 0) {
    if (param_2 == 1) {
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f45d1;
      FUN_1001a702e(&uStack_101d8,uStack_10180,0,2);
    }
    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f45e7;
    FUN_1001a7046(&uStack_101d8,uStack_10180);
    uStack_100f0 = 0;
    *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4602;
    pvVar11 = _malloc(0x101a0);
    uVar15 = uStack_10180;
    uStack_10178 = 0;
    uStack_10170 = 0;
    uStack_10168 = 0;
    if (pvVar11 == (void *)0x0) {
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4a90;
      (*pcStack_101b0)(uStack_101a0,uStack_10180);
    }
    else {
      local_40 = (void *)0x0;
      bVar2 = true;
      if (param_2 == 2) {
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f464f;
        lVar12 = FUN_1001a702e(&uStack_101d8,uStack_10180,0,2);
        puStack_10230 = puVar19;
        pvStack_10210 = pvVar11;
        if (lVar12 == 0) {
          *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4675;
          uVar13 = FUN_1001a7046(&uStack_101d8,uVar15);
          pvStack_101e0 = (void *)0xffff;
          if (uVar13 < 0xffff) {
            pvStack_101e0 = (void *)uVar13;
          }
          *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4695;
          pvVar11 = _malloc(0x404);
          if (pvVar11 != (void *)0x0) {
            uStack_101e8 = uVar13;
            if (4 < uVar13) {
              pvVar22 = (void *)0x4;
              uStack_101f8 = uVar15;
              do {
                uVar15 = uStack_101f8;
                uStack_101f0 = (long)pvVar22 + 0x400;
                pvVar22 = pvStack_101e0;
                if (uStack_101f0 < pvStack_101e0) {
                  pvVar22 = (void *)uStack_101f0;
                }
                lVar12 = uStack_101e8 - (long)pvVar22;
                uVar13 = 0x404;
                if (pvVar22 < 0x404) {
                  uVar13 = (ulong)pvVar22;
                }
                *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4710;
                lVar14 = FUN_1001a702e(&uStack_101d8,uStack_101f8,lVar12,0);
                if (lVar14 != 0) break;
                *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f472f;
                uVar15 = (*(code *)CONCAT44(uStack_101cc,uStack_101d0))(uStack_101a0,uVar15,pvVar11)
                ;
                if (uVar15 != uVar13) break;
                uVar15 = (ulong)((int)uVar13 - 4);
                iVar7 = (int)uVar13 + -3;
                do {
                  if ((((*(char *)((long)pvVar11 + uVar15) == 'P') &&
                       (*(char *)((long)pvVar11 + uVar15 + 1) == 'K')) &&
                      (*(char *)((long)pvVar11 + uVar15 + 2) == '\x06')) &&
                     (*(char *)((long)pvVar11 + uVar15 + 3) == '\a')) {
                    if (lVar12 + uVar15 != 0) {
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4799;
                      _free(pvVar11);
                      uVar13 = uStack_101f8;
                      uVar16 = uStack_101f0;
                      if (uStack_101e8 < uStack_101f0) {
                        uVar16 = uStack_101e8;
                      }
                      if (0xfffe < uVar16) {
                        uVar16 = 0xffff;
                      }
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f47d8;
                      lVar12 = FUN_1001a702e(&uStack_101d8,uStack_101f8,
                                             (uStack_101e8 - uVar16) + uVar15,0);
                      if (lVar12 != 0) goto LAB_1001f4a9d;
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f47f7;
                      iVar7 = FUN_1001f6d66(&uStack_101d8,uVar13,&uStack_10208);
                      if (iVar7 != 0) goto LAB_1001f4a9d;
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4815;
                      iVar7 = FUN_1001f6d66(&uStack_101d8,uVar13,&uStack_10208);
                      if ((iVar7 != 0) || (uStack_10208 != 0)) goto LAB_1001f4a9d;
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4841;
                      iVar7 = FUN_1001f6e2a(&uStack_101d8,uVar13,&uStack_10240);
                      if (iVar7 != 0) goto LAB_1001f4a9d;
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f485f;
                      iVar7 = FUN_1001f6d66(&uStack_101d8,uVar13,&uStack_10208);
                      if ((iVar7 != 0) || (uStack_10208 != 1)) goto LAB_1001f4a9d;
                      uStack_101f0 = uStack_10240;
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4894;
                      lVar12 = FUN_1001a702e(&uStack_101d8,uVar13,uStack_10240,0);
                      if (lVar12 != 0) goto LAB_1001f4a9d;
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f48b3;
                      iVar7 = FUN_1001f6d66(&uStack_101d8,uVar13,&uStack_10208);
                      if (((iVar7 != 0) || (uStack_10208 != 0x6064b50)) || (uStack_101f0 == 0))
                      goto LAB_1001f4a9d;
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f48f7;
                      lVar12 = FUN_1001a702e(&uStack_101d8,uStack_10180,uStack_101f0,0);
                      pvStack_101e0 = (void *)CONCAT71(pvStack_101e0._1_7_,lVar12 != 0);
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4915;
                      iVar7 = FUN_1001f6d66(&uStack_101d8,uStack_10180,&uStack_10200);
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f492c;
                      iVar20 = FUN_1001f6e2a(&uStack_101d8,uStack_10180,auStack_10258);
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4945;
                      uVar3 = FUN_1001f6f7e(&uStack_101d8,uStack_10180,auStack_10268);
                      uStack_101e8 = CONCAT44(uStack_101e8._4_4_,uVar3);
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f495f;
                      iVar8 = FUN_1001f6f7e(&uStack_101d8,uStack_10180,auStack_10260);
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4976;
                      iVar9 = FUN_1001f6d66(&uStack_101d8,uStack_10180,&uStack_10228);
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f498d;
                      iVar4 = FUN_1001f6d66(&uStack_101d8,uStack_10180,&lStack_10220);
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f49a7;
                      iVar5 = FUN_1001f6e2a(&uStack_101d8,uStack_10180,&uStack_10250);
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f49be;
                      iVar6 = FUN_1001f6e2a(&uStack_101d8,uStack_10180,&uStack_10248);
                      bVar2 = (int)uStack_101e8 != 0;
                      uStack_101e8 = uStack_10248;
                      uVar21 = 0xffffff99;
                      if ((uStack_10250 == uStack_10248 && lStack_10220 == 0) && uStack_10228 == 0)
                      {
                        uVar21 = -(uint)((((iVar8 != 0 || bVar2) ||
                                          ((iVar6 != 0 || iVar5 != 0) || (iVar4 != 0 || iVar9 != 0))
                                          ) || (iVar20 != 0 || iVar7 != 0)) | (byte)pvStack_101e0);
                      }
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4a32;
                      iVar7 = FUN_1001f6e2a(&uStack_101d8,uStack_10180,&uStack_10208);
                      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4a4c;
                      iVar20 = FUN_1001f6e2a(&uStack_101d8,uStack_10180,&uStack_10240);
                      uVar10 = 0xffffffff;
                      if (iVar20 == 0 && iVar7 == 0) {
                        uVar10 = uVar21;
                      }
                      lStack_10238 = 0;
                      pvStack_101e0 = (void *)uStack_10240;
                      uVar15 = uStack_10208;
                      pvVar11 = pvStack_10210;
                      goto LAB_1001f4de9;
                    }
                    break;
                  }
                  uVar15 = uVar15 - 1;
                  iVar20 = iVar7 + -1;
                  bVar2 = 0 < iVar7;
                  iVar7 = iVar20;
                } while (iVar20 != 0 && bVar2);
              } while (uStack_101f0 < pvStack_101e0);
            }
            *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4a9d;
            _free(pvVar11);
          }
        }
LAB_1001f4a9d:
        uVar15 = uStack_10180;
        uVar13 = 0;
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4aba;
        lVar12 = FUN_1001a702e(&uStack_101d8,uStack_10180,0,2);
        if (lVar12 == 0) {
          *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4ad2;
          uVar16 = FUN_1001a7046(&uStack_101d8,uVar15);
          uVar13 = 0xffff;
          if (uVar16 < 0xffff) {
            uVar13 = uVar16;
          }
          *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4aec;
          pvStack_101e0 = _malloc(0x404);
          if (pvStack_101e0 == (void *)0x0) {
            uVar13 = 0;
          }
          else {
            if (4 < uVar16) {
              uStack_101f0 = uVar15;
              uStack_101e8 = -uVar16;
              uStack_101f8 = (long)pvStack_101e0 + 3;
              uVar15 = 4;
              uStack_10218 = uVar16;
              while( true ) {
                uVar16 = uStack_101f0;
                uVar18 = uVar15 + 0x400;
                uVar15 = uVar13;
                if (uVar18 < uVar13) {
                  uVar15 = uVar18;
                }
                uVar23 = 0x404;
                if (uVar15 < 0x404) {
                  uVar23 = uVar15;
                }
                *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4b80;
                lVar12 = FUN_1001a702e(&uStack_101d8,uStack_101f0,uStack_10218 - uVar15,0);
                if (lVar12 != 0) break;
                *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4ba3;
                uVar16 = (*(code *)CONCAT44(uStack_101cc,uStack_101d0))
                                   (uStack_101a0,uVar16,pvStack_101e0,uVar23);
                if (uVar16 != uVar23) break;
                uVar16 = (ulong)((int)uVar23 - 4);
                lVar12 = (uStack_101e8 + uVar15) - uVar16;
                pcVar17 = (char *)(uVar16 + uStack_101f8);
                iVar7 = (int)uVar23 + -3;
                do {
                  if (((pcVar17[-3] == 'P') && (pcVar17[-2] == 'K')) &&
                     ((pcVar17[-1] == '\x05' && (*pcVar17 == '\x06')))) {
                    if (lVar12 != 0) {
                      uVar13 = -lVar12;
                      goto LAB_1001f4c10;
                    }
                    break;
                  }
                  lVar12 = lVar12 + 1;
                  pcVar17 = pcVar17 + -1;
                  iVar20 = iVar7 + -1;
                  bVar2 = 0 < iVar7;
                  iVar7 = iVar20;
                } while (iVar20 != 0 && bVar2);
                if (uVar13 <= uVar18) break;
              }
            }
            uVar13 = 0;
LAB_1001f4c10:
            *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4c1c;
            _free(pvStack_101e0);
          }
        }
        pvStack_101e0 = (void *)0x0;
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4c4b;
        uStack_101f0 = uVar13;
        uStack_101e8 = FUN_1001a702e(&uStack_101d8,uStack_10180,uVar13,0);
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4c68;
        iVar7 = FUN_1001f6d66(&uStack_101d8,uStack_10180,&uStack_10200);
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4c7e;
        iVar20 = FUN_1001f6f7e(&uStack_101d8,uStack_10180,&uStack_10228);
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4c94;
        iVar8 = FUN_1001f6f7e(&uStack_101d8,uStack_10180,&lStack_10220);
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4ca6;
        iVar9 = FUN_1001f6f7e(&uStack_101d8,uStack_10180,&uStack_10200);
        if (iVar9 == 0) {
          uStack_101f8 = CONCAT44(uStack_101f8._4_4_,
                                  -(uint)((iVar8 != 0 || (iVar20 != 0 || iVar7 != 0)) ||
                                         uStack_101e8 != 0));
          pvStack_101e0 = (void *)uStack_10200;
        }
        else {
          uStack_101f8 = CONCAT44(uStack_101f8._4_4_,0xffffffff);
        }
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4d02;
        iVar7 = FUN_1001f6f7e(&uStack_101d8,uStack_10180,&uStack_10200);
        uStack_101e8 = 0;
        if (iVar7 == 0) {
          uStack_101e8 = uStack_10200;
        }
        uStack_10218 = uStack_10228;
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4d45;
        iVar20 = FUN_1001f6d66(&uStack_101d8,uStack_10180,&uStack_10200);
        uVar15 = 0;
        uVar21 = 0xffffffff;
        if (iVar20 == 0) {
          uVar15 = uStack_10200;
          uVar21 = 0xffffff99;
          if ((pvStack_101e0 == (void *)uStack_101e8 && lStack_10220 == 0) && uStack_10218 == 0) {
            uVar21 = -(uint)(iVar7 != 0) | (uint)uStack_101f8;
          }
        }
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4d9e;
        iVar7 = FUN_1001f6d66(&uStack_101d8,uStack_10180,&uStack_10200);
        pvVar11 = pvStack_10210;
        if (iVar7 == 0) {
          pvStack_101e0 = (void *)uStack_10200;
        }
        else {
          pvStack_101e0 = (void *)0x0;
        }
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4ddd;
        iVar20 = FUN_1001f6f7e(&uStack_101d8,uStack_10180,&lStack_10238);
        uVar10 = 0xffffffff;
        if (iVar20 == 0 && iVar7 == 0) {
          uVar10 = uVar21;
        }
LAB_1001f4de9:
        lVar12 = lStack_10238;
        uVar13 = uStack_101f0 - ((long)pvStack_101e0 + uVar15);
        if ((uStack_101f0 < (long)pvStack_101e0 + uVar15) || (uVar10 != 0)) {
          *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4f09;
          (*pcStack_101b0)(uStack_101a0,uStack_10180);
          bVar2 = false;
          puVar19 = puStack_10230;
        }
        else {
          if (lStack_10238 != 0) {
            *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4e20;
            local_40 = _malloc(lStack_10238 + 1);
            if (local_40 != (void *)0x0) {
              *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4e43;
              lVar12 = (*(code *)CONCAT44(uStack_101cc,uStack_101d0))
                                 (uStack_101a0,uStack_10180,local_40,lVar12);
              *(undefined1 *)((long)local_40 + lVar12) = 0;
            }
          }
          *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4e63;
          pvVar11 = _malloc(0xff0);
          pvStack_101e0 = (void *)((long)pvStack_101e0 + uVar13);
          *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4e8f;
          uStack_101f0 = uVar13;
          lVar12 = FUN_1001a702e(&uStack_101d8,uStack_10180,pvStack_101e0,0);
          iVar7 = -(uint)(lVar12 != 0);
          if ((uVar15 != 0) && (lVar12 == 0)) {
            while( true ) {
              uVar13 = 0xff0;
              if (uVar15 < 0xff0) {
                uVar13 = uVar15;
              }
              *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4ecf;
              uVar16 = (*(code *)CONCAT44(uStack_101cc,uStack_101d0))
                                 (uStack_101a0,uStack_10180,pvVar11,uVar13);
              if (uVar16 != uVar13) break;
              *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4ee6;
              iVar7 = FUN_1001f65a8(&uStack_10178,pvVar11,uVar13);
              uVar15 = uVar15 - uVar13;
              if ((uVar15 == 0) || (iVar7 != 0)) goto LAB_1001f4f1a;
            }
            iVar7 = -1;
          }
LAB_1001f4f1a:
          if (pvVar11 != (void *)0x0) {
            *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4f27;
            _free(pvVar11);
          }
          *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4f5c;
          lVar12 = FUN_1001a702e(&uStack_101d8,uStack_10180,pvStack_101e0,0);
          bVar2 = iVar7 == 0 && lVar12 == 0;
          puVar19 = puStack_10230;
          pvVar11 = pvStack_10210;
        }
      }
      if (puVar19 != (undefined8 *)0x0) {
        *puVar19 = local_40;
      }
      if (bVar2) {
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4f9d;
        _memcpy(pvVar11,&uStack_101d8,0x101a0);
        goto LAB_1001f4fb8;
      }
      if (local_40 != (void *)0x0) {
        *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4fad;
        _free(local_40);
      }
      *(undefined8 *)((long)&local_38 + lVar1) = 0x1001f4fb5;
      _free(pvVar11);
    }
  }
  pvVar11 = (void *)0x0;
LAB_1001f4fb8:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    *(code **)((long)&local_38 + lVar1) = FUN_1001f4fe2;
    ___stack_chk_fail();
  }
  return pvVar11;
}

