// name: FUN_1002906aa
// address: 1002906aa

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_1002906aa(long param_1,long param_2,int *param_3,double *param_4,undefined1 *param_5)

{
  ulong *puVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  undefined1 auVar19 [16];
  ulong local_78;
  uint *local_70;
  long local_68;
  undefined4 local_5c;
  int *local_58;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_5 != (undefined1 *)0x0) {
    *param_5 = 0;
  }
  iVar6 = -0x32;
  if ((*(char *)(param_1 + 0xd21) == '\0') || (*(long *)(param_1 + 0xca8) == 0)) goto LAB_100290ce9;
  *(undefined4 *)(param_1 + 0xcb8) = 1;
  local_58 = param_3;
  local_5c = FUN_1001ebb2f(1);
  local_68 = param_2;
  if ((*(long *)(param_1 + 0xc88) == 0) ||
     (lVar16 = *(long *)(*(long *)(param_1 + 0xc88) + 0x10), lVar16 == param_1)) {
LAB_100290778:
    *(undefined4 *)(param_1 + 0xccc) = 0;
    puVar1 = (ulong *)(param_1 + 0xcc0);
    local_70 = (uint *)(param_1 + 0xcc8);
    local_50 = 0;
LAB_1002907b2:
    if ((*(ulong *)(param_1 + 0xd60) < *(ulong *)(param_1 + 0xd68)) ||
       (*(char *)(param_1 + 0xd22) != '\0')) {
      *(undefined8 *)(param_1 + 0xcc0) = 4;
      iVar6 = FUN_100296086(param_1,puVar1,local_70);
      if (iVar6 == 0) {
        local_4c = -0x27;
        uVar18 = 0;
        if (*puVar1 == 4) {
          *(long *)(param_1 + 0xd48) = *(long *)(param_1 + 0xd48) + 4;
          bVar3 = false;
          do {
            uVar14 = *local_70;
            uVar15 = uVar14 >> 0x18 | (uVar14 & 0xff0000) >> 8 | (uVar14 & 0xff00) << 8 |
                     uVar14 << 0x18;
            if (0xffdfffff < uVar15) {
              FUN_10026b6a9(uVar15,*(undefined8 *)(param_1 + 0xcd8));
              iVar6 = FUN_10026b3e0(*(long *)(param_1 + 0xcd8),*(long *)(param_1 + 0xcd8) + 0x10);
              if (iVar6 == 0) {
                lVar16 = *(long *)(param_1 + 0xcd8);
                cVar5 = FUN_100271d6f(lVar16 + 0x10,param_1 + 0xce4);
                if (cVar5 != '\0') goto LAB_1002908e2;
              }
            }
            uVar15 = *(uint *)(param_1 + 0xccc);
            uVar7 = uVar15 + 1;
            *(uint *)(param_1 + 0xccc) = uVar7;
            if (0x10000 < uVar15) {
              local_48 = 0;
              uStack_44 = 0;
              local_78 = 0;
              iVar6 = (**(code **)(**(long **)(param_1 + 0xca8) + 0xf8))();
              local_4c = -0x32;
              uVar18 = 0;
              if ((iVar6 == 0) &&
                 (iVar6 = (**(code **)(**(long **)(param_1 + 0xca8) + 0x100))
                                    (*(long **)(param_1 + 0xca8),&local_78), iVar6 == 0)) {
                uVar18 = 0;
                local_4c = -0x27;
                if ((ulong)(CONCAT44(uStack_44,local_48) * 100) / local_78 < 0x5a) {
                  local_4c = -0x32;
                }
              }
              break;
            }
            if (bVar3) {
LAB_100290897:
              bVar3 = true;
            }
            else {
              if (*(uint *)(param_1 + 0xcf8) < uVar7) {
                FUN_100270a1c(*(undefined8 *)(param_1 + 0xcd8));
                goto LAB_100290897;
              }
              bVar3 = false;
            }
            *(uint *)(param_1 + 0xcc8) = uVar14 >> 8;
            *(undefined8 *)(param_1 + 0xcc0) = 1;
            iVar6 = FUN_100296086(param_1,puVar1,param_1 + 0xccb);
            uVar18 = 0;
            if ((iVar6 != 0) || (*puVar1 != 1)) break;
          } while( true );
        }
      }
      else {
        local_4c = -0x27;
        uVar18 = 0;
      }
    }
    else {
      local_4c = -0x27;
      uVar18 = 0;
    }
    goto LAB_100290add;
  }
  if (((lVar16 == 0) || (iVar6 = (**(code **)(**(long **)(lVar16 + 0xca8) + 0x128))(), iVar6 == 0))
     && ((*(char *)(param_1 + 0x6065) != '\0' ||
         (iVar6 = (**(code **)(**(long **)(param_1 + 0xca8) + 0x120))
                            (*(long **)(param_1 + 0xca8),**(undefined8 **)(param_1 + 0xc88)),
         iVar6 == 0)))) {
    FUN_100270a1c(*(undefined8 *)(param_1 + 0xcd8));
    *(long *)(*(long *)(param_1 + 0xc88) + 0x10) = param_1;
    goto LAB_100290778;
  }
  local_4c = -0x27;
  local_50 = 0;
  uVar18 = 0;
  goto LAB_100290add;
