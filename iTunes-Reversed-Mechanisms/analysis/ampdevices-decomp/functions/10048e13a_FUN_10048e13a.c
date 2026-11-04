// name: FUN_10048e13a
// address: 10048e13a

int FUN_10048e13a(long param_1,undefined1 param_2,undefined4 *param_3,undefined8 *param_4)

{
  long *plVar1;
  long *plVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  char cVar11;
  int iVar12;
  uint uVar13;
  undefined8 uVar14;
  undefined4 *puVar15;
  long lVar16;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined2 uStack_48;
  undefined4 uStack_46;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 != (undefined8 *)0x0) {
    *param_4 = 0;
  }
  if (param_1 == 0) {
LAB_10048e516:
    uVar14 = FUN_1001cc310();
    cVar11 = _os_log_type_enabled(uVar14,0x10);
    if (cVar11 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x696c;
      uStack_48 = 0x7b;
      uStack_46 = 1;
      __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    if (*(int *)(param_1 + 0x80) != 0x74646174) {
      uVar14 = FUN_1001cc310();
      cVar11 = _os_log_type_enabled(uVar14,0x10);
      if (cVar11 != '\0') {
        local_58 = 0x8220202;
        uStack_54 = 0x7ab58c;
        uStack_50 = 1;
        uStack_4c = 0x822;
        uStack_4a = 0xec03;
        uStack_48 = 0x7a;
        uStack_46 = 1;
        __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
      }
      cVar11 = FUN_1001782e9(0,1);
      if (cVar11 == '\0') goto LAB_10048e516;
    }
    if (param_3 != (undefined4 *)0x0) {
      puVar15 = (undefined4 *)FUN_1001c629e(0x518,&DAT_100711c6e);
      if (puVar15 == (undefined4 *)0x0) {
        uVar14 = FUN_1001cc310();
        cVar11 = _os_log_type_enabled(uVar14,0x10);
        if (cVar11 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          uStack_4c = 0x822;
          uStack_4a = 0x8d24;
          uStack_48 = 0x7b;
          uStack_46 = 1;
          __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        puVar15[0x16] = 0;
        *(undefined8 *)(puVar15 + 0x18) = 0;
        *(undefined8 *)(puVar15 + 0x20) = 0;
        *(undefined8 *)(puVar15 + 0x22) = 0;
        *(undefined8 *)(puVar15 + 0x23) = 0;
        *(undefined8 *)(puVar15 + 0x25) = 0;
        *(undefined8 *)(puVar15 + 0x2a) = 0;
        *(undefined8 *)(puVar15 + 0x2c) = 0;
        *(undefined8 *)(puVar15 + 0x2d) = 0;
        *(undefined8 *)(puVar15 + 0x2f) = 0;
        *(undefined8 *)(puVar15 + 0x36) = 0;
        *(undefined8 *)(puVar15 + 0x38) = 0;
        *(undefined8 *)(puVar15 + 0x40) = 0;
        *(undefined8 *)(puVar15 + 0x42) = 0;
        *(ushort *)(puVar15 + 0x74) = (ushort)puVar15[0x74] & 0xc000 | 0x800;
        *(undefined2 *)((long)puVar15 + 0x1d2) = 0;
        puVar15[0x8c] = 0;
        *(undefined8 *)(puVar15 + 0x76) = 0;
        *(undefined8 *)(puVar15 + 0x78) = 0;
        *(undefined8 *)((long)puVar15 + 0x1e1) = 0;
        *(undefined8 *)((long)puVar15 + 0x1e9) = 0;
        *(undefined8 *)(puVar15 + 0x7d) = 0;
        *(undefined8 *)(puVar15 + 0x7f) = 0;
        *(undefined8 *)(puVar15 + 0x81) = 0;
        *(undefined8 *)(puVar15 + 0x83) = 0;
        *(undefined8 *)(puVar15 + 0x85) = 0;
        *(undefined8 *)(puVar15 + 0x87) = 0;
        *(undefined8 *)(puVar15 + 0x89) = 0;
        *(undefined8 *)(puVar15 + 0xc0) = 0;
        *(undefined8 *)(puVar15 + 0xc2) = 0;
        *(undefined8 *)(puVar15 + 0xe8) = 0;
        *(undefined8 *)(puVar15 + 0xea) = 0;
        *(undefined8 *)(puVar15 + 0xf0) = 0;
        *(undefined8 *)(puVar15 + 0xf2) = 0;
        *(undefined8 *)(puVar15 + 0x114) = 0;
        *(undefined8 *)(puVar15 + 0x116) = 0;
        *(undefined8 *)(puVar15 + 0x118) = 0;
        *(undefined8 *)(puVar15 + 0x11a) = 0;
        puVar15[0x11c] = 0x3f800000;
        *(undefined8 *)(puVar15 + 0x11e) = 0;
        *(undefined8 *)(puVar15 + 0x120) = 0;
        *(undefined8 *)(puVar15 + 0x122) = 0;
        *(undefined8 *)(puVar15 + 0x124) = 0;
        puVar15[0x126] = 0x3f800000;
        *(undefined8 *)(puVar15 + 0x12a) = 0;
        *(undefined8 *)(puVar15 + 300) = 0;
        *(undefined4 **)(puVar15 + 0x128) = puVar15 + 0x12a;
        *(undefined8 *)(puVar15 + 0x132) = 0;
        *(undefined8 *)(puVar15 + 0x134) = 0;
        *(undefined8 *)(puVar15 + 0x12e) = 0;
        *(undefined8 *)(puVar15 + 0x130) = 0;
        FUN_1001aa318(puVar15 + 0x136);
        *(undefined8 *)(puVar15 + 0x142) = 0;
        *(undefined8 *)(puVar15 + 0x144) = 0;
        *(undefined8 *)(puVar15 + 0x13e) = 0;
        *(undefined8 *)(puVar15 + 0x140) = 0;
        *(long *)(puVar15 + 2) = param_1;
        *(undefined1 *)(puVar15 + 8) = param_2;
        *puVar15 = 0x706c7374;
        puVar15[0x9a] = *param_3;
        puVar15[0x1a] = puVar15[0x16];
        *(code **)(puVar15 + 0x94) = FUN_10048ec1e;
        iVar12 = param_3[4];
        if (iVar12 == 0) {
          iVar12 = FUN_1001ea5dc();
        }
        puVar15[0x16] = iVar12;
        FUN_100538abf(puVar15 + 0x4e,&DAT_10074aea0);
        if ((*(byte *)(param_3 + 1) & 1) != 0) {
          lVar16 = FUN_10048604a(param_1);
          if (lVar16 != 0) {
            uVar14 = FUN_1001cc310();
            cVar11 = _os_log_type_enabled(uVar14,0x10);
            if (cVar11 != '\0') {
              local_58 = 0x8220202;
              uStack_54 = 0x7a0a90;
              uStack_50 = 1;
              uStack_4c = 0x822;
              uStack_4a = 0x278e;
              uStack_48 = 0x7d;
              uStack_46 = 1;
              __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_58,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          lVar16 = FUN_10048604a(param_1);
          if (lVar16 == 0) {
            *(byte *)(puVar15 + 0x90) = *(byte *)(puVar15 + 0x90) | 4;
          }
        }
        if ((((*(byte *)(param_1 + 0x1bb0) & 1) == 0) ||
            (lVar16 = 5, (*(byte *)(puVar15 + 0x90) & 4) == 0)) &&
           (lVar16 = *(long *)(param_3 + 2), lVar16 == 0)) {
          lVar16 = FUN_1002fa216(param_1);
        }
        *(long *)(puVar15 + 0x18) = lVar16;
        puVar15[0xce] = 0;
        *(undefined2 *)(puVar15 + 0xd1) = 0x8c;
        puVar15[0x90] = puVar15[0x90] & 0xffefffff | (uint)*(byte *)(param_3 + 0x10) << 0x14;
        FUN_10037bcb8(&local_58,puVar15);
        uVar6 = uStack_50;
        uVar5 = uStack_54;
        uVar4 = local_58;
        uVar3 = CONCAT22(uStack_4a,uStack_4c);
        local_58 = 0;
        uStack_54 = 0;
        uStack_50 = 0;
        uStack_4c = 0;
        uStack_4a = 0;
        plVar2 = *(long **)(puVar15 + 0xf2);
        puVar15[0xf0] = uVar4;
        puVar15[0xf1] = uVar5;
        puVar15[0xf2] = uVar6;
        puVar15[0xf3] = uVar3;
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar1 = plVar2 + 1;
          lVar16 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar16 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
            std::__shared_weak_count::__release_weak();
          }
        }
        plVar2 = (long *)CONCAT26(uStack_4a,CONCAT24(uStack_4c,uStack_50));
        if (plVar2 != (long *)0x0) {
          LOCK();
          plVar1 = plVar2 + 1;
          lVar16 = *plVar1;
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (lVar16 == 0) {
            (**(code **)(*plVar2 + 0x10))(plVar2);
            std::__shared_weak_count::__release_weak();
          }
        }
        if (*(long *)(puVar15 + 0xf0) != 0) {
          FUN_1001c62d9(puVar15 + 0xf4,0x20);
          puVar15[0xf4] = 0x63737468;
          FUN_1001c23b3(puVar15 + 0xf6);
          FUN_10048ec28(puVar15,1,0,0);
          if (param_3[5] == 0) {
            FUN_100177cff();
          }
          else {
            puVar15[0x9b] = param_3[5];
          }
          uVar13 = param_3[1];
          if ((uVar13 & 2) != 0) {
            *(byte *)(puVar15 + 0x90) = *(byte *)(puVar15 + 0x90) | 2;
            uVar13 = param_3[1];
          }
          if ((uVar13 & 4) != 0) {
            *(byte *)((long)puVar15 + 0x331) = *(byte *)((long)puVar15 + 0x331) | 1;
            uVar13 = param_3[1];
          }
          if ((uVar13 & 8) != 0) {
            *(byte *)(puVar15 + 0x90) = *(byte *)(puVar15 + 0x90) | 0x40;
          }
          FUN_1001dcbb8(puVar15 + 0x5e,0);
          iVar12 = FUN_1001c572a(0x68,0x19,puVar15 + 0x1c);
          if (iVar12 == -0x80) {
LAB_10048eb69:
            FUN_10048dab4(puVar15,1);
            puVar15 = (undefined4 *)0x0;
          }
          else {
            if (iVar12 == 0) {
              *(undefined4 **)(puVar15 + 0x20) = puVar15;
              *(undefined4 **)(puVar15 + 0x1e) = puVar15 + 0x20;
              *(undefined4 **)(puVar15 + 0x2a) = puVar15;
              *(undefined4 **)(puVar15 + 0x28) = puVar15 + 0x2a;
LAB_10048e6cb:
              iVar12 = FUN_1001c666e(puVar15 + 0x32);
              if (iVar12 == -0x80) goto LAB_10048eb69;
              if (iVar12 != 0) {
                uVar14 = FUN_1001cc310();
                cVar11 = _os_log_type_enabled(uVar14,0x10);
                if (cVar11 != '\0') {
                  uStack_4a = (undefined2)iVar12;
                  uStack_48 = (undefined2)((uint)iVar12 >> 0x10);
                  uVar7 = uStack_4a;
                  uVar9 = uStack_48;
LAB_10048eb51:
                  uStack_48 = uVar9;
                  uStack_4a = uVar7;
                  uStack_4c = 0x400;
                  uStack_50 = 1;
                  uStack_54 = 0x7a0a90;
                  local_58 = 0x8220202;
                  __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",&local_58,
                                      0x12);
                }
                goto LAB_10048eb64;
              }
              iVar12 = FUN_1001c703f(puVar15 + 0x3c,FUN_10048ee0a,puVar15);
              if (iVar12 == -0x80) goto LAB_10048eb69;
              if (iVar12 != 0) {
                uVar14 = FUN_1001cc310();
                cVar11 = _os_log_type_enabled(uVar14,0x10);
                if (cVar11 != '\0') {
                  uStack_4a = (undefined2)iVar12;
                  uStack_48 = (undefined2)((uint)iVar12 >> 0x10);
                  uVar7 = uStack_4a;
                  uVar9 = uStack_48;
                  goto LAB_10048eb51;
                }
                goto LAB_10048eb64;
              }
              iVar12 = FUN_1001c703f(puVar15 + 0xbc,FUN_10048f5bd,puVar15);
              if (iVar12 == -0x80) goto LAB_10048eb69;
              if (iVar12 != 0) {
                uVar14 = FUN_1001cc310();
                cVar11 = _os_log_type_enabled(uVar14,0x10);
                if (cVar11 != '\0') {
                  uStack_4a = (undefined2)iVar12;
                  uStack_48 = (undefined2)((uint)iVar12 >> 0x10);
                  uVar7 = uStack_4a;
                  uVar9 = uStack_48;
                  goto LAB_10048eb51;
                }
                goto LAB_10048eb64;
              }
              iVar12 = FUN_1001c75a2(param_1,puVar15 + 0x3c);
              if (iVar12 == -0x80) goto LAB_10048eb69;
              if (iVar12 != 0) {
                uVar14 = FUN_1001cc310();
                cVar11 = _os_log_type_enabled(uVar14,0x10);
                if (cVar11 != '\0') {
                  uStack_4a = (undefined2)iVar12;
                  uStack_48 = (undefined2)((uint)iVar12 >> 0x10);
                  uVar7 = uStack_4a;
                  uVar9 = uStack_48;
                  goto LAB_10048eb51;
                }
                goto LAB_10048eb64;
              }
              iVar12 = FUN_1001c6b4a(puVar15 + 0x32,param_1 + 0x2d38);
              if (iVar12 == -0x80) goto LAB_10048eb69;
              if (iVar12 != 0) {
                uVar14 = FUN_1001cc310();
                cVar11 = _os_log_type_enabled(uVar14,0x10);
                if (cVar11 != '\0') {
                  uStack_4a = (undefined2)iVar12;
                  uStack_48 = (undefined2)((uint)iVar12 >> 0x10);
                  uVar7 = uStack_4a;
                  uVar9 = uStack_48;
                  goto LAB_10048eb51;
                }
                goto LAB_10048eb64;
              }
              FUN_1002f7de0(puVar15,*(undefined8 *)(param_3 + 6));
              FUN_100484c95(puVar15);
            }
            else {
              uVar14 = FUN_1001cc310();
              cVar11 = _os_log_type_enabled(uVar14,0x10);
              uVar10 = uStack_48;
              uVar8 = uStack_4a;
              uStack_4a = (undefined2)iVar12;
              uVar7 = uStack_4a;
              uStack_48 = (undefined2)((uint)iVar12 >> 0x10);
              uVar9 = uStack_48;
              if (cVar11 != '\0') {
                local_58 = 0x8220202;
                uStack_54 = 0x7a0a90;
                uStack_50 = 1;
                uStack_4c = 0x400;
                __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: err == (%d)",&local_58,0x12
                                   );
                uVar8 = uStack_4a;
                uVar10 = uStack_48;
              }
              uStack_48 = uVar10;
              uStack_4a = uVar8;
              if (iVar12 == 0) goto LAB_10048e6cb;
              uVar14 = FUN_1001cc310();
              cVar11 = _os_log_type_enabled(uVar14,0x10);
              if (cVar11 != '\0') goto LAB_10048eb51;
LAB_10048eb64:
              if (iVar12 != 0) goto LAB_10048eb69;
            }
            iVar12 = 0;
          }
          if (param_4 != (undefined8 *)0x0) {
            *param_4 = puVar15;
          }
          goto LAB_10048eb85;
        }
        uVar14 = FUN_1001cc310();
        cVar11 = _os_log_type_enabled(uVar14,0x10);
        if (cVar11 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          uStack_50 = 1;
          uStack_4c = 0x822;
          uStack_4a = 0x27ba;
          uStack_48 = 0x7d;
          uStack_46 = 1;
          __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      iVar12 = -0x6c;
      goto LAB_10048eb85;
    }
    uVar14 = FUN_1001cc310();
    cVar11 = _os_log_type_enabled(uVar14,0x10);
    if (cVar11 != '\0') {
      local_58 = 0x8220202;
      uStack_54 = 0x7a0a90;
      uStack_50 = 1;
      uStack_4c = 0x822;
      uStack_4a = 0x277a;
      uStack_48 = 0x7d;
      uStack_46 = 1;
      __os_log_error_impl(0x100000000,uVar14,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
    FUN_1001782e9(0,0);
  }
  iVar12 = -0x32;
LAB_10048eb85:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar12;
}

