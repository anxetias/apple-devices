// name: FUN_10021c23e
// address: 10021c23e

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10021c23e(long param_1,long param_2,undefined1 (*param_3) [16])

{
  uint uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined8 local_2bc;
  undefined4 local_2b4;
  long local_2b0;
  undefined1 (*local_2a8) [16];
  undefined4 local_2a0;
  undefined1 local_29c [612];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  lVar13 = param_1 + 0x29c;
  if (param_2 != 0) {
    lVar13 = param_2;
  }
  FUN_1001c62d9(param_3,100);
  FUN_1001c631b(param_1 + 0xa4,param_3,100);
  (*param_3)[0] = (*param_3)[0] & 0xfe;
  *(undefined4 *)(param_3[1] + 0xc) = 0;
  puVar12 = (undefined8 *)(param_1 + 0x40);
  lVar14 = 0;
  do {
    cVar10 = FUN_1001df7be(*(undefined8 *)((long)&PTR_s_Better_10083e1d0 + lVar14),lVar13,0);
    if (cVar10 != '\0') goto LAB_10021c3a5;
    puVar12 = (undefined8 *)((long)puVar12 + 100);
    lVar14 = lVar14 + 8;
  } while (lVar14 != 0x18);
  puVar12 = (undefined8 *)(param_1 + 0x16c);
  lVar14 = 0;
  do {
    cVar10 = FUN_1001df7be((long)&DAT_100718aa0 + (long)*(int *)((long)&DAT_100718aa0 + lVar14),
                           lVar13,0);
    if (cVar10 != '\0') goto LAB_10021c3a5;
    lVar14 = lVar14 + 4;
    puVar12 = (undefined8 *)((long)puVar12 + 100);
  } while (lVar14 != 0xc);
  uVar2 = *(undefined8 *)(param_1 + 8);
  pcVar3 = *(code **)(param_1 + 0x10);
  ___bzero(local_29c,0x264);
  local_2a0 = 100;
  local_2bc = 0x90000000a;
  local_2b4 = 0x284;
  local_2b0 = lVar13;
  local_2a8 = param_3;
  iVar11 = (*pcVar3)(uVar2,0x676e7072,&local_2bc);
  auVar16 = _DAT_100718a70;
  if (iVar11 == 0) {
    auVar15 = pshufb(*param_3,_DAT_100718a70);
    *param_3 = auVar15;
    auVar16 = pshufb(param_3[1],auVar16);
    param_3[1] = auVar16;
    uVar1 = *(uint *)param_3[2];
    *(uint *)param_3[2] =
         uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  }
LAB_10021c3e7:
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
LAB_10021c3a5:
  *(undefined4 *)param_3[6] = *(undefined4 *)(puVar12 + 0xc);
  uVar2 = puVar12[0xb];
  *(undefined8 *)param_3[5] = puVar12[10];
  *(undefined8 *)(param_3[5] + 8) = uVar2;
  uVar2 = puVar12[9];
  *(undefined8 *)param_3[4] = puVar12[8];
  *(undefined8 *)(param_3[4] + 8) = uVar2;
  uVar2 = *puVar12;
  uVar4 = puVar12[1];
  uVar5 = puVar12[2];
  uVar6 = puVar12[3];
  uVar7 = puVar12[4];
  uVar8 = puVar12[5];
  uVar9 = puVar12[7];
  *(undefined8 *)param_3[3] = puVar12[6];
  *(undefined8 *)(param_3[3] + 8) = uVar9;
  *(undefined8 *)param_3[2] = uVar7;
  *(undefined8 *)(param_3[2] + 8) = uVar8;
  *(undefined8 *)param_3[1] = uVar5;
  *(undefined8 *)(param_3[1] + 8) = uVar6;
  *(undefined8 *)*param_3 = uVar2;
  *(undefined8 *)(*param_3 + 8) = uVar4;
  goto LAB_10021c3e7;
}

