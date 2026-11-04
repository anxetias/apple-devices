// name: FUN_100005810
// address: 100005810

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00010000a91c) overlaps instruction at (ram,0x00010000a919)
    */
/* WARNING: This function may have set the stack pointer */
/* WARNING: Removing unreachable block (ram,0x000100004b77) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined **
FUN_100005810(undefined8 param_1,undefined **param_2,ulong param_3,undefined8 *param_4,
             undefined **param_5,undefined **param_6)

{
  uint uVar1;
  undefined ***pppuVar2;
  uint3 uVar3;
  uint3 uVar4;
  undefined2 uVar5;
  uint uVar6;
  undefined4 uVar7;
  char cVar8;
  code cVar9;
  byte bVar10;
  short sVar11;
  uint uVar12;
  int iVar13;
  int *piVar15;
  long lVar16;
  undefined *puVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined7 uVar24;
  undefined **UNRECOVERED_JUMPTABLE_07;
  undefined8 uVar20;
  undefined *puVar21;
  ulong uVar22;
  long lVar23;
  uint uVar25;
  uint uVar26;
  undefined **ppuVar27;
  undefined1 *puVar28;
  code *UNRECOVERED_JUMPTABLE;
  long lVar29;
  undefined2 uVar30;
  undefined2 extraout_DX;
  uint uVar31;
  undefined **UNRECOVERED_JUMPTABLE_10;
  uint uVar32;
  uint uVar33;
  byte bVar35;
  undefined **ppuVar34;
  uint uVar36;
  undefined **ppuVar37;
  long unaff_RBP;
  uint uVar38;
  undefined **ppuVar39;
  ulong uVar40;
  bool bVar41;
  int iVar42;
  undefined **ppuVar43;
  uint uVar44;
  uint uVar45;
  code *UNRECOVERED_JUMPTABLE_08;
  uint uVar46;
  undefined **ppuVar47;
  undefined **ppuVar48;
  int iVar49;
  uint *puVar50;
  undefined **ppuVar51;
  undefined4 *puVar52;
  uint uVar53;
  undefined **UNRECOVERED_JUMPTABLE_09;
  undefined **ppuVar54;
  long in_GS_OFFSET;
  bool bVar55;
  bool bVar56;
  bool bVar57;
  byte bVar58;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  undefined1 auVar59 [16];
  mach_msg_header_t mStack_278;
  int iStack_260;
  undefined8 uStack_25c;
  uint uStack_254;
  uint uStack_250;
  undefined8 uStack_24c;
  uint uStack_244;
  undefined **ppuStack_238;
  undefined **ppuStack_230;
  undefined **appuStack_228 [2];
  undefined8 uStack_218;
  undefined8 local_210;
  undefined **ppuStack_208;
  undefined **ppuStack_200;
  undefined **ppuStack_1f8;
  undefined4 *puStack_1e8;
  undefined8 *local_1e0;
  undefined **local_1d8;
  undefined **ppuStack_1c8;
  undefined **ppuStack_1b8;
  undefined **ppuStack_1a8;
  int *piStack_1a0;
  undefined **ppuStack_198;
  undefined4 *puStack_188;
  code *pcStack_180;
  undefined **ppuStack_178;
  undefined **ppuStack_170;
  uint *puStack_168;
  undefined **ppuStack_160;
  code *pcStack_158;
  undefined **ppuStack_150;
  uint uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  undefined **ppuStack_130;
  ulong local_128;
  undefined **ppuStack_120;
  int *piStack_118;
  undefined **ppuStack_110;
  undefined **ppuStack_108;
  undefined **ppuStack_100;
  undefined **ppuStack_f8;
  undefined8 uStack_f0;
  undefined **ppuStack_e8;
  undefined8 uStack_e0;
  undefined **ppuStack_d8;
  undefined **ppuStack_d0;
  undefined **ppuStack_c8;
  undefined **ppuStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  undefined **ppuStack_a8;
  undefined8 uStack_a0;
  undefined **ppuStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined **ppuStack_78;
  code *pcStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined **ppuStack_58;
  undefined8 uStack_50;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  long local_38;
  char *pcVar14;
  
  bVar58 = 0;
  local_128 = param_3;
  local_1d8 = param_2;
  local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
  local_1e0 = param_4;
  iVar49 = 0x3165f9b4;
  local_210 = param_1;
  switch(param_6 == (undefined **)0x0 ||
         (param_5 == (undefined **)0x0 || param_4 == (undefined8 *)0x0)) {
  case false:
switchD_100005882_caseD_0:
    UNRECOVERED_JUMPTABLE_10 = param_6;
    *local_1e0 = 0;
    *(undefined4 *)param_5 = 0;
    puVar21 = PTR__malloc_10082ea28;
    appuStack_228[1] = (undefined **)0x1000086b3;
    ppuVar18 = (undefined **)(*(code *)PTR__malloc_10082ea28)(0x18,param_2,param_3);
    iVar49 = 0x3165f9b2;
    switch(ppuVar18 == (undefined **)0x0) {
    case false:
      *ppuVar18 = (undefined *)0x0;
      ppuVar18[1] = (undefined *)0x5868a8b6a6dead9;
      *(uint *)(ppuVar18 + 2) = 0;
      uStack_90 = (undefined **)puVar21;
      appuStack_228[1] = (undefined **)0x10000818c;
      ppuStack_58 = ppuVar18;
      puVar17 = (undefined *)(*(code *)puVar21)(0x1000);
      auVar59._8_8_ = extraout_XMM0_Qb;
      auVar59._0_8_ = extraout_XMM0_Qa;
      puVar50 = &switchD_100005882::switchdataD_1006cfa50;
      *ppuStack_58 = puVar17;
      puVar21 = PTR__free_10082eaf0;
      ppuStack_68 = (undefined **)PTR__free_10082eaf0;
      ppuVar18 = ppuStack_68;
      switch(puVar17 == (undefined *)0x0) {
      case false:
        ppuVar34 = (undefined **)0x4;
        *(uint *)(ppuStack_58 + 1) = 0x6a6dfad9;
        ppuVar27 = (undefined **)(PTR_DAT_10088e798_3_10082ea48 + -0xb);
        uStack_a0 = ppuVar27;
        puVar52 = &uRam6d94841a1ee4c12e;
        puStack_168 = (uint *)(PTR_s_om_apple_adid_1006d0b54_1_10082ea58 + -1);
        ppuVar48 = (undefined **)&iRam000000003165f9b3;
        ppuVar51 = (undefined **)&lRam000000003166a97d;
        ppuStack_60 = (undefined **)&uRam6d94841a1ee4c12e;
        ppuStack_c8 = (undefined **)&uRam6d94841a1ee4c12e;
        ppuStack_d0 = (undefined **)&uRam6d94841a1ee4c12e;
        uStack_e0 = (undefined **)&uRam6d94841a1ee4c12e;
        ppuStack_110 = (undefined **)&uRam6d94841a1ee4c12e;
        ppuStack_f8 = (undefined **)&uRam6d94841a1ee4c12e;
        uStack_88 = (undefined **)CONCAT44(0x3166a97d,(int)uStack_88);
        uStack_f0 = (undefined **)&uRam6d94841a1ee4c12e;
        ppuStack_e8 = (undefined **)&uRam6d94841a1ee4c12e;
        ppuVar43 = ppuStack_58;
        param_6 = (undefined **)((long)ppuStack_58 + 0x4f7a6f9dbc28b98f);
        ppuStack_208 = UNRECOVERED_JUMPTABLE_10;
        ppuStack_200 = param_5;
        switch(ppuStack_58 == (undefined **)0x0) {
        case true:
          ppuStack_58 = (undefined **)CONCAT44(ppuStack_58._4_4_,0x3166a97d);
                    /* WARNING: Could not recover jumptable at 0x00010000aa86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)(*(code *)((long)(int)UINT_1006cfe0c + 0x10000aa5f))();
          return ppuVar18;
        }
code_r0x00010000a624:
        ppuVar47 = param_6;
        uStack_50 = ppuVar47;
        uVar32 = (int)ppuVar34 - 4;
        uVar33 = uVar32 | 6;
        ppuVar34 = (undefined **)(ulong)uVar33;
        uVar53 = uVar33 + 0x9b8d05f5 & 0x6472fa0c;
        UNRECOVERED_JUMPTABLE_09 = (undefined **)(ulong)uVar53;
        uVar31 = uVar33 - 5;
        uStack_250 = uVar31 | 0x12;
        UNRECOVERED_JUMPTABLE_10 = (undefined **)(ulong)uStack_250;
        pcStack_158 = (code *)((long)ppuVar43 + 0xc);
        UNRECOVERED_JUMPTABLE_07 = (undefined **)(ulong)*(uint *)((long)ppuVar43 + 0xc);
        UNRECOVERED_JUMPTABLE =
             (code *)(ulong)(*(uint *)((long)ppuVar43 + 0xc) + 0x7e29f96c + uVar53);
        param_2 = (undefined **)(ulong)*(uint *)(ppuVar43 + 1);
switchD_10000a6ae_caseD_a65b:
        ppuVar54 = ppuVar43;
        ppuStack_110 = param_2;
        uVar38 = (int)ppuStack_110 + 0x19429922;
        bVar55 = (uint)UNRECOVERED_JUMPTABLE < uStack_250 + 0x83b083e8;
        param_5 = (undefined **)(ulong)bVar55;
        uVar3 = (uint3)(uStack_250 + 0x83b083e8 >> 8);
        bVar41 = uVar38 < 0x83b083fb != bVar55;
        uVar26 = CONCAT31(uVar3,bVar41);
        ppuVar43 = (undefined **)(ulong)uVar26;
        param_6 = (undefined **)(ulong)(uVar38 < (uint)UNRECOVERED_JUMPTABLE);
        uVar38 = (uint)bVar55;
        if (bVar41) {
          param_6 = (undefined **)(ulong)uVar38;
        }
code_r0x00010000a697:
        ppuVar37 = (undefined **)&stack0xfffffffffffffff8;
        uVar6 = (uint)param_6;
        uVar1 = (&switchD_100005882::switchdataD_1006cfa50)[(int)(uVar6 + uVar33)];
        UNRECOVERED_JUMPTABLE = (code *)(long)(int)uVar1;
        bVar56 = (undefined **)0xfffffffeffff59db < UNRECOVERED_JUMPTABLE;
        param_2 = (undefined **)((long)UNRECOVERED_JUMPTABLE + 0x10000a624);
        bVar57 = param_2 == (undefined **)0x0;
        uVar30 = (undefined2)uStack_250;
        uVar4 = (uint3)(uVar31 >> 8);
        bVar10 = (byte)UNRECOVERED_JUMPTABLE_07;
        uVar12 = (uint)UNRECOVERED_JUMPTABLE_07;
        uVar24 = (undefined7)((ulong)UNRECOVERED_JUMPTABLE_07 >> 8);
        cVar9 = SUB41(uVar1,0);
        cVar8 = (char)uVar33;
        uVar5 = (undefined2)(uVar32 >> 0x10);
        bVar35 = (byte)(uVar32 >> 8);
        uVar45 = (uint)bVar55;
        uVar25 = (uint)ppuVar54;
        uVar36 = (uint)ppuVar37;
        uVar44 = (uint)bVar55;
        uVar46 = (uint)param_2;
        ppuVar19 = UNRECOVERED_JUMPTABLE_07;
        uStack_25c = (undefined **)UNRECOVERED_JUMPTABLE;
        ppuVar39 = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        switch(param_2) {
        case (undefined **)0x1000019e1:
          if (!bVar56) {
            *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
            cVar9 = *(code *)UNRECOVERED_JUMPTABLE_07;
            *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
            *(byte *)UNRECOVERED_JUMPTABLE_07 =
                 ((char)*(code *)UNRECOVERED_JUMPTABLE_07 - bVar10) - CARRY1((byte)cVar9,bVar10);
            *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
            cVar8 = bVar10 + (char)*(code *)UNRECOVERED_JUMPTABLE_07;
            pcVar14 = (char *)CONCAT71(uVar24,cVar8);
            *pcVar14 = *pcVar14 + cVar8;
            *pcVar14 = *pcVar14 + cVar8;
            cVar8 = in(0);
            piVar15 = (int *)CONCAT71(uVar24,cVar8);
            *(char *)piVar15 = (char)*piVar15 + cVar8;
            *piVar15 = *piVar15 + (int)piVar15;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          out(*(uint *)param_2,uVar30);
          if (bVar57) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x10000202f:
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          ppuVar37 = (undefined **)((ulong)&uStack_218 & 0xffffffff);
        case (undefined **)0x100002038:
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          iStack_260 = 1;
          uStack_254 = 0x1000100;
          uStack_24c = *(undefined8 *)PTR__NDR_record_10082cad0;
          uStack_25c = param_2;
          uStack_244 = uStack_250;
          ppuStack_238 = ppuVar34;
          ppuStack_230 = UNRECOVERED_JUMPTABLE_09;
          appuStack_228[0] = ppuVar54;
          appuStack_228[1] = ppuVar37;
          mStack_278.msgh_local_port = _mig_get_reply_port();
          mStack_278.msgh_bits = 0x80001513;
          mStack_278.msgh_reserved = 0;
          mStack_278.msgh_id = 0x4b0;
          mStack_278.msgh_remote_port = uVar26;
          if (PTR__voucher_mach_msg_set_10082d2c8 != (undefined *)0x0) {
            _voucher_mach_msg_set(&mStack_278);
          }
          uVar33 = _mach_msg(&mStack_278,3,0x38,0x40,mStack_278.msgh_local_port,0,0);
          ppuVar18 = (undefined **)(ulong)uVar33;
          if ((uVar33 + 0xeffffffe < 0xf) && ((0x4003U >> (uVar33 + 0xeffffffe & 0x1f) & 1) != 0)) {
            _mig_put_reply_port(mStack_278.msgh_local_port);
          }
          else if (uVar33 == 0) {
            if (mStack_278.msgh_id == 0x47) {
              ppuVar18 = (undefined **)0xfffffecc;
            }
            else if (mStack_278.msgh_id == 0x514) {
              if ((int)mStack_278.msgh_bits < 0) {
                ppuVar18 = (undefined **)0xfffffed4;
                if ((((iStack_260 == 1) && (mStack_278.msgh_size == 0x38)) &&
                    (mStack_278.msgh_remote_port == 0)) &&
                   ((uStack_254 >> 0x18 == 1 &&
                    (UNRECOVERED_JUMPTABLE_07 = (undefined **)(ulong)uStack_250, ppuVar34 = param_5,
                    UNRECOVERED_JUMPTABLE_09 = (undefined **)UNRECOVERED_JUMPTABLE,
                    uStack_250 == uStack_244)))) {
switchD_10000a6ae_caseD_21fa:
                  *UNRECOVERED_JUMPTABLE_09 = (undefined *)uStack_25c;
                  *(int *)ppuVar34 = (int)UNRECOVERED_JUMPTABLE_07;
                  return (undefined **)0x0;
                }
              }
              else {
                ppuVar18 = (undefined **)0xfffffed4;
                if (((mStack_278.msgh_size == 0x24) && (uStack_25c._4_4_ != 0)) &&
                   (ppuVar18 = (undefined **)0xfffffed4, mStack_278.msgh_remote_port == 0)) {
                  ppuVar18 = (undefined **)(ulong)uStack_25c._4_4_;
                }
              }
            }
            else {
              ppuVar18 = (undefined **)0xfffffed3;
            }
            _mach_msg_destroy(&mStack_278);
          }
          else {
            _mig_dealloc_reply_port(mStack_278.msgh_local_port);
          }
          return ppuVar18;
        case (undefined **)0x1000021fa:
          goto switchD_10000a6ae_caseD_21fa;
        case (undefined **)0x1000022af:
          cVar9 = (code)in(uVar30);
          *UNRECOVERED_JUMPTABLE = cVar9;
          *(char *)CONCAT71(uVar24,cVar9) = *(char *)CONCAT71(uVar24,cVar9) + (char)cVar9;
          local_38 = *(long *)PTR____stack_chk_guard_10082cb58;
          switch((long)ppuVar43 < -6) {
          case false:
            switch((long)ppuVar43 < -1) {
            case false:
              goto switchD_10000b7c0_caseD_0;
            }
            break;
          case true:
            switch(ppuVar43 == (undefined **)0xfffffffffffffff8) {
            case false:
              goto switchD_10000b7c0_caseD_0;
            }
          }
          switch(param_2 == (undefined **)0x0) {
          case false:
            appuStack_228[1] = (undefined **)0x1000057e3;
            ppuStack_1b8 = ppuVar43;
            lVar16 = (*(code *)PTR__malloc_10082ea28)(0x18);
            UNRECOVERED_JUMPTABLE_07 =
                 (undefined **)(long)*(int *)(&DAT_1006cf2d0 + (long)(int)(uint)(lVar16 == 0) * 4);
            UNRECOVERED_JUMPTABLE = switchD_10000aaa3::caseD_0;
            break;
          case true:
switchD_10000b7c0_caseD_0:
            if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
              return (undefined **)0xffff5037;
            }
                    /* WARNING: Subroutine does not return */
            appuStack_228[1] = (undefined **)&UNK_10000702e;
            ___stack_chk_fail();
          }
