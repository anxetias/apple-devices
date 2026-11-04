// name: FUN_10061ceaa
// address: 10061ceaa

void FUN_10061ceaa(long param_1,long *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  char cVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  size_t sVar12;
  ulong uVar13;
  undefined8 *puVar14;
  void *pvVar15;
  int iVar16;
  undefined1 auVar17 [16];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  undefined6 uStack_98;
  undefined2 uStack_92;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  if ((param_1 != 0) && (iVar2 = *(int *)(*(long *)(param_1 + 0x78) + 0x18), iVar2 != 0)) {
    iVar16 = 0;
    do {
      lVar9 = FUN_10037ddf6(*(undefined8 *)(param_1 + 0x3c0),0x77,0,iVar16);
      if (lVar9 != 0) {
        lVar3 = *(long *)(lVar9 + 8);
        if ((lVar3 == 0) || (*(long *)(lVar3 + 0x10) == 0)) {
          uVar10 = FUN_1001cc310();
          cVar8 = _os_log_type_enabled(uVar10,0x10);
          if (cVar8 != '\0') {
            local_a8 = 0x8220202;
            uStack_a4 = 0x7a0a90;
            uStack_a0 = 1;
            uStack_9c = 0x822;
            uStack_9a = 0x6950;
            uStack_98 = 0x1007b;
            __os_log_error_impl(0x100000000,uVar10,0x10,"%{public}s: (%{public}s)",&local_a8,0x16);
          }
          FUN_1001782e9(0,0);
        }
        else if (*(int *)(lVar3 + 0xc) != 0) {
          local_48 = 0;
          uStack_40 = 0;
          local_58 = 0;
          uStack_50 = 0;
          local_68 = 0;
          uStack_60 = 0;
          local_78 = 0;
          uStack_70 = 0;
          local_88 = 0;
          uStack_80 = 0;
          uStack_98 = 0;
          uStack_92 = 0;
          uStack_90 = 0;
          local_a8 = 0;
          uStack_a4 = 0;
          uStack_a0 = 0;
          uStack_9c = 0;
          uStack_9a = 0;
          FUN_100490f45(lVar9,&local_a8);
          uVar10 = uStack_40;
          uStack_40 = CONCAT71(uStack_40._1_7_,1);
          uVar7 = uStack_40;
          if (*(int *)(lVar3 + 0xc) < 0) {
            uStack_40._5_3_ = SUB83(uVar10,5);
            uStack_40._0_5_ = CONCAT14(1,(int)uVar7);
          }
          puVar14 = (undefined8 *)param_2[1];
          if (puVar14 < (undefined8 *)param_2[2]) {
            puVar14[0xc] = local_48;
            puVar14[0xd] = uStack_40;
            puVar14[10] = local_58;
            puVar14[0xb] = uStack_50;
            puVar14[8] = local_68;
            puVar14[9] = uStack_60;
            puVar14[6] = local_78;
            puVar14[7] = uStack_70;
            puVar14[4] = local_88;
            puVar14[5] = uStack_80;
            puVar14[2] = CONCAT26(uStack_92,uStack_98);
            puVar14[3] = uStack_90;
            *puVar14 = CONCAT44(uStack_a4,local_a8);
            puVar14[1] = CONCAT26(uStack_9a,CONCAT24(uStack_9c,uStack_a0));
            puVar14 = puVar14 + 0xe;
          }
          else {
            lVar9 = (long)puVar14 - *param_2 >> 4;
            uVar13 = lVar9 * 0x6db6db6db6db6db7 + 1;
            if (0x249249249249249 < uVar13) {
              FUN_10061fb0e();
                    /* WARNING: Does not return */
              pcVar5 = (code *)invalidInstructionException();
              (*pcVar5)();
            }
            lVar11 = param_2[2] - *param_2 >> 4;
            uVar6 = lVar11 * -0x2492492492492492;
            if (uVar13 < uVar6) {
              uVar13 = uVar6;
            }
            if (0x124924924924923 < (ulong)(lVar11 * 0x6db6db6db6db6db7)) {
              uVar13 = 0x249249249249249;
            }
            if (uVar13 == 0) {
              auVar17 = ZEXT816(0);
            }
            else {
              auVar17 = FUN_10061fb1e();
            }
            lVar11 = auVar17._0_8_;
            lVar9 = lVar9 * 0x10;
            puVar1 = (undefined8 *)(lVar11 + lVar9);
            puVar14 = puVar1 + 0xe;
            puVar1[0xc] = local_48;
            puVar1[0xd] = uStack_40;
            puVar1[10] = local_58;
            puVar1[0xb] = uStack_50;
            puVar1[8] = local_68;
            puVar1[9] = uStack_60;
            puVar1[6] = local_78;
            puVar1[7] = uStack_70;
            puVar1[4] = local_88;
            puVar1[5] = uStack_80;
            puVar1[2] = CONCAT26(uStack_92,uStack_98);
            puVar1[3] = uStack_90;
            *puVar1 = CONCAT44(uStack_a4,local_a8);
            puVar1[1] = CONCAT26(uStack_9a,CONCAT24(uStack_9c,uStack_a0));
            sVar12 = param_2[1] - *param_2;
            pvVar15 = (void *)((lVar11 + lVar9) - sVar12);
            _memcpy(pvVar15,(void *)*param_2,sVar12);
            pvVar4 = (void *)*param_2;
            *param_2 = (long)pvVar15;
            param_2[1] = (long)puVar14;
            param_2[2] = auVar17._8_8_ * 0x70 + lVar11;
            if (pvVar4 != (void *)0x0) {
              operator_delete(pvVar4);
            }
          }
          param_2[1] = (long)puVar14;
          *(undefined4 *)(lVar3 + 0xc) = 0;
        }
      }
      iVar16 = iVar16 + 1;
    } while (iVar2 != iVar16);
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

