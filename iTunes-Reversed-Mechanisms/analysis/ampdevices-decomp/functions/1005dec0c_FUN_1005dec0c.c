// name: FUN_1005dec0c
// address: 1005dec0c

int FUN_1005dec0c(long param_1,int param_2,undefined4 *param_3,undefined4 *param_4,uint *param_5,
                 uint *param_6,undefined4 *param_7,byte *param_8,byte *param_9)

{
  byte bVar1;
  uint uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  uint *puVar13;
  undefined8 uVar14;
  ushort *puVar15;
  byte bVar16;
  byte bVar17;
  uint uVar18;
  long lVar19;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  long lStack_d0;
  undefined8 local_c8;
  undefined4 local_b4;
  uint *local_b0;
  uint *local_a8;
  ushort *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  uint uStack_90;
  undefined2 uStack_8c;
  undefined2 uStack_8a;
  undefined2 uStack_88;
  undefined4 uStack_86;
  undefined2 uStack_82;
  uint *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_d8 = 0;
  lStack_d0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  local_c8 = 0;
  *param_5 = 0;
  *param_6 = 0;
  *param_7 = 0;
  *param_8 = 0;
  *param_9 = 0;
  FUN_1001c62d9(&local_e8,0x28);
  local_a0 = (ushort *)(param_1 + 4);
  iVar8 = FUN_1005e2282(&local_a0,3);
  if (iVar8 == -0x80) goto LAB_1005df112;
  if (iVar8 == 0) {
    bVar17 = (byte)local_a0[1];
    local_e8._0_3_ = CONCAT12(bVar17,*local_a0 << 8 | *local_a0 >> 8);
    bVar16 = bVar17 >> 7;
    puVar15 = (ushort *)((long)local_a0 + (ulong)bVar16 * 2 + 3);
    if ((bVar17 & 0x40) != 0) {
      bVar1 = (byte)*puVar15;
      puVar15 = (ushort *)((long)local_a0 + (ulong)(bVar1 - 1) + (ulong)bVar16 * 2 + 5);
      if (bVar1 == 0) {
        puVar15 = local_a0 + (ulong)bVar16 + 2;
      }
    }
    local_a0 = puVar15;
    if ((bVar17 & 0x20) != 0) {
      local_a0 = puVar15 + 1;
    }
    iVar8 = FUN_1005e2282(&local_a0,4);
    if (iVar8 == 0) {
      uStack_e0 = CONCAT62(uStack_e0._2_6_,*local_a0);
      uStack_e0 = CONCAT44((uint)(byte)local_a0[2] |
                           (uint)*(byte *)((long)local_a0 + 3) << 8 |
                           (uint)(byte)local_a0[1] << 0x10,(undefined4)uStack_e0);
      uVar9 = *(uint *)((long)local_a0 + 5);
      uVar18 = *(uint *)((long)local_a0 + 9);
      local_d8 = CONCAT44(uVar18 >> 0x18 | (uVar18 & 0xff0000) >> 8 | (uVar18 & 0xff00) << 8 |
                          uVar18 << 0x18,
                          uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                          uVar9 << 0x18);
      local_a0 = (ushort *)((long)local_a0 + 0xd);
      iVar8 = FUN_1005e2282(&local_a0,5);
      puVar15 = local_a0;
      if (iVar8 == -0x80) goto LAB_1005deff6;
      if (iVar8 == 0) {
        lVar19 = ((ulong)(param_2 - 4) + param_1 + 4) - (long)local_a0;
        local_b0 = param_5;
        lStack_d0 = FUN_1001c5c8c(lVar19);
        if (lStack_d0 == 0) {
          uVar14 = FUN_1001cc310();
          cVar7 = _os_log_type_enabled(uVar14,0x10);
          if (cVar7 != '\0') {
            local_98 = 0x8220202;
            uStack_94 = 0x7a0a90;
            uStack_90 = 1;
            uStack_8c = 0x822;
            uStack_8a = 0x1a91;
            uStack_88 = 0x7f;
            uStack_86 = 1;
            __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_98,0x16);
          }
          FUN_1001782e9(0,0);
          iVar8 = -0xd0;
          param_5 = local_b0;
          goto LAB_1005defd9;
        }
        uVar14 = FUN_1001c627e(lStack_d0);
        FUN_1001c631b(puVar15,uVar14,lVar19);
        local_a0 = (ushort *)((long)puVar15 + lVar19);
        param_5 = local_b0;
        goto LAB_1005deff6;
      }
      uVar14 = FUN_1001cc310();
      cVar7 = _os_log_type_enabled(uVar14,0x10);
      if (cVar7 != '\0') {
        local_98 = 0x8220202;
        uStack_94 = 0x7a0a90;
        uStack_90 = 1;
        uStack_8c = 0x400;
        uStack_8a = (undefined2)iVar8;
        uStack_88 = (undefined2)((uint)iVar8 >> 0x10);
        __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",&local_98,0x12);
      }
      if (iVar8 != 0) {
LAB_1005defd9:
        uVar14 = FUN_1001cc310();
        cVar7 = _os_log_type_enabled(uVar14,0x10);
        if (cVar7 != '\0') {
          uStack_8a = (undefined2)iVar8;
          uStack_88 = (undefined2)((uint)iVar8 >> 0x10);
          goto LAB_1005df586;
        }
        goto LAB_1005deff6;
      }
    }
    else {
      if (iVar8 == -0x80) {
        iVar8 = -0x80;
        goto LAB_1005df112;
      }
      uVar14 = FUN_1001cc310();
      cVar7 = _os_log_type_enabled(uVar14,0x10);
      if (cVar7 == '\0') goto LAB_1005deff6;
      uStack_8a = (undefined2)iVar8;
      uStack_88 = (undefined2)((uint)iVar8 >> 0x10);
LAB_1005df586:
      uStack_8c = 0x400;
      uStack_90 = 1;
      uStack_94 = 0x7a0a90;
      local_98 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",&local_98,0x12);
LAB_1005deff6:
      if (iVar8 == -0x80) goto LAB_1005df112;
      if (iVar8 != 0) {
        uVar14 = FUN_1001cc310();
        cVar7 = _os_log_type_enabled(uVar14,0x10);
        if (cVar7 != '\0') {
          uStack_8a = (undefined2)iVar8;
          uStack_88 = (undefined2)((uint)iVar8 >> 0x10);
          uVar3 = uStack_8a;
          uVar5 = uStack_88;
          goto LAB_1005def8e;
        }
        goto LAB_1005ded8a;
      }
    }
    iVar8 = FUN_1005e2282(&local_a0,6);
    if (iVar8 != -0x80) {
      if (iVar8 == 0) {
        local_c8 = CONCAT71(local_c8._1_7_,(byte)*local_a0);
      }
      else {
        uVar14 = FUN_1001cc310();
        cVar7 = _os_log_type_enabled(uVar14,0x10);
        uVar6 = uStack_88;
        uVar4 = uStack_8a;
        uStack_8a = (undefined2)iVar8;
        uVar3 = uStack_8a;
        uStack_88 = (undefined2)((uint)iVar8 >> 0x10);
        uVar5 = uStack_88;
        if (cVar7 != '\0') {
          local_98 = 0x8220202;
          uStack_94 = 0x7a0a90;
          uStack_90 = 1;
          uStack_8c = 0x400;
          __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",&local_98,0x12);
          uVar4 = uStack_8a;
          uVar6 = uStack_88;
        }
        uStack_88 = uVar6;
        uStack_8a = uVar4;
        if (iVar8 == 0) {
          iVar8 = 0;
          goto LAB_1005df112;
        }
        uVar14 = FUN_1001cc310();
        cVar7 = _os_log_type_enabled(uVar14,0x10);
        if (cVar7 != '\0') goto LAB_1005def8e;
      }
    }
  }
  else {
    uVar14 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar14,0x10);
    if (cVar7 != '\0') {
      uStack_8a = (undefined2)iVar8;
      uStack_88 = (undefined2)((uint)iVar8 >> 0x10);
      uVar3 = uStack_8a;
      uVar5 = uStack_88;
LAB_1005def8e:
      uStack_88 = uVar5;
      uStack_8a = uVar3;
      uStack_90 = 1;
      uStack_94 = 0x7a0a90;
      uStack_8c = 0x400;
      local_98 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",&local_98,0x12);
    }
  }