switchD_10000a6ae_caseD_57fd:
                    /* WARNING: Could not recover jumptable at 0x000100005806. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)((long)UNRECOVERED_JUMPTABLE + (long)UNRECOVERED_JUMPTABLE_07))();
          return ppuVar18;
        case (undefined **)0x10000230b:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x10000232f:
          uStack_e0 = (undefined **)CONCAT44(0x6d94841a,uVar1);
          ppuStack_130 = UNRECOVERED_JUMPTABLE_07;
          ppuVar18 = (undefined **)FUN_100006533();
          return ppuVar18;
        case (undefined **)0x1000023b5:
          uStack_b8 = (undefined **)0x0;
          appuStack_228[1] = (undefined **)0x1000023f0;
          ppuStack_c0 = UNRECOVERED_JUMPTABLE_07;
          lVar16 = (*(code *)((&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar26 - 0x8f)] + -2))
                             (puStack_168,UNRECOVERED_JUMPTABLE_07,0);
          ppuStack_a8 = ppuStack_c0;
                    /* WARNING: Could not recover jumptable at 0x000100002434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_1000023ad +
                               (int)(&switchD_100005882::switchdataD_1006cfa50)
                                    [(int)(uVar25 + (lVar16 == 0))]))(&uRam6d94841a1ee4c12e);
          return ppuVar18;
        case (undefined **)0x1000026d9:
          *(byte *)UNRECOVERED_JUMPTABLE_07 =
               (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10 + bVar56;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)(ppuVar43 + 0x200) = (char)*(code *)(ppuVar43 + 0x200) + bVar35;
          appuStack_228[1] = (undefined **)0x1000026e9;
          puVar21 = (undefined *)(*(code *)uStack_90)();
          *ppuVar34 = puVar21;
                    /* WARNING: Could not recover jumptable at 0x00010000270b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_1000026ae +
                               (int)(&switchD_100005882::switchdataD_1006cfa50)
                                    [uVar25 + (puVar21 == (undefined *)0x0)]))();
          return ppuVar18;
        case (undefined **)0x1000026e2:
          if (-1 < (char)(bVar35 * '\x02')) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x100002c70:
          UNRECOVERED_JUMPTABLE_08 = (code *)swi(0x6c);
          (*UNRECOVERED_JUMPTABLE_08)();
          *(code *)((long)UNRECOVERED_JUMPTABLE + 99) =
               (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE + 99) +
                     (char)UNRECOVERED_JUMPTABLE);
                    /* WARNING: Could not recover jumptable at 0x000100002c91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)((long)UNRECOVERED_JUMPTABLE + 0x100002b92))(&uRam6d94841a1ee4c12e);
          return ppuVar18;
        case (undefined **)0x10000301a:
                    /* WARNING: Could not recover jumptable at 0x000100003030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_100002fef +
                               *(int *)((long)UNRECOVERED_JUMPTABLE_09 +
                                       (long)(int)(uVar1 + uVar12) * 4)))();
          return ppuVar18;
        case (undefined **)0x100003035:
          ppuStack_1f8 = ppuVar54 + 1;
          ppuStack_60 = (undefined **)&uRam6d94841a1ee4c12e;
          uStack_88 = (undefined **)CONCAT44(0x3166a97d,(int)uStack_88);
          ppuStack_f8 = param_2;
          uStack_f0 = param_2;
          ppuStack_e8 = param_2;
          uStack_e0 = param_2;
          ppuStack_d0 = param_2;
          ppuStack_c8 = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010000309b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)((long)(int)(&switchD_100005882::switchdataD_1006cfa50)
                                           [(int)(uStack_250 + (ppuVar54 == (undefined **)0x0))] +
                               0x100003035))();
          return ppuVar18;
        case (undefined **)0x1000032e9:
          uStack_50 = (undefined **)CONCAT44((int)((ulong)ppuVar47 >> 0x20),uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001000032ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)(*UNRECOVERED_JUMPTABLE)();
          return ppuVar18;
        case (undefined **)0x100003340:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x1000033da:
          DAT_cfd2aa6d = DAT_cfd2aa6d << 1;
          uVar12 = uVar12 + uVar46;
          uVar33 = uStack_250 + bVar55 + 0xe8c83817;
          ppuVar18 = (undefined **)(ulong)(uVar12 < 0x28aea6ba);
          ppuStack_58 = param_2;
          if (uVar33 < 0x28aea6ba == uVar12 < 0x28aea6ba) {
            ppuVar18 = (undefined **)(ulong)(uVar33 < uVar12);
          }
code_r0x000100003418:
                    /* WARNING: Could not recover jumptable at 0x000100003434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_1000033b0 +
                               *(int *)((long)UNRECOVERED_JUMPTABLE_09 +
                                       (long)(int)(((uint)ppuVar18 & 0xff) + uStack_250) * 4)))();
          return ppuVar18;
        case (undefined **)0x10000341a:
          uStack_250 = CONCAT22((short)(uVar31 >> 0x10),CONCAT11(0xc6,(char)uStack_250));
          ppuVar18 = param_2;
          goto code_r0x000100003418;
        case (undefined **)0x1000034ec:
          if (!bVar57) goto code_r0x00010000353d;
        case (undefined **)0x1000034ac:
          piVar15 = (int *)((long)ppuVar34 + (long)UNRECOVERED_JUMPTABLE * 4 + 0x5d);
          *piVar15 = *piVar15 + -1;
          uVar31 = uVar33 + 0xbc9bcc84;
          param_2 = (undefined **)&DAT_10000562e;
          uVar32 = (uStack_250 * 4 + 0x5648549c & uVar33 + 0xfcdffee1) +
                   (uStack_250 * 2 + 0x2b242a4e ^ 0x7e6fffdb) + 0x554470d4;
          puVar50 = (uint *)(ulong)(uStack_250 + 0x694685de < uVar32);
          uVar33 = uVar31;
          if (uStack_250 + 0x694685de < 0xd3b470af != uVar32 < 0xd3b470af) {
            puVar50 = (uint *)(ulong)(uVar32 < 0xd3b470af);
          }
code_r0x00010000353d:
                    /* WARNING: Could not recover jumptable at 0x00010000355a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)((long)param_2 +
                               (long)(int)(&switchD_100005882::switchdataD_1006cfa50)
                                          [(int)(uVar33 + 0x43643376 + ((uint)puVar50 & 0xff))]))();
          return ppuVar18;
        case (undefined **)0x1000035d8:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x100003a6f:
          *(uint *)uStack_80 = uVar6 + uVar25 + 0x79764ff1;
                    /* WARNING: Could not recover jumptable at 0x000100003ab6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_100003a62 +
                               *(int *)((long)UNRECOVERED_JUMPTABLE_09 +
                                       (long)((int)CONCAT71(uVar24,1) + 0x3166a97d) * 4)))();
          return ppuVar18;
        case (undefined **)0x100003af3:
          return UNRECOVERED_JUMPTABLE_07;
        case (undefined **)0x100003d60:
          UNRECOVERED_JUMPTABLE = (code *)swi(1);
          ppuVar18 = (undefined **)(*UNRECOVERED_JUMPTABLE)();
          return ppuVar18;
        case (undefined **)0x100003e3a:
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
                    /* WARNING: Could not recover jumptable at 0x000100003e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)(*(code *)(&DAT_100003e24 + iRam000000017bffff08))();
          return ppuVar18;
        case (undefined **)0x100003f8a:
          appuStack_228[1] = UNRECOVERED_JUMPTABLE_07;
                    /* WARNING: Could not recover jumptable at 0x000100003fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&LAB_1000084a4 +
                               *(int *)((long)UNRECOVERED_JUMPTABLE_09 +
                                       (long)(int)(uVar33 + 0x43643336 +
                                                  (uint)(*(long *)((long)UNRECOVERED_JUMPTABLE +
                                                                  0x10000a664) == 0)) * 4)))
                               (*(long *)((long)UNRECOVERED_JUMPTABLE + 0x10000a664),param_2,
                                &LAB_1000084a4 +
                                *(int *)((long)UNRECOVERED_JUMPTABLE_09 +
                                        (long)(int)(uVar33 + 0x43643336 +
                                                   (uint)(*(long *)((long)UNRECOVERED_JUMPTABLE +
                                                                   0x10000a664) == 0)) * 4));
          return ppuVar18;
        case (undefined **)0x100004052:
                    /* WARNING: Could not recover jumptable at 0x000100004062. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)((long)ppuVar43 +
                               (long)(int)(&switchD_100005882::switchdataD_1006cfa50)[uVar1]))();
          return ppuVar18;
        case (undefined **)0x1000040e6:
          pppuVar2 = appuStack_228 + 1;
          cVar8 = '\x12';
          ppuVar18 = ppuVar37;
          do {
            ppuVar18 = ppuVar18 + -1;
            pppuVar2 = pppuVar2 + -1;
            *pppuVar2 = (undefined **)*ppuVar18;
            cVar8 = cVar8 + -1;
          } while ('\0' < cVar8);
          *(uint *)((long)UNRECOVERED_JUMPTABLE + in_GS_OFFSET) =
               *(uint *)((long)UNRECOVERED_JUMPTABLE + in_GS_OFFSET) ^ uVar46;
          appuStack_228[1] = ppuVar37;
                    /* WARNING: Could not recover jumptable at 0x0001000040f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_07)();
          return ppuVar18;
        case (undefined **)0x100004268:
                    /* WARNING: Could not emulate address calculation at 0x00010000427a */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_100004251 +
                               (int)(&switchD_100005882::switchdataD_1006cfa50)
                                    [(int)((*(long *)((long)UNRECOVERED_JUMPTABLE +
                                                     CONCAT71(uVar24,(bVar10 - 1) - bVar56)) == 0) +
                                          0x3166a97d)]))();
          return ppuVar18;
        case (undefined **)0x1000042eb:
          *(uint *)((long)UNRECOVERED_JUMPTABLE_10 + -1) =
               *(uint *)((long)UNRECOVERED_JUMPTABLE_10 + -1) >> 1;
                    /* WARNING: Could not recover jumptable at 0x000100004315. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_1000042d0 +
                               (int)(&switchD_100005882::switchdataD_1006cfa50)
                                    [(int)(uVar12 + (ppuVar34 == (undefined **)0x0))]))
                               (ppuVar43,&DAT_1000042d0 +
                                         (int)(&switchD_100005882::switchdataD_1006cfa50)
                                              [(int)(uVar12 + (ppuVar34 == (undefined **)0x0))]);
          return ppuVar18;
        case (undefined **)0x100004456:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x1000044c9:
          ppuStack_98 = (undefined **)CONCAT44(ppuStack_98._4_4_,uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001000044cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_10)();
          return ppuVar18;
        case (undefined **)0x100004670:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x100004732:
          *(undefined8 **)((long)UNRECOVERED_JUMPTABLE * 5 + -0x18) = &uStack_218;
          uStack_50 = (undefined **)&iRam000000003165f9b3;
          appuStack_228[1] = (undefined **)0x10000475c;
          ppuStack_58 = ppuVar43;
          uStack_a0 = (undefined **)
                      (*(code *)((&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar12 ^ 0x74)] + -3))();
          uStack_90 = (undefined **)(lRam00000001f7a8f030 + -3);
          appuStack_228[1] = (undefined **)0x1000047c3;
          (*(code *)(lRam00000001f7a8f4e0 + -3))
                    (uStack_a0,uStack_90,*(undefined8 *)((long)uStack_50 + -0x5781d62609419b70));
          ppuStack_98 = (undefined **)0x0;
          appuStack_228[1] = (undefined **)0x1000047e5;
          lVar16 = (*(code *)(lRam00000001f7a8f090 + -2))(local_128,0);
                    /* WARNING: Could not emulate address calculation at 0x0001000047f8 */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_100004725 +
                               *(int *)((long)&lRam000000003166a97d +
                                       (long)(int)((lVar16 == 0) + 0x1ee4c12e) * 4)))(ppuStack_58);
          return ppuVar18;
        case (undefined **)0x1000048ab:
          uStack_50 = (undefined **)&iRam000000003165f9b3;
          UNRECOVERED_JUMPTABLE = (code *)(ulong)(uStack_250 + 0xbfb73a7d);
          param_2 = (undefined **)(ulong)(uVar12 + 0xd797626c & 0x98ca49c1 ^ 0x5f6be33f);
          ppuVar43 = (undefined **)&DAT_1000055f6;
          bVar55 = uStack_250 + 0xbfb73a7d < 0x1b19bd9a;
          uVar33 = uStack_250 * 2 + 0x493af9be;
          uVar31 = uVar33 ^ 0xfbf69f23;
          ppuVar48 = (undefined **)(ulong)uVar31;
          uVar33 = uVar33 & 0xfbf69f22;
          param_6 = (undefined **)(ulong)uVar33;
          UNRECOVERED_JUMPTABLE_10 = (undefined **)(ulong)(uVar31 + uVar33 * 2);
LAB_10000490a:
          param_6 = (undefined **)(ulong)(uint)((int)ppuVar48 + (int)param_6 * 2);
