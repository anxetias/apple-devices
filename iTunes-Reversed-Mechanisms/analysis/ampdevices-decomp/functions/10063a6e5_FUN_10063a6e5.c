// name: FUN_10063a6e5
// address: 10063a6e5

char FUN_10063a6e5(undefined8 *param_1,long param_2,uint param_3,char param_4,undefined4 param_5)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ushort local_51c [8];
  undefined4 local_50c;
  int *local_508;
  uint local_4fc;
  long local_4f8;
  char local_4eb;
  undefined1 local_4ea [32];
  byte local_4ca;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined2 uStack_4bc;
  undefined2 uStack_4ba;
  undefined4 uStack_4b8;
  undefined2 uStack_4b4;
  undefined2 uStack_4b2;
  undefined4 uStack_4b0;
  undefined4 local_4ac;
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 local_a8;
  undefined4 local_7c [2];
  int local_72;
  byte local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined2 local_4c;
  char *local_4a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_1 == (undefined8 *)0x0) {
    uVar11 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar11,0x10);
    if (cVar5 != '\0') {
      local_4c8 = 0x8220202;
      uStack_4c4 = 0x7a0a90;
      uStack_4c0 = 1;
      uStack_4bc = 0x822;
      uStack_4ba = 0x6d89;
      uStack_4b8 = 0x1007f;
      uStack_4b4 = 0;
      __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_4c8,0x16);
    }
    FUN_1001782e9(0,0);
  }
  else {
    lVar10 = *(long *)*param_1;
    puVar1 = (uint *)(lVar10 + 0x330);
    *puVar1 = *puVar1 & 0xfffffdff;
    FUN_100489136(lVar10,local_4ea);
    cVar5 = FUN_1002c3ac1(param_2);
    if (cVar5 == '\0') {
      if ((local_4ca & 0x30) == 0) goto LAB_10063ace2;
      if (param_2 == 0) {
        uVar11 = FUN_1001cc310();
        cVar5 = _os_log_type_enabled(uVar11,0x10);
        if (cVar5 != '\0') {
          local_4c8 = 0x8220202;
          uStack_4c4 = 0x7a0a90;
          uStack_4c0 = 1;
          uStack_4bc = 0x822;
          uStack_4ba = 0x29da;
          uStack_4b8 = 0x1007b;
          uStack_4b4 = 0;
          __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_4c8,0x16);
        }
        FUN_1001782e9(0,0);
        cVar5 = -0x32;
      }
      else {
        iVar9 = FUN_10023ea92(param_2,local_51c);
        cVar5 = '\0';
        if ((iVar9 == 0) && (local_51c[0] != 0)) {
          uVar11 = *(undefined8 *)PTR__kUTTypeURL_10082e578;
          uVar14 = 0;
          do {
            FUN_1001c62d9(&local_4c8,0x448);
            uVar14 = uVar14 + 1;
            iVar9 = FUN_10023f577(param_2,uVar14,uVar11,&local_58);
            if ((iVar9 == 0) && (0 < CONCAT44(uStack_54,local_58))) {
              cVar5 = FUN_100483d00(param_1,0x48545450,&local_4c8,0);
LAB_10063ac0d:
              if (cVar5 != '\0') {
LAB_10063ac5e:
                cVar5 = '\x01';
                goto LAB_10063aca4;
              }
            }
            else {
              if ((*(byte *)(*(long *)*param_1 + 0x331) & 1) != 0) {
                local_58 = 0xe;
                uStack_54 = 0;
                iVar9 = FUN_10023ebfe(param_2,uVar14,0x70686673,local_7c,&local_58);
                if (iVar9 != 0) goto LAB_10063abde;
                local_a8 = local_7c[0];
                cVar5 = FUN_100483d00(param_1,0x46494c45,&local_4c8,0);
                if (cVar5 == '\0') goto LAB_10063ac11;
                if (local_72 != 0x72576d31) {
                  *(uint *)(*(long *)*param_1 + 0x330) =
                       *(uint *)(*(long *)*param_1 + 0x330) | 0x200;
                }
                goto LAB_10063ac5e;
              }
LAB_10063abde:
              iVar9 = FUN_10023f577(param_2,uVar14,uVar11,&local_58);
              if ((iVar9 == 0) && (0 < CONCAT44(uStack_54,local_58))) {
                cVar5 = FUN_100483d00(param_1,0x48545450,&local_4c8,0);
                goto LAB_10063ac0d;
              }
            }
LAB_10063ac11:
          } while (uVar14 < local_51c[0]);
          cVar5 = '\0';
        }
      }
    }
    else {
      FUN_1002c3b9e(&local_508,param_2);
      piVar4 = local_508;
      local_50c = param_5;
      if (local_508 == (int *)0x0) {
        local_508 = (int *)0x0;
        cVar5 = '\0';
      }
      else {
        local_4fc = FUN_100362400(param_2);
        local_4f8 = FUN_10063954c(param_1,local_51c,local_7c);
        if (local_4f8 == 0) {
          uVar11 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar11,0x10);
          if (cVar5 != '\0') {
            local_4c8 = 0x8220202;
            uStack_4c4 = 0x7a0a90;
            uStack_4c0 = 1;
            uStack_4bc = 0x822;
            uStack_4ba = 0x4e32;
            uStack_4b8 = 0x1007f;
            uStack_4b4 = 0;
            __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_4c8,0x16);
          }
          cVar5 = '\0';
          FUN_1001782e9(0,0);
        }
        else if (((*piVar4 == 0x4f4c5354) && (piVar4[1] != 0)) &&
                (uVar7 = (int)((ulong)(*(long *)(piVar4 + 4) - *(long *)(piVar4 + 2)) >> 3) *
                         -0x49249249, uVar7 != 0)) {
          local_4eb = param_4 != '\0' || local_4fc == param_3;
          uVar14 = 0;
          cVar5 = '\0';
          do {
            cVar6 = cVar5;
            if (((*piVar4 == 0x4f4c5354) && (piVar4[1] != 0)) &&
               (lVar10 = *(long *)(piVar4 + 2),
               uVar12 = (*(long *)(piVar4 + 4) - lVar10 >> 3) * 0x6db6db6db6db6db7,
               uVar14 <= uVar12 && uVar12 - uVar14 != 0)) {
              lVar13 = uVar14 * 0x38;
              puVar2 = (undefined4 *)(lVar10 + lVar13);
              local_4c8 = *puVar2;
              uStack_4c4 = puVar2[1];
              uStack_4c0 = puVar2[2];
              puVar3 = (undefined4 *)(lVar10 + 0x10 + lVar13);
              uStack_4b8 = *puVar3;
              uStack_4b0 = puVar3[2];
              local_4ac = puVar3[3];
              lVar13 = lVar10 + 0x1c + lVar13;
              uStack_4a8 = *(undefined4 *)(lVar13 + 4);
              uStack_4a4 = *(undefined4 *)(lVar13 + 8);
              uStack_4a0 = *(undefined4 *)(lVar13 + 0xc);
              uStack_4b4 = (undefined2)puVar3[1];
              uStack_4b2 = (undefined2)((uint)puVar3[1] >> 0x10);
              uStack_4bc = (undefined2)puVar2[3];
              uStack_4ba = (undefined2)((uint)puVar2[3] >> 0x10);
              uVar8 = FUN_100595fc8(&local_4c8);
              if ((5 < uVar8) || (local_4fc = uVar8, (0x2cU >> (uVar8 & 0x1f) & 1) == 0))
              goto LAB_10063aa7f;
              lVar10 = FUN_1004909fc(&local_4c8);
              if (lVar10 != 0) {
                if ((((*(byte *)(*(long *)(lVar10 + 8) + 0x1bb3) & 8) != 0) &&
                    (*(long *)(lVar10 + 8) != *(long *)(local_4f8 + 8))) &&
                   (((*(byte *)(*(long *)(local_4f8 + 8) + 0x1bb0) & 1) == 0 ||
                    (cVar6 = FUN_1004935a5(lVar10), cVar6 == '\0')))) goto LAB_10063aa8b;
                if (*(int *)(lVar10 + 0x268) == 0x63642020) {
                  if (*(int *)(*(long *)(local_4f8 + 8) + 0x84) == 0x646f5069) goto LAB_10063aa8b;
                  if (((*(byte *)(*(long *)(local_4f8 + 8) + 0x1bb0) & 1) != 0) &&
                     (*(short *)(local_4f8 + 0x10) == 4)) {
                    cVar5 = '\x01';
                  }
                }
                if ((((lVar10 != local_4f8 && (char)local_50c == '\0') &&
                     (*(long *)(local_4f8 + 8) == *(long *)(lVar10 + 8))) &&
                    (*(short *)(local_4f8 + 0x10) == 0)) &&
                   ((*(byte *)(local_4f8 + 0x240) & 4) != 0)) goto LAB_10063aa8b;
                if ((*(int *)(*(long *)(lVar10 + 8) + 0x84) == 0x6973756d) &&
                   (((*(byte *)(local_4f8 + 0x240) & 4) != 0 || ((local_5c & 8) != 0))))
                goto LAB_10063ad94;
                if ((lVar10 == local_4f8) || (cVar5 != '\0')) {
                  cVar6 = local_4eb;
                  if (cVar5 == '\0') goto LAB_10063aa7f;
                  goto LAB_10063ad94;
                }
                lVar13 = FUN_1004928f7(lVar10);
                cVar6 = local_4eb;
                if (lVar13 == local_4f8) goto LAB_10063aa7f;
                if (((local_5c & 8) != 0) &&
                   ((*(int *)(lVar10 + 0x268) != 0x66696c65 ||
                    (*(int *)(local_4f8 + 0x268) != 0x72656d74)))) {
                  if ((local_4fc == 2) || (lVar10 = FUN_1004839f2(lVar10,uStack_4b8), lVar10 == 0))
                  goto LAB_10063ad94;
                  cVar5 = FUN_1003a8724(lVar10);
                  if ((cVar5 == '\0') && (cVar5 = FUN_1003a7de7(lVar10), cVar5 == '\0')) {
                    cVar5 = FUN_100484163(local_51c,lVar10,0,0);
                    cVar6 = cVar5 != '\0';
                    goto LAB_10063aa7f;
                  }
                }
                goto LAB_10063aa88;
              }
              uVar11 = FUN_1001cc310();
              cVar6 = _os_log_type_enabled(uVar11,0x10);
              if (cVar6 != '\0') {
                local_58 = 0x8220202;
                uStack_54 = 0x7a0a90;
                uStack_50 = 1;
                local_4c = 0x822;
                local_4a = "sourcePlaylist != nullptr";
                __os_log_error_impl(0x100000000,uVar11,0x10,"%{public}s: (%{public}s)",&local_58,
                                    0x16);
              }
              FUN_1001782e9(0,0);
            }
            else {
LAB_10063aa7f:
              if (cVar6 != '\0') {
LAB_10063ad94:
                cVar5 = '\x01';
                break;
              }
LAB_10063aa88:
              cVar5 = '\0';
            }
LAB_10063aa8b:
            uVar14 = uVar14 + 1;
          } while (uVar14 != uVar7);
        }
        else {
          cVar5 = '\0';
        }
      }
      FUN_100595344(local_508);
    }
LAB_10063aca4:
    if (cVar5 != '\0') {
      local_4c8 = 1;
      uStack_4c4 = 0;
      iVar9 = FUN_100240158(param_2,1,local_7c,&local_4c8,0x4578744f);
      cVar6 = (char)local_7c[0] == '\0';
      if (iVar9 != 0) {
        cVar6 = cVar5;
      }
      goto LAB_10063ace4;
    }
  }
LAB_10063ace2:
  cVar6 = '\0';
LAB_10063ace4:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return cVar6;
}