LAB_1002908e2:
  uVar14 = *(uint *)(param_1 + 0xccc);
  lVar9 = *(long *)(param_1 + 0xd48);
  *(ulong *)(param_1 + 0xd48) = lVar9 + (ulong)uVar14;
  *(ulong *)(param_1 + 0xcc0) = (ulong)*(uint *)(lVar16 + 0x24);
  iVar8 = FUN_100296086(param_1,puVar1,*(undefined8 *)(lVar16 + 0x50));
  iVar6 = *(int *)(param_1 + 0xd30);
  *(int *)(param_1 + 0xd30) = iVar6 + 1;
  lVar16 = *(long *)(param_1 + 0xcd8);
  uVar15 = *(uint *)(lVar16 + 0x24);
  *(long *)(param_1 + 0xd48) = *(long *)(param_1 + 0xd48) + (ulong)uVar15;
  uVar18 = 0;
  if ((iVar8 != 0) || (*puVar1 != (ulong)uVar15)) goto LAB_100290add;
  iVar8 = *(int *)(lVar16 + 0x30);
  if ((*(char *)(param_1 + 0x5a52) == '\0') &&
     (*(ulong *)(param_1 + 0xd78) <= (ulong)(uint)(iVar8 * 8))) {
    local_50 = FUN_10026b7c2(lVar16,local_68);
    if (local_50 == 0) {
      uVar15 = *(uint *)(param_1 + 0xd30);
      lVar16 = *(long *)(param_1 + 0xcd8);
      goto LAB_10029097c;
    }
    iVar6 = *(int *)(param_1 + 0x6060);
    if (*(int *)(*(long *)(param_1 + 0xcd8) + 0x80) == 0) goto LAB_10029099d;
  }
  else {
    uVar15 = iVar6 + 2;
    *(uint *)(param_1 + 0xd30) = uVar15;
    *(int *)(lVar16 + 0x80) = iVar8;
LAB_10029097c:
    uVar7 = *(uint *)(lVar16 + 0x80);
    uVar18 = (ulong)uVar7;
    if ((uVar15 < 2) || (uVar7 != 0)) {
      *(undefined4 *)(param_1 + 0x6060) = 10;
      if (*(ulong *)(param_1 + 0xd48) == *(ulong *)(param_1 + 0xd50)) {
        *(ulong *)(param_1 + 0xd60) =
             *(long *)(param_1 + 0xd90) - ((ulong)(uVar7 * 9) + *(long *)(param_1 + 0xd80));
        *(undefined1 *)(param_1 + 0xd22) = 0;
      }
      else if (*(ulong *)(param_1 + 0xd50) < *(ulong *)(param_1 + 0xd48)) {
        local_50 = 0;
        if (*(char *)(param_1 + 0xd22) == '\x01') {
          if (DAT_1008b5bc0 != -1) {
            _dispatch_once(&DAT_1008b5bc0,&PTR___NSConcreteGlobalBlock_100845308);
          }
          uVar4 = DAT_1008b5bb8;
          cVar5 = _os_log_type_enabled(DAT_1008b5bb8,1);
          if (cVar5 != '\0') {
            local_48 = 0x8000100;
            uStack_44 = (undefined4)*(undefined8 *)(param_1 + 0xd48);
            uStack_40 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0xd48) >> 0x20);
            __os_log_impl(0x100000000,uVar4,1,"### MPEGDecodeBuffer resynch: 0x%llx",&local_48,0xc);
          }
        }
        goto LAB_100290d76;
      }
      local_50 = 0;
      goto LAB_100290d76;
    }
    iVar6 = *(int *)(param_1 + 0x6060);
    local_50 = 0;
LAB_10029099d:
    if (iVar6 == 0) goto LAB_100290d73;
    *(int *)(param_1 + 0xd30) = *(int *)(param_1 + 0xd30) + -1;
    *(ulong *)(param_1 + 0xd48) = lVar9 + (ulong)uVar14 + -4;
    iVar8 = *(int *)(param_1 + 0x10);
    if (((iVar8 != 0x44574e4c) && (iVar8 != 0x4d46494c)) && (iVar8 != 0x46494c45))
    goto LAB_100290a01;
    (**(code **)(**(long **)(param_1 + 0xca8) + 0xf0))();
    iVar6 = *(int *)(param_1 + 0x6060);
  }
  if (iVar6 == 0) goto LAB_100290d73;