code_r0x00010000490e:
          uVar33 = (int)param_6 + 0x1f231e77;
          bVar41 = (uint)UNRECOVERED_JUMPTABLE < uVar33;
          if (bVar55 != uVar33 < 0x1b19bd9a) {
            bVar41 = uVar33 < 0x1b19bd9a;
          }
          UNRECOVERED_JUMPTABLE_08 =
               (code *)((long)ppuVar43 +
                       (long)*(int *)((long)&lRam000000003166a97d +
                                     (long)(int)((uint)bVar41 + (int)UNRECOVERED_JUMPTABLE_07 +
                                                0x7061ac28) * 4));
                    /* WARNING: Could not recover jumptable at 0x00010000494f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*UNRECOVERED_JUMPTABLE_08)
                               (ppuVar43,param_2,UNRECOVERED_JUMPTABLE_10,UNRECOVERED_JUMPTABLE,
                                UNRECOVERED_JUMPTABLE_08);
          return ppuVar18;
        case (undefined **)0x100004909:
          UNRECOVERED_JUMPTABLE_07 =
               (undefined **)
               (CONCAT71(uVar24,bVar10 ^ (byte)*(code *)((long)ppuVar43 + -0x73)) | 0x4a);
          goto code_r0x00010000490e;
        case (undefined **)0x10000491e:
          return UNRECOVERED_JUMPTABLE_10;
        case (undefined **)0x10000496b:
          if (-0x10000a625 < (long)UNRECOVERED_JUMPTABLE) goto code_r0x00010000496d;
          goto LAB_10000490a;
        case (undefined **)0x100004996:
          UNRECOVERED_JUMPTABLE_07 = (undefined **)0x4cfffffe;
code_r0x00010000496d:
          *(code *)ppuVar43 = *(code *)param_2;
          ppuStack_150 = UNRECOVERED_JUMPTABLE_07;
          ppuVar18 = (undefined **)
                     FUN_100006533(uVar53 + *(int *)ppuStack_178,uRama87e29da28245e43,&LAB_100004bab
                                   ,UNRECOVERED_JUMPTABLE_07);
          return ppuVar18;
        case (undefined **)0x100004a58:
          bVar41 = 0x881b36cb < uVar26 != bVar55;
          if (!bVar41) {
            param_5 = (undefined **)(ulong)(0x881b36cb < uVar1);
          }
          ppuStack_120 = (undefined **)((long)ppuVar54 + 0x3165f9b3);
                    /* WARNING: Could not recover jumptable at 0x000100004a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_100004a0f +
                               *(int *)((long)&lRam000000003166a97d +
                                       (long)(int)((int)param_5 + uVar33) * 4)))
                               (CONCAT31(uVar3,bVar41),
                                &DAT_100004a0f +
                                *(int *)((long)&lRam000000003166a97d +
                                        (long)(int)((int)param_5 + uVar33) * 4));
          return ppuVar18;
        case (undefined **)0x100004ad7:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x100004b6b:
          ppuStack_160 = (undefined **)((long)ppuVar47 + (long)ppuVar54);
                    /* WARNING: Could not recover jumptable at 0x000100004ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_100004b05 +
                               (int)(&switchD_100005882::switchdataD_1006cfa50)
                                    [(int)(uVar6 + uVar26)]))
                               (&DAT_100004b05 +
                                (int)(&switchD_100005882::switchdataD_1006cfa50)
                                     [(int)(uVar6 + uVar26)]);
          return ppuVar18;
        case (undefined **)0x100004cb1:
          uVar33 = (uVar12 << (cVar8 + 0x5cU & 0x1f) & 0xffeda650) + (uStack_250 ^ 0x7ff6d329) +
                   0xd5e8e659;
          bVar41 = uVar46 < uVar33;
          if (SUB81(param_6,0) != uVar33 < 0x55dfb982) {
            bVar41 = uVar33 < 0x55dfb982;
          }
                    /* WARNING: Could not recover jumptable at 0x000100004d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)((long)param_5 +
                               (long)*(int *)((long)&lRam000000003166a97d +
                                             (long)(int)(bVar41 + uVar26) * 4)))();
          return ppuVar18;
        case (undefined **)0x100004d12:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x100004f43:
          iVar49 = *(int *)(&DAT_1006cf290 + (ulong)(uVar1 + 6 + (uint)(uVar46 == 0)) * 4);
          *(undefined **)(unaff_RBP + -0x30) = PTR__free_10082eaf0;
          *(undefined ***)(unaff_RBP + -0x40) = param_2;
                    /* WARNING: Could not recover jumptable at 0x000100004f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)((long)iVar49 + 0x100004f3a))
                               (ppuVar43,param_2,(code *)((long)iVar49 + 0x100004f3a));
          return ppuVar18;
        case (undefined **)0x100004f99:
          lVar16 = (long)(int)*(uint *)((long)ppuVar43 + (long)(int)(uVar46 + uVar1) * 4);
                    /* WARNING: Could not recover jumptable at 0x000100004fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_100004f79 + lVar16))
                               (ppuVar43,uVar46 + uVar1,&DAT_100004f79 + lVar16,lVar16,0x3165f9a4);
          return ppuVar18;
        case (undefined **)0x100004ff7:
          UNRECOVERED_JUMPTABLE = (code *)((long)ppuVar43 + (ulong)bVar58 * -8 + 4);
          iVar42 = (int)UNRECOVERED_JUMPTABLE;
          iVar49 = uVar12 + iVar42;
          iVar13 = iVar49 + (uint)(uVar12 < *(uint *)ppuVar43);
          ppuStack_78 = (undefined **)(ulong)(uint)(int)(short)iVar13;
          if ((SCARRY4(uVar12,iVar42) != SCARRY4(iVar49,(uint)(uVar12 < *(uint *)ppuVar43))) ==
              iVar13 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *(ushort *)((long)ppuStack_78 + -0x7061ab6d) =
               *(ushort *)((long)ppuStack_78 + -0x7061ab6d) ^ (ushort)UNRECOVERED_JUMPTABLE;
LAB_100007e20:
          uVar33 = (uint)ppuStack_78;
          appuStack_228[1] = (undefined **)0x100007e79;
          (*(code *)((&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar33 ^ 0x8f9e54b0)] + -2))
                    (*(undefined4 *)
                      ((&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar33 ^ 0x8f9e5490)] + -3),
                     ppuStack_108,uStack_88._4_4_);
          ppuStack_60 = (undefined **)&switchD_100005882::switchdataD_1006cfa50;
                    /* WARNING: Could not recover jumptable at 0x000100007eb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&LAB_100007e20 +
                               *(int *)((long)&lRam000000003166a97d +
                                       (long)(int)(uVar33 + 0x7061abcd +
                                                  (uint)((int)pcStack_70 ==
                                                        (uVar33 + 0xb89c746c & 0xb7c53739 ^
                                                        0x3166a975) +
                                                        (uVar33 + 0x7e06e026 & 0xf25acb77))) * 4)))
                               ();
          return ppuVar18;
        case (undefined **)0x1000050e6:
          ppuVar18 = (undefined **)
                     FUN_10000ae15((ulong)param_2 & 0x13166a9d1,param_2,
                                   *(undefined8 *)(unaff_RBP + -0x50),&UNK_10000a8f3);
          return ppuVar18;
        case (undefined **)0x1000051be:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x100005366:
          pcStack_70 = (code *)CONCAT71(uVar24,(bVar10 - 0x30) - bVar56);
          *(uint *)((long)pcStack_70 + 8) = uVar1;
          *(undefined4 *)((long)pcStack_70 + 0x10) = 0;
          appuStack_228[1] = (undefined **)0x100005380;
          lVar16 = (*(code *)ppuVar34)(0x1000);
          *(long *)pcStack_70 = lVar16;
                    /* WARNING: Could not recover jumptable at 0x0001000053a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_100005344 +
                               (int)(&switchD_100005882::switchdataD_1006cfa50)
                                    [(int)(uVar25 + (lVar16 == 0))]))();
          return ppuVar18;
        case (undefined **)0x1000055d6:
          *(int *)((long)UNRECOVERED_JUMPTABLE_07 + 1) =
               *(int *)((long)UNRECOVERED_JUMPTABLE_07 + 1) + -1;
          pppuVar2 = appuStack_228 + 1;
          cVar8 = '\x18';
          ppuVar18 = ppuVar37;
          do {
            ppuVar18 = ppuVar18 + -1;
            pppuVar2 = pppuVar2 + -1;
            *pppuVar2 = (undefined **)*ppuVar18;
            cVar8 = cVar8 + -1;
          } while ('\0' < cVar8);
          UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE + in_GS_OFFSET + -0x42);
          *(uint *)UNRECOVERED_JUMPTABLE = *(uint *)UNRECOVERED_JUMPTABLE ^ uVar1;
          DAT_d5894906b2f40ca1 = bVar10;
          appuStack_228[1] = ppuVar37;
                    /* WARNING: Could not recover jumptable at 0x0001000055f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)UNRECOVERED_JUMPTABLE_07)
                               (ppuVar43,*(undefined8 *)
                                          ((ulong)((uint)(appuStack_228 + 1) & (uint)uVar3 << 8) -
                                          0x98));
          return ppuVar18;
        case (undefined **)0x1000057fd:
          goto switchD_10000a6ae_caseD_57fd;
        case (undefined **)0x1000058b7:
          ppuStack_78 = (undefined **)(ulong)(uVar33 + 0x165a1084 ^ 0x68246018);
                    /* WARNING: Could not recover jumptable at 0x0001000058e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_1000058ae +
                               (int)*(uint *)((long)ppuVar54 +
                                             (long)(int)(uVar33 + (UNRECOVERED_JUMPTABLE_09 ==
                                                                  (undefined **)0x0)) * 4)))();
          return ppuVar18;
        case (undefined **)0x100005a9e:
          UNRECOVERED_JUMPTABLE_10 = (undefined **)((long)UNRECOVERED_JUMPTABLE + 0x100005a65);
          param_5 = (undefined **)0x3165f9b2;
          puStack_138 = (undefined *)0x0;
          UNRECOVERED_JUMPTABLE = (code *)0x0;
          ppuVar18 = ppuStack_58;
          goto code_r0x000100005ac3;
        case (undefined **)0x100005ac0:
          ppuVar18 = (undefined **)((ulong)ppuStack_58 & 0xffffffff);
code_r0x000100005ac3:
                    /* WARNING: Could not recover jumptable at 0x000100005ac3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)UNRECOVERED_JUMPTABLE_10)
                               (ppuVar18,param_2,UNRECOVERED_JUMPTABLE_10,UNRECOVERED_JUMPTABLE,
                                param_5);
          return ppuVar18;
        case (undefined **)0x100005cbe:
          if ((undefined **)UNRECOVERED_JUMPTABLE != (undefined **)0x1 && bVar57) {
            LOCK();
            *(char *)ppuVar34 = (char)(uVar31 >> 8);
            UNLOCK();
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (SCARRY8((long)UNRECOVERED_JUMPTABLE,0x10000a624)) {
            return UNRECOVERED_JUMPTABLE_07;
          }
          lVar16 = CONCAT62((int6)((ulong)ppuVar37 >> 0x10),(undefined2)uStack_218);
          uVar22 = *(ulong *)(lVar16 + -0x100);
                    /* WARNING: Could not recover jumptable at 0x000100005c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_100005c1f +
                               (int)(&uRam6d94841a1ee4c12e)
                                    [(int)(uVar33 + ((uVar12 ^ 0x93ff6a76) + 0x5d664ce6 < uVar22))])
                     )(*(undefined8 *)(lVar16 + -0x108),uVar22,
                       &DAT_100005c1f +
                       (int)(&uRam6d94841a1ee4c12e)
                            [(int)(uVar33 + ((uVar12 ^ 0x93ff6a76) + 0x5d664ce6 < uVar22))]);
          return ppuVar18;
        case (undefined **)0x100005fe6:
          ppuStack_68._0_4_ = SUB84(puVar21,0);
          uVar7 = ppuStack_68._0_4_;
          ppuStack_68 = ppuVar18;
                    /* WARNING: Could not recover jumptable at 0x000100005fe9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)(*UNRECOVERED_JUMPTABLE)(uVar7);
          return ppuVar18;
        case (undefined **)0x1000061b3:
                    /* WARNING: Could not recover jumptable at 0x0001000061b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)(*UNRECOVERED_JUMPTABLE)();
          return ppuVar18;
        case (undefined **)0x10000639c:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x1000063d9:
          in(0x48);
          uStack_50._0_4_ = SUB84(ppuVar47,0);
          uVar7 = (undefined4)uStack_50;
          appuStack_228[1] = (undefined **)0x1000063e1;
          uStack_50 = ppuVar47;
          (*(code *)uStack_80)(uVar7);
          ppuStack_a8 = ppuVar34;
          uStack_a0 = ppuVar54;
          uStack_90 = UNRECOVERED_JUMPTABLE_09;
                    /* WARNING: Could not emulate address calculation at 0x000100006436 */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&LAB_100006404 +
                               *(int *)(&DAT_1006cf2d0 +
                                       (long)(int)(((int)uStack_88 < 0x56a6d93f) + 0xb2e838a5) * 4))
                     )();
          return ppuVar18;
        case (undefined **)0x10000663c:
          uVar33 = uVar33 + 0xb78b994c & 0x487466b9;
          lVar16 = *(long *)((long)UNRECOVERED_JUMPTABLE_09 + (long)ppuVar54);
          UNRECOVERED_JUMPTABLE =
               (code *)((long)ppuStack_1b8 +
                       (-0x4bf06665ce8f161a - ((long)ppuStack_1b8 * 2 & 0x681f333462e1d3ccU)));
          lVar23 = (ulong)((uVar33 ^ 0x77edfbe6) & uVar12 * 2 + 0xb2a7f59a) +
                   ((ulong)(uVar12 + 0xd953facd) ^ 0xeebfdb7c3bf6fdbb) + 0x11402483c4090245;
          *(byte *)(lVar16 + lVar23) = (byte)((ulong)UNRECOVERED_JUMPTABLE >> 0x38) ^ 0xb4;
          *(byte *)(lVar16 + 1 + lVar23) = (byte)((ulong)UNRECOVERED_JUMPTABLE >> 0x30) ^ 0xf;
          *(byte *)(lVar16 + 2 + lVar23) = (byte)((ulong)UNRECOVERED_JUMPTABLE >> 0x28) ^ 0x99;
          *(byte *)(lVar16 + 3 + lVar23) = (byte)((ulong)UNRECOVERED_JUMPTABLE >> 0x20) ^ 0x9a;
          *(byte *)(lVar16 + 4 + lVar23) = (byte)((ulong)UNRECOVERED_JUMPTABLE >> 0x18) ^ 0x31;
          *(byte *)(lVar16 + 5 + lVar23) = (byte)((ulong)UNRECOVERED_JUMPTABLE >> 0x10) ^ 0x70;
          *(byte *)(lVar16 + 6 + lVar23) = (byte)((ulong)UNRECOVERED_JUMPTABLE >> 8) ^ 0xe9;
          *(byte *)(lVar16 + 7 + lVar23) = (byte)UNRECOVERED_JUMPTABLE ^ 0xe6;
          *(int *)ppuStack_120 = *(int *)ppuStack_120 + 8;
          uStack_b8 = UNRECOVERED_JUMPTABLE_09;
                    /* WARNING: Could not recover jumptable at 0x000100006750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&LAB_100006731 + (int)(&uRam6d94841a1ee4c12e)[(int)(uVar33 + 1)]))()
          ;
          return ppuVar18;
        case (undefined **)0x100007542:
          ppuStack_58 = UNRECOVERED_JUMPTABLE_10;
                    /* WARNING: Could not recover jumptable at 0x00010000755f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_100007525 +
                               (int)(&uRam6d94841a1ee4c12e)[(long)UNRECOVERED_JUMPTABLE]))
                               (UNRECOVERED_JUMPTABLE_10,
                                &DAT_100007525 +
                                (int)(&uRam6d94841a1ee4c12e)[(long)UNRECOVERED_JUMPTABLE],
                                UNRECOVERED_JUMPTABLE_10,0,param_5,&iRam000000003165f9b3);
          return ppuVar18;
        case (undefined **)0x1000075da:
                    /* WARNING: Could not recover jumptable at 0x0001000075e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)((long)UNRECOVERED_JUMPTABLE + 0x100007564))
                               ((long)UNRECOVERED_JUMPTABLE_09 + 0x3165f9b3,
                                (code *)((long)UNRECOVERED_JUMPTABLE + 0x100007564));
          return ppuVar18;
        case (undefined **)0x10000779b:
          UNRECOVERED_JUMPTABLE = (code *)(ulong)(uVar1 + uVar12);
        case (undefined **)0x100007785:
                    /* WARNING: Could not recover jumptable at 0x00010000779d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_100007762 +
                               (int)(&switchD_100005882::switchdataD_1006cfa50)
                                    [(int)((int)CONCAT71((int7)((ulong)UNRECOVERED_JUMPTABLE >> 8),1
                                                        ) + uVar33)]))();
          return ppuVar18;
        case (undefined **)0x1000078c3:
          ppuStack_e8 = (undefined **)(CONCAT44(0x6d94841a,uVar31) | 0x12);
          uStack_e0 = UNRECOVERED_JUMPTABLE_10;
          ppuStack_c0 = UNRECOVERED_JUMPTABLE_10;
          ppuStack_58 = UNRECOVERED_JUMPTABLE_10;
                    /* WARNING: Could not recover jumptable at 0x0001000078db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_07)();
          return ppuVar18;
        case (undefined **)0x100007a54:
          uVar33 = in(uVar30);
          uStack_250 = uStack_250 + 0xf;
          param_2 = (undefined **)(ulong)(uStack_250 ^ 0x5f37aad8);
          ppuVar43 = (undefined **)&DAT_100007ef3;
          bVar41 = uVar33 < 0xa0c855a3;
code_r0x000100007a79:
          ppuVar48 = (undefined **)(ulong)!bVar41;
          uVar44 = (uint)bVar55 * 2 + 0x1d3dda1c;
          param_6 = (undefined **)(ulong)(uVar44 ^ 0xf365d7fa);
code_r0x000100007a96:
          param_5 = (undefined **)(ulong)(uVar44 & 0xf365d7fa);
          iVar49 = (int)param_6 + (uVar44 & 0xf365d7fa) * 2;
code_r0x000100007a9a:
          uStack_b8 = (undefined **)(ulong)(iVar49 + 0x7dfb3af8);
          uVar33 = (int)param_6 + (int)param_5 * 2 + 0x6bd1d263;
          bVar55 = uVar33 < (uint)param_2;
          bVar41 = (uint)UNRECOVERED_JUMPTABLE < uVar33;
          if ((bool)(char)ppuVar48 != bVar55) {
            bVar41 = bVar55;
          }
                    /* WARNING: Could not recover jumptable at 0x000100007ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)((long)ppuVar43 +
                               (long)*(int *)((long)&lRam000000003166a97d +
                                             (long)(int)(bVar41 + uStack_250) * 4)))();
          return ppuVar18;
        case (undefined **)0x100007a73:
          bVar41 = CARRY1(bRam00000000a0c8d01c,bVar35);
          bRam00000000a0c8d01c = bRam00000000a0c8d01c + bVar35;
          goto code_r0x000100007a79;
        case (undefined **)0x100007a91:
          UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE + -1);
          if ((undefined **)UNRECOVERED_JUMPTABLE == (undefined **)0x0 || bVar57) {
            iVar49 = uVar6 + (uint)bVar55 * 2;
            goto code_r0x000100007a9a;
          }
          goto code_r0x000100007a96;
        case (undefined **)0x100007b3c:
          *(code *)((long)UNRECOVERED_JUMPTABLE_07 + -0x12) =
               (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_07 + -0x12) +
                      (char)((ulong)UNRECOVERED_JUMPTABLE_07 >> 8) + bVar56);
          *(code *)((long)UNRECOVERED_JUMPTABLE + (long)UNRECOVERED_JUMPTABLE_10) = (code)0x0;
          *(code *)((long)UNRECOVERED_JUMPTABLE + (ulong)(uVar12 + 0xee6010c6)) = (code)0x0;
          *(code *)((long)UNRECOVERED_JUMPTABLE + (ulong)(uVar12 + 0xee6010c7)) = (code)0x1;
          *(uint *)param_2 = (*(uint *)param_2 + uVar53) - 0x9c;
          ppuStack_120 = param_2;
                    /* WARNING: Could not recover jumptable at 0x000100007b9d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&LAB_100007b75 +
                               *(int *)((long)&lRam000000003166a97d + (long)(int)(uVar25 + 1) * 4)))
                               (ppuStack_58,param_2,(ulong)(uVar12 + 0xee6010c6),
                                &LAB_100007b75 +
                                *(int *)((long)&lRam000000003166a97d + (long)(int)(uVar25 + 1) * 4),
                                &lRam000000003166a97d);
          return ppuVar18;
        case (undefined **)0x100007dd5:
          uVar20 = vmovlps_avx(auVar59);
          *(undefined8 *)(&stack0xffffffff90cd7f29 + (long)UNRECOVERED_JUMPTABLE * 4) = uVar20;
          appuStack_228[1] = (undefined **)0x100007dee;
          (*(code *)uStack_80)();
          ppuStack_78 = (undefined **)&uRam6d94841a1ee4c12e;
          *ppuVar34 = (undefined *)0x0;
          uRamf94d0bf45eca0b35 = 0x13af2ab3716112f2;
          appuStack_228[1] = (undefined **)0x100007e1d;
          (*(code *)uStack_80)(ppuVar34);
          goto LAB_100007e20;
        case (undefined **)0x100007f40:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x1000081d2:
          UNRECOVERED_JUMPTABLE_07 = (undefined **)(ulong)(uVar12 + 0xa34fa5bf);
          *(code **)(unaff_RBP + -0x48) = (code *)((long)ppuVar43 + (long)UNRECOVERED_JUMPTABLE_10);
          UNRECOVERED_JUMPTABLE_10 =
               *(undefined ***)((long)ppuVar43 + (long)UNRECOVERED_JUMPTABLE_10);
          param_6 = (undefined **)
                    (ulong)((uint)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_10 +
                                                 (ulong)(uVar12 + 0x28dbe792)) << 0x10 |
                           (uint)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_10 +
                                                (ulong)(uVar12 + 0x28dbe791)) << 0x18);
          param_2 = (undefined **)
                    ((ulong)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_10 +
                                           (ulong)(uVar46 + uVar12 + 0xa34fa5bf + 0x858c41a5)) << 8)
          ;
switchD_10000a6ae_caseD_8213:
          uVar33 = (uint)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_10 +
                                        (ulong)((int)UNRECOVERED_JUMPTABLE_07 + 0x858c41d5)) |
                   (uint)param_2 | (uint)param_6;
          *(uint *)ppuVar54 = (int)UNRECOVERED_JUMPTABLE_07 + 4;
          param_2 = (undefined **)
                    (long)(int)(((int)((uVar33 ^ 0xb7efa97f) + (uVar33 & 0x37efa97f) * 2) <
                                (int)(bVar55 + 0xc ^ 0xb7efa946)) + uVar45);
          ppuVar48 = (undefined **)&DAT_1006cf2d0;
code_r0x000100008268:
                    /* WARNING: Could not recover jumptable at 0x000100008276. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&LAB_100008245 + (int)*(uint *)((long)ppuVar48 + (long)param_2 * 4))
                     )();
          return ppuVar18;
        case (undefined **)0x100008213:
          goto switchD_10000a6ae_caseD_8213;
        case (undefined **)0x100008263:
          goto code_r0x000100008268;
        case (undefined **)0x1000082d5:
          uVar33 = (uint)(uVar46 < uVar1);
          if (bVar55) {
            uVar33 = uVar26;
          }
                    /* WARNING: Could not recover jumptable at 0x000100008301. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_10000827b +
                               *(int *)((long)&lRam000000003166a97d +
                                       (long)(int)((uVar33 & 0xff) + uVar25) * 4)))
                               (ppuVar43,&DAT_10000827b +
                                         *(int *)((long)&lRam000000003166a97d +
                                                 (long)(int)((uVar33 & 0xff) + uVar25) * 4));
          return ppuVar18;
        case (undefined **)0x100008441:
          bVar41 = uVar26 < 0xb9bf4015;
          if (uVar38 < (uVar33 ^ 0xb9bf3fc1) + uVar46 == uVar26 < 0xb9bf4015) {
            bVar41 = uVar38 <= uVar26 && uVar26 != uVar45;
          }
                    /* WARNING: Could not recover jumptable at 0x00010000849f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_100008409 + (&iRam000000003165f9b3)[(int)(bVar41 + uStack_250)]
                               ))(&DAT_100008409 +
                                  (&iRam000000003165f9b3)[(int)(bVar41 + uStack_250)]);
          return ppuVar18;
        case (undefined **)0x100008538:
                    /* WARNING: Could not recover jumptable at 0x000100008551. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&LAB_1000067d3 +
                               *(int *)((long)param_6 +
                                       (long)(int)((ppuVar43 == (undefined **)0x0) + 0x1ee4c12e) * 4
                                       )))
                               (ppuVar43,param_2,
                                &LAB_1000067d3 +
                                *(int *)((long)param_6 +
                                        (long)(int)((ppuVar43 == (undefined **)0x0) + 0x1ee4c12e) *
                                        4));
          return ppuVar18;
        case (undefined **)0x10000866f:
          out(0xc9,uVar12);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x1000086d0:
          *(int *)((long)UNRECOVERED_JUMPTABLE_07 + 1) =
               *(int *)((long)UNRECOVERED_JUMPTABLE_07 + 1) + -1;
          UNRECOVERED_JUMPTABLE_08 = (code *)((long)UNRECOVERED_JUMPTABLE + -0x46);
          *(uint *)UNRECOVERED_JUMPTABLE_08 =
               *(uint *)UNRECOVERED_JUMPTABLE_08 << 1 |
               (uint)((int)*(uint *)UNRECOVERED_JUMPTABLE_08 < 0);
          param_3 = CONCAT71((uint7)uVar4,0xf9);
          if ((code *)((long)UNRECOVERED_JUMPTABLE + -1) == (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100008717. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            ppuVar18 = (undefined **)
                       (*(code *)(&UNK_1000086de +
                                 (int)(&switchD_100005882::switchdataD_1006cfa50)
                                      [(int)((uVar25 - 0x43 | 0x52) +
                                            (uint)(ppuVar34 == (undefined **)0x0))]))();
            return ppuVar18;
          }
          bVar10 = (byte)(code *)((long)UNRECOVERED_JUMPTABLE + -1) & 7;
          *(byte *)UNRECOVERED_JUMPTABLE_07 =
               (char)*(code *)UNRECOVERED_JUMPTABLE_07 << bVar10 |
               (byte)*(code *)UNRECOVERED_JUMPTABLE_07 >> 8 - bVar10;
          goto switchD_100005882_caseD_0;
        case (undefined **)0x1000088df:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x100008abe:
                    /* WARNING: Could not recover jumptable at 0x000100008ad2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(FUN_100008ab0 + *(int *)((long)UNRECOVERED_JUMPTABLE_07 * 4 + 0x6cf2c4)))();
          return ppuVar18;
        case (undefined **)0x100008b99:
          if (bVar57) {
            uVar1 = *(uint *)((long)UNRECOVERED_JUMPTABLE + 0x5af383fb);
          }
          *(undefined4 *)((long)UNRECOVERED_JUMPTABLE + 0x10000a670) = 0x50a01b4b;
          *(undefined8 *)((long)UNRECOVERED_JUMPTABLE + 0x10000a64c) = 0x611c7e149b50062b;
          appuStack_228[1] = (undefined **)0x100008c10;
          uVar31 = (*(code *)(UNRECOVERED_JUMPTABLE_10[(int)(uVar25 ^ 0x59)] + -3))
                             (*(undefined4 *)(UNRECOVERED_JUMPTABLE_10[uVar25 & 0x1768f594] + -2),
                              *(undefined8 *)((ulong)uVar1 + 0xb085906243d74671),
                              *(int *)((ulong)uVar1 + 0xb085906243d7467d) + -0x5868a8b,&puStack_138,
                              &uStack_88);
                    /* WARNING: Could not recover jumptable at 0x000100008c55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_100008b85 +
                               (int)(&switchD_100005882::switchdataD_1006cfa50)
                                    [(int)(((uVar31 ^ 0x5effdff6) +
                                            (uVar33 * 0x3e + 0xbdffbf70 & uVar31 * 2) == 0x6effdff9)
                                          + uVar25)]))();
          return ppuVar18;
        case (undefined **)0x100008dd3:
          if ((undefined **)UNRECOVERED_JUMPTABLE != (undefined **)0x1 && !bVar57) {
            ppuVar18 = (undefined **)FUN_100003918();
            return ppuVar18;
          }
          if (!bVar56 && !bVar57) {
            ppuVar18 = (undefined **)FUN_100003ff0();
            return ppuVar18;
          }
                    /* WARNING: Could not emulate address calculation at 0x000100008d7b */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_100008d54 +
                               (&iRam000000003165f9b3)
                               [(int)((ppuVar34[3] == (undefined *)0x0) + 0x1ee4c12e)]))
                               (ppuVar34[3],
                                &DAT_100008d54 +
                                (&iRam000000003165f9b3)
                                [(int)((ppuVar34[3] == (undefined *)0x0) + 0x1ee4c12e)]);
          return ppuVar18;
        case (undefined **)0x10000901b:
          if (uVar26 < uVar6 == bVar55) {
            param_5 = (undefined **)(ulong)(uVar26 < uVar46);
          }
                    /* WARNING: Could not recover jumptable at 0x00010000904d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_100008fd0 +
                               (int)(&uRam6d94841a1ee4c12e)[(int)param_5 + 0x3166a97d]))
                               (&DAT_100008fd0 +
                                (int)(&uRam6d94841a1ee4c12e)[(int)param_5 + 0x3166a97d]);
          return ppuVar18;
        case (undefined **)0x10000910f:
          ppuStack_c0 = (undefined **)0x565b69c;
                    /* WARNING: Could not recover jumptable at 0x000100009192. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_1000067a4 +
                               *(int *)(&DAT_1006cf2d0 +
                                       (long)(int)((uint)(uVar1 <= uVar26 && uStack_250 < 0xf161b091
                                                         ) + (int)CONCAT71(uVar24,bVar10 + 0x41)) *
                                       4)))();
          return ppuVar18;
        case (undefined **)0x1000091aa:
          if (bVar57 || (long)UNRECOVERED_JUMPTABLE < -0x10000a624) goto LAB_10000922a;
          *UNRECOVERED_JUMPTABLE_09 = (undefined *)0x0;
          pcVar14 = (char *)((long)param_5 + -0x365cb05a40fa5045);
          pcVar14[0] = -0x1a;
          pcVar14[1] = '<';
          pcVar14[2] = 'f';
          pcVar14[3] = ']';
          pcVar14[4] = '.';
          pcVar14[5] = -0x42;
          pcVar14[6] = 's';
          pcVar14[7] = 'z';
          appuStack_228[1] = (undefined **)0x1000091d3;
          (*(code *)ppuVar34)(UNRECOVERED_JUMPTABLE_09);
          ppuStack_78 = (undefined **)&lRam000000003166a97d;
          param_6 = (undefined **)&DAT_1006cf2d0;
          goto LAB_1000091e1;
        case (undefined **)0x100009272:
          *(code *)((long)UNRECOVERED_JUMPTABLE + -0x77) =
               (code)((byte)*(code *)((long)UNRECOVERED_JUMPTABLE + -0x77) | bVar10);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x10000959e:
          cVar9 = (code)in(uVar30);
          *(code *)ppuVar43 = cVar9;
          ppuVar54 = (undefined **)(ulong)(uVar25 - 0xaa);
          lVar16 = *(long *)((long)param_6 + -0x4f7a6f9dbc28b98f);
          uVar33 = ((int)local_128 - ((int)local_128 * 2 & 0x38691beeU)) + 0x9c348df7;
          *(byte *)(lVar16 + (ulong)(uVar12 + 0xfa797575)) = (byte)(uVar33 >> 0x18) ^ 0x9c;
          *(byte *)(lVar16 + (ulong)(uVar12 + 0xfa797576)) =
               (byte)(uVar33 >> (((byte)(uVar25 - 0xaa) ^ 0x1d) & 0x1f)) ^ 0x34;
          *(byte *)(lVar16 + (ulong)(uVar12 + 0xfa797577)) = (byte)(uVar33 >> 8) ^ 0x8d;
          *(byte *)(lVar16 + (ulong)(uVar12 + 0xfa797578)) = (byte)uVar33 ^ 0xf7;
          uVar33 = *(uint *)param_2;
          *(uint *)param_2 = uVar33 + 4;
          UNRECOVERED_JUMPTABLE_07 =
               (undefined **)
               ((ulong)(uVar33 + 0xfa797579) + *(long *)((long)param_6 + -0x4f7a6f9dbc28b98f));
          ppuVar34 = (undefined **)(local_128 & 0xffffffff);
          pcStack_70 = (code *)CONCAT44(pcStack_70._4_4_,0x3166a97d);
          UNRECOVERED_JUMPTABLE_10 = (undefined **)&DAT_100009cf4;
          ppuVar39 = ppuVar34;
          ppuVar48 = local_1d8;
          ppuStack_150 = param_2;
          uStack_50 = param_6;
          break;
        case (undefined **)0x1000095d7:
          UNRECOVERED_JUMPTABLE = (code *)swi(1);
          ppuVar18 = (undefined **)(*UNRECOVERED_JUMPTABLE)();
          return ppuVar18;
        case (undefined **)0x1000098eb:
          ppuStack_a8 = (undefined **)&uRam6d94841a1ee4c12e;
          uStack_b8 = (undefined **)&lRam000000003166a97d;
                    /* WARNING: Could not recover jumptable at 0x00010000993c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&LAB_100009901 +
                               (int)(&switchD_100005882::switchdataD_1006cfa50)
                                    [(int)(uVar53 + 0x436432cd +
                                          (uint)(((uVar53 ^ 0xbc9bcd1e) + 0x3165f94e ^
                                                 uVar53 ^ 0xbc9bcd71) == 0x3165f9b3))]))
                               (ppuVar43,&LAB_100009901 +
                                         (int)(&switchD_100005882::switchdataD_1006cfa50)
                                              [(int)(uVar53 + 0x436432cd +
                                                    (uint)(((uVar53 ^ 0xbc9bcd1e) + 0x3165f94e ^
                                                           uVar53 ^ 0xbc9bcd71) == 0x3165f9b3))]);
          return ppuVar18;
        case (undefined **)0x100009969:
          UNRECOVERED_JUMPTABLE_10 = (undefined **)(ulong)(uStack_250 + *(uint *)ppuVar43);
          ppuStack_60 = (undefined **)0x365cb05a40fa504d;
          ppuStack_d0 = (undefined **)0x365cb05a40fa504d;
          ppuStack_c0 = (undefined **)0x365cb05a40fa504d;
          uStack_e0 = (undefined **)0x365cb05a40fa504d;
          puVar28 = &LAB_10000b19e;
          ppuVar43 = param_2;
          ppuStack_130 = UNRECOVERED_JUMPTABLE_07;
LAB_10000ae19:
          UNRECOVERED_JUMPTABLE =
               (code *)((long)(int)(&uRam6d94841a1ee4c12e)
                                   [(int)((UNRECOVERED_JUMPTABLE_07 < ppuVar34) + 0x3166a97d)] +
                       0x10000ae19);
                    /* WARNING: Could not emulate address calculation at 0x00010000ae52 */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*UNRECOVERED_JUMPTABLE)
                               (((int)ppuVar43 - (uVar46 * 2 & 0xd3e2c46a)) + -0xebdc8be,
                                (long)(int)(&uRam6d94841a1ee4c12e)
                                           [(int)((UNRECOVERED_JUMPTABLE_07 < ppuVar34) + 0x3166a97d
                                                 )],UNRECOVERED_JUMPTABLE_10,puVar28,0x3166aaf3,
                                UNRECOVERED_JUMPTABLE);
          return ppuVar18;
        case (undefined **)0x100009cbd:
          goto code_r0x000100009cd0;
        case (undefined **)0x100009cc1:
          uVar33 = CONCAT22(uVar5,CONCAT11(bVar56,cVar8));
        case (undefined **)0x100009caa:
          param_2 = (undefined **)(ulong)(0x5e2590fe < uVar1);
          ppuVar43 = (undefined **)
                     (ulong)CONCAT31((int3)(uVar33 + 0xa1da6e87 >> 8),
                                     uStack_250 < uVar33 + 0xa1da6e87 != 0x5e2590fe < uVar1);
          param_5 = (undefined **)(ulong)(uStack_250 < uVar12);
