// name: FUN_100639cd4
// address: 100639cd4

int FUN_100639cd4(long param_1,long param_2,int param_3,long *param_4)

{
  long *plVar1;
  undefined4 *puVar2;
  ushort uVar3;
  int *piVar4;
  char cVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  undefined4 *puVar11;
  size_t sVar12;
  long lVar13;
  ulong uVar14;
  ushort uVar15;
  int iVar16;
  bool bVar17;
  char local_b20 [80];
  short *local_ad0;
  undefined4 *local_ac8;
  int local_abc;
  undefined4 *local_ab8;
  undefined4 *local_ab0;
  uint local_aa8;
  ushort local_aa2;
  undefined4 *local_aa0;
  long local_a98;
  char local_a89;
  ulong local_a88 [130];
  undefined8 local_678;
  undefined4 local_670;
  undefined2 uStack_66c;
  undefined2 uStack_66a;
  undefined6 local_668;
  undefined2 uStack_662;
  long *local_658;
  undefined8 local_648;
  undefined7 uStack_640;
  undefined4 uStack_639;
  undefined8 local_630;
  undefined8 uStack_628;
  long *local_620;
  undefined4 local_258;
  char *local_254;
  undefined2 local_24c;
  int local_24a;
  int *local_238 [64];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if (param_4 == (long *)0x0) {
    uVar9 = FUN_1001cc310();
    cVar5 = _os_log_type_enabled(uVar9,0x10);
    if (cVar5 != '\0') {
      local_678._0_4_ = 0x8220202;
      local_678._4_4_ = 0x7a0a90;
      local_670 = 1;
      uStack_66c = 0x822;
      uStack_66a = 0x6d89;
      local_668 = 0x1007f;
      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_678,0x16);
    }
    FUN_1001782e9(0,0);
  }
  local_a98 = param_1;
  if (((*(byte *)(param_1 + 0x331) & 2) != 0) &&
     (iVar7 = FUN_100317871(*(undefined8 *)(param_1 + 8),&local_678), iVar7 == 0)) {
    FUN_1002402ff(param_2,&local_678);
  }
  cVar5 = FUN_1002c3ac1(param_2);
  if (cVar5 == '\0') {
    *(undefined4 *)(DAT_1008c76a0 + 0x160c) = 4;
    iVar7 = FUN_10023ea92(param_2,&local_aa2);
    if (iVar7 == 0) {
      local_aa0 = (undefined4 *)FUN_1001c6429((ulong)local_aa2 * 0x430 + 0x490);
      if (local_aa0 == (undefined4 *)0x0) {
        iVar7 = -0x6c;
      }
      else {
        local_ab8 = local_aa0 + 4;
        FUN_1001dcbb8(local_ab8,0);
        *local_aa0 = *(undefined4 *)(local_a98 + 0x58);
        local_a89 = '\0';
        if ((param_4 != (long *)0x0) && (*param_4 != 0)) {
          lVar10 = param_4[1];
          if (lVar10 == -1) {
            lVar10 = *(long *)(*param_4 + 0x10);
          }
          if (lVar10 != 0) {
            local_aa0[2] = *(undefined4 *)(lVar10 + 0x40);
          }
        }
        if (param_2 == 0) {
          uVar9 = FUN_1001cc310();
          cVar5 = _os_log_type_enabled(uVar9,0x10);
          if (cVar5 != '\0') {
            local_678._0_4_ = 0x8220202;
            local_678._4_4_ = 0x7a0a90;
            local_670 = 1;
            uStack_66c = 0x822;
            uStack_66a = 0xa3f1;
            local_668 = 0x1007b;
            __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_678,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else if (local_aa2 != 0) {
          local_ab0 = local_aa0 + 0x18;
          uVar15 = 1;
          local_aa8 = (uint)(*(byte *)(local_a98 + 0x331) & 1);
          local_ad0 = (short *)(local_aa0 + 1);
          do {
            iVar7 = FUN_10023fbd7(param_2,uVar15,local_aa8,1,1,&local_678,&local_a89,local_a88,0x400
                                  ,&local_abc);
            if (local_abc != 0 && iVar7 == 0) {
              if (local_abc == 0x75726c20) {
                sVar12 = _strlen((char *)local_a88);
                *(undefined2 *)(local_ab0 + (ulong)*(ushort *)(local_aa0 + 1) * 0x10c) = 0x101;
                FUN_1001dda73(local_ab8,local_a88,sVar12 & 0xffffffff);
                *local_ad0 = *local_ad0 + 1;
              }
              else {
                cVar6 = FUN_100193976(&local_678);
                cVar5 = local_a89;
                if ((cVar6 == '\0') &&
                   (iVar7 = FUN_10017d477(&local_678,local_b20,local_238), iVar7 != -0x80)) {
                  if (iVar7 == 0) {
                    uVar3 = *(ushort *)(local_aa0 + 1);
                    uVar14 = (ulong)uVar3;
                    puVar11 = local_ab0 + uVar14 * 0x10c;
                    *(undefined2 *)puVar11 = 0x100;
                    *(char *)(puVar11 + 0x10b) = cVar5;
                    bVar17 = local_b20[0] == '\0';
                    puVar2 = local_ab0 + uVar14 * 0x10c + 0x10a;
                    if (bVar17) {
                      FUN_10017d5ba(&local_678);
                      FUN_1001dda84(local_ab8,local_238,puVar2);
                      uVar3 = *(ushort *)(local_aa0 + 1);
                    }
                    else {
                      local_ac8 = puVar2;
                      _memcpy(puVar11 + 2,&local_678,0x420);
                      *local_ac8 = 0;
                    }
                    *(bool *)((long)local_ab0 + uVar14 * 0x430 + 0x42d) = !bVar17;
                    *(ushort *)(local_aa0 + 1) = uVar3 + 1;
                  }
                  else {
                    uVar9 = FUN_1001cc310();
                    cVar5 = _os_log_type_enabled(uVar9,0x10);
                    if (cVar5 != '\0') {
                      local_258 = 0x8220202;
                      local_254 = "Assertion failure";
                      local_24c = 0x400;
                      local_24a = iVar7;
                      __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: err == (%d)",
                                          &local_258,0x12);
                    }
                  }
                }
              }
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 <= local_aa2);
        }
        if (*(short *)(local_aa0 + 1) == 0) {
          FUN_1001dcc15(local_ab8);
          FUN_1001c64c1(local_aa0);
        }
        else {
          FUN_10023e724(param_2,local_a88);
          if ((local_a89 == '\0') || ((local_a88[0] & 2) == 0)) {
            local_678._0_4_ = 0x871288;
            local_678._4_4_ = 1;
            local_670 = 0x6396ee;
            uStack_66c = 1;
            uStack_66a = 0;
            local_668 = SUB86(local_aa0,0);
            uStack_662 = (undefined2)((ulong)local_aa0 >> 0x30);
            local_648 = 0;
            uStack_640 = 0;
            uStack_639 = 0;
            local_630 = 0;
            uStack_628 = 0;
            local_620 = (long *)0x0;
            local_658 = &local_678;
            FUN_10017869a(&local_678);
            if (local_620 != (long *)0x0) {
              LOCK();
              plVar1 = local_620 + 1;
              lVar10 = *plVar1;
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (lVar10 == 0) {
                (**(code **)(*local_620 + 0x10))(local_620);
                std::__shared_weak_count::__release_weak();
              }
            }
            lVar10 = local_a98;
            if (local_658 == &local_678) {
              lVar13 = 0x20;
LAB_10063a4d6:
              (**(code **)(*local_658 + lVar13))();
            }
            else {
              lVar13 = 0x28;
              if (local_658 != (long *)0x0) goto LAB_10063a4d6;
            }
            FUN_10031a3b1(*(undefined8 *)(lVar10 + 8));
            iVar7 = 0;
            goto LAB_10063a582;
          }
          if (*(long *)(DAT_1008c76a0 + 0x1a40) != 0) {
            uVar9 = FUN_1001cc310();
            cVar5 = _os_log_type_enabled(uVar9,0x10);
            if (cVar5 != '\0') {
              local_678._0_4_ = 0x8220202;
              local_678._4_4_ = 0x7a0a90;
              local_670 = 1;
              uStack_66c = 0x822;
              uStack_66a = 28000;
              local_668 = 0x1007f;
              __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_678,0x16)
              ;
            }
            FUN_1001782e9(0,0);
          }
          *(undefined4 **)(DAT_1008c76a0 + 0x1a40) = local_aa0;
        }
        iVar7 = 0;
      }
    }
    *(undefined4 *)(DAT_1008c76a0 + 0x160c) = 0;
    goto LAB_10063a582;
  }
  FUN_1002c3b9e(local_238,param_2);
  iVar8 = FUN_100362400(param_2);
  local_aa8 = FUN_10036247b(param_2);
  piVar4 = local_238[0];
  *(undefined4 *)(DAT_1008c76a0 + 0x160c) = 4;
  iVar7 = -0x741;
  if (local_238[0] == (int *)0x0) {
LAB_10063a565:
    *(undefined4 *)(DAT_1008c76a0 + 0x160c) = 0;
  }
  else {
    if ((((iVar8 == param_3) && (*local_238[0] == 0x4f4c5354)) && (local_238[0][1] != 0)) &&
       (iVar8 = (int)((ulong)(*(long *)(local_238[0] + 4) - *(long *)(local_238[0] + 2)) >> 3) *
                -0x49249249, iVar8 != 0)) {
      iVar16 = 0;
      do {
        lVar10 = FUN_100596894(piVar4,iVar16,0);
        if (lVar10 == local_a98 && lVar10 != 0) {
          FUN_100489136(local_a98,&local_678);
          if (((ulong)local_658 & 0x800) == 0) {
            iVar7 = -0x80;
          }
          else {
            local_a88[0] = 0;
            FUN_10059597e(local_a98);
            FUN_10048ca43(local_a98,piVar4,1);
            cVar5 = FUN_10048cb3b(local_a98,param_4);
            FUN_100483708(local_a98);
            FUN_1004897f6(local_a98,0);
            FUN_100595344(local_a88[0]);
            if (cVar5 != '\0') {
              iVar7 = 0;
              FUN_100380783(local_a98);
            }
          }
          goto LAB_10063a565;
        }
        iVar16 = iVar16 + 1;
      } while (iVar8 != iVar16);
    }
    puVar11 = (undefined4 *)FUN_1001c6429(0x28);
    if (puVar11 == (undefined4 *)0x0) goto LAB_10063a565;
    if (local_a98 == 0) {
      uVar9 = FUN_1001cc310();
      cVar5 = _os_log_type_enabled(uVar9,0x10);
      if (cVar5 != '\0') {
        local_678._0_4_ = 0x8220202;
        local_678._4_4_ = 0x7a0a90;
        local_670 = 1;
        uStack_66c = 0x822;
        uStack_66a = 0x35d6;
        local_668 = 0x1007b;
        __os_log_error_impl(0x100000000,uVar9,0x10,"%{public}s: (%{public}s)",&local_678,0x16);
      }
      iVar7 = -0x32;
      FUN_1001782e9(0,0);
    }
    else {
      *puVar11 = *(undefined4 *)(local_a98 + 0x58);
      *(int **)(puVar11 + 2) = piVar4;
      if ((*piVar4 == 0x4f4c5354) && (piVar4[1] != 0)) {
        piVar4[1] = piVar4[1] + 1;
      }
      if (param_4 == (long *)0x0) {
        *(undefined8 *)(puVar11 + 4) = *(undefined8 *)(local_a98 + 0x78);
        *(undefined8 *)(puVar11 + 6) = 0xffffffffffffffff;
      }
      else {
        lVar10 = param_4[1];
        *(long *)(puVar11 + 4) = *param_4;
        *(long *)(puVar11 + 6) = lVar10;
      }
      puVar11[8] = local_aa8;
      local_678._0_4_ = 0x871338;
      local_678._4_4_ = 1;
      local_670 = 0x639af4;
      uStack_66c = 1;
      uStack_66a = 0;
      local_668 = SUB86(puVar11,0);
      uStack_662 = (undefined2)((ulong)puVar11 >> 0x30);
      local_648 = 0;
      uStack_640 = 0;
      uStack_639 = 0;
      local_630 = 0;
      uStack_628 = 0;
      local_620 = (long *)0x0;
      local_658 = &local_678;
      FUN_10017869a(&local_678);
      if (local_620 != (long *)0x0) {
        LOCK();
        plVar1 = local_620 + 1;
        lVar10 = *plVar1;
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (lVar10 == 0) {
          (**(code **)(*local_620 + 0x10))(local_620);
          std::__shared_weak_count::__release_weak();
        }
      }
      if (local_658 == &local_678) {
        lVar10 = 0x20;
LAB_10063a2c1:
        (**(code **)(*local_658 + lVar10))();
      }
      else {
        lVar10 = 0x28;
        if (local_658 != (long *)0x0) goto LAB_10063a2c1;
      }
      iVar7 = 0;
    }
  }
  FUN_100595344(local_238[0]);
LAB_10063a582:
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return iVar7;
}

