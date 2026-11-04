// name: FUN_1003d5ce0
// address: 1003d5ce0

int FUN_1003d5ce0(long param_1)

{
  long lVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long local_80;
  long local_68;
  undefined4 local_58;
  char *local_54;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar9 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x2b7);
  if (*(long *)(param_1 + 1000) != 0) {
    FUN_1001c64c1();
  }
  lVar7 = FUN_100496259(*(undefined8 *)(param_1 + 0x3e0));
  *(long *)(param_1 + 1000) = lVar7;
  if (lVar7 == 0) {
    uVar10 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar10,0x10);
    if (cVar3 != '\0') {
      local_4a = "context->albumPriorityTable != nullptr";
LAB_1003d643a:
      local_4c = 0x822;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
    }
LAB_1003d5e0d:
    FUN_1001782e9(0,0);
    iVar5 = -0x6c;
    goto LAB_1003d6226;
  }
  FUN_100496791(*(undefined8 *)(param_1 + 0x3e0));
  lVar7 = FUN_100496019(*(undefined8 *)(param_1 + 0x3e0));
  if (lVar7 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = 0;
    do {
      if (((*(char *)(lVar7 + 0xb0) == '\0') &&
          (((*(char *)(lVar7 + 0x80) == '\x06' || (*(char *)(lVar7 + 0x80) == '\0')) &&
           (*(int *)(lVar7 + 0xa4) != 0)))) ||
         (((cVar3 = FUN_10029b39e(lVar7), cVar3 == '\0' && (*(byte *)(lVar7 + 0x80) < 6)) &&
          ((0x2eU >> (*(byte *)(lVar7 + 0x80) & 0x1f) & 1) != 0)))) {
        uVar4 = FUN_1003d12b3(lVar9,uVar2,lVar7);
        *(uint *)(lVar7 + 0x84) = uVar4;
        lVar12 = lVar12 + (ulong)uVar4;
      }
      lVar7 = FUN_1004960d0(lVar7);
    } while (lVar7 != 0);
  }
  for (lVar7 = FUN_100496392(*(undefined8 *)(param_1 + 0x3e0)); lVar7 != 0;
      lVar7 = FUN_100496449(lVar7)) {
    if (*(int *)(lVar7 + 0xbc) != 0) {
      if ((*(char *)(lVar7 + 0x11) == '\x0f') && (*(int *)(lVar7 + 0x94) == 0)) {
        *(undefined4 *)(lVar7 + 0xbc) = 0;
      }
      else {
        uVar4 = FUN_10035728d(lVar9);
        lVar12 = lVar12 + (ulong)uVar4;
      }
    }
  }
  if (*(char *)(param_1 + 0x4de) == '\0') {
    lVar7 = FUN_1003572fc(lVar9);
    if (*(char *)(param_1 + 0x4de) != '\0') goto LAB_1003d5eb3;
    iVar5 = FUN_100601cd5(param_1);
    if (iVar5 == -0x80) goto LAB_1003d6226;
    if (iVar5 == 0) {
      lVar14 = FUN_1006019f0(lVar9);
      cVar3 = *(char *)(param_1 + 0x4de);
      goto LAB_1003d5ec2;
    }
    uVar10 = FUN_1001cc310();
    cVar3 = _os_log_type_enabled(uVar10,0x10);
    if (cVar3 != '\0') {
      local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
LAB_1003d6524:
      local_4c = 0x400;
      local_54 = "Assertion failure";
      local_58 = 0x8220202;
      __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_58,0x12);
    }
    goto LAB_1003d63af;
  }
  lVar7 = 0;
LAB_1003d5eb3:
  local_80 = 0;
  cVar3 = '\x01';
  lVar14 = 0;