code_r0x000100009cd0:
          ppuVar18 = (undefined **)((ulong)param_2 & 0xffffffff);
          if ((char)ppuVar43 == '\0') {
            ppuVar18 = param_5;
          }
                    /* WARNING: Could not recover jumptable at 0x000100009cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_100009c78 +
                               (int)*(uint *)((long)ppuVar54 +
                                             (long)(int)(((uint)ppuVar18 & 0xff) + uVar33) * 4)))
                               (ppuVar43,ppuVar18,
                                &DAT_100009c78 +
                                (int)*(uint *)((long)ppuVar54 +
                                              (long)(int)(((uint)ppuVar18 & 0xff) + uVar33) * 4));
          return ppuVar18;
        case (undefined **)0x100009cec:
          return UNRECOVERED_JUMPTABLE_07;
        case (undefined **)0x100009d16:
          pcVar14 = (char *)((long)ppuVar34 + (long)UNRECOVERED_JUMPTABLE * 4 + 0x4d);
          *pcVar14 = *pcVar14 + (char)cVar9;
          in(0x1e);
        case (undefined **)0x100009d21:
          goto switchD_10000a6ae_caseD_9d21;
        case (undefined **)0x100009d42:
          goto switchD_10000a6ae_caseD_9d21;
        case (undefined **)0x100009dcc:
          uStack_a0 = (undefined **)CONCAT44((int)((ulong)ppuVar27 >> 0x20),uVar1);
          ppuStack_a8 = (undefined **)0x3166a8fb;
          ppuVar34 = &PTR__bootstrap_look_up_10082e9f0;
          appuStack_228[1] = (undefined **)0x100009e18;
          (*(code *)(lRam000000028bb83180 + -1))(UNRECOVERED_JUMPTABLE_07,lRam000000028bb83200 + -2)
          ;
          ppuVar19 = (undefined **)0x3166a8f6;
          UNRECOVERED_JUMPTABLE_09 = UNRECOVERED_JUMPTABLE_07;
switchD_10000a6ae_caseD_9e22:
          appuStack_228[1] = (undefined **)0x100009e2e;
          (*(code *)(ppuVar34[(long)ppuVar19] + -1))(UNRECOVERED_JUMPTABLE_09);
          pcStack_180 = (code *)(ppuVar34[0x3166a9f7] + -2);
          appuStack_228[1] = (undefined **)0x100009e5d;
          ppuStack_c8 = UNRECOVERED_JUMPTABLE_09;
          uStack_50 = (undefined **)(*pcStack_180)(UNRECOVERED_JUMPTABLE_09,ppuStack_d8);
          appuStack_228[1] = (undefined **)0x100009e75;
          auVar59 = (*(code *)ppuVar34[0x3166a9c7])();
                    /* WARNING: Could not emulate address calculation at 0x000100009e9d */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_100009dbf +
                               *(int *)(&DAT_1006cf2d0 +
                                       (long)(int)((auVar59._0_8_ == ppuVar34[0x3166a8e5] + -0xe) +
                                                  0x3166a97d) * 4)))
                               (0x2164ae80,ppuVar34[0x3166a8e5] + -0xe,auVar59._8_8_,
                                &DAT_100009dbf +
                                *(int *)(&DAT_1006cf2d0 +
                                        (long)(int)((auVar59._0_8_ == ppuVar34[0x3166a8e5] + -0xe) +
                                                   0x3166a97d) * 4));
          return ppuVar18;
        case (undefined **)0x100009e22:
          goto switchD_10000a6ae_caseD_9e22;
        case (undefined **)0x100009e3f:
          pcVar14 = (char *)((long)UNRECOVERED_JUMPTABLE * 5 + -0x4b);
          *pcVar14 = *pcVar14 + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x100009ec1:
          if ((undefined **)UNRECOVERED_JUMPTABLE == (undefined **)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100009f59. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            ppuVar18 = (undefined **)
                       (*(code *)(&DAT_100009f2f +
                                 (int)(&uRam6d94841a1ee4c12e)[(int)(uVar26 + (uVar6 < 0x3165f9b3))])
                       )();
            return ppuVar18;
          }
          UNRECOVERED_JUMPTABLE_08 = (code *)swi(0x7e);
          iVar49 = (*UNRECOVERED_JUMPTABLE_08)();
          uStack_218 = 0x100009ef0;
          uVar31 = (*pcRam0000000102b6f430)
                             (*(undefined4 *)
                               ((&PTR__bootstrap_look_up_10082e9f0)
                                [(int)(iVar49 + *(int *)((long)UNRECOVERED_JUMPTABLE + -0x73) &
                                      0xffffffa0)] + -2),local_128,UNRECOVERED_JUMPTABLE_09);
          UNRECOVERED_JUMPTABLE_10 = (undefined **)0x0;
          bVar57 = (uVar31 ^ 0xbbeefbff) + (uVar31 & 0x3beefbff) * 2 == (uVar33 ^ 0xbbeefbd8);