LAB_1005ded8a:
  if ((iVar8 != -0x80) && (iVar8 != 0)) {
    uVar14 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar14,0x10);
    if (cVar7 != '\0') {
      local_98 = 0x8220202;
      uStack_94 = 0x7a0a90;
      uStack_90 = 1;
      uStack_8c = 0x400;
      uStack_8a = (undefined2)iVar8;
      uStack_88 = (undefined2)((uint)iVar8 >> 0x10);
      __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",&local_98,0x12);
    }
  }
LAB_1005df112:
  lVar19 = lStack_d0;
  if (iVar8 != -0x80) {
    if (iVar8 == 0) {
      local_b0 = param_5;
      puVar13 = (uint *)FUN_1001c627e(lStack_d0);
      uStack_90 = FUN_1001c5d9c(lVar19);
      uStack_8c = 0;
      uStack_8a = 0;
      uStack_58 = 0;
      local_50 = 0;
      uStack_48 = 0;
      uVar18 = 0;
      local_40 = 0;
      local_98 = SUB84(puVar13,0);
      uStack_94 = (undefined4)((ulong)puVar13 >> 0x20);
      uStack_88 = SUB82(puVar13,0);
      uStack_86 = (undefined4)((ulong)puVar13 >> 0x10);
      uStack_82 = (undefined2)((ulong)puVar13 >> 0x30);
      local_80 = (uint *)((ulong)uStack_90 + (long)puVar13);
      uVar9 = *puVar13;
      uStack_78 = CONCAT44(0x20,uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 |
                                uVar9 << 0x18);
      local_60 = 0;
      local_70 = 0;
      uStack_68 = 0;
      while (puVar13 < local_80) {
        while( true ) {
          uVar14 = uStack_78;
          iVar8 = FUN_1005e24cd(&local_98,0x18);
          uStack_88 = SUB82(puVar13,0);
          uStack_86 = (undefined4)((ulong)puVar13 >> 0x10);
          uStack_82 = (undefined2)((ulong)puVar13 >> 0x30);
          uStack_78 = uVar14;
          if (iVar8 == 1) break;
          FUN_1005e24cd(&local_98,8);
          puVar13 = (uint *)CONCAT26(uStack_82,CONCAT42(uStack_86,uStack_88));
          if (local_80 <= puVar13) goto LAB_1005df42e;
        }
        FUN_1005e24cd(&local_98,0x18);
        uVar9 = FUN_1005e24cd(&local_98,8);
        if (uVar9 == 0xb5) {
          local_a8 = param_6;
          iVar8 = FUN_1005e24cd(&local_98,1);
          if (iVar8 == 1) {
            FUN_1005e24cd(&local_98,4);
            FUN_1005e24cd(&local_98,3);
          }
          iVar8 = FUN_1005e24cd(&local_98,4);
          if ((iVar8 - 1U < 2) && (iVar10 = FUN_1005e24cd(&local_98,1), iVar10 == 1)) {
            FUN_1005e24cd(&local_98,3);
            FUN_1005e24cd(&local_98,1);
            iVar10 = FUN_1005e24cd(&local_98,1);
            if (iVar10 != 0) {
              FUN_1005e24cd(&local_98,8);
              FUN_1005e24cd(&local_98,8);
              FUN_1005e24cd(&local_98,8);
            }
          }
          FUN_1005e24cd(&local_98,1);
          FUN_1005e24cd(&local_98,uStack_78._4_4_ & 7);
          uVar14 = uStack_78;
          uVar5 = uStack_82;
          uVar11 = uStack_86;
          uVar3 = uStack_88;
          iVar10 = FUN_1005e24cd(&local_98,0x20);
          param_6 = local_a8;
          uStack_88 = uVar3;
          uStack_86 = uVar11;
          uStack_82 = uVar5;
          uStack_78 = uVar14;
          if (iVar10 == 0x1b2) {
            iVar10 = FUN_1005e2564(&local_98);
            param_6 = local_a8;
joined_r0x0001005df34c:
            if (iVar10 != 0) {
              iVar8 = -0x80;
              if (iVar10 != -0x80) goto LAB_1005df434;
              goto LAB_1005df46f;
            }
          }
          else {
            if (iVar8 != 1) break;
            FUN_1005e24cd(&local_98,0x18);
            FUN_1005e24cd(&local_98,8);
            uVar14 = uStack_78;
            uVar5 = uStack_82;
            uVar11 = uStack_86;
            uVar3 = uStack_88;
            iVar8 = FUN_1005e24cd(&local_98,0x16);
            uStack_88 = uVar3;
            uStack_86 = uVar11;
            uStack_82 = uVar5;
            uStack_78 = uVar14;
            if (iVar8 == 0x20) break;
          }
        }
        else if (uVar9 == 0xb0) {
          uVar9 = FUN_1005e24cd(&local_98,8);
          if ((uVar9 - 0xf0 < 6) || ((uVar9 < 9 && ((0x10eU >> (uVar9 & 0x1f) & 1) != 0)))) {
            uVar18 = uVar9;
          }
LAB_1005df39c:
          uVar14 = uStack_78;
          uVar5 = uStack_82;
          uVar11 = uStack_86;
          uVar3 = uStack_88;
          iVar8 = FUN_1005e24cd(&local_98,0x20);
          uStack_88 = uVar3;
          uStack_86 = uVar11;
          uStack_82 = uVar5;
          uStack_78 = uVar14;
          if (iVar8 == 0x1b2) {
            iVar10 = FUN_1005e2564(&local_98);
            goto joined_r0x0001005df34c;
          }
        }
        else if (0x1f < uVar9) {
          if (uVar9 < 0x30) {
            iVar10 = 1;
            FUN_1005e24cd(&local_98,1);
            iVar8 = FUN_1005e24cd(&local_98,8);
            if (iVar8 != 0x12) {
              iVar8 = FUN_1005e24cd(&local_98,1);
              if (iVar8 != 0) {
                iVar10 = FUN_1005e24cd(&local_98,4);
                FUN_1005e24cd(&local_98,3);
              }
              iVar8 = FUN_1005e24cd(&local_98,4);
              if (iVar8 == 0xf) {
                FUN_1005e24cd(&local_98,8);
                FUN_1005e24cd(&local_98,8);
              }
              iVar8 = FUN_1005e24cd(&local_98,1);
              if (iVar8 == 1) {
                FUN_1005e24cd(&local_98,2);
                FUN_1005e24cd(&local_98,1);
                iVar8 = FUN_1005e24cd(&local_98,1);
                if (iVar8 == 1) {
                  FUN_1005e24cd(&local_98,0x1b);
                  FUN_1005e24cd(&local_98,0x1b);
                  FUN_1005e24cd(&local_98,0x19);
                }
              }
              iVar8 = FUN_1005e24cd(&local_98,2);
              if (iVar8 != 3 || iVar10 == 1) {
                local_a8 = (uint *)CONCAT44(local_a8._4_4_,iVar10);
                FUN_1005e24cd(&local_98,1);
                uVar9 = FUN_1005e24cd(&local_98,0x10);
                FUN_1005e24cd(&local_98,1);
                iVar10 = FUN_1005e24cd(&local_98,1);
                if (iVar10 != 0) {
                  uVar2 = 0x1f;
                  if (uVar9 != 0) {
                    for (; uVar9 >> uVar2 == 0; uVar2 = uVar2 - 1) {
                    }
                  }
                  iVar10 = 1;
                  if (1 < uVar9) {
                    iVar10 = (uVar2 ^ 0xffffffe0) + 0x21;
                  }
                  FUN_1005e24cd(&local_98,iVar10);
                }
                if (iVar8 != 2) {
                  iVar10 = (int)local_a8;
                  if (iVar8 == 0) {
                    FUN_1005e24cd(&local_98,1);
                    local_b4 = FUN_1005e24cd(&local_98,0xd);
                    FUN_1005e24cd(&local_98,1);
                    uVar11 = FUN_1005e24cd(&local_98,0xd);
                    FUN_1005e24cd(&local_98,1);
                    *param_3 = local_b4;
                    *param_4 = uVar11;
                    iVar10 = (int)local_a8;
                  }
                  iVar12 = FUN_1005e24cd(&local_98,1);
                  if ((((((iVar12 == 0) && (iVar12 = FUN_1005e24cd(&local_98,1), iVar12 != 0)) &&
                        (iVar12 = FUN_1005e24cd(&local_98,(iVar10 != 1) + '\x01'), iVar12 == 0)) &&
                       ((iVar8 == 0 || iVar10 == 1 ||
                        (iVar12 = FUN_1005e24cd(&local_98,1), iVar12 != 0)))) &&
                      ((iVar12 = FUN_1005e24cd(&local_98,1), iVar8 != 3 &&
                       ((iVar12 != 1 && (iVar8 = FUN_1005e24cd(&local_98,1), iVar8 != 1)))))) &&
                     ((iVar10 == 1 || (iVar8 = FUN_1005e24cd(&local_98,1), iVar8 == 0)))) {
                    iVar8 = FUN_1005e24cd(&local_98,1);
                    if (iVar8 == 0) {
                      FUN_1005e25cc(&local_98);
                    }
                    FUN_1005e24cd(&local_98,1);
                    iVar8 = FUN_1005e24cd(&local_98,1);
                    if (iVar8 != 0) {
                      FUN_1005e24cd(&local_98,1);
                    }
                    if ((((int)local_a8 == 1) ||
                        ((iVar8 = FUN_1005e24cd(&local_98,1), iVar8 == 0 &&
                         (iVar8 = FUN_1005e24cd(&local_98,1), iVar8 == 0)))) &&
                       (iVar8 = FUN_1005e24cd(&local_98,1), iVar8 == 0)) {
                      *param_6 = (uint)local_d8 / 1000;
                      *local_b0 = local_d8._4_4_ / 1000;
                      *param_7 = uStack_e0._4_4_;
                      iVar8 = 0;
                      bVar17 = (byte)uVar18;
                      if ((uVar18 & 0xf0) == 0) {
                        *param_8 = bVar17;
                        if (uVar18 == 8) {
                          *param_9 = 0;
                          goto LAB_1005df46f;
                        }
                      }
                      else {
                        if ((uVar18 & 0xf0) != 0xf0) goto LAB_1005df46f;
                        *param_8 = bVar17;
                      }
                      *param_9 = bVar17 & 0xf;
                      goto LAB_1005df46f;
                    }
                  }
                }
              }
            }
            break;
          }
          if (uVar9 == 0xb3) {
            FUN_1005e24cd(&local_98,0x14);
            FUN_1005e24cd(&local_98,1);
            FUN_1005e24cd(&local_98,uStack_78._4_4_ & 7);
            goto LAB_1005df39c;
          }
        }
        puVar13 = (uint *)CONCAT26(uStack_82,CONCAT42(uStack_86,uStack_88));
        if (local_80 <= puVar13) break;
      }
LAB_1005df42e:
      iVar10 = -0x7da;
LAB_1005df434:
      iVar8 = iVar10;
      uVar14 = FUN_1001cc310();
      cVar7 = _os_log_type_enabled(uVar14,0x10);
      if (cVar7 != '\0') {
        local_98 = 0x8220202;
        uStack_94 = 0x7a0a90;
        uStack_90 = 1;
        uStack_8c = 0x400;
        uStack_8a = (undefined2)iVar8;
        uStack_88 = (undefined2)((uint)iVar8 >> 0x10);
        __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",&local_98,0x12);
      }
      goto LAB_1005df46f;
    }
    uVar14 = FUN_1001cc310();
    cVar7 = _os_log_type_enabled(uVar14,0x10);
    if (cVar7 != '\0') {
      local_98 = 0x8220202;
      uStack_94 = 0x7a0a90;
      uStack_90 = 1;
      uStack_8c = 0x400;
      uStack_8a = (undefined2)iVar8;
      uStack_88 = (undefined2)((uint)iVar8 >> 0x10);
      __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",&local_98,0x12);
    }
  }
LAB_1005df46f:
  if (lStack_d0 != 0) {
    FUN_1001c6209();
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

