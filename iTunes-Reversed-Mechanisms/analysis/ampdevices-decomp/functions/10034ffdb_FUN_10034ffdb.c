// name: FUN_10034ffdb
// address: 10034ffdb

void FUN_10034ffdb(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long ****pppplVar7;
  long ***ppplVar8;
  long ****pppplVar9;
  long lVar10;
  long ****pppplVar11;
  long ****pppplVar12;
  long ****pppplVar13;
  bool bVar14;
  undefined1 local_d0 [16];
  undefined1 local_c0 [16];
  undefined1 local_b0 [16];
  undefined8 local_a0;
  long local_98;
  long local_90;
  undefined1 local_88 [16];
  long ***local_78;
  long ***local_70;
  long lStack_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined2 uStack_4c;
  undefined2 uStack_4a;
  undefined1 local_48;
  undefined5 uStack_47;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_78 = (long ***)&local_70;
  local_70 = (long ***)0x0;
  lStack_68 = 0;
  local_a0 = param_2;
  local_60 = param_1;
  lVar4 = FUN_10017076e(param_2);
  if (0 < lVar4) {
    lVar10 = 0;
    local_90 = lVar4;
    do {
      uVar5 = FUN_10016499b(local_a0,lVar10);
      lVar6 = FUN_100166c1b(uVar5,&cf_operation);
      if (lVar6 == 0) {
        uVar5 = FUN_1001cc310();
        cVar1 = _os_log_type_enabled(uVar5,0x10);
        if (cVar1 != '\0') {
          local_58 = 0x8220202;
          uStack_54 = 0x7a0a90;
          local_50 = 1;
          uStack_4c = 0x822;
          uStack_4a = 0x1552;
          local_48 = 0x7c;
          uStack_47 = 0x100;
          __os_log_error_impl(0x100000000,uVar5,0x10,"%{public}s: (%{public}s)",&local_58,0x16);
        }
        FUN_1001782e9(0,0);
      }
      else {
        local_98 = lVar10;
        FUN_1001b7eb0(&local_58,lVar6);
        if ((long ****)local_70 != (long ****)0x0) {
          pppplVar9 = (long ****)local_70;
          pppplVar12 = &local_70;
          do {
            pppplVar11 = pppplVar12;
            pppplVar13 = pppplVar9 + 4;
            uVar2 = FUN_1001b9c66(pppplVar13,&local_58);
            pppplVar7 = pppplVar9 + (uVar2 >> 0x1f);
            pppplVar12 = pppplVar9;
            if ((int)uVar2 < 0) {
              pppplVar12 = pppplVar11;
            }
            pppplVar9 = (long ****)*pppplVar7;
          } while ((long ****)*pppplVar7 != (long ****)0x0);
          if (pppplVar12 != &local_70) {
            if ((int)uVar2 < 0) {
              pppplVar13 = pppplVar11 + 4;
            }
            iVar3 = FUN_1001b9c66(&local_58,pppplVar13);
            if (-1 < iVar3) {
              FUN_1001b7a50(&local_58);
              *(int *)(pppplVar12 + 6) = *(int *)(pppplVar12 + 6) + 1;
              lVar4 = local_90;
              lVar10 = local_98;
              goto LAB_100350202;
            }
          }
        }
        FUN_1001b7a50(&local_58);
        FUN_1001b7eb0(local_88,lVar6);
        lVar4 = local_90;
        lVar10 = local_98;
        pppplVar9 = &local_70;
        pppplVar12 = pppplVar9;
        if ((long ****)local_70 != (long ****)0x0) {
          pppplVar9 = &local_70;
          pppplVar7 = (long ****)local_70;
          do {
            pppplVar12 = pppplVar7;
            iVar3 = FUN_1001b9c66(local_88,pppplVar12 + 4);
            if (iVar3 < 0) {
              pppplVar7 = (long ****)*pppplVar12;
              pppplVar9 = pppplVar12;
            }
            else {
              iVar3 = FUN_1001b9c66(pppplVar12 + 4,local_88);
              if (-1 < iVar3) {
                ppplVar8 = *pppplVar9;
                if (ppplVar8 != (long ***)0x0) goto LAB_1003501ce;
                break;
              }
              pppplVar7 = (long ****)pppplVar12[1];
              pppplVar9 = pppplVar12 + 1;
            }
          } while (pppplVar7 != (long ****)0x0);
        }
        ppplVar8 = operator_new(0x38);
        local_58 = SUB84(ppplVar8,0);
        uStack_54 = (undefined4)((ulong)ppplVar8 >> 0x20);
        local_50 = SUB84(&local_70,0);
        uStack_4c = (undefined2)((ulong)&local_70 >> 0x20);
        uStack_4a = (undefined2)((ulong)&local_70 >> 0x30);
        local_48 = 0;
        FUN_1001b7a88(ppplVar8 + 4,local_88);
        *(undefined4 *)(ppplVar8 + 6) = 0;
        *ppplVar8 = (long **)0x0;
        ppplVar8[1] = (long **)0x0;
        ppplVar8[2] = (long **)pppplVar12;
        *pppplVar9 = ppplVar8;
        if ((long ****)*local_78 != (long ****)0x0) {
          ppplVar8 = *pppplVar9;
          local_78 = (long ***)*local_78;
        }
        FUN_1001ad344(local_70,ppplVar8);
        lStack_68 = lStack_68 + 1;
        ppplVar8 = (long ***)CONCAT44(uStack_54,local_58);
LAB_1003501ce:
        *(undefined4 *)(ppplVar8 + 6) = 1;
        FUN_1001b7a50(local_88);
      }
LAB_100350202:
      lVar10 = lVar10 + 1;
    } while (lVar10 != lVar4);
  }
  FUN_1001b7a44(local_60);
  if ((long ****)local_78 != &local_70) {
    pppplVar9 = (long ****)local_78;
    do {
      cVar1 = FUN_1001b8428(local_60);
      if (cVar1 == '\0') {
        FUN_1001b7b04(&local_58,", ");
        FUN_1001bbcfe(local_60,&local_58);
        FUN_1001b7a50(&local_58);
      }
      FUN_1001bbcfe(local_60,pppplVar9 + 4);
      FUN_1001b7b04(local_b0," (");
      FUN_1001b8e86(local_d0,*(undefined4 *)(pppplVar9 + 6),1);
      FUN_1001b7a5c(local_88,local_b0);
      FUN_1001bbcfe(local_88,local_d0);
      FUN_1001b7b04(local_c0,")");
      FUN_1001b7a5c(&local_58,local_88);
      FUN_1001bbcfe(&local_58,local_c0);
      FUN_1001bbcfe(local_60,&local_58);
      FUN_1001b7a50(&local_58);
      FUN_1001b7a50(local_c0);
      FUN_1001b7a50(local_88);
      FUN_1001b7a50(local_d0);
      FUN_1001b7a50(local_b0);
      pppplVar12 = (long ****)pppplVar9[1];
      pppplVar7 = pppplVar9;
      if ((long ****)pppplVar9[1] == (long ****)0x0) {
        do {
          pppplVar9 = (long ****)pppplVar7[2];
          bVar14 = (long ****)*pppplVar9 != pppplVar7;
          pppplVar7 = pppplVar9;
        } while (bVar14);
      }
      else {
        do {
          pppplVar9 = pppplVar12;
          pppplVar12 = (long ****)*pppplVar9;
        } while ((long ****)*pppplVar9 != (long ****)0x0);
      }
    } while (pppplVar9 != &local_70);
  }
  FUN_100350668(local_70);
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