code_r0x000100009f0c:
                    /* WARNING: Could not recover jumptable at 0x000100009f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_100009eb4 +
                               (int)*(uint *)((long)ppuVar54 +
                                             (long)((int)CONCAT71((int7)((ulong)
                                                  UNRECOVERED_JUMPTABLE_10 >> 8),bVar57) +
                                                  0x3166a97d) * 4)))();
          return ppuVar18;
        case (undefined **)0x100009edd:
          if ((undefined **)UNRECOVERED_JUMPTABLE == (undefined **)0x1 || bVar57) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          out(uVar30,bVar10);
          goto code_r0x000100009f0c;
        case (undefined **)0x100009f79:
                    /* WARNING: Could not recover jumptable at 0x000100009fbf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_100009f5e +
                               (int)(&uRam6d94841a1ee4c12e)
                                    [(int)(((uVar6 ^ 0xa777844d) + 0xde8a3450 +
                                            (uVar33 + 0x2decf502 & uVar26 * 2 ^ 0xa0006604) ==
                                           0x46258109) + uVar45)]))();
          return ppuVar18;
        case (undefined **)0x100009ff2:
        case (undefined **)0x100009fdf:
                    /* WARNING: Could not recover jumptable at 0x00010000a007. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_100009fc4 +
                               (&iRam000000003165f9b3)
                               [(int)((uVar6 == (uVar53 + 0xb7eef8fe ^ 0x1ee4c12e)) + uVar26)]))();
          return ppuVar18;
        case (undefined **)0x10000a0a8:
          return UNRECOVERED_JUMPTABLE_07;
        case (undefined **)0x10000a0f6:
          if ((undefined **)UNRECOVERED_JUMPTABLE == (undefined **)0x1 || !bVar57) {
            *(uint *)ppuVar43 = (int)CONCAT71(uVar24,bVar10 + 0xb6) + 4;
            uStack_80 = ppuVar43;
                    /* WARNING: Could not recover jumptable at 0x00010000a130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            ppuVar18 = (undefined **)
                       (*(code *)(&DAT_10000a069 +
                                 *(int *)((long)UNRECOVERED_JUMPTABLE_09 + (long)(int)uStack_250 * 4
                                         )))
                                 (ppuVar43,param_2,
                                  &DAT_10000a069 +
                                  *(int *)((long)UNRECOVERED_JUMPTABLE_09 +
                                          (long)(int)uStack_250 * 4));
            return ppuVar18;
          }
                    /* WARNING: Could not recover jumptable at 0x00010000a179. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_09)();
          return ppuVar18;
        case (undefined **)0x10000a240:
          puVar50 = (uint *)0x6cfa50;
          if (cVar8 == '\0') {
            puVar50 = (uint *)(ulong)(0x3165f9b3 < uVar6);
          }
code_r0x00010000a250:
                    /* WARNING: Could not recover jumptable at 0x00010000a26e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_10000a201 +
                               *(int *)((long)UNRECOVERED_JUMPTABLE_09 +
                                       (long)(int)(((uint)puVar50 & 0xff) + uVar1) * 4)))();
          return ppuVar18;
        case (undefined **)0x10000a258:
          goto code_r0x00010000a250;
        case (undefined **)0x10000a28f:
          appuStack_228[1] = (undefined **)0x10000a29c;
          (*(code *)puVar21)();
          ppuVar34[1] = (undefined *)0x0;
                    /* WARNING: Could not emulate address calculation at 0x00010000a2c6 */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_100008d54 +
                               (&iRam000000003165f9b3)
                               [(int)((ppuVar34[3] == (undefined *)0x0) + 0x3dc98266)]))
                               (ppuVar34[3],
                                &DAT_100008d54 +
                                (&iRam000000003165f9b3)
                                [(int)((ppuVar34[3] == (undefined *)0x0) + 0x3dc98266)],
                                (long)(&iRam000000003165f9b3)
                                      [(int)((ppuVar34[3] == (undefined *)0x0) + 0x3dc98266)],
                                0x3dc9826d);
          return ppuVar18;
        case (undefined **)0x10000a3ba:
          *(code *)((long)UNRECOVERED_JUMPTABLE_07 + 99) =
               (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_07 + 99) + (char)cVar9);
          uVar33 = (&switchD_100005882::switchdataD_1006cfa50)[(long)UNRECOVERED_JUMPTABLE];
          *(undefined4 **)(unaff_RBP + -0x58) = &uRam6d94841a1ee4c12e;
                    /* WARNING: Could not recover jumptable at 0x00010000a3df. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_10000a392 + (int)uVar33))
                               (0x3165f9b2,&DAT_10000a392 + (int)uVar33,&uRam6d94841a1ee4c12e);
          return ppuVar18;
        case (undefined **)0x10000a3ec:
          *(undefined8 *)((long)UNRECOVERED_JUMPTABLE + -0x7c35767f) = uStack_218;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x10000a444:
          appuStack_228[1] = (undefined **)0x10000a449;
          (*(code *)puVar21)();
          *(code **)((long)UNRECOVERED_JUMPTABLE_09 + (long)ppuVar54) = pcStack_140;
          *piStack_1a0 = uStack_f0._4_4_;
          iVar49 = *(int *)ppuStack_160;
          lVar16 = *(long *)((long)UNRECOVERED_JUMPTABLE_09 + (long)ppuVar54);
          *(undefined1 *)(lVar16 + (ulong)(iVar49 + 0xd953facd)) = 0;
          *(undefined1 *)(lVar16 + (ulong)(iVar49 + 0xd953face)) = 0;
          *(undefined1 *)(lVar16 + (ulong)(iVar49 + 0xd953facf)) = 0;
          *(undefined1 *)(lVar16 + (ulong)(iVar49 + 0xd953fad0)) = 1;
          *(int *)ppuStack_160 = *(int *)ppuStack_160 + 4;
          uStack_b8 = UNRECOVERED_JUMPTABLE_09;
                    /* WARNING: Could not recover jumptable at 0x00010000a4e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&LAB_10000a4be +
                               (int)(&uRam6d94841a1ee4c12e)[(int)((uVar33 ^ 0xb3) * 0x3d + 1)]))();
          return ppuVar18;
        case (undefined **)0x10000a55d:
          appuStack_228[1] = (undefined **)0x10000a562;
          sVar11 = func_0x0001484c95e5();
                    /* WARNING: Could not recover jumptable at 0x00010000a590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_10000a55b +
                               (int)*(uint *)((long)ppuVar48 +
                                             (long)(int)((*(long *)((&
                                                  PTR__bootstrap_look_up_10082e9f0)
                                                  [(uint)(int)sVar11] + -3) == 0) + 0x1ee4c12e) * 4)
                               ))();
          return ppuVar18;
        case (undefined **)0x10000a624:
          goto code_r0x00010000a624;
        case (undefined **)0x10000a62c:
          return UNRECOVERED_JUMPTABLE_07;
        case (undefined **)0x10000a62d:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x10000a64c:
          *(int *)((long)ppuVar34 + 0x478b0877) = *(int *)((long)ppuVar34 + 0x478b0877) + -1;
          UNRECOVERED_JUMPTABLE_07 = (undefined **)((ulong)UNRECOVERED_JUMPTABLE_07 | 0x42);
        case (undefined **)0x10000a654:
          goto switchD_10000a6ae_caseD_a654;
        case (undefined **)0x10000a655:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x10000a65b:
          goto switchD_10000a6ae_caseD_a65b;
        case (undefined **)0x10000a677:
          UNRECOVERED_JUMPTABLE_07 = (undefined **)CONCAT71(uVar24,bVar56);
          goto switchD_10000a6ae_caseD_a65b;
        case (undefined **)0x10000a688:
          UNRECOVERED_JUMPTABLE = (code *)0x0;
          goto switchD_10000a6ae_caseD_a65b;
        case (undefined **)0x10000a695:
          goto switchD_10000a6ae_caseD_a695;
        case (undefined **)0x10000a6d8:
          if (-1 < (long)param_2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x10000a6ea:
          uVar33 = uVar33 * 2 + 0x2b242a4e;
          uVar33 = uVar53 + (uVar33 ^ 0x6a6ffadb) + (uVar33 & 0xea6ffada) * 2 + 0x118d5ff1;
          bVar55 = uVar1 < uVar33;
          if (bVar41 != uVar33 < 0x7bfd5bc6) {
            bVar55 = uVar33 < 0x7bfd5bc6;
          }
                    /* WARNING: Could not recover jumptable at 0x00010000a754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)((long)param_2 +
                               (long)(int)(&switchD_100005882::switchdataD_1006cfa50)
                                          [(int)(bVar55 + uVar12 + 0x4364339e)]))
                               ((code *)((long)param_2 +
                                        (long)(int)(&switchD_100005882::switchdataD_1006cfa50)
                                                   [(int)(bVar55 + uVar12 + 0x4364339e)]));
          return ppuVar18;
        case (undefined **)0x10000a757:
          ppuStack_60 = (undefined **)&uRam6d94841a1ee4c12e;
          uStack_88 = (undefined **)CONCAT44(0x3166a97d,(int)uStack_88);
          ppuStack_110 = (undefined **)UNRECOVERED_JUMPTABLE;
          ppuStack_f8 = (undefined **)UNRECOVERED_JUMPTABLE;
          uStack_f0 = (undefined **)UNRECOVERED_JUMPTABLE;
          ppuStack_e8 = (undefined **)UNRECOVERED_JUMPTABLE;
          uStack_e0 = (undefined **)UNRECOVERED_JUMPTABLE;
          ppuStack_d0 = (undefined **)UNRECOVERED_JUMPTABLE;
          ppuStack_c8 = (undefined **)UNRECOVERED_JUMPTABLE;
          ppuVar18 = (undefined **)FUN_10000aa18(ppuVar43,pcStack_158);
          return ppuVar18;
        case (undefined **)0x10000a7d7:
                    /* WARNING: Could not recover jumptable at 0x00010000a7ef. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_10000a7ae +
                               (&iRam000000003165f9b3)[(int)(CONCAT31(uVar4,1) + uVar12)]))();
          return ppuVar18;
        case (undefined **)0x10000a877:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x10000a911:
          bVar58 = 1;
          UNRECOVERED_JUMPTABLE_10 = uStack_90;
        case (undefined **)0x10000a913:
          *(uint *)ppuVar43 = *(uint *)param_2;
          ppuRamffffff78958b48c9 = UNRECOVERED_JUMPTABLE_07;
          *(uint *)((long)UNRECOVERED_JUMPTABLE_10 + 0xbf05afbb) = uVar12;
          *(undefined4 *)((long)UNRECOVERED_JUMPTABLE_10 + -0x365cb05a40fa5041) = 0x7a73be2e;
code_r0x00010000a937:
          ppuVar34 = (undefined **)PTR__xpc_release_10082eb00;
          ppuStack_c8 = ppuStack_a8;
          uStack_88 = (undefined **)0x3166a97d3166a97d;
          appuStack_228[1] = (undefined **)0x10000a998;
          ppuStack_78 = ppuVar27;
          ppuStack_60 = UNRECOVERED_JUMPTABLE_10;
          uStack_50 = UNRECOVERED_JUMPTABLE_09;
          (*(code *)PTR__xpc_release_10082eb00)
                    (ppuVar27,(undefined **)
                              ((long)UNRECOVERED_JUMPTABLE + (0x200014c5 - (ulong)bVar58) * 8));
          appuStack_228[1] = (undefined **)0x10000a9a1;
          (*(code *)ppuVar34)(ppuStack_c8);
          UNRECOVERED_JUMPTABLE_07 =
               (undefined **)
               (long)(int)(&uRam6d94841a1ee4c12e)[(int)((ppuStack_d8 == (undefined **)0x0) + 0x5a)];
          ppuVar54 = ppuStack_d8;
switchD_10000a6ae_caseD_a9a9:
          ppuStack_d8 = ppuVar54;
          uStack_80 = ppuVar34;
                    /* WARNING: Could not recover jumptable at 0x00010000a9be. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)(*(code *)((long)UNRECOVERED_JUMPTABLE_07 + 0x10000a967))();
          return ppuVar18;
        case (undefined **)0x10000a92c:
          *(uint *)ppuVar43 = *(uint *)param_2;
          ppuRam7a73be2e0204c7c9 = UNRECOVERED_JUMPTABLE_07;
          goto code_r0x00010000a937;
        case (undefined **)0x10000a9a9:
          goto switchD_10000a6ae_caseD_a9a9;
        case (undefined **)0x10000ac07:
          return UNRECOVERED_JUMPTABLE_07;
        case (undefined **)0x10000ac1b:
          cVar9 = *(code *)((long)param_2 + (ulong)(uVar26 + 0xa723cfe7));
          *(uint *)uStack_80 = uVar26 + 4;
          ppuVar34 = (undefined **)(ulong)uStack_250;
          appuStack_228[1] = (undefined **)0x10000ac5d;
          UNRECOVERED_JUMPTABLE_07 =
               (undefined **)
               (*(code *)uStack_90)
                         (ppuVar34,param_2,UNRECOVERED_JUMPTABLE_10,
                          ((uint)(byte)cVar9 | uVar1 << 8 | uVar12 | 0xe | uVar45) ^ 0xb7efa97f);
          *local_1e0 = UNRECOVERED_JUMPTABLE_07;
          UNRECOVERED_JUMPTABLE_10 = (undefined **)&UNK_10000b424;
          ppuVar39 = ppuVar34;
          ppuVar48 = (undefined **)&uRam6d94841a1ee4c12e;
          puVar50 = (uint *)UNRECOVERED_JUMPTABLE_09;
          break;
        case (undefined **)0x10000ac6d:
          *(code *)((long)UNRECOVERED_JUMPTABLE_07 + -0x77) =
               (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE_07 + -0x77) + (char)cVar9);
          ppuVar48 = (undefined **)&uRam6d94841a1ee4c12e;
          break;
        case (undefined **)0x10000ac92:
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          goto code_r0x00010000ac94;
        case (undefined **)0x10000accf:
          uVar22 = (ulong)*(uint *)UNRECOVERED_JUMPTABLE_07;
          puVar21 = UNRECOVERED_JUMPTABLE_10[0x1ee4c19e];
          *(undefined ***)(uVar22 - 0xf8) = ppuVar34;
          appuStack_228[1] = (undefined **)0x10000ad03;
          lVar16 = (*(code *)(puVar21 + -1))(ppuVar34,*(undefined8 *)(uVar22 - 0x68),uVar22 - 0x128)
          ;
          iVar49 = *(int *)((long)param_5 + (long)(int)((lVar16 == 0) + 0x1ee4c12e) * 4);
          *(undefined8 *)(uVar22 - 0x198) = 0;
          *(undefined4 **)(uVar22 - 0x58) = &uRam6d94841a1ee4c12e;
                    /* WARNING: Could not recover jumptable at 0x00010000ad49. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)(*(code *)(&DAT_10000acca + iVar49))(0x3165f9a5);
          return ppuVar18;
        case (undefined **)0x10000ad15:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x10000ae35:
          if ((undefined **)UNRECOVERED_JUMPTABLE != (undefined **)0x1) {
            ppuStack_d0 = (undefined **)(ulong)uStack_250;
                    /* WARNING: Could not recover jumptable at 0x00010000aea6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            ppuVar18 = (undefined **)
                       (*(code *)(&UNK_10000ae65 +
                                 (int)(&uRam6d94841a1ee4c12e)[(int)(uVar46 + (uVar26 == 0))]))();
            return ppuVar18;
          }
          puVar28 = (undefined1 *)(ulong)uVar33;
          goto LAB_10000ae19;
        case (undefined **)0x10000ae72:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x10000aebc:
          ppuVar37 = (undefined **)(ulong)(uVar36 ^ 2);
          ppuVar37[-0xe] = (undefined *)0x1ee4c149;
          UNRECOVERED_JUMPTABLE_09 = &PTR__bootstrap_look_up_10082e9f0;
          UNRECOVERED_JUMPTABLE_10 =
               (undefined **)((&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar25 - 0x85)] + -1);
          uVar26 = uVar25;
          goto code_r0x00010000aee2;
        case (undefined **)0x10000aee0:
code_r0x00010000aee2:
          appuStack_228[1] = (undefined **)0x10000aefb;
          (*(code *)UNRECOVERED_JUMPTABLE_10)
                    (UNRECOVERED_JUMPTABLE_07,UNRECOVERED_JUMPTABLE_09[(int)(uVar26 ^ 0xb7)] + -2);
          appuStack_228[1] = (undefined **)0x10000af11;
          (*(code *)(UNRECOVERED_JUMPTABLE_09[(int)(uVar25 ^ 0x83)] + -1))(UNRECOVERED_JUMPTABLE_07)
          ;
          ppuVar51 = (undefined **)(UNRECOVERED_JUMPTABLE_09[(int)(uVar25 - 0x80)] + -2);
          ppuVar37[-0x20] = (undefined *)UNRECOVERED_JUMPTABLE_07;
          ppuVar43 = UNRECOVERED_JUMPTABLE_07;
switchD_10000a6ae_caseD_af29:
          appuStack_228[1] = (undefined **)0x10000af33;
          uVar20 = (*(code *)ppuVar51)(ppuVar43,ppuVar37[-0x1a]);
          appuStack_228[1] = (undefined **)0x10000af4d;
          puVar21 = (undefined *)
                    (*(code *)(&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar25 - 0x70)])(uVar20);
                    /* WARNING: Could not recover jumptable at 0x00010000af91. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_10000aeaa +
                               (int)(&switchD_100005882::switchdataD_1006cfa50)
                                    [(int)((puVar21 ==
                                           (&PTR__bootstrap_look_up_10082e9f0)
                                           [(int)(uVar25 & 0x93c84965)] + -0xe) + uVar25)]))();
          return ppuVar18;
        case (undefined **)0x10000af29:
          goto switchD_10000a6ae_caseD_af29;
        case (undefined **)0x10000b085:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x10000b2bb:
          *(uint *)((long)UNRECOVERED_JUMPTABLE_07 + 0x6c) =
               *(int *)((long)UNRECOVERED_JUMPTABLE_07 + 0x6c) + uVar12 + (uint)bVar56;
          pcVar14 = (char *)((long)ppuVar34 + (long)UNRECOVERED_JUMPTABLE * 4 + -0x43);
          *pcVar14 = *pcVar14 + (char)cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x10000b354:
          puStack_168 = &switchD_100005882::switchdataD_1006cfa50;
          switchD_100005882::switchdataD_1006cfa50 =
               switchD_100005882::switchdataD_1006cfa50 + uVar12;
                    /* WARNING: Could not recover jumptable at 0x00010000b38f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)((long)(int)(&uRam6d94841a1ee4c12e)[(int)(uVar33 + 1)] + 0x10000b369)
                     )();
          return ppuVar18;
        case (undefined **)0x10000b39a:
          ppuStack_78 = (undefined **)0xafe51a45;
                    /* WARNING: Could not emulate address calculation at 0x00010000b3c7 */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_10000b393 +
                               (int)(&uRam6d94841a1ee4c12e)
                                    [(int)((param_5 == (undefined **)0x365cb05a40fa504d) +
                                          0x3166a97d)]))();
          return ppuVar18;
        case (undefined **)0x10000b48e:
                    /* WARNING: Could not recover jumptable at 0x00010000b495. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)(*UNRECOVERED_JUMPTABLE)();
          return ppuVar18;
        case (undefined **)0x10000b4d0:
          *(int *)((long)UNRECOVERED_JUMPTABLE_07 + 1) =
               *(int *)((long)UNRECOVERED_JUMPTABLE_07 + 1) + -1;
          UNRECOVERED_JUMPTABLE_08 = (code *)((long)UNRECOVERED_JUMPTABLE + -0x47);
          *(uint *)UNRECOVERED_JUMPTABLE_08 =
               *(uint *)UNRECOVERED_JUMPTABLE_08 << 1 |
               (uint)((int)*(uint *)UNRECOVERED_JUMPTABLE_08 < 0);
          appuStack_228[0] = param_5;
          appuStack_228[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010000b4e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)(*UNRECOVERED_JUMPTABLE)(ppuVar43,param_2,param_5);
          return ppuVar18;
        case (undefined **)0x10000b4fe:
          param_5 = (undefined **)0x365cb05a40fa504d;
          ppuStack_78 = UNRECOVERED_JUMPTABLE_07;
LAB_1000091e1:
          iVar49 = (int)ppuStack_78;
          uVar53 = iVar49 + 0x66a9cd17U & 0x1ad7c1fc;
          ppuVar43 = (undefined **)
                     (ulong)*(uint *)(*(long *)(&uRam6d94841a1ee4c12e +
                                               (long)(iVar49 + -0x7e7e7119) * 2) + -3);
          UNRECOVERED_JUMPTABLE_10 = (undefined **)((ulong)ppuStack_98 >> 0x20);
          UNRECOVERED_JUMPTABLE_07 =
               *(undefined ***)(&uRam6d94841a1ee4c12e + (long)(iVar49 + -0x7e7e70f9) * 2);
          param_2 = ppuStack_100;
          ppuVar51 = ppuStack_78;
LAB_10000922a:
          appuStack_228[1] = (undefined **)0x100009236;
          (*(code *)((long)UNRECOVERED_JUMPTABLE_07 + -2))
                    (ppuVar43,param_2,UNRECOVERED_JUMPTABLE_10);
          ppuStack_60 = param_5;
                    /* WARNING: Could not recover jumptable at 0x000100009268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&LAB_1000091e1 +
                               *(int *)((long)param_6 +
                                       (long)(int)((int)ppuVar51 + -0x7e7e70fa +
                                                  (uint)((int)uStack_88 == uVar53 + 0x3166a94d)) * 4
                                       )))();
          return ppuVar18;
        case (undefined **)0x10000b777:
                    /* WARNING: Could not recover jumptable at 0x00010000b787. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&LAB_100009052 +
                               (int)(&switchD_100005882::switchdataD_1006cfa50)[uVar33]))
                               (ppuVar43,param_2,
                                &LAB_100009052 +
                                (int)(&switchD_100005882::switchdataD_1006cfa50)[uVar33]);
          return ppuVar18;
        case (undefined **)0x10000b809:
          UNRECOVERED_JUMPTABLE_08 = (code *)((long)UNRECOVERED_JUMPTABLE + in_GS_OFFSET + -0x48);
          *(uint *)UNRECOVERED_JUMPTABLE_08 = *(uint *)UNRECOVERED_JUMPTABLE_08 ^ uVar1;
          appuStack_228[1] = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010000b81d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)(*UNRECOVERED_JUMPTABLE)(ppuVar43,param_2,param_5);
          return ppuVar18;
        case (undefined **)0x10000b87e:
          *(uint *)ppuStack_1a8 = uVar12;
          lVar16 = lRam6d94841a504abae1;
          iVar49 = *piStack_118;
          uVar33 = (uVar53 ^ 0xf) * 0x31;
          *(undefined1 *)(lRam6d94841a504abae1 + (ulong)(iVar49 + 0xee6010c4)) = 0;
          *(undefined1 *)(lVar16 + (ulong)(iVar49 + 0xee6010c5)) = 0;
          *(undefined1 *)(lVar16 + (ulong)(iVar49 + 0xee6010c6)) = 0;
          uVar22 = (ulong)((uVar33 ^ 0xee601003) + iVar49);
          *(undefined1 *)(lVar16 + uVar22) = 1;
          *piStack_118 = *piStack_118 + 4;
          UNRECOVERED_JUMPTABLE =
               (code *)((long)*(int *)((long)&lRam000000003166a97d + (long)(int)(uVar33 + 1) * 4) +
                       0x10000b8df);
                    /* WARNING: Could not recover jumptable at 0x00010000b905. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*UNRECOVERED_JUMPTABLE)
                               (ppuStack_58,piStack_118,uVar22,UNRECOVERED_JUMPTABLE,
                                &lRam000000003166a97d);
          return ppuVar18;
        case (undefined **)0x10000b9f6:
          uVar22 = uVar36 - 0x1a8 ^ _DAT_10088e7e0 ^ DAT_10088e7f8;
          _DAT_10088e7e0 = uVar22 * 0x79f54c43 ^ 0xa7a004eac7f8732f;
          DAT_10088e7f8 = (uVar22 ^ 0xa7a004eac7f8732f) * 0x79f54c43;
          uVar33 = ((int)DAT_10088e7f8 + (int)_DAT_10088e7e0 ^ 0xc7f8732fU) * 0x79f54c43;
          ppuVar54 = &PTR__bootstrap_look_up_10082e9f0;
          UNRECOVERED_JUMPTABLE =
               (code *)(&PTR__bootstrap_look_up_10082e9f0)
                       [(int)((byte)((byte)uVar33 ^
                                    (&DAT_1006cff50)[(byte)(&DAT_1006d2b00)[uVar33 & 0xff] ^ 0x5e])
                             - 0x52)];
          appuStack_228[1] = (undefined **)0x10000ba75;
          ppuVar51 = (undefined **)(*UNRECOVERED_JUMPTABLE)(0x18);
          puVar52 = (undefined4 *)&DAT_1006d03f0;
          switch(ppuVar51 == (undefined **)0x0) {
          case false:
            *ppuVar51 = (undefined *)0x0;
            ppuVar51[1] = (undefined *)0x578a91945daaea27;
            *(undefined4 *)(ppuVar51 + 2) = 0;
            ppuVar43 = (undefined **)0x1000;
            appuStack_228[1] = (undefined **)0x10000e303;
            ppuStack_b0 = ppuVar51 + 0x9f4facf3ce26f49;
            ppuStack_a8 = (undefined **)UNRECOVERED_JUMPTABLE;
            puVar21 = (undefined *)(*UNRECOVERED_JUMPTABLE)();
            *ppuVar51 = puVar21;
            UNRECOVERED_JUMPTABLE =
                 switchD_10000baba::caseD_0 +
                 *(int *)(&DAT_1006d03f0 + (ulong)((puVar21 == (undefined *)0x0) + 7) * 4);
            uStack_50 = (undefined **)PTR__free_10082eaf0;
            switch(puVar21 == (undefined *)0x0) {
            case false:
              uVar33 = 1;
              param_2 = (undefined **)0x742c45ff88570c30;
              UNRECOVERED_JUMPTABLE_07 = (undefined **)(ulong)((ppuVar51 == (undefined **)0x0) + 1);
              ppuStack_1a8 = UNRECOVERED_JUMPTABLE_09;
              goto switchD_10000a6ae_caseD_11677;
            case true:
              switch(ppuVar51 == (undefined **)0x0) {
              case false:
                appuStack_228[1] = (undefined **)0x100013efe;
                (*(code *)PTR__free_10082eaf0)(ppuVar51);
                ppuVar18 = (undefined **)switchD_10000baba::caseD_1();
                return ppuVar18;
              }
            }
          }
          if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
            return (undefined **)0xffff5035;
          }
                    /* WARNING: Subroutine does not return */
          appuStack_228[1] = (undefined **)&UNK_1000104f1;
          ___stack_chk_fail();
        case (undefined **)0x10000ba16:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x10000bec4:
          ppuStack_160 = (undefined **)((ulong)UNRECOVERED_JUMPTABLE_07 ^ 10);
          UNRECOVERED_JUMPTABLE =
               (code *)((long)(int)(&uRam6d94841a1ee4c12e)
                                   [(int)((ppuStack_160 < param_2) + 0x3166a97d)] + 0x10000de3e);
                    /* WARNING: Could not emulate address calculation at 0x00010000de73 */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*UNRECOVERED_JUMPTABLE)
                               (((*(uint *)ppuStack_170 + 0xfaeefdf3) -
                                ((*(uint *)ppuStack_170 + 0xfaeefdf3) * 2 & 0xdc26fed4)) +
                                -0xebdc8be,param_2,
                                (long)(int)(&uRam6d94841a1ee4c12e)
                                           [(int)((ppuStack_160 < param_2) + 0x3166a97d)],
                                &UNK_1000107cc,0x9433fc50,UNRECOVERED_JUMPTABLE);
          return ppuVar18;
        case (undefined **)0x10000c05a:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x10000c069:
          *(undefined8 *)((ulong)ppuStack_58 & 0xffffffff) = 0;
          ((undefined8 *)((ulong)ppuStack_58 & 0xffffffff))[1] = ppuVar34;
          appuStack_228[1] = (undefined **)0x10000c07a;
          (*pcStack_70)();
          ppuStack_68 = (undefined **)&lRam000000003166a97d;
          ppuStack_108 = ppuStack_78;
          ppuVar18 = (undefined **)FUN_1000134a9((ulong)ppuVar54 & 0xffffffff);
          return ppuVar18;
        case (undefined **)0x10000c364:
          UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE + 0xf);
          *(uint *)UNRECOVERED_JUMPTABLE =
               *(uint *)UNRECOVERED_JUMPTABLE << 0x17 | *(uint *)UNRECOVERED_JUMPTABLE >> 9;
          return UNRECOVERED_JUMPTABLE_07;
        case (undefined **)0x10000c5a7:
          ppuVar43 = (undefined **)((long)UNRECOVERED_JUMPTABLE + 0x3166a985);
          UNRECOVERED_JUMPTABLE_10 = (undefined **)((long)UNRECOVERED_JUMPTABLE + 0x3166a989);
        case (undefined **)0x10000c5b7:
          uVar53 = uVar53 ^ 0x40;
          ppuStack_120 = (undefined **)((long)UNRECOVERED_JUMPTABLE + 0x3166a98d);
          ppuStack_198 = *(undefined ***)((long)UNRECOVERED_JUMPTABLE + 0x3166a98d);
          uVar33 = *(uint *)ppuVar43;
          ppuStack_130 = (undefined **)(ulong)uVar33;
          puVar21 = (undefined *)0x100010fde;
          ppuStack_178 = UNRECOVERED_JUMPTABLE_10;
          ppuStack_170 = ppuVar43;