LAB_1003d5ec2:
  lVar1 = (lVar12 - lVar7) + lVar14;
  if (((cVar3 == '\0') && (lVar12 != 0)) && (local_80 < lVar1)) {
    iVar5 = FUN_10060375e(param_1,lVar1);
    if (iVar5 == -0x80) {
LAB_1003d6226:
      FUN_100496791(*(undefined8 *)(param_1 + 0x3e0));
    }
    else {
      if (iVar5 == 0) {
        iVar5 = FUN_100601cd5(param_1);
        if (iVar5 == -0x80) goto LAB_1003d6226;
        if (iVar5 == 0) goto LAB_1003d5f34;
        uVar10 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar10,0x10);
        if (cVar3 != '\0') {
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
          goto LAB_1003d6524;
        }
      }
      else {
        uVar10 = FUN_1001cc310();
        cVar3 = _os_log_type_enabled(uVar10,0x10);
        if (cVar3 != '\0') {
          local_58 = 0x8220202;
          local_54 = "Assertion failure";
          local_4c = 0x400;
          local_4a = (char *)CONCAT44(local_4a._4_4_,iVar5);
          __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: err == (%d)",&local_58,0x12);
        }
      }
LAB_1003d63af:
      FUN_100496791(*(undefined8 *)(param_1 + 0x3e0));
      if (iVar5 == 0) goto LAB_1003d62b4;
    }
  }
  else {
    if (lVar12 == 0) {
LAB_1003d61f4:
      if (*(char *)(lVar9 + 0x3a2) != '\0') {
        if (lVar12 < lVar7) {
          *(long *)(param_1 + 0x3d8) = *(long *)(param_1 + 0x3d8) + (lVar7 - lVar12);
        }
        else {
          *(long *)(param_1 + 0x3d0) = *(long *)(param_1 + 0x3d0) + (lVar12 - lVar7);
        }
      }
    }
    else {
LAB_1003d5f34:
      if (lVar1 <= local_80) goto LAB_1003d61f4;
      lVar7 = local_80 + (lVar7 - lVar14);
      if (lVar7 < 1) {
LAB_1003d62cb:
        if (*(long *)(param_1 + 0x28) != 0) {
          *(undefined1 *)(*(long *)(param_1 + 0x28) + 0x15) = 1;
        }
      }
      else {
        uVar4 = 0;
        do {
          uVar6 = **(uint **)(param_1 + 1000);
          if (uVar6 <= uVar4) break;
          uVar4 = uVar4 + 1;
          uVar11 = (ulong)uVar4;
          if (uVar4 == uVar6) {
            uVar11 = 0;
          }
          lVar14 = *(long *)(*(uint **)(param_1 + 1000) + uVar11 * 2 + 2);
          lVar12 = lVar7;
          if ((lVar14 != 0) && (*(int *)(lVar14 + 0xbc) != 0)) {
            uVar6 = *(uint *)(lVar14 + 0x50);
            uVar11 = (ulong)uVar6;
            if (*(char *)(lVar14 + 0x11) == '\x01') {
              *(undefined4 *)(lVar14 + 0xb8) = 1;
              lVar12 = FUN_1001c63e1(uVar6 << 4);
              if (lVar12 == 0) {
                uVar10 = FUN_1001cc310();
                cVar3 = _os_log_type_enabled(uVar10,0x10);
                if (cVar3 == '\0') goto LAB_1003d5e0d;
                local_4a = "sortedImageList != nullptr";
                goto LAB_1003d643a;
              }
              FUN_1001c631b(*(undefined8 *)(lVar14 + 0x58),lVar12,uVar6 << 4);
              FUN_1001d290b(lVar12,uVar6,0x10,FUN_100496326,0);
              if (uVar11 != 0) {
                lVar14 = 0;
                do {
                  lVar1 = *(long *)(lVar12 + lVar14);
                  cVar3 = FUN_1003d7eff(lVar1);
                  if (((cVar3 != '\0') ||
                      (((cVar3 = FUN_10029b39e(lVar1), cVar3 == '\0' &&
                        (*(byte *)(lVar1 + 0x80) < 6)) &&
                       ((0x2eU >> (*(byte *)(lVar1 + 0x80) & 0x1f) & 1) != 0)))) &&
                     (*(int *)(lVar1 + 0xa0) == 0)) {
                    uVar8 = (ulong)*(uint *)(lVar1 + 0x84);
                    lVar13 = lVar7 - uVar8;
                    if (lVar7 < (long)uVar8) {
                      if (*(long *)(param_1 + 0x28) != 0) {
                        *(undefined1 *)(*(long *)(param_1 + 0x28) + 0x15) = 1;
                      }
                      lVar7 = 0;
                      break;
                    }
                    *(undefined4 *)(lVar1 + 0xa0) = 1;
                    lVar7 = lVar13;
                    if (*(char *)(lVar9 + 0x3a2) != '\0') {
                      *(long *)(param_1 + 0x3d0) = *(long *)(param_1 + 0x3d0) + uVar8;
                    }
                  }
                  lVar14 = lVar14 + 0x10;
                } while (uVar11 << 4 != lVar14);
              }
              FUN_1001c64c1(lVar12);
              lVar12 = lVar7;
            }
            else {
              if (uVar11 == 0) {
                local_68 = 0;
              }
              else {
                lVar12 = 0;
                local_68 = 0;
                do {
                  if (*(char *)(*(long *)(lVar14 + 0x58) + 8 + lVar12) == '\0') {
                    lVar1 = *(long *)(*(long *)(lVar14 + 0x58) + lVar12);
                    cVar3 = FUN_1003d7eff(lVar1);
                    if (((cVar3 != '\0') ||
                        (((cVar3 = FUN_10029b39e(lVar1), cVar3 == '\0' &&
                          (*(byte *)(lVar1 + 0x80) < 6)) &&
                         ((0x2eU >> (*(byte *)(lVar1 + 0x80) & 0x1f) & 1) != 0)))) &&
                       (*(int *)(lVar1 + 0xa0) == 0)) {
                      local_68 = local_68 + (ulong)*(uint *)(lVar1 + 0x84);
                    }
                  }
                  lVar12 = lVar12 + 0x10;
                } while (uVar11 << 4 != lVar12);
              }
              uVar6 = FUN_10035728d(lVar9,lVar14);
              local_68 = (ulong)uVar6 + local_68;
              lVar12 = lVar7 - local_68;
              if (lVar7 < local_68) goto LAB_1003d62cb;
              *(undefined4 *)(lVar14 + 0xb8) = 1;
              if (uVar11 != 0) {
                lVar7 = 0;
                do {
                  if (*(char *)(*(long *)(lVar14 + 0x58) + 8 + lVar7) == '\0') {
                    lVar1 = *(long *)(*(long *)(lVar14 + 0x58) + lVar7);
                    cVar3 = FUN_1003d7eff(lVar1);
                    if (((cVar3 != '\0') ||
                        (((cVar3 = FUN_10029b39e(lVar1), cVar3 == '\0' &&
                          (*(byte *)(lVar1 + 0x80) < 6)) &&
                         ((0x2eU >> (*(byte *)(lVar1 + 0x80) & 0x1f) & 1) != 0)))) &&
                       (*(int *)(lVar1 + 0xa0) == 0)) {
                      *(undefined4 *)(lVar1 + 0xa0) = 1;
                    }
                  }
                  lVar7 = lVar7 + 0x10;
                } while (uVar11 << 4 != lVar7);
              }
              if (*(char *)(lVar9 + 0x3a2) != '\0') {
                *(long *)(param_1 + 0x3d0) = *(long *)(param_1 + 0x3d0) + local_68;
              }
            }
          }
          lVar7 = lVar12;
        } while (0 < lVar12);
      }
      for (lVar9 = FUN_100496019(*(undefined8 *)(param_1 + 0x3e0)); lVar9 != 0;
          lVar9 = FUN_1004960d0(lVar9)) {
        if (*(int *)(lVar9 + 0xa0) == 0) {
          *(undefined4 *)(lVar9 + 0xa4) = 0;
        }
      }
      for (lVar9 = FUN_100496392(*(undefined8 *)(param_1 + 0x3e0)); lVar9 != 0;
          lVar9 = FUN_100496449(lVar9)) {
        if ((*(int *)(lVar9 + 0xb8) == 0) && (*(char *)(lVar9 + 0x11) != '\x01')) {
          *(undefined4 *)(lVar9 + 0xbc) = 0;
        }
      }
    }
    FUN_100496791(*(undefined8 *)(param_1 + 0x3e0));
LAB_1003d62b4:
    iVar5 = 0;
    if (*(char *)(param_1 + 0x4de) == '\0') goto LAB_1003d63e3;
  }
  if (*(long *)(param_1 + 1000) != 0) {
    FUN_1001c64c1();
    *(undefined8 *)(param_1 + 1000) = 0;
  }
LAB_1003d63e3:
  if (*(int *)(param_1 + 0x30) == 0) {
    *(int *)(param_1 + 0x30) = iVar5;
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return iVar5;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

