// name: FUN_1004fc6a4
// address: 1004fc6a4

char FUN_1004fc6a4(long param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  char cVar14;
  undefined4 local_88;
  char *local_84;
  undefined2 local_7c;
  undefined4 local_7a;
  undefined4 local_68;
  char *pcStack_64;
  undefined2 uStack_5c;
  undefined2 uStack_5a;
  undefined4 uStack_58;
  undefined2 uStack_54;
  undefined2 uStack_52;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar7 = FUN_1004e0c3f(param_1,1);
  if (lVar7 == 0) {
    uVar9 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar9,0x10);
    if (cVar3 != '\0') {
      local_68 = 0x8220202;
      pcStack_64 = "Assertion failure";
      uStack_5c = 0x822;
      uStack_5a = 0x1013;
      uStack_58 = 0x1007b;
      uStack_54 = 0;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_68,0x16);
    }
    FUN_1001782e9(0,0);
    cVar3 = '\0';
  }
  else {
    if ((((param_2 != (int *)0x0) && (*param_2 == 0x4f4c5354)) && (param_2[1] != 0)) &&
       (uVar12 = (int)((ulong)(*(long *)(param_2 + 4) - *(long *)(param_2 + 2)) >> 3) * -0x49249249,
       uVar12 != 0)) {
      uVar13 = 0;
      do {
        if (((*param_2 == 0x4f4c5354) && (param_2[1] != 0)) &&
           (lVar8 = *(long *)(param_2 + 2),
           uVar10 = (*(long *)(param_2 + 4) - lVar8 >> 3) * 0x6db6db6db6db6db7,
           uVar13 <= uVar10 && uVar10 - uVar13 != 0)) {
          lVar11 = uVar13 * 0x38;
          puVar1 = (undefined4 *)(lVar8 + lVar11);
          local_68 = *puVar1;
          pcStack_64 = *(char **)(puVar1 + 1);
          puVar2 = (undefined4 *)(lVar8 + 0x10 + lVar11);
          uStack_58 = *puVar2;
          uStack_50 = puVar2[2];
          local_4c = puVar2[3];
          lVar11 = lVar8 + 0x1c + lVar11;
          uStack_48 = *(undefined4 *)(lVar11 + 4);
          uStack_44 = *(undefined4 *)(lVar11 + 8);
          uStack_40 = *(undefined4 *)(lVar11 + 0xc);
          uStack_54 = (undefined2)puVar2[1];
          uStack_52 = (undefined2)((uint)puVar2[1] >> 0x10);
          uStack_5c = (undefined2)puVar1[3];
          uStack_5a = (undefined2)((uint)puVar1[3] >> 0x10);
          uVar5 = FUN_100595fc8(&local_68);
          switch(uVar5) {
          case 2:
            lVar8 = FUN_1004909fc(&local_68);
            if ((lVar8 != 0) && (*(long *)(lVar8 + 8) == lVar7)) {
              if ((*(char *)(param_1 + 0x6abf) == '\0') || (*(char *)(param_1 + 0x14cda) == '\0')) {
LAB_1004fcb82:
                cVar14 = '\0';
              }
              else if ((*(byte *)(param_1 + 0x166e0) & 4) == 0) {
                cVar3 = FUN_1002bdfcb(lVar8,*(undefined1 *)(param_1 + 0x372),1,1,0xfe182321,
                                      (uint)(*(char *)(param_1 + 0x39b) == '\0') << 0x10 | 0xe61cde)
                ;
                cVar14 = '\x01';
                if ((cVar3 == '\0') && (*(short *)(lVar8 + 0x10) != 4)) goto LAB_1004fca1b;
              }
              else {
LAB_1004fca1b:
                if ((*(char *)(param_1 + 0x34e) != '\0') &&
                   ((*(byte *)(param_1 + 0x166e0) & 2) == 0)) {
                  cVar3 = FUN_1002bdfcb(lVar8,*(undefined1 *)(param_1 + 0x372),1,2,0x402,0x218004);
                  cVar14 = '\x01';
                  if ((cVar3 != '\0') || (*(short *)(lVar8 + 0x10) == 2)) goto LAB_1004fcb84;
                }
                if ((*(char *)(param_1 + 0x34f) != '\0') &&
                   ((*(byte *)(param_1 + 0x166e0) & 0x10) == 0)) {
                  cVar3 = FUN_1002bdfcb(lVar8,*(undefined1 *)(param_1 + 0x372),1,2,0x40,0x18000);
                  cVar14 = '\x01';
                  if ((cVar3 != '\0') || (*(short *)(lVar8 + 0x10) == 3)) goto LAB_1004fcb84;
                }
                if (((*(char *)(param_1 + 0x365) == '\0') ||
                    ((*(byte *)(param_1 + 0x166e0) & 1) != 0)) ||
                   ((cVar3 = FUN_1002bdfcb(lVar8,*(undefined1 *)(param_1 + 0x372),1,8,8,0),
                    cVar3 == '\0' && (*(short *)(lVar8 + 0x10) != 5)))) goto LAB_1004fcb82;
                cVar14 = '\x01';
              }
LAB_1004fcb84:
              if (((*(char *)(param_1 + 0x6ac2) != '\0') && (*(char *)(param_1 + 0x14cda) != '\0'))
                 && ((*(byte *)(param_1 + 0x166e0) & 0x60) == 0)) {
                cVar4 = FUN_1002bdfcb(lVar8,*(undefined1 *)(param_1 + 0x372),
                                      *(undefined1 *)(param_1 + 0x346),4,4,0x200000);
                cVar3 = '\x01';
                if ((cVar4 != '\0') || (*(short *)(lVar8 + 0x10) == 10)) goto LAB_1004fccaf;
              }
LAB_1004fcc78:
              cVar3 = cVar14;
              if (cVar14 != '\0') goto LAB_1004fccaf;
            }
            break;
          case 3:
          case 5:
          case 8:
            lVar8 = FUN_10031b48b(&local_68);
            if (((lVar8 != 0) && (*(long *)(lVar8 + 0x10) == lVar7)) &&
               ((*(char *)(param_1 + 0x14cf2) == '\0' ||
                (cVar3 = FUN_1004746c0(lVar8), cVar3 == '\0')))) {
              uVar6 = FUN_1004744bf(lVar8,0);
              cVar3 = FUN_1005060ad(param_1);
              if ((((cVar3 != '\0') && (cVar3 = FUN_1004ec077(param_1), (uVar6 & 0x61000) == 0)) &&
                  (cVar3 == '\0')) &&
                 ((*(char *)(param_1 + 0x14cda) != '\0' &&
                  (cVar3 = FUN_1002bd328(lVar8), cVar3 != '\0')))) {
                if ((short)uVar6 < 0) {
                  if ((uVar6 & 2) == 0) {
                    if ((uVar6 & 0x40) == 0) break;
                    cVar14 = *(char *)(param_1 + 0x37b);
                  }
                  else {
                    cVar14 = *(char *)(param_1 + 0x37a);
                  }
                }
                else if ((uVar6 & 0x200004) == 0) {
                  if ((((uVar6 >> 0x14 & 1) != 0) && (*(char *)(param_1 + 0x14ddf) == '\0')) ||
                     (((uVar6 & 0x20) != 0 && (*(char *)(param_1 + 0x14d6d) == '\0')))) break;
                  cVar14 = *(char *)(param_1 + 0x6abf);
                }
                else if (*(char *)(param_1 + 0x6ac2) == '\0') {
                  cVar14 = '\0';
                }
                else {
                  cVar3 = FUN_100474d03(lVar8);
                  if (cVar3 == '\0') {
                    cVar14 = '\x01';
                  }
                  else {
                    cVar14 = *(char *)(param_1 + 0x346) != '\0';
                  }
                }
                goto LAB_1004fcc78;
              }
            }
            break;
          case 6:
            lVar8 = FUN_1003a4670(&local_68);
            if ((((lVar8 != 0) && (*(long *)(lVar8 + 0x48) == lVar7)) &&
                (*(char *)(param_1 + 0x6abf) != '\0')) && (*(char *)(param_1 + 0x14cda) != '\0')) {
              cVar14 = FUN_1002bec16(lVar8,*(undefined1 *)(param_1 + 0x365),
                                     *(undefined1 *)(param_1 + 0x39b));
              goto LAB_1004fcc78;
            }
            break;
          case 7:
            lVar8 = FUN_1004d0033(&local_68);
            if (((lVar8 != 0) && (*(long *)(lVar8 + 8) == lVar7)) &&
               ((*(char *)(param_1 + 0x14cda) != '\0' && (*(char *)(param_1 + 0x6abf) != '\0')))) {
              cVar14 = FUN_1002bea27(lVar8,*(undefined1 *)(param_1 + 0x365),
                                     *(undefined1 *)(param_1 + 0x39b));
              goto LAB_1004fcc78;
            }
          }
        }
        else {
          uVar9 = FUN_1001cc310();
          cVar3 = _os_log_type_enabled(uVar9,0x10);
          if (cVar3 != '\0') {
            local_88 = 0x8220202;
            local_84 = "Assertion failure";
            local_7c = 0x400;
            local_7a = 0xffffffce;
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",&local_88,0x12);
          }
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 != uVar12);
    }
    cVar3 = '\0';
  }
LAB_1004fccaf:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return cVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