switchD_10000e2c3_caseD_c5ea:
          uVar31 = uVar53 + 0xee4d4706 & 0x11b2b8ff;
          ppuStack_58 = (undefined **)0xb;
                    /* WARNING: Could not recover jumptable at 0x00010000c664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)((long)(int)(&switchD_100013a5e::switchdataD_1006d0050)
                                           [(int)(uVar31 + (UNRECOVERED_JUMPTABLE_07 < ppuStack_198)
                                                 )] + 0x10000c612))
                               ((uVar33 - ((uint)((long)ppuStack_130 <<
                                                 (((char)uVar31 - 2U ^ 0x15) & 0x3f)) &
                                          ((uVar31 + 0x34 | 0x81) ^ 0xe2846e4f))) + -0xebdc8be,
                                ppuStack_198,puVar21,
                                (code *)((long)(int)(&switchD_100013a5e::switchdataD_1006d0050)
                                                    [(int)(uVar31 + (UNRECOVERED_JUMPTABLE_07 <
                                                                    ppuStack_198))] + 0x10000c612));
          return ppuVar18;
        case (undefined **)0x10000c647:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x10000c799:
          appuStack_228[1] = (undefined **)&UNK_10000c7cc;
          ppuStack_d0 = ppuVar34;
          lVar16 = (*(code *)uStack_88)
                             ((uVar53 + 0x76fcfc0a & 0x890303f3 ^ (uVar53 ^ 0xb8) * 0xb ^ 0xc180143d
                              ) + uStack_250);
          puStack_168 = (uint *)0x0;
                    /* WARNING: Could not recover jumptable at 0x00010000c803. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)((long)(int)(&uRam6d94841a1ee4c12e)[(int)(uVar53 + (lVar16 == 0))] +
                               0x10000c799))(ppuStack_58);
          return ppuVar18;
        case (undefined **)0x10000ca43:
          goto switchD_10000a6ae_caseD_ca43;
        case (undefined **)0x10000ca54:
                    /* WARNING: Could not recover jumptable at 0x00010000ca7f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_10000c9da + (int)(&uRam6d94841a1ee4c12e)[(int)(uVar6 + uVar1)])
                     )(&DAT_10000c9da + (int)(&uRam6d94841a1ee4c12e)[(int)(uVar6 + uVar1)]);
          return ppuVar18;
        case (undefined **)0x10000cc86:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x10000d09b:
                    /* WARNING: Could not recover jumptable at 0x00010000d0b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)((long)(int)(&uRam6d94841a1ee4c12e)[(int)((uVar12 & 1) + uVar25)] +
                               0x10000d08c))();
          return ppuVar18;
        case (undefined **)0x10000d1e2:
          *(byte *)param_5 = *(char *)param_5 + bVar10;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(byte *)(ppuVar43 + 0x200) = (char)*(code *)(ppuVar43 + 0x200) + bVar35;
          appuStack_228[1] = (undefined **)0x10000d1f6;
          puVar21 = (undefined *)(*(code *)uStack_88)();
          *ppuVar34 = puVar21;
                    /* WARNING: Could not emulate address calculation at 0x00010000d201 */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(switchD_100010bcf::caseD_0 +
                       (int)(&uRam6d94841a1ee4c12e)[puVar21 == (undefined *)0x0]))();
          return ppuVar18;
        case (undefined **)0x10000d291:
          iRam000000003165f9b3 = uVar12 + 4;
          ppuStack_58 = (undefined **)&iRam000000003165f9b3;
                    /* WARNING: Could not recover jumptable at 0x00010000d2e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_10000d21b +
                               *(int *)((long)UNRECOVERED_JUMPTABLE_09 +
                                       (long)(int)(((uVar1 ^ (uVar6 | uVar45) ^ 0xb7efa938) +
                                                    (uVar6 | uVar45) * 2 == -0x48105681) + uVar26) *
                                       4)))();
          return ppuVar18;
        case (undefined **)0x10000d518:
                    /* WARNING: Could not recover jumptable at 0x00010000d545. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&LAB_10000d501 +
                               (&iRam000000003165f9b3)
                               [(int)(uVar53 + 0xf91fe73 + (uint)(uVar12 + uVar26 == -0x30f8feaf))])
                     )(ppuVar43,param_2,
                       &LAB_10000d501 +
                       (&iRam000000003165f9b3)
                       [(int)(uVar53 + 0xf91fe73 + (uint)(uVar12 + uVar26 == -0x30f8feaf))]);
          return ppuVar18;
        case (undefined **)0x10000d56e:
          iVar49 = (uVar46 ^ 0xd8e123c4) * 0x65773fe7;
          iStack_40 = iVar49 + uVar25 + -0x3a;
          iStack_44 = uVar1 + iVar49 + uVar25 + -0x1b + uVar12;
          appuStack_228[1] = (undefined **)0x10000d599;
          FUN_100014c30();
          ppuStack_68 = (undefined **)0x650a959f740c42c3;
                    /* WARNING: Could not recover jumptable at 0x00010000d5d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_10000d548 +
                               (int)(&switchD_100005882::switchdataD_1006cfa50)
                                    [(int)((iStack_3c == 0x52e88d51) + uVar25)]))();
          return ppuVar18;
        case (undefined **)0x10000d70d:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x10000d7c7:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x10000d876:
          appuStack_228[1] = (undefined **)0x10000d885;
          lVar16 = (*(code *)uStack_88)(0x18);
          uStack_80 = (undefined **)CONCAT44(uStack_80._4_4_,0x3165f9b2);
                    /* WARNING: Could not recover jumptable at 0x00010000d8b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_10000d868 +
                               (int)(&switchD_100005882::switchdataD_1006cfa50)
                                    [(int)(uVar53 + (lVar16 == 0))]))();
          return ppuVar18;
        case (undefined **)0x10000db3f:
          return (undefined **)((ulong)(appuStack_228 + 1) & 0xffffffff);
        case (undefined **)0x10000dc90:
          ppuVar18 = (undefined **)FUN_100013d14(ppuVar47);
          return ppuVar18;
        case (undefined **)0x10000e405:
                    /* WARNING: Could not emulate address calculation at 0x00010000e41a */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_10000e331 +
                               (int)(&switchD_10000d217::switchdataD_1006d07b0)
                                    [(int)((UNRECOVERED_JUMPTABLE_07 == (undefined **)0x0) +
                                          0x1ee4c12e)]))
                               (ppuVar43,param_2,
                                &DAT_10000e331 +
                                (int)(&switchD_10000d217::switchdataD_1006d07b0)
                                     [(int)((UNRECOVERED_JUMPTABLE_07 == (undefined **)0x0) +
                                           0x1ee4c12e)],0x650a959f740c42c3,0x3165f9b2);
          return ppuVar18;
        case (undefined **)0x10000ea20:
          *(int *)UNRECOVERED_JUMPTABLE_07 = *(int *)UNRECOVERED_JUMPTABLE_07 + 1;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          *(int *)UNRECOVERED_JUMPTABLE_07 = *(int *)UNRECOVERED_JUMPTABLE_07 + 1;
          *(byte *)UNRECOVERED_JUMPTABLE_07 = (char)*(code *)UNRECOVERED_JUMPTABLE_07 + bVar10;
          pcVar14 = (char *)(((ulong)CONCAT22(uVar5,CONCAT11(bVar35 + bVar10,cVar8)) - 0x4b) +
                            (long)UNRECOVERED_JUMPTABLE * 4);
          *pcVar14 = *pcVar14 + (char)cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x10000eb56:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x10000ecf0:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x10000f0d1:
          *UNRECOVERED_JUMPTABLE_09 = (undefined *)UNRECOVERED_JUMPTABLE_10;
                    /* WARNING: Could not recover jumptable at 0x00010000f0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_10000f0ba +
                               *(int *)((long)&lRam000000003166a97d +
                                       (long)(int)(uVar1 + (UNRECOVERED_JUMPTABLE_09[6] ==
                                                           (undefined *)0x0)) * 4)))
                               (UNRECOVERED_JUMPTABLE_09[6],param_2,
                                &DAT_10000f0ba +
                                *(int *)((long)&lRam000000003166a97d +
                                        (long)(int)(uVar1 + (UNRECOVERED_JUMPTABLE_09[6] ==
                                                            (undefined *)0x0)) * 4));
          return ppuVar18;
        case (undefined **)0x10000f129:
          appuStack_228[1] = (undefined **)0x10000f161;
          uVar33 = (*(code *)(ppuVar34[uVar25 & 0x54057219] + -3))
                             (*(undefined4 *)(ppuVar34[(long)UNRECOVERED_JUMPTABLE_07] + -2),
                              *uStack_80,*(int *)((long)uStack_80 + 0xc) + -0x578a9194,&ppuStack_110
                              ,(long)&uStack_90 + 4);
                    /* WARNING: Could not recover jumptable at 0x00010000f1a2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_10000f0f9 +
                               *(int *)(&DAT_1006d03f0 +
                                       (long)(int)(((uVar33 ^ 0x6befdffe) +
                                                    (uVar33 * 2 & 0x49574c12) == 0x7befe001) +
                                                  uVar25) * 4)))();
          return ppuVar18;
        case (undefined **)0x10000f324:
          *(code *)((long)UNRECOVERED_JUMPTABLE + 99) =
               (code)((char)*(code *)((long)UNRECOVERED_JUMPTABLE + 99) + (char)cVar9);
        case (undefined **)0x10000f309:
          appuStack_228[1] = (undefined **)0x10000f30f;
          puVar21 = (undefined *)(*(code *)ppuStack_a8)();
          *ppuVar34 = puVar21;
                    /* WARNING: Could not recover jumptable at 0x00010000f333. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_10000f2d3 +
                               *(int *)(&DAT_1006d03f0 +
                                       (long)(int)(uVar53 + (puVar21 == (undefined *)0x0)) * 4)))();
          return ppuVar18;
        case (undefined **)0x10000f43b:
          return UNRECOVERED_JUMPTABLE_07;
        case (undefined **)0x10000f4f7:
          *(int *)((long)UNRECOVERED_JUMPTABLE_07 + 1) =
               *(int *)((long)UNRECOVERED_JUMPTABLE_07 + 1) + -1;
          return UNRECOVERED_JUMPTABLE_07;
        case (undefined **)0x10000f506:
                    /* WARNING: Could not recover jumptable at 0x00010000f508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_10)();
          return ppuVar18;
        case (undefined **)0x10000f628:
          return UNRECOVERED_JUMPTABLE_07;
        case (undefined **)0x10000fb41:
          uVar33 = uVar26 & 0x37efa97f | uVar6;
          *(uint *)UNRECOVERED_JUMPTABLE_10 = uVar46 + 4;
          lVar16 = (long)*(int *)((long)&lRam000000003166a97d +
                                 (long)(int)((UNRECOVERED_JUMPTABLE == (code *)&uRam6d94841a1ee4c12e
                                             ) + uVar12) * 4);
          UNRECOVERED_JUMPTABLE = (code *)(lVar16 + 0x10000fb64);
                    /* WARNING: Could not recover jumptable at 0x00010000fb8a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*UNRECOVERED_JUMPTABLE)
                               (uVar33,uVar46 + 4,UNRECOVERED_JUMPTABLE,lVar16,
                                ((uVar26 | uVar6) ^ 0xb7efa97f) + uVar33 * 2 + 0x7976fffe);
          return ppuVar18;
        case (undefined **)0x10000fbb8:
          UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE + 99);
          *UNRECOVERED_JUMPTABLE =
               (code)((byte)*UNRECOVERED_JUMPTABLE >> ((byte)cVar9 & 7) |
                     (char)*UNRECOVERED_JUMPTABLE << 8 - ((byte)cVar9 & 7));
          pcVar14 = (char *)(((ulong)ppuVar37 & 0xffffffff) - 0x73);
          *pcVar14 = *pcVar14 + (char)cVar9;
          appuStack_228[1] = (undefined **)&uStack_218;
                    /* WARNING: Could not recover jumptable at 0x00010000fbcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)((long)param_2 + (long)UNRECOVERED_JUMPTABLE_10))
                               (&iRam000000003165f9b3,
                                (code *)((long)param_2 + (long)UNRECOVERED_JUMPTABLE_10),0);
          return ppuVar18;
        case (undefined **)0x10000fd0c:
          uStack_50 = (undefined **)&iRam000000003165f9b3;
          bVar41 = uVar26 < 0xcb5f9060;
          if (uVar45 < uVar1 * 9 + 0xcb5f8fa3 == uVar26 < 0xcb5f9060) {
            bVar41 = uVar44 < uVar26;
          }
          pcStack_140 = (code *)((long)ppuVar54 + 0x3165f9b3);
                    /* WARNING: Could not recover jumptable at 0x00010000fd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_10000fccb +
                               (int)(&uRam6d94841a1ee4c12e)[(int)(bVar41 + uVar46)]))
                               (&DAT_10000fccb +
                                (int)(&uRam6d94841a1ee4c12e)[(int)(bVar41 + uVar46)]);
          return ppuVar18;
        case (undefined **)0x10000fdb0:
          uVar33 = uVar33 * 2 + 0x9310a902;
          uVar46 = (uVar33 ^ 0x777fbf7f) + (uVar33 & 0xf77fbf7e) * 2 + uVar46;
          bVar41 = uVar1 < uVar46;
          if (uVar1 < 0x2f96cbd5 != uVar46 < 0x2f96cbd5) {
            bVar41 = uVar46 < 0x2f96cbd5;
          }
                    /* WARNING: Could not recover jumptable at 0x00010000fe20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)((long)ppuVar43 +
                               (long)(int)(&uRam6d94841a1ee4c12e)
                                          [(int)(bVar41 + uVar12 + -0x18bbc7bd)]))();
          return ppuVar18;
        case (undefined **)0x10001020a:
          appuStack_228[1] = (undefined **)&UNK_100010227;
          (*pcStack_70)(ppuVar47[-0x78c2de9d403eed6],param_2,
                        uStack_250 ^ *(uint *)UNRECOVERED_JUMPTABLE);
          ppuVar47[-0x78c2de9d403eed6] = pcStack_158;
          *puStack_1e8 = (int)ppuStack_f8;
          iVar49 = *piStack_1a0;
          puVar21 = ppuVar47[-0x78c2de9d403eed6];
          puVar21[iVar49 + 0xf56bfc98] = 0;
          puVar21[iVar49 + 0xf56bfc99] = 0;
          puVar21[iVar49 + 0xf56bfc9a] = 0;
          puVar21[iVar49 + 0xf56bfc9b] = 1;
          *piStack_1a0 = *piStack_1a0 + 4;
                    /* WARNING: Could not recover jumptable at 0x0001000102d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)((long)iRam6d94841a1ee4c4ae + 0x1000102aa))(ppuStack_58);
          return ppuVar18;
        case (undefined **)0x1000103c0:
                    /* WARNING: Could not recover jumptable at 0x0001000103e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)((long)(int)(&uRam6d94841a1ee4c12e)
                                           [(int)(uVar45 + (uVar26 < ((bVar55 - 7 | 1) ^ 0x14)))] +
                               0x1000103c0))();
          return ppuVar18;
        case (undefined **)0x1000103dd:
          (&stack0xfffffffffffffffd)[(long)UNRECOVERED_JUMPTABLE * 4] =
               (&stack0xfffffffffffffffd)[(long)UNRECOVERED_JUMPTABLE * 4] + (char)cVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x100010427:
          *(code *)((long)UNRECOVERED_JUMPTABLE_07 + -0x77) =
               (code)((byte)*(code *)((long)UNRECOVERED_JUMPTABLE_07 + -0x77) | 3);
          appuStack_228[1] = ppuVar37;
                    /* WARNING: Could not recover jumptable at 0x00010001044e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_1000103ee +
                               *(int *)((long)UNRECOVERED_JUMPTABLE_09 +
                                       (long)(int)((UNRECOVERED_JUMPTABLE_07 == (undefined **)0x0) +
                                                  0x1ee4c12e) * 4)))
                               (ppuVar43,param_2,&uRam6d94841a1ee4c12e,
                                &DAT_1000103ee +
                                *(int *)((long)UNRECOVERED_JUMPTABLE_09 +
                                        (long)(int)((UNRECOVERED_JUMPTABLE_07 == (undefined **)0x0)
                                                   + 0x1ee4c12e) * 4));
          return ppuVar18;
        case (undefined **)0x10001049a:
          if ((undefined **)UNRECOVERED_JUMPTABLE == (undefined **)0x1) {
            in(0x6b);
                    /* WARNING: Could not recover jumptable at 0x0001000104e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            ppuVar18 = (undefined **)
                       (*(code *)(&UNK_1000104aa +
                                 (int)(&switchD_100005882::switchdataD_1006cfa50)
                                      [(int)(uVar25 ^ 0xc)]))();
            return ppuVar18;
          }
          out(*(uint *)param_2,uVar30);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x100010576:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x100010654:
          *(code *)((long)UNRECOVERED_JUMPTABLE + (ulong)(uVar12 + 0xf56bfc9a)) = (code)0x0;
          *(code *)((long)UNRECOVERED_JUMPTABLE + (ulong)(uVar12 + uVar33 + 0xf56bfbe4)) = (code)0x1
          ;
          *(int *)UNRECOVERED_JUMPTABLE_09 = *(int *)UNRECOVERED_JUMPTABLE_09 + 4;
          ppuStack_1c8 = UNRECOVERED_JUMPTABLE_09;
                    /* WARNING: Could not recover jumptable at 0x0001000106a3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)((long)(int)(&uRam6d94841a1ee4c12e)[(int)(uVar33 + 1)] + 0x10001067c)
                     )();
          return ppuVar18;
        case (undefined **)0x100010950:
                    /* WARNING: Could not recover jumptable at 0x000100010972. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)((long)param_5 +
                               (long)(int)(&uRam6d94841a1ee4c12e)
                                          [(int)((uVar32 & 0xff | 6) + uVar1)]))(0);
          return ppuVar18;
        case (undefined **)0x1000109f4:
          pcStack_140 = (code *)0x0;
          ppuStack_d8 = (undefined **)0x0;
          ppuStack_e8 = (undefined **)0x0;
          uStack_e0 = (undefined **)0x0;
          ppuStack_58 = (undefined **)0x742c45ff88570c30;
          ppuStack_98 = (undefined **)0x742c45ff88570c30;
                    /* WARNING: Could not recover jumptable at 0x000100010a41. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_1000109c3 + (int)(&uRam6d94841a1ee4c12e)[(int)uVar33]))
                               (ppuVar43,param_2,
                                &DAT_1000109c3 + (int)(&uRam6d94841a1ee4c12e)[(int)uVar33],0);
          return ppuVar18;
        case (undefined **)0x100010a7f:
          *piStack_1a0 = 0x3165f9b3;
          pcStack_70 = (code *)CONCAT44(pcStack_70._4_4_,0x3166a97d);
                    /* WARNING: Could not recover jumptable at 0x000100010abd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&LAB_100010a9a + (int)*(uint *)((long)ppuVar43 + 0x7b9304bc)))();
          return ppuVar18;
        case (undefined **)0x100010bbd:
          pcVar14 = (char *)(((ulong)ppuVar37 & 0xffffffff) - 0x73);
          *pcVar14 = *pcVar14 + (char)cVar9;
                    /* WARNING: Could not recover jumptable at 0x000100010bcf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)((long)UNRECOVERED_JUMPTABLE + (ulong)(uVar36 | 0xffffffe2)))();
          return ppuVar18;
        case (undefined **)0x100010c67:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x100010cf9:
          bVar41 = uVar33 < uVar1;
          if (bVar55 != uVar1 < 0x733c3e52) {
            bVar41 = uVar1 < 0x733c3e52;
          }
                    /* WARNING: Could not recover jumptable at 0x000100010d36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)((long)param_2 +
                               (long)(int)(&switchD_100013a5e::switchdataD_1006d0050)
                                          [(int)(uVar12 + 0xf91fe1e + (uint)bVar41)]))();
          return ppuVar18;
        case (undefined **)0x100010ddb:
          *(code *)((long)UNRECOVERED_JUMPTABLE_07 + -0x7d) = cVar9;
          *(uint *)((long)UNRECOVERED_JUMPTABLE + -0x7d) =
               *(int *)((long)UNRECOVERED_JUMPTABLE + -0x7d) + uVar12;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x100010f1e:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x1000110e0:
          uVar33 = uVar25 * 2 + 0xdf071318;
          uVar33 = uVar12 + (uVar33 ^ 0xd37df7ff) + (uVar33 & 0xd37df7fe) * 2 + 0xa0446557;
          bVar41 = uStack_250 < uVar33;
          if (uVar46 < uVar1 != uVar33 < 0x73c25e02) {
            bVar41 = uVar33 < 0x73c25e02;
          }
                    /* WARNING: Could not recover jumptable at 0x00010001114c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)((long)param_2 +
                               (long)*(int *)((long)&lRam000000003166a97d +
                                             (long)(int)(bVar41 + uVar12) * 4)))();
          return ppuVar18;
        case (undefined **)0x1000112dd:
          *(ulong *)((long)ppuVar34 + (long)ppuVar54) = (ulong)pcStack_158 & 0xffffffff;
          *(undefined4 *)ppuStack_198 = 0x1ee4c12e;
          uVar33 = *(uint *)ppuStack_170;
          uVar31 = uVar53 * 2 ^ 0x15e;
          lVar16 = *(long *)((long)UNRECOVERED_JUMPTABLE + (long)ppuVar54);
          *(undefined1 *)(lVar16 + (ulong)(uVar33 + 0xa8756e6c)) = 0x77;
          *(undefined1 *)(lVar16 + (ulong)(uVar33 + 0xa8756e6d)) = 0x15;
          *(undefined1 *)(lVar16 + (ulong)(uVar33 + uVar31 + 0xa8756da2)) = 0x48;
          *(undefined1 *)(lVar16 + (ulong)(uVar33 + 0xa8756e6f)) = 0x8c;
          *(uint *)ppuStack_170 = *(uint *)ppuStack_170 + 4;
          ppuStack_b0 = (undefined **)UNRECOVERED_JUMPTABLE;
                    /* WARNING: Could not recover jumptable at 0x000100011382. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)((long)*(int *)(&DAT_1006d03f0 + (long)(int)(uVar31 + 1) * 4) +
                               0x10001135e))();
          return ppuVar18;
        case (undefined **)0x100011393:
                    /* WARNING: Could not recover jumptable at 0x0001000113b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_100011385 +
                               (int)(&uRam6d94841a1ee4c12e)
                                    [(int)(uVar1 + (UNRECOVERED_JUMPTABLE_09[8] == (undefined *)0x0)
                                          )]))
                               (UNRECOVERED_JUMPTABLE_09[8],param_2,
                                &DAT_100011385 +
                                (int)(&uRam6d94841a1ee4c12e)
                                     [(int)(uVar1 + (UNRECOVERED_JUMPTABLE_09[8] == (undefined *)0x0
                                                    ))]);
          return ppuVar18;
        case (undefined **)0x10001142a:
          *(undefined4 *)(ppuVar34 + 1) = 0x107c8674;
                    /* WARNING: Could not recover jumptable at 0x000100011465. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_10001141e +
                               *(int *)((long)param_5 +
                                       (long)(int)(uVar53 + ((int *)(ulong)(uVar25 + 0xf7c) <
                                                            piStack_118)) * 4)))
                               (uVar26 & 0x15d36d8d,ppuStack_120,UNRECOVERED_JUMPTABLE_10,
                                &DAT_10001141e +
                                *(int *)((long)param_5 +
                                        (long)(int)(uVar53 + ((int *)(ulong)(uVar25 + 0xf7c) <
                                                             piStack_118)) * 4));
          return ppuVar18;
        case (undefined **)0x100011539:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x10001153e:
                    /* WARNING: Could not recover jumptable at 0x000100011544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)(*(code *)UNRECOVERED_JUMPTABLE_10)();
          return ppuVar18;
        case (undefined **)0x100011569:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x100011677:
switchD_10000a6ae_caseD_11677:
          *(int *)((long)UNRECOVERED_JUMPTABLE + 0xd083d8) =
               *(int *)((long)UNRECOVERED_JUMPTABLE + 0xd083d8) + (int)UNRECOVERED_JUMPTABLE;
          *(undefined4 *)(ppuVar51 + 1) = 0x5daafa27;
          ppuStack_d0 = (undefined **)(ppuVar54[(int)(uVar33 | 10)] + -0xb);
          puStack_138 = ppuVar54[(int)(uVar33 + 0xc)] + -1;
          ppuStack_e8 = ppuVar43;
          uStack_e0 = ppuVar43;
          ppuStack_d8 = ppuVar43;
          ppuStack_98 = param_2;
          uStack_88 = ppuVar43;
          uStack_80 = ppuVar51;
          ppuStack_58 = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001000116f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(FUN_10001164e + (int)puVar52[(int)UNRECOVERED_JUMPTABLE_07]))();
          return ppuVar18;
        case (undefined **)0x1000117a5:
                    /* WARNING: Could not recover jumptable at 0x0001000117af. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)(*(code *)CONCAT71(uVar24,DAT_807d8b48985d8b44))();
          return ppuVar18;
        case (undefined **)0x100011827:
          ppuStack_b0 = (undefined **)&uRam6d94841a1ee4c12e;
          uStack_e0 = ppuVar34;
                    /* WARNING: Could not recover jumptable at 0x00010001186d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&LAB_1000115f8_2 +
                               (int)*(uint *)((long)ppuVar54 +
                                             (long)(int)(uVar12 + 0xf91fe70 + (uint)bVar56) * 4)))
                               (ppuVar43,ppuStack_78,UNRECOVERED_JUMPTABLE_10,ppuVar34,ppuVar47,
                                ppuStack_a8);
          return ppuVar18;
        case (undefined **)0x1000118f4:
          cVar8 = uStack_80._5_1_ + '\x01';
          uStack_80._0_6_ = CONCAT15(cVar8,(undefined5)uStack_80);
          out(0x65,(int)CONCAT71(uVar24,*(code *)((long)UNRECOVERED_JUMPTABLE + -0x7f)));
          _DAT_03443d1c = 0x100011929;
          uVar33 = (**(code **)((long)UNRECOVERED_JUMPTABLE + 0x18b354ff8))
                             (*(undefined4 *)
                               (*(undefined **)
                                 ((long)UNRECOVERED_JUMPTABLE +
                                 (long)(int)((uint)CONCAT71(uVar24,*(code *)((long)
                                                  UNRECOVERED_JUMPTABLE + -0x7f)) & 0xffffffa3) * 8)
                               + -2),puStack_138,UNRECOVERED_JUMPTABLE_09);
                    /* WARNING: Could not emulate address calculation at 0x00010001195a */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_1000118e2 +
                               *(int *)(&DAT_1006d03f0 +
                                       (long)(int)(((uVar33 << ((char)ppuVar54 - 0x24U & 0x1f) &
                                                    0x62ae0686) + (uVar33 ^ 0xf7f7b9fd) ==
                                                   -0x8084603) + 0x3166a97d) * 4)))();
          return ppuVar18;
        case (undefined **)0x1000119e6:
          bVar41 = uVar1 < 0x3165f9b3;
          if (SUB81(param_6,0) != 0x3165f9b3 < uVar46) {
            bVar41 = 0x3165f9b3 < uVar46;
          }
                    /* WARNING: Could not recover jumptable at 0x000100011a1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)((long)ppuVar43 +
                               (long)(int)(&switchD_100013a5e::switchdataD_1006d0050)
                                          [(int)(bVar41 + uVar12)]))();
          return ppuVar18;
        case (undefined **)0x100011b78:
          bVar41 = false;
          UNRECOVERED_JUMPTABLE = (code *)ppuVar43;
code_r0x000100011b7a:
          uVar33 = (uint)(uVar45 < uStack_250);
          if (bVar41 != SUB81(param_6,0)) {
            uVar33 = (uint)param_6;
          }
                    /* WARNING: Could not recover jumptable at 0x000100011bb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_100011b2f +
                               *(int *)((long)UNRECOVERED_JUMPTABLE_09 +
                                       (long)(int)(uVar33 + uVar1) * 4)))
                               (UNRECOVERED_JUMPTABLE,param_2,
                                &DAT_100011b2f +
                                *(int *)((long)UNRECOVERED_JUMPTABLE_09 +
                                        (long)(int)(uVar33 + uVar1) * 4));
          return ppuVar18;
        case (undefined **)0x100011bb8:
          if ((long)UNRECOVERED_JUMPTABLE < -0x10000a624) {
                    /* WARNING: Could not recover jumptable at 0x000100011bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            ppuVar18 = (undefined **)
                       (*(code *)(&DAT_100011bb6 +
                                 (&iRam000000003165f9b3)
                                 [(int)((puVar21 == (undefined *)0x4469798c814565b9) + uVar1)]))
                                 (ppuVar43,param_2,
                                  &DAT_100011bb6 +
                                  (&iRam000000003165f9b3)
                                  [(int)((puVar21 == (undefined *)0x4469798c814565b9) + uVar1)]);
            return ppuVar18;
          }
          if (!bVar57 && -0x10000a625 < (long)UNRECOVERED_JUMPTABLE) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          param_6 = (undefined **)(ulong)(uStack_250 < 0xfc309c78);
          bVar41 = uVar45 < 0xfc309c78;
          appuStack_228[1] = (undefined **)UNRECOVERED_JUMPTABLE;
          goto code_r0x000100011b7a;
        case (undefined **)0x100011bc3:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x100011bfa:
          *(int *)UNRECOVERED_JUMPTABLE = *(int *)UNRECOVERED_JUMPTABLE + 1;
          appuStack_228[1] = (undefined **)0x100011c1a;
          lVar16 = (*(code *)uStack_80)
                             (uVar25 + uStack_250 + 4 + ((uVar25 + 0x38 | 0x90) ^ 0x203800d6));
          ppuStack_d8 = (undefined **)
                        (long)(int)(&switchD_100013a5e::switchdataD_1006d0050)
                                   [(int)(uVar25 + (lVar16 == 0))];
          ppuStack_68 = (undefined **)&lRam000000003166a97d;
          piStack_1a0 = (int *)0x0;
          uStack_90 = (undefined **)0x0;
          ppuStack_c8 = ppuStack_d8;
          ppuStack_c0 = ppuStack_d8;
                    /* WARNING: Could not recover jumptable at 0x000100011c73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)(*(code *)(&DAT_100011bf4 + (long)ppuStack_d8))();
          return ppuVar18;
        case (undefined **)0x100011c5c:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x100011e51:
          appuStack_228[1] = (undefined **)0x100011e59;
          func_0xffe69f9a();
          out(*(uint *)param_2,extraout_DX);
          puStack_138 = (undefined *)0x0;
          uStack_88 = (undefined **)((ulong)uStack_88 & 0xffffffff);
          ppuStack_58 = (undefined **)
                        ((&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar25 ^ 0x72)] + -3);
          appuStack_228[1] = (undefined **)0x100011eb4;
          uVar33 = (*(code *)ppuStack_58)
                             (*(undefined4 *)
                               ((&PTR__bootstrap_look_up_10082e9f0)[(int)(uVar25 & 0xbb73221c)] + -2
                               ),*param_6,*(int *)((long)param_6 + 0xc) + -0x5026187e,&puStack_138,
                              (long)&uStack_88 + 4);
                    /* WARNING: Could not recover jumptable at 0x000100011ef3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_100011e3e +
                               *(int *)((long)&lRam000000003166a97d +
                                       (long)(int)(((uVar33 ^ 0xfbefd777) +
                                                    (uVar33 * 2 & 0x16c46f8d) == 0xbefd77a) + uVar25
                                                  ) * 4)))();
          return ppuVar18;
        case (undefined **)0x10001201d:
          if (bVar57 || (long)UNRECOVERED_JUMPTABLE < -0x10000a624) {
            out(uVar30,uVar12);
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          uVar33 = (uint)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_10 +
                                        (ulong)((uVar46 + (uint)bVar55 * 2 ^ 0x8135ba64) + uVar12))
                   | (uint)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_10 +
                                          (ulong)(uVar12 + 0x8135ba28)) << 8 |
                     (uint)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_10 +
                                          (ulong)(uVar12 + 0x8135ba27)) << 0x10 |
                     (uint)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE_10 +
                                          (ulong)(uVar12 + 0x8135ba26)) << 0x1f;
          iVar49 = (uVar33 ^ 0xb7efa97f) + (uVar33 & 0x37efa97f) * 2 + 0x7976fffe;
          **(int **)(((ulong)param_2 & 0xffffffff) - 0x50) = uVar12 + 8;
          *(int *)(((ulong)param_2 & 0xffffffff) - 0x94) = iVar49;
          UNRECOVERED_JUMPTABLE_07 =
               (undefined **)
               (long)*(int *)((long)UNRECOVERED_JUMPTABLE_09 +
                             (long)(int)((iVar49 == 0x3166a97d) + uVar26) * 4);
          goto code_r0x00010001204d;
        case (undefined **)0x10001204b:
          UNRECOVERED_JUMPTABLE_07 = (undefined **)CONCAT71(uVar24,bVar10 + 0x86);
code_r0x00010001204d:
                    /* WARNING: Could not recover jumptable at 0x000100012057. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)((long)UNRECOVERED_JUMPTABLE_07 + 0x100011fbe))
                               (ppuVar43,(code *)((long)UNRECOVERED_JUMPTABLE_07 + 0x100011fbe));
          return ppuVar18;
        case (undefined **)0x10001204e:
          goto code_r0x00010001204d;
        case (undefined **)0x10001233a:
          *(uint *)((long)UNRECOVERED_JUMPTABLE_07 + -0x77) =
               *(int *)((long)UNRECOVERED_JUMPTABLE_07 + -0x77) + uVar1;
          uVar40 = (ulong)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE + 0x6d94841b1ee56759) |
                   (ulong)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE + 0x6d94841b1ee56758) << 8 |
                   (ulong)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE + 0x6d94841b1ee56757) << 0x10
                   | (ulong)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE + 0x6d94841b1ee56756) <<
                     0x18 | (ulong)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE + 0x6d94841b1ee56755)
                            << 0x20 | (ulong)(byte)*(code *)((long)UNRECOVERED_JUMPTABLE +
                                                            0x6d94841b1ee56754) << 0x28 | 0x3165f9b3
                            | 0x1006cfa50 << ((bVar41 ^ 0x61U) & 0x3f);
          uVar22 = (ulong)((int)_DAT_ffffff30 + 0xba4c2eb3);
          param_5[uVar22 * 4] =
               (undefined *)
               ((uVar40 + 0xfebfb2c2307463a) - (uVar40 * 2 & 0x1fd7f658460e8c74) ^ 0xfebfb2c2307463a
               );
          iVar49 = *(int *)param_6;
          *(int *)param_6 = iVar49 + 8;
          uVar33 = (uint)*(byte *)(lRam000000003166a97d + (ulong)(iVar49 + 0x8135ba2d)) |
                   (uint)*(byte *)(lRam000000003166a97d + (ulong)(iVar49 + 0x8135ba2c)) << 8 |
                   (uint)*(byte *)(lRam000000003166a97d + (ulong)(iVar49 + 0x8135ba2b)) << 0x10 |
                   (uint)*(byte *)(lRam000000003166a97d + (ulong)(iVar49 + 0x8135ba2a)) << 0x18;
          *(uint *)(param_5 + uVar22 * 4 + 1) =
               (uVar33 ^ 0xb7efa97f) + (uVar33 & 0x37efa97f) * 2 + 0x48105681;
          iVar49 = *(int *)param_6;
          *(int *)param_6 = iVar49 + 4;
          uVar33 = (uint)*(byte *)(lRam000000003166a97d + (ulong)(iVar49 + 0x8135ba29)) |
                   (uint)*(byte *)(lRam000000003166a97d + (ulong)(iVar49 + 0x8135ba28)) << 8 |
                   (uint)*(byte *)(lRam000000003166a97d + (ulong)(iVar49 + 0x8135ba27)) << 0x10 |
                   (uint)*(byte *)(lRam000000003166a97d + (ulong)(iVar49 + 0x8135ba26)) << 0x18;
          *(uint *)((long)param_5 + uVar22 * 0x20 + 0xc) =
               (uVar33 ^ 0xb7efa97f) + (uVar33 & 0x37efa97f) * 2 + 0x48105681;
          iVar49 = *(int *)param_6;
          *(int *)param_6 = iVar49 + 4;
          iVar13 = *(int *)((long)param_5 + uVar22 * 0x20 + 0xc);
          iVar49 = iVar49 + *(int *)(param_5 + uVar22 * 4 + 1);
          bVar55 = 0xd19f6332 < (uint)(iVar13 + -0x7eca45da + iVar49);
          bVar41 = *(int *)UNRECOVERED_JUMPTABLE_10 + 0x6af5fa6U < iVar13 + iVar49 + 0xaf9656f3U;
          if (*(int *)UNRECOVERED_JUMPTABLE_10 + 0x6af5fa6U < 0x2e609ccd != bVar55) {
            bVar41 = bVar55;
          }
                    /* WARNING: Could not recover jumptable at 0x000100012529. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_1000122e5 +
                               (int)(&switchD_100013a5e::switchdataD_1006d0050)
                                    [(int)(bVar41 + uVar25)]))();
          return ppuVar18;
        case (undefined **)0x1000126cf:
          appuStack_228[1] = (undefined **)0x1000126e0;
          (*(code *)(*(undefined **)((long)UNRECOVERED_JUMPTABLE + (long)(int)(uVar53 ^ 0x1d) * 8) +
                    -2))();
          uStack_b8 = (undefined **)CONCAT44(0x1ee4c12e,(undefined4)uStack_b8);
          uVar33 = uVar25 - 0x27 | 0x29;
          ppuStack_68 = ppuVar51;
          if ((uint)ppuStack_58 == (uVar33 ^ 0x3166a942)) {
            ppuStack_68 = ppuStack_98;
          }
                    /* WARNING: Could not recover jumptable at 0x000100012754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&LAB_10000bc87 +
                               (int)(&switchD_100013a5e::switchdataD_1006d0050)
                                    [(int)(((uint)ppuStack_58 == ((uVar33 ^ 10) + 0xe ^ 0x3166a93e))
                                          + uVar33)]))(ppuStack_60);
          return ppuVar18;
        case (undefined **)0x100012964:
          *(ulong *)((long)ppuVar34 + (long)ppuVar54) = (ulong)uStack_148;
          *puStack_188 = 0x1ee4c12e;
          iVar49 = *(int *)ppuStack_78;
          ppuVar34 = ppuStack_78;
LAB_100012984:
          lVar16 = *(long *)((long)UNRECOVERED_JUMPTABLE + (long)ppuVar54);
          lVar29 = (long)ppuStack_1a8 +
                   (-0x4bf06665ce8f161a -
                   ((long)ppuStack_1a8 << (((char)uVar53 + 8U ^ 0x88) & 0x3f) & 0x681f333462e1d3ccU)
                   );
          lVar23 = ((ulong)(iVar49 + 0xa8756e6cU) ^ 0x7effbe781dfebded) +
                   (ulong)(iVar49 + 0xa8756e6cU & 0x1dfebded) * 2 + -0x7effbe781dfebded;
          *(byte *)(lVar16 + lVar23) = (byte)((ulong)lVar29 >> 0x38) ^ 0xb4;
          *(byte *)(lVar16 + 1 + lVar23) = (byte)((ulong)lVar29 >> 0x30) ^ 0xf;
          *(byte *)(lVar16 + 2 + lVar23) = (byte)((ulong)lVar29 >> 0x28) ^ 0x99;
          *(byte *)(lVar16 + 3 + lVar23) = (byte)((ulong)lVar29 >> 0x20) ^ 0x9a;
          *(byte *)(lVar16 + 4 + lVar23) = (byte)((ulong)lVar29 >> 0x18) ^ 0x31;
          *(byte *)(lVar16 + 5 + lVar23) = (byte)((ulong)lVar29 >> 0x10) ^ 0x70;
          *(byte *)(lVar16 + 6 + lVar23) = (byte)((ulong)lVar29 >> 8) ^ 0xe9;
          *(byte *)(lVar16 + 7 + lVar23) = (byte)lVar29 ^ 0xe6;
          *(int *)ppuVar34 = *(int *)ppuVar34 + 8;
          ppuStack_b0 = (undefined **)UNRECOVERED_JUMPTABLE;
          ppuStack_78 = ppuVar34;
                    /* WARNING: Could not recover jumptable at 0x000100012a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)((long)(int)(&uRam6d94841a1ee4c12e)[(int)(uVar53 + 9)] + 0x100012a6d)
                     )();
          return ppuVar18;
        case (undefined **)0x100012aa4:
          *(int *)((long)UNRECOVERED_JUMPTABLE + -0x41) =
               *(int *)((long)UNRECOVERED_JUMPTABLE + -0x41) + -1;
          iVar49 = -0x79e7137b;
          _DAT_8618ec35 = _DAT_8618ec35 - uVar33;
          goto LAB_100012984;
        case (undefined **)0x100012b4e:
          *(uint *)((long)uStack_b8 + -0x742c45ff88570c28) =
               (uVar1 ^ 0x307f77f6) + (uVar12 & 0x307f77f6) * 2 + -0x20030182;
          *(undefined4 *)((long)uStack_b8 + -0x742c45ff88570c24) = 0x38d7f524;
          pcStack_70 = (code *)CONCAT44(pcStack_70._4_4_,0x3166a97d);
          ppuVar18 = (undefined **)FUN_100013f83();
          return ppuVar18;
        case (undefined **)0x100012d4e:
          uVar33 = (uVar25 + 0x5aa35602 & 0xa55ca9ff) + 0x41d30603;
          uVar33 = (uVar33 ^ 0xb3fe7675) + (uVar33 & 0x33fe7674) * 2 + 0xa4f48910;
          bVar41 = uVar1 + 0x79dc82c4 < uVar33;
          if ((uVar25 ^ 0xa70d0003) < uVar1 + uStack_250 + 0xef83898c != uVar33 < 0x58f2ff85) {
            bVar41 = uVar33 < 0x58f2ff85;
          }
                    /* WARNING: Could not recover jumptable at 0x000100012dea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_100010545 +
                               (int)*(uint *)((long)ppuVar43 + (long)(int)(bVar41 + uVar25) * 4)))()
          ;
          return ppuVar18;
        case (undefined **)0x100012f59:
          uRam6d94841a1ee4c12e = SUB84(ppuStack_c0,0);
          uVar53 = uVar53 ^ 0x9a;
          UNRECOVERED_JUMPTABLE_07 = *(undefined ***)((long)ppuStack_78 + (long)ppuVar34);
          uVar33 = uVar53 - 0x11 & (uint)ppuStack_130;
          puVar21 = &DAT_100013441;
          goto switchD_10000e2c3_caseD_c5ea;
        case (undefined **)0x100013121:
          lVar16 = (long)*(int *)((long)param_5 +
                                 (long)(int)((uVar12 == uVar25 + 0x5aed971c) + uVar33) * 4);
                    /* WARNING: Could not recover jumptable at 0x000100013146. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          ppuVar18 = (undefined **)
                     (*(code *)(&DAT_100013116 + lVar16))
                               (ppuVar43,&DAT_100013116 + lVar16,lVar16,uVar26 + 0x35);
          return ppuVar18;
        case (undefined **)0x1000131b7:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case (undefined **)0x100013490:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        param_6 = (undefined **)0xe2846d99;
        ppuVar43 = (undefined **)(ulong)((uint)ppuVar54 + 0x4077ba72 & 0xbf884597);
        param_5 = (undefined **)(ulong)((uint)ppuVar54 ^ 0xe6);
code_r0x00010000ac94:
        lVar16 = (long)*(int *)((long)puVar50 +
                               (long)(int)((int)ppuVar54 +
                                          (uint)(UNRECOVERED_JUMPTABLE_07 < ppuVar48)) * 4);
        UNRECOVERED_JUMPTABLE = (code *)(lVar16 + 0x10000ac7d);
                    /* WARNING: Could not recover jumptable at 0x00010000acc5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        ppuVar18 = (undefined **)
                   (*UNRECOVERED_JUMPTABLE)
                             (ppuVar43,(((int)ppuVar39 + (int)param_6) -
                                       ((uint)((long)ppuVar34 << (((byte)ppuVar43 ^ 0x16) & 0x3f)) &
                                       (int)param_5 + (int)param_6)) + 0xebdc9a9,
                              UNRECOVERED_JUMPTABLE_10,lVar16,param_5,UNRECOVERED_JUMPTABLE);
        return ppuVar18;
      case true:
        iVar49 = 0x3165f9b2;
        switch(ppuStack_58 == (undefined **)0x0) {
        case false:
          appuStack_228[1] = (undefined **)0x100003737;
          (*(code *)PTR__free_10082eaf0)();
          ppuVar18 = (undefined **)switchD_100005882::caseD_1();
          return ppuVar18;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_10082cb58 == local_38) {
    return (undefined **)(ulong)(iVar49 + 0xce995683);
  }
                    /* WARNING: Subroutine does not return */
  appuStack_228[1] = (undefined **)&UNK_100009867;
  ___stack_chk_fail();