LAB_100290a01:
  *(int *)(param_1 + 0x6060) = iVar6 + -1;
  goto LAB_1002907b2;
LAB_100290d73:
  uVar18 = 0;
LAB_100290d76:
  local_4c = 0;
LAB_100290add:
  lVar16 = local_68;
  uVar12 = *(ulong *)(param_1 + 0xd88);
  if ((uVar12 != 0) &&
     (*(ulong *)(param_1 + 0xd68) == 0x7fffffffffffffff || uVar12 < *(ulong *)(param_1 + 0xd68))) {
    *(ulong *)(param_1 + 0xd68) = uVar12;
  }
  uVar12 = *(ulong *)(param_1 + 0xd78);
  iVar8 = local_4c;
  if ((uVar12 == 0) || ((int)uVar18 == 0)) {
    uVar11 = *(ulong *)(param_1 + 0xd68) - *(ulong *)(param_1 + 0xd60);
    uVar10 = uVar18;
    if ((*(ulong *)(param_1 + 0xd60) <= *(ulong *)(param_1 + 0xd68) && uVar11 != 0) &&
       ((uVar11 < uVar18 && (*(char *)(param_1 + 0xd22) == '\0')))) {
      uVar18 = uVar11 & 0xffffffff;
      uVar10 = uVar18;
      iVar8 = -0x27;
    }
LAB_100290b8a:
    iVar17 = (int)uVar10;
    if (uVar12 == 0) {
      lVar9 = *(long *)(param_1 + 0xd58);
      goto LAB_100290c14;
    }
  }
  else {
    uVar10 = uVar12 - uVar18;
    if (uVar18 <= uVar12 && uVar10 != 0) {
      *(ulong *)(param_1 + 0xd78) = uVar10;
      uVar12 = uVar10;
      uVar10 = 0;
      goto LAB_100290b8a;
    }
    uVar15 = (int)uVar18 - (int)uVar12;
    uVar18 = (ulong)uVar15;
    lVar13 = *(long *)(param_1 + 0xcd8);
    uVar14 = uVar15 * *(byte *)(lVar13 + 0x15);
    if (uVar14 != 0) {
      FUN_1001c631b(local_68 + uVar12 * *(byte *)(lVar13 + 0x15) * 4,local_68,(ulong)uVar14 << 2);
      lVar13 = *(long *)(param_1 + 0xcd8);
    }
    *(undefined8 *)(param_1 + 0xd78) = 0;
    lVar2 = *(long *)(param_1 + 0xd70);
    lVar9 = lVar2 + -0xf1;
    if (*(char *)(lVar13 + 0x12) == '\x02') {
      lVar9 = lVar2 + -0x211;
    }
    *(long *)(param_1 + 0xd60) = lVar2 - *(long *)(param_1 + 0xd80);
    uVar10 = (ulong)uVar15;
    iVar8 = local_4c;
LAB_100290c14:
    iVar17 = (int)uVar10;
    *(ulong *)(param_1 + 0xd58) = uVar10 + lVar9;
  }
  *local_58 = iVar17;
  lVar9 = *(long *)(param_1 + 0xd60);
  auVar19._8_4_ = (int)((ulong)lVar9 >> 0x20);
  auVar19._0_8_ = lVar9;
  auVar19._12_4_ = DAT_10070d3c0._4_4_;
  *param_4 = ((double)CONCAT44((undefined4)DAT_10070d3c0,(int)lVar9) - _DAT_10070d3d0) +
             (auVar19._8_8_ - _UNK_10070d3d8);
  if (iVar8 == 0 && local_50 == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = local_50;
    if (((iVar8 != 0) && (iVar6 = iVar8, iVar8 == -0x27)) && (iVar6 = -0x27, local_50 != 0)) {
      iVar6 = local_50;
    }
  }
  *(ulong *)(param_1 + 0xd60) = lVar9 + uVar18;
  if (lVar16 != 0 && *(long *)(param_1 + 0x5a40) != 0) {
    FUN_100285d02(*(long *)(param_1 + 0x5a40),lVar16,*(undefined8 *)(param_1 + 0x5a48),iVar17,
                  *(undefined1 *)(*(long *)(param_1 + 0xcd8) + 0x15));
    FUN_1001c631b(*(undefined8 *)(param_1 + 0x5a48),lVar16,
                  (ulong)((uint)*(byte *)(*(long *)(param_1 + 0xcd8) + 0x15) * iVar17) << 2);
  }
  *(undefined4 *)(param_1 + 0xcb8) = 0;
  FUN_1001ebb2f(local_5c);
LAB_100290ce9:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar6;
}