switchD_10000a6ae_caseD_ca43:
  do {
  } while( true );
switchD_10000a6ae_caseD_a654:
  UNRECOVERED_JUMPTABLE = (code *)(ulong)((int)UNRECOVERED_JUMPTABLE_07 + 0x7e29f96c + uVar46);
  goto switchD_10000a6ae_caseD_a65b;
switchD_10000a6ae_caseD_a695:
  pppuVar2 = appuStack_228 + 1;
  cVar8 = '\x15';
  ppuVar19 = ppuVar37;
  do {
    ppuVar19 = ppuVar19 + -1;
    pppuVar2 = pppuVar2 + -1;
    *pppuVar2 = (undefined **)*ppuVar19;
    cVar8 = cVar8 + -1;
    appuStack_228[1] = ppuVar37;
  } while ('\0' < cVar8);
  goto code_r0x00010000a697;
switchD_10000a6ae_caseD_9d21:
                    /* WARNING: Could not recover jumptable at 0x000100009d5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  ppuVar18 = (undefined **)
             (*(code *)(&caseD_9d21_4 +
                       (int)(&switchD_100005882::switchdataD_1006cfa50)
                            [(int)((((uVar26 ^ 0x8b99e5b9) + 0x3166a8d0 ^ uVar25 & 0x74661aeb) ==
                                   0x3165f9b3) + uVar33)]))
                       (ppuVar43,param_2,
                        &caseD_9d21_4 +
                        (int)(&switchD_100005882::switchdataD_1006cfa50)
                             [(int)((((uVar26 ^ 0x8b99e5b9) + 0x3166a8d0 ^ uVar25 & 0x74661aeb) ==
                                    0x3165f9b3) + uVar33)]);
  return ppuVar18;
}

